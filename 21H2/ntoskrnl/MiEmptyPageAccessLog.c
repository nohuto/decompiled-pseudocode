/*
 * XREFs of MiEmptyPageAccessLog @ 0x140334400
 * Callers:
 *     MmOutSwapProcess @ 0x140211108 (MmOutSwapProcess.c)
 *     MiAllocateAccessLog @ 0x140282764 (MiAllocateAccessLog.c)
 *     MiDrainSystemAccessLog @ 0x1402829D0 (MiDrainSystemAccessLog.c)
 *     MiTrimOrAgeWorkingSet @ 0x14030C260 (MiTrimOrAgeWorkingSet.c)
 *     MmDeleteProcessAddressSpace @ 0x140693C24 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     MiQueuePageAccessLog @ 0x140233AA0 (MiQueuePageAccessLog.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObpIncrPointerCountEx @ 0x1402F3424 (ObpIncrPointerCountEx.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiStartingOffset @ 0x1403342D0 (MiStartingOffset.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x140347B50 (ObpTraceObjectDereferenceIfActive.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ObpPushStackInfo @ 0x1405C5EC8 (ObpPushStackInfo.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiEmptyPageAccessLog(unsigned __int64 *a1)
{
  unsigned __int64 v1; // r13
  struct _SLIST_ENTRY *v2; // rdx
  unsigned int v3; // edi
  unsigned int SessionId; // eax
  unsigned int v5; // r9d
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r12
  struct _SLIST_ENTRY *Next; // rsi
  __int64 *v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int16 v11; // r8
  __int64 v12; // rbp
  unsigned __int64 v13; // rsi
  unsigned __int16 v14; // r15
  __int64 v15; // rbp
  unsigned __int64 v16; // r12
  __int64 **v17; // r14
  __int64 v18; // rsi
  signed __int64 v19; // rdx
  signed __int64 v20; // rax
  signed __int64 v21; // rbp
  unsigned int v22; // edx
  unsigned __int64 v23; // rbp
  __int64 *v24; // r15
  signed __int64 v25; // rax
  signed __int64 v26; // rtt
  unsigned __int64 v27; // rbp
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  signed __int64 v31; // rax
  signed __int64 v32; // rtt
  unsigned __int64 v33; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v37; // eax
  bool v38; // zf
  _QWORD *v39; // rbx
  PVOID v40; // rcx
  unsigned __int64 v41; // [rsp+28h] [rbp-50h]
  unsigned __int64 *P; // [rsp+80h] [rbp+8h]
  unsigned int v43; // [rsp+88h] [rbp+10h]
  int v44; // [rsp+90h] [rbp+18h]
  int v45; // [rsp+94h] [rbp+1Ch]
  PVOID v46; // [rsp+98h] [rbp+20h]

  P = a1;
  v1 = a1[7];
  v44 = 0;
  v2 = (struct _SLIST_ENTRY *)a1;
  v45 = 3;
  v3 = 0;
  v41 = v1;
  if ( v1 <= 1 || (*(_DWORD *)(v1 + 2172) & 0x1000) != 0 )
  {
    v5 = -1;
  }
  else
  {
    SessionId = MmGetSessionIdEx(v1);
    v2 = (struct _SLIST_ENTRY *)P;
    v5 = SessionId;
  }
  v43 = v5;
  v6 = 0LL;
  while ( 1 )
  {
    v7 = (unsigned __int64)(&v2[4].Next + 1);
    Next = v2->Next;
    v9 = (__int64 *)(&v2[2].Next[-1].Next + 1);
    v46 = v2->Next;
    v10 = 0LL;
    v11 = 0;
    if ( v9 >= (__int64 *)&v2[4].Next + 1 )
    {
      do
      {
        v12 = *v9;
        v13 = (unsigned __int64)*v9 >> 9;
        v14 = *v9 & 0x1FF;
        if ( v14 )
        {
          if ( v1 > 1 )
          {
            v27 = v12 >> 16;
            if ( v14 == v11 )
            {
              v6 += (__int64)(v27 - v10) >> 3 << 12 << *(&v44 + ((v6 >> 10) & 1));
            }
            else
            {
              v28 = *((_QWORD *)&v2[3].Next->Next - (*v9 & 0x1FF));
              v3 ^= ((unsigned __int16)v3 ^ (unsigned __int16)(32 * *(_DWORD *)(*(_QWORD *)v28 + 56LL))) & 0x400;
              v29 = MiStartingOffset(v28, v27, v5);
              v11 = v14;
              v30 = v29 << *((_BYTE *)&v44 + 4 * ((v3 >> 10) & 1));
              LODWORD(v30) = v14 | v3 & 0x400 | v30 & 0xFFFFFA00;
              v6 = v30;
            }
            v2 = (struct _SLIST_ENTRY *)P;
            v10 = v27;
            *v9 = v6;
            *(_DWORD *)v9 ^= ((unsigned __int16)v6 ^ (unsigned __int16)((_WORD)v13 << 9)) & 0x200;
          }
        }
        else
        {
          v15 = v12 >> 16 << 25 >> 16;
          *v9 = v15;
          *(_DWORD *)v9 = v15 ^ ((unsigned __int16)v15 ^ (unsigned __int16)((_WORD)v13 << 9)) & 0x200;
        }
        v5 = v43;
        --v9;
      }
      while ( (unsigned __int64)v9 >= v7 );
      Next = (struct _SLIST_ENTRY *)v46;
    }
    if ( v1 > 1 )
      break;
LABEL_25:
    MiQueuePageAccessLog(v2);
    v2 = Next;
    P = (unsigned __int64 *)Next;
    if ( !Next )
      return;
    v5 = v43;
  }
  v16 = (unsigned __int64)(&v2[3].Next[-1].Next + 1);
  v17 = (__int64 **)(*((_QWORD *)&v2[2].Next + 1) + 8LL);
  if ( (unsigned __int64)v17 > v16 )
    goto LABEL_23;
  do
  {
    v18 = **v17;
    _m_prefetchw((const void *)(v18 + 64));
    v19 = *(_QWORD *)(v18 + 64);
    if ( (v19 & 0xF) != 0 )
    {
      do
      {
        v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 64), v19 - 1, v19);
        if ( v19 == v20 )
          break;
        v19 = v20;
      }
      while ( (v20 & 0xF) != 0 );
    }
    v21 = v19;
    v22 = v19 & 0xF;
    v23 = v21 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v22 <= 1 )
    {
      if ( !v22 )
        goto LABEL_43;
      ObpIncrPointerCountEx((volatile signed __int64 *)(v23 - 48), 15);
      _m_prefetchw((const void *)(v18 + 64));
      v31 = *(_QWORD *)(v18 + 64);
      while ( (v31 & 0xF) == 0 )
      {
        if ( v23 != (v31 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v32 = v31;
        v31 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 64), v31 + 15, v31);
        if ( v32 == v31 )
          goto LABEL_15;
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 - 48), 0xFFFFFFFFFFFFFFF1uLL);
    }
LABEL_15:
    if ( ObpTraceFlags )
      ObpPushStackInfo(v23 - 48);
    if ( !v23 )
    {
LABEL_43:
      v33 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v18 + 72));
      v23 = *(_QWORD *)(v18 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v23 )
        ObfReferenceObjectWithTag((PVOID)(*(_QWORD *)(v18 + 64) & 0xFFFFFFFFFFFFFFF0uLL), 0x63536D4Du);
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v18 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v33 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v33 + 1));
            v38 = (v37 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v37;
            if ( v38 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v33);
    }
    v24 = *(__int64 **)(v23 + 24);
    _m_prefetchw((const void *)(v18 + 64));
    v25 = *(_QWORD *)(v18 + 64);
    if ( (v23 ^ v25) >= 0xF )
    {
LABEL_39:
      ObDereferenceObjectDeferDeleteWithTag((PVOID)v23, 0x63536D4Du);
    }
    else
    {
      while ( 1 )
      {
        v26 = v25;
        v25 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 64), v25 + 1, v25);
        if ( v26 == v25 )
          break;
        if ( (v23 ^ v25) >= 0xF )
          goto LABEL_39;
      }
      ObpTraceObjectDereferenceIfActive(v23 - 48, 1LL);
    }
    *v17++ = v24;
  }
  while ( (unsigned __int64)v17 <= v16 );
  v1 = v41;
LABEL_23:
  if ( ObReferenceObjectSafeWithTag(v1) )
  {
    v2 = (struct _SLIST_ENTRY *)P;
    Next = (struct _SLIST_ENTRY *)v46;
    goto LABEL_25;
  }
  ExFreePoolWithTag(P, 0);
  v39 = v46;
  v40 = v46;
  if ( v46 )
  {
    do
    {
      v39 = (_QWORD *)*v39;
      ExFreePoolWithTag(v40, 0);
      v40 = v39;
    }
    while ( v39 );
  }
}
