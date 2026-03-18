/*
 * XREFs of VmpMergeMemoryRanges @ 0x14059EE70
 * Callers:
 *     VmMergeMemoryRanges @ 0x14092BA70 (VmMergeMemoryRanges.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x14028B370 (RtlRbRemoveNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     VmpProcessContextLockExclusive @ 0x14059F48C (VmpProcessContextLockExclusive.c)
 *     VmpVaRangeNumberOfGpaRanges @ 0x1405A0100 (VmpVaRangeNumberOfGpaRanges.c)
 *     VmpFreeMemoryRanges @ 0x14092C098 (VmpFreeMemoryRanges.c)
 */

__int64 __fastcall VmpMergeMemoryRanges(PEX_SPIN_LOCK SpinLock, unsigned __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  unsigned int v7; // ebx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v14; // eax
  bool v15; // zf
  _QWORD *v17; // rcx
  _QWORD *i; // rax
  __int64 j; // rdi
  __int64 v20; // rax
  __int64 v21; // r8
  _QWORD *v22; // rsi
  _QWORD *v23; // r15
  _QWORD *v24; // r14
  _QWORD *v25; // r8
  _QWORD *v26; // rcx
  unsigned __int64 k; // rdx
  __int64 v28; // rax
  __int64 v29; // [rsp+70h] [rbp+18h]

  v3 = 0LL;
  v29 = VmpProcessContextLockExclusive(SpinLock);
  if ( *((_QWORD *)SpinLock + 9) != a3 )
  {
    v7 = -1073740007;
    goto LABEL_17;
  }
  v8 = *((_QWORD *)SpinLock + 3);
  if ( (SpinLock[8] & 1) != 0 && v8 )
    v8 ^= (unsigned __int64)(SpinLock + 6);
  while ( 1 )
  {
    if ( !v8 )
    {
      v7 = -1073741172;
      goto LABEL_17;
    }
    v9 = *(_QWORD *)(v8 + 32);
    if ( a2 <= v9 )
      break;
    v10 = *(_QWORD *)(v8 + 8);
LABEL_11:
    if ( (SpinLock[8] & 1) != 0 && v10 )
      v8 ^= v10;
    else
      v8 = v10;
  }
  if ( a2 < *(_QWORD *)(v8 + 24) )
  {
    v10 = *(_QWORD *)v8;
    goto LABEL_11;
  }
  if ( v9 == a2 )
  {
    v3 = *(_QWORD **)(v8 + 8);
    v17 = (_QWORD *)v8;
    if ( v3 )
    {
      for ( i = (_QWORD *)*v3; i; i = (_QWORD *)*i )
        v3 = i;
    }
    else
    {
      for ( j = *(_QWORD *)(v8 + 16); ; j = v3[2] )
      {
        v3 = (_QWORD *)(j & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v3 || (_QWORD *)*v3 == v17 )
          break;
        v17 = v3;
      }
    }
    if ( v3 && v3[3] == a2 + 1 )
    {
      VmpVaRangeNumberOfGpaRanges(v8);
      v20 = VmpVaRangeNumberOfGpaRanges(v3);
      if ( v21 == v20 )
      {
        v22 = (_QWORD *)v3[5];
        v23 = (_QWORD *)(v8 + 40);
        v24 = *(_QWORD **)(v8 + 40);
        v25 = v22;
        v26 = v24;
        for ( k = v24[7]; k + 1 >= k && k + 1 == v25[6]; k = v26[7] )
        {
          v26 = (_QWORD *)*v26;
          v25 = (_QWORD *)*v25;
          if ( v26 == v23 )
          {
            do
            {
              RtlRbRemoveNode((unsigned __int64 *)SpinLock + 1, (unsigned __int64)(v22 + 3));
              v22[5] = -1LL;
              v24[7] = v22[7];
              v24 = (_QWORD *)*v24;
              v22 = (_QWORD *)*v22;
            }
            while ( v24 != v23 );
            RtlRbRemoveNode((unsigned __int64 *)SpinLock + 3, (unsigned __int64)v3);
            v28 = v3[4];
            v3[2] = -1LL;
            *(_QWORD *)(v8 + 32) = v28;
            ++*((_QWORD *)SpinLock + 5);
            v7 = 0;
            goto LABEL_17;
          }
        }
      }
      v7 = -1073741182;
    }
    else
    {
      v7 = -1073741503;
    }
    v3 = 0LL;
  }
  else
  {
    v7 = -1073741503;
  }
LABEL_17:
  if ( v29 != -1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v29 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v29 + 1));
          v15 = (v14 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8((unsigned __int8)v29);
  }
  if ( v3 )
    VmpFreeMemoryRanges(v3);
  return v7;
}
