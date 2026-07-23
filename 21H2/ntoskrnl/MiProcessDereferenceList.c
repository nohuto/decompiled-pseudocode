/*
 * XREFs of MiProcessDereferenceList @ 0x140387CBC
 * Callers:
 *     MiDereferenceSegmentThread @ 0x1403BD5A0 (MiDereferenceSegmentThread.c)
 *     MiRemoveUnusedSegments @ 0x14052A93C (MiRemoveUnusedSegments.c)
 * Callees:
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140282D50 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiProcessingPageExtendComplete @ 0x14052A47C (MiProcessingPageExtendComplete.c)
 *     MiRemoveUnusedSegments @ 0x14052A93C (MiRemoveUnusedSegments.c)
 *     MiAttemptPageFileReduction @ 0x140542B48 (MiAttemptPageFileReduction.c)
 *     MiFreeClonePool @ 0x14055AB00 (MiFreeClonePool.c)
 *     MiSegmentDelete @ 0x1406FF4F0 (MiSegmentDelete.c)
 *     MiExtendPagingFiles @ 0x1408D0790 (MiExtendPagingFiles.c)
 */

__int64 __fastcall MiProcessDereferenceList(__int64 a1, int a2)
{
  volatile LONG *v3; // r13
  KIRQL v4; // al
  __int64 *v5; // r15
  KIRQL v6; // bl
  __int64 *v7; // rsi
  __int64 v8; // rax
  __int64 **v9; // r14
  __int64 *v10; // rsi
  int v11; // esi
  _QWORD **v12; // rsi
  _QWORD *v13; // rax
  __int64 result; // rax
  __int64 *v15; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r9
  int v24; // eax
  __int64 v25; // rax
  struct _KEVENT *v26; // rsi
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  _DWORD *v29; // r9
  int v30; // eax
  __int128 v31; // xmm0
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  _DWORD *v34; // r9
  int v35; // eax
  KIRQL v36; // al
  __int64 v37; // rcx
  _QWORD *v38; // r13
  __int128 v39; // xmm0
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r10
  _DWORD *v42; // r9
  int v43; // eax
  int v44; // eax
  int v45; // ecx
  __int64 v46; // rax
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r9
  _DWORD *v49; // r8
  int v50; // eax
  _OWORD v51[6]; // [rsp+20h] [rbp-60h] BYREF
  int v52; // [rsp+C0h] [rbp+40h]

  memset(v51, 0, 0x58uLL);
  v52 = 0;
  v3 = (volatile LONG *)(a1 + 1344);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1344));
  v5 = (__int64 *)(a1 + 1552);
LABEL_2:
  v6 = v4;
  do
  {
    v7 = (__int64 *)*v5;
    if ( (__int64 *)*v5 != v5 )
    {
      v8 = *v7;
      if ( (__int64 *)v7[1] != v5 || *(__int64 **)(v8 + 8) != v7 )
LABEL_77:
        __fastfail(3u);
      *v5 = v8;
      *(_QWORD *)(v8 + 8) = v5;
      if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)v7 + 16) )
      {
        *((_DWORD *)v7 + 12) &= ~0x8000000u;
        v7[1] = (__int64)v7;
        *v7 = (__int64)v7;
        ExReleaseSpinLockExclusiveFromDpcLevel(v3);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v7 + 16);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v19 = ~(unsigned __int16)(-1LL << (v6 + 1));
              v20 = (v19 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v19;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v6);
        MiSegmentDelete(v7 - 1);
      }
      else
      {
        v15 = (__int64 *)*v5;
        if ( *(__int64 **)(*v5 + 8) != v5 )
          goto LABEL_77;
        *v7 = (__int64)v15;
        v7[1] = (__int64)v5;
        v15[1] = (__int64)v7;
        *v5 = (__int64)v7;
        ExReleaseSpinLockExclusiveFromDpcLevel(v3);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v21 = KeGetCurrentIrql();
            if ( v21 <= 0xFu && v6 <= 0xFu && v21 >= 2u )
            {
              v22 = KeGetCurrentPrcb();
              v23 = v22->SchedulerAssist;
              v24 = ~(unsigned __int16)(-1LL << (v6 + 1));
              v20 = (v24 & v23[5]) == 0;
              v23[5] &= v24;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick(v22);
            }
          }
        }
        __writecr8(v6);
      }
      v4 = ExAcquireSpinLockExclusive(v3);
      goto LABEL_2;
    }
    v9 = (__int64 **)(a1 + 1584);
    while ( 1 )
    {
      v10 = *v9;
      if ( *v9 == (__int64 *)v9 )
        break;
      v25 = *v10;
      if ( (__int64 **)v10[1] != v9 || *(__int64 **)(v25 + 8) != v10 )
        goto LABEL_77;
      *v9 = (__int64 *)v25;
      v26 = (struct _KEVENT *)(v10 - 1);
      *(_QWORD *)(v25 + 8) = v9;
      if ( v26[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)-1LL )
      {
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 952)) )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel(v3);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v27 = KeGetCurrentIrql();
              if ( v27 <= 0xFu && v6 <= 0xFu && v27 >= 2u )
              {
                v28 = KeGetCurrentPrcb();
                v29 = v28->SchedulerAssist;
                v30 = ~(unsigned __int16)(-1LL << (v6 + 1));
                v20 = (v30 & v29[5]) == 0;
                v29[5] &= v30;
                if ( v20 )
                  KiRemoveSystemWorkPriorityKick(v28);
              }
            }
          }
          __writecr8(v6);
          MiAttemptPageFileReduction(v26);
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 952));
          v6 = ExAcquireSpinLockExclusive(v3);
        }
        if ( (v26[3].Header.SignalState & 0x10000000) == 0 )
          KeSetEvent(v26 + 2, 0, 0);
      }
      else
      {
        v51[0] = *(_OWORD *)&v26->Header.Lock;
        v51[1] = *(_OWORD *)&v26->Header.WaitListHead.Blink;
        v51[2] = v26[1].Header.WaitListHead;
        v51[3] = *(_OWORD *)&v26[2].Header.Lock;
        v31 = *(_OWORD *)&v26[2].Header.WaitListHead.Blink;
        *(_QWORD *)&v51[5] = v26;
        v51[4] = v31;
        v26[3].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v51;
        ExReleaseSpinLockExclusiveFromDpcLevel(v3);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v32 = KeGetCurrentIrql();
            if ( v32 <= 0xFu && v6 <= 0xFu && v32 >= 2u )
            {
              v33 = KeGetCurrentPrcb();
              v34 = v33->SchedulerAssist;
              v35 = ~(unsigned __int16)(-1LL << (v6 + 1));
              v20 = (v35 & v34[5]) == 0;
              v34[5] &= v35;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick(v33);
            }
          }
        }
        __writecr8(v6);
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 952)) )
        {
          MiExtendPagingFiles(v51);
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 952));
        }
        v36 = MiProcessingPageExtendComplete(v51, v26, a1);
        --*(_DWORD *)(a1 + 1868);
        v6 = v36;
        if ( *(_DWORD *)(a1 + 1864) )
          KeSetEvent((PRKEVENT)(a1 + 1872), 0, 0);
      }
    }
    v11 = a2;
    if ( a2 )
    {
      v12 = (_QWORD **)(a1 + 1568);
      while ( 1 )
      {
        v13 = *v12;
        if ( *v12 == v12 )
          break;
        v37 = *v13;
        if ( (_QWORD **)v13[1] != v12 || *(_QWORD **)(v37 + 8) != v13 )
          goto LABEL_77;
        *v12 = (_QWORD *)v37;
        v38 = v13 - 1;
        *(_QWORD *)(v37 + 8) = v12;
        v51[0] = *(_OWORD *)(v13 - 1);
        v51[1] = *(_OWORD *)(v13 + 1);
        v51[2] = *(_OWORD *)(v13 + 3);
        v51[3] = *(_OWORD *)(v13 + 5);
        v39 = *(_OWORD *)(v13 + 7);
        *(_QWORD *)&v51[5] = v13 - 1;
        v51[4] = v39;
        v13[9] = v51;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1344));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v40 = KeGetCurrentIrql();
            if ( v40 <= 0xFu && v6 <= 0xFu && v40 >= 2u )
            {
              v41 = KeGetCurrentPrcb();
              v42 = v41->SchedulerAssist;
              v43 = ~(unsigned __int16)(-1LL << (v6 + 1));
              v20 = (v43 & v42[5]) == 0;
              v42[5] &= v43;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick(v41);
            }
          }
        }
        __writecr8(v6);
        v44 = MiRemoveUnusedSegments(a1, *(_QWORD *)&v51[2]);
        v45 = v52;
        v20 = v44 == 0;
        v46 = *((_QWORD *)&v51[2] + 1);
        if ( !v20 )
          v45 = 1;
        v52 = v45;
        if ( v45 )
          v46 = 1LL;
        *((_QWORD *)&v51[2] + 1) = v46;
        v6 = MiProcessingPageExtendComplete(v51, v38, a1);
      }
      v11 = a2;
      v3 = (volatile LONG *)(a1 + 1344);
    }
  }
  while ( (__int64 *)*v5 != v5 || v11 && *(_QWORD *)(a1 + 1568) != a1 + 1568 || *v9 != (__int64 *)v9 );
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v47 = KeGetCurrentIrql();
      if ( v47 <= 0xFu && v6 <= 0xFu && v47 >= 2u )
      {
        v48 = KeGetCurrentPrcb();
        v49 = v48->SchedulerAssist;
        v50 = ~(unsigned __int16)(-1LL << (v6 + 1));
        v20 = (v50 & v49[5]) == 0;
        v49[5] &= v50;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v48);
      }
    }
  }
  result = v6;
  __writecr8(v6);
  if ( *(_DWORD *)(a1 + 1812) )
  {
    KeResetEvent((PRKEVENT)(a1 + 1808));
    return MiFreeClonePool(a1);
  }
  return result;
}
