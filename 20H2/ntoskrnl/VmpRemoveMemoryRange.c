/*
 * XREFs of VmpRemoveMemoryRange @ 0x1405A3424
 * Callers:
 *     VmDeleteMemoryRange @ 0x1409317D0 (VmDeleteMemoryRange.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140216290 (RtlRbRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     VmpFlushTbVaRange @ 0x1405A1D80 (VmpFlushTbVaRange.c)
 *     VmpProcessContextLockExclusive @ 0x1405A2F2C (VmpProcessContextLockExclusive.c)
 *     VmpVaRangeNumberOfGpaRanges @ 0x1405A3BA0 (VmpVaRangeNumberOfGpaRanges.c)
 *     VmpFreeMemoryRanges @ 0x140931EC8 (VmpFreeMemoryRanges.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VmpRemoveMemoryRange(
        PEX_SPIN_LOCK SpinLock,
        unsigned __int64 a2,
        _RTL_BALANCED_NODE *a3,
        __int64 a4,
        __int64 a5)
{
  _RTL_BALANCED_NODE *v5; // rsi
  unsigned __int64 v9; // r12
  unsigned int v10; // ebx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  _RTL_BALANCED_NODE *v13; // r9
  _RTL_BALANCED_NODE *v14; // r8
  unsigned __int64 v15; // rcx
  unsigned __int8 v16; // di
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v20; // eax
  _RTL_BALANCED_NODE *v22; // rdi
  _RTL_BALANCED_NODE *ParentValue; // rbx
  _RTL_BALANCED_NODE *v24; // rcx
  _RTL_BALANCED_NODE *v25; // rax
  __int64 v26; // rax
  _RTL_BALANCED_NODE *v27; // r8
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // r10
  bool v30; // zf
  __int64 v31; // [rsp+30h] [rbp-68h] BYREF
  __int128 v32; // [rsp+38h] [rbp-60h] BYREF
  __int64 v33; // [rsp+48h] [rbp-50h]
  _RTL_BALANCED_NODE *v34; // [rsp+A0h] [rbp+8h]
  __int64 v35; // [rsp+A8h] [rbp+10h] BYREF
  _RTL_BALANCED_NODE *v36; // [rsp+B0h] [rbp+18h]
  PVOID P; // [rsp+B8h] [rbp+20h]

  v5 = 0LL;
  v31 = 0LL;
  v34 = 0LL;
  v36 = (_RTL_BALANCED_NODE *)((char *)a3 + a4 - 1);
  P = 0LL;
  v9 = a4 + a2 - 1;
  v35 = VmpProcessContextLockExclusive(SpinLock);
  if ( *((_QWORD *)SpinLock + 9) != a5 )
  {
    v10 = -1073740007;
    goto LABEL_18;
  }
  v33 = 0LL;
  v32 = 0LL;
  VmpFlushTbVaRange(SpinLock, a2, v9, &v32, &v31, (unsigned __int64 *)&v35);
  v11 = (unsigned __int64)(SpinLock + 2);
  v12 = *((_QWORD *)SpinLock + 1);
  if ( (SpinLock[4] & 1) != 0 && v12 )
    v12 ^= v11;
  while ( 1 )
  {
    if ( !v12 )
      goto LABEL_16;
    v13 = *(_RTL_BALANCED_NODE **)(v12 + 32);
    if ( a3 <= v13 )
      break;
    v15 = *(_QWORD *)(v12 + 8);
LABEL_11:
    if ( (SpinLock[4] & 1) != 0 && v15 )
      v12 ^= v15;
    else
      v12 = v15;
  }
  v14 = *(_RTL_BALANCED_NODE **)(v12 + 24);
  if ( a3 < v14 )
  {
    v15 = *(_QWORD *)v12;
    goto LABEL_11;
  }
  v22 = (_RTL_BALANCED_NODE *)(v12 - 24);
  if ( v12 == 24 )
  {
LABEL_16:
    v10 = -1073741172;
    goto LABEL_17;
  }
  ParentValue = (_RTL_BALANCED_NODE *)v22->ParentValue;
  if ( v14 != a3
    || v13 != v36
    || ParentValue[1].Children[0] != (_RTL_BALANCED_NODE *)a2
    || ParentValue[1].Children[1] != (_RTL_BALANCED_NODE *)v9 )
  {
    if ( (unsigned __int64)VmpVaRangeNumberOfGpaRanges(v22->ParentValue) > 1 )
    {
LABEL_47:
      v10 = -1073741637;
      goto LABEL_17;
    }
    if ( a3 == v27 && (_RTL_BALANCED_NODE *)a2 == ParentValue[1].Children[0] )
    {
      v30 = v29 == v28;
      if ( v29 >= v28 )
      {
LABEL_54:
        if ( v30
          && (_RTL_BALANCED_NODE *)v9 == ParentValue[1].Children[1]
          && a3 > v27
          && (_RTL_BALANCED_NODE *)a2 > ParentValue[1].Children[0] )
        {
          v22[2].Children[1] = (_RTL_BALANCED_NODE *)((char *)a3 - 1);
          ParentValue[1].Children[1] = (_RTL_BALANCED_NODE *)(a2 - 1);
          goto LABEL_59;
        }
        goto LABEL_47;
      }
      if ( (_RTL_BALANCED_NODE *)v9 < ParentValue[1].Children[1] )
      {
        v22[2].Children[0] = (_RTL_BALANCED_NODE *)(v29 + 1);
        ParentValue[1].Children[0] = (_RTL_BALANCED_NODE *)(v9 + 1);
        goto LABEL_59;
      }
    }
    v30 = v29 == v28;
    goto LABEL_54;
  }
  RtlRbRemoveNode((PRTL_RB_TREE)(SpinLock + 2), (PRTL_BALANCED_NODE)v12);
  v22[1].ParentValue = -1LL;
  v24 = v22->Children[0];
  v25 = v22->Children[1];
  if ( v22->Children[0]->Children[1] != v22 || v25->Children[0] != v22 )
    __fastfail(3u);
  v25->Children[0] = v24;
  v24->Children[1] = v25;
  P = v22;
  if ( ($F6ED6B8C35E0C59DCCEDB1F15AA1B54B *)ParentValue[1].ParentValue == &ParentValue[1].16 )
  {
    RtlRbRemoveNode((PRTL_RB_TREE)(SpinLock + 6), ParentValue);
    ParentValue->ParentValue = -1LL;
    v26 = *(_QWORD *)v11;
    v34 = ParentValue;
    if ( (SpinLock[4] & 1) == 0 )
      goto LABEL_43;
    if ( !v26 )
      goto LABEL_44;
    v26 ^= v11;
LABEL_43:
    if ( !v26 )
    {
LABEL_44:
      *((_DWORD *)SpinLock + 22) = 0;
      *((_QWORD *)SpinLock + 9) = -1LL;
    }
  }
LABEL_59:
  ++*((_QWORD *)SpinLock + 5);
  v10 = 0;
LABEL_17:
  v5 = v34;
LABEL_18:
  v16 = v35;
  if ( v35 != -1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v16 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << (v16 + 1));
          v30 = (v20 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v20;
          if ( v30 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8((unsigned __int8)v35);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v5 )
    VmpFreeMemoryRanges(v5);
  return v10;
}
