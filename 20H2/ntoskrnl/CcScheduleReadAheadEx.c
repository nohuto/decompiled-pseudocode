/*
 * XREFs of CcScheduleReadAheadEx @ 0x140248720
 * Callers:
 *     CcAsyncCopyRead @ 0x140248D20 (CcAsyncCopyRead.c)
 *     CcAsyncReadPrefetch @ 0x14024B6A8 (CcAsyncReadPrefetch.c)
 *     CcCopyReadEx @ 0x1402A3E70 (CcCopyReadEx.c)
 *     CcScheduleReadAhead @ 0x1404E8B60 (CcScheduleReadAhead.c)
 *     CcMdlRead @ 0x140657870 (CcMdlRead.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcChargeThreadForReadAhead @ 0x140248680 (CcChargeThreadForReadAhead.c)
 *     CcDetermineReadPattern @ 0x140248B88 (CcDetermineReadPattern.c)
 *     IoReferenceIoAttributionFromThread @ 0x1402491C8 (IoReferenceIoAttributionFromThread.c)
 *     CcPostWorkQueue @ 0x14024A8E0 (CcPostWorkQueue.c)
 *     CcAllocateWorkQueueEntry @ 0x14024AF80 (CcAllocateWorkQueueEntry.c)
 *     PsGetPagePriorityThread @ 0x14028EE10 (PsGetPagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x14028EE50 (PsGetIoPriorityThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     CcCanIWriteStreamEx @ 0x14029AAB0 (CcCanIWriteStreamEx.c)
 *     CcGetPartition @ 0x14029ADE0 (CcGetPartition.c)
 *     CcPerfLogScheduleReadAhead @ 0x1403BB85C (CcPerfLogScheduleReadAhead.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcScheduleReadAheadEx(_QWORD *Object, _QWORD *a2, unsigned int a3, struct _KTHREAD *a4)
{
  __int64 Partition; // r14
  int *v5; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v7; // rax
  __int64 v9; // rsi
  _DWORD *v11; // r15
  __int64 result; // rax
  int v13; // ecx
  __int64 v14; // rbx
  int v15; // esi
  int Pattern; // eax
  __int64 v17; // r9
  int v18; // r12d
  signed __int64 v19; // rdx
  int v20; // r8d
  unsigned int v21; // ecx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rdx
  int PagePriorityThread; // eax
  int v26; // edx
  KIRQL v27; // r10
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r14
  __int64 v31; // r12
  unsigned __int64 OldIrql; // r15
  int v33; // ecx
  int v34; // edx
  __int64 v35; // rax
  unsigned int v36; // edx
  unsigned __int64 v37; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v39; // r11
  _DWORD *v40; // r9
  int v41; // eax
  bool v42; // zf
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r9
  _DWORD *v45; // r8
  int v46; // eax
  KIRQL v47; // al
  unsigned __int64 v48; // r14
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  unsigned __int8 v51; // al
  struct _KPRCB *v52; // r9
  _DWORD *v53; // r8
  int v54; // eax
  __int64 v55; // [rsp+50h] [rbp-21h]
  __int64 v56; // [rsp+50h] [rbp-21h]
  __int64 v57; // [rsp+50h] [rbp-21h]
  __int64 v58; // [rsp+58h] [rbp-19h] BYREF
  __int64 v59; // [rsp+60h] [rbp-11h]
  PKSPIN_LOCK SpinLock; // [rsp+68h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-1h] BYREF
  KIRQL v62; // [rsp+D8h] [rbp+67h]
  unsigned int v64; // [rsp+E8h] [rbp+77h]
  struct _KTHREAD *v65; // [rsp+F0h] [rbp+7Fh]

  v65 = a4;
  v64 = a3;
  v58 = 0LL;
  Partition = 0LL;
  v5 = (int *)Object[6];
  CurrentThread = a4;
  v7 = Object[5];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = a3;
  v59 = 0LL;
  v11 = *(_DWORD **)(v7 + 8);
  if ( v11 )
  {
    Partition = CcGetPartition(*(_QWORD *)(v7 + 8));
    v59 = Partition;
  }
  if ( !CurrentThread )
  {
    CurrentThread = KeGetCurrentThread();
    v65 = CurrentThread;
  }
  result = PsGetIoPriorityThread(CurrentThread);
  if ( v5 )
  {
    if ( v11 )
    {
      v13 = v11[38];
      if ( (v13 & 1) == 0 && (v13 & 0x2000) == 0 && (Object[10] & 0x100000) == 0 && (int)result >= 2 )
      {
        result = CcCanIWriteStreamEx(Partition, (_DWORD)Object, 0x1000000, 0, 4, 0LL);
        if ( (_BYTE)result )
        {
          if ( !Partition || !*(_BYTE *)(Partition + 352) )
          {
            v14 = v9 + *a2;
            v55 = v9;
            v15 = ~v5[1] & (v5[1] + v9);
            SpinLock = (PKSPIN_LOCK)(v5 + 20);
            v62 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5 + 10);
            if ( (*v5 & 0x20000) == 0 )
              *v5 |= 0x20000u;
            Pattern = CcDetermineReadPattern(v5, a2);
            v17 = 0LL;
            v18 = Pattern;
            if ( Pattern )
            {
              if ( Pattern > 0 )
              {
                if ( Pattern > 2 )
                {
                  v34 = (int)a2;
                  if ( Pattern != 3 || (v57 = 2LL * *a2 - *((_QWORD *)v5 + 4), v57 < 0) )
                  {
                    v33 = 0;
                    goto LABEL_38;
                  }
                  v17 = 4294963200LL;
                  v36 = (v57 & 0xFFF) + v64;
                  LODWORD(v57) = v57 & 0xFFFFF000;
                  v64 = v36;
                  *((_QWORD *)v5 + 7) = v57;
                  v22 = (v36 + 4095) & 0xFFFFF000;
                  goto LABEL_25;
                }
                v19 = *((_QWORD *)v5 + 8);
                if ( v14 + v55 + (unsigned int)(2 * v15) >= v19 )
                {
                  v56 = *((_QWORD *)v5 + 8);
                  *((_QWORD *)v5 + 7) = v14 & 0xFFFFFFFFFFFFF000uLL;
                  if ( (__int64)(v14 & 0xFFFFFFFFFFFFF000uLL) >= v19 )
                    LODWORD(v56) = ~(v15 - 1) & (v15 + v14 - 1);
                  ++v5[12];
                  v20 = v15;
                  v21 = v5[12];
                  if ( Pattern == 1 || v21 >= 3 )
                    v20 = 2 * v15;
                  v22 = (unsigned int)(v56 - v5[14] + v20);
                  if ( v21 >= 3 )
                  {
                    v35 = (unsigned int)v5[23];
                    if ( (_DWORD)v35 )
                    {
                      v37 = v35 * (unsigned __int64)(v64 * v21) / 0x64;
                      if ( v37 > 0xFFFFFFFF )
                        v37 = 0xFFFFFFFFLL;
                      if ( v37 > (unsigned int)v22 )
                        v22 = (unsigned int)v37;
                    }
                  }
LABEL_25:
                  v5[13] = v22;
                  v23 = (unsigned int)*v5;
                  if ( (v23 & 0x10000) == 0 )
                  {
                    v24 = (unsigned int)v23 | 0x10000;
                    *v5 = v24;
                    PagePriorityThread = PsGetPagePriorityThread(KeGetCurrentThread(), v24, v22, v17);
                    *v5 = v26 ^ (v26 ^ (PagePriorityThread << 18)) & 0x1C0000;
                    KxReleaseSpinLock((PKSPIN_LOCK)v5 + 10);
                    if ( KiIrqlFlags )
                    {
                      if ( (KiIrqlFlags & 1) != 0 )
                      {
                        CurrentIrql = KeGetCurrentIrql();
                        if ( CurrentIrql <= 0xFu )
                        {
                          v27 = v62;
                          if ( v62 > 0xFu
                            || CurrentIrql < 2u
                            || (v39 = KeGetCurrentPrcb(),
                                v40 = v39->SchedulerAssist,
                                v41 = ~(unsigned __int16)(-1LL << (v62 + 1)),
                                v42 = (v41 & v40[5]) == 0,
                                v40[5] &= v41,
                                !v42) )
                          {
LABEL_28:
                            __writecr8(v27);
                            if ( (int)CcAllocateWorkQueueEntry(Partition, &v58) < 0 )
                            {
                              v47 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5 + 10);
                              *v5 &= ~0x10000u;
                              v48 = v47;
                              KxReleaseSpinLock((PKSPIN_LOCK)v5 + 10);
                              result = (unsigned int)KiIrqlFlags;
                              if ( KiIrqlFlags )
                              {
                                if ( (KiIrqlFlags & 1) != 0 )
                                {
                                  result = KeGetCurrentIrql();
                                  if ( (unsigned __int8)result <= 0xFu
                                    && (unsigned __int8)v48 <= 0xFu
                                    && (unsigned __int8)result >= 2u )
                                  {
                                    CurrentPrcb = KeGetCurrentPrcb();
                                    result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v48 + 1));
                                    SchedulerAssist = CurrentPrcb->SchedulerAssist;
                                    v42 = ((unsigned int)result & SchedulerAssist[5]) == 0;
                                    SchedulerAssist[5] &= result;
                                    if ( v42 )
                                      result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                                  }
                                }
                              }
                              __writecr8(v48);
                            }
                            else
                            {
                              v30 = v58;
                              if ( (xmmword_140CFC490 & 0x20000) != 0 )
                                CcPerfLogScheduleReadAhead(v58, (_DWORD)Object, (_DWORD)a2, v64, v15, v18, 1);
                              if ( (v11[38] & 0x10000000) != 0 )
                                CcChargeThreadForReadAhead((__int64)Object, v28, v29, v18, v65);
                              ObfReferenceObjectWithTag(Object, 0x746C6644u);
                              v31 = v59;
                              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v59 + 128), &LockHandle);
                              ++v11[1];
                              ++v11[134];
                              v11[38] |= 0x4000u;
                              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                              OldIrql = LockHandle.OldIrql;
                              if ( KiIrqlFlags )
                              {
                                if ( (KiIrqlFlags & 1) != 0 )
                                {
                                  v43 = KeGetCurrentIrql();
                                  if ( v43 <= 0xFu && LockHandle.OldIrql <= 0xFu && v43 >= 2u )
                                  {
                                    v44 = KeGetCurrentPrcb();
                                    v45 = v44->SchedulerAssist;
                                    v46 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                                    v42 = (v46 & v45[5]) == 0;
                                    v45[5] &= v46;
                                    if ( v42 )
                                      KiRemoveSystemWorkPriorityKick(v44);
                                    v30 = v58;
                                  }
                                }
                              }
                              __writecr8(OldIrql);
                              *((_QWORD *)v5 + 14) = v30;
                              *(_BYTE *)(v30 + 120) = 1;
                              *(_QWORD *)(v30 + 16) = Object;
                              *(_QWORD *)(v30 + 24) = 0LL;
                              IoReferenceIoAttributionFromThread(v65);
                              return CcPostWorkQueue(v30, v31 + 240);
                            }
                            return result;
                          }
                          KiRemoveSystemWorkPriorityKick(v39);
                        }
                      }
                    }
                    v27 = v62;
                    goto LABEL_28;
                  }
                  v33 = 1;
                  if ( (v11[38] & 0x10000000) != 0 )
                  {
                    CcChargeThreadForReadAhead((__int64)Object, v23, v22, v18, v65);
                    v33 = 1;
                  }
                  goto LABEL_37;
                }
              }
            }
            else
            {
              v5[12] = 0;
              *((_QWORD *)v5 + 8) = 0LL;
              *((_QWORD *)v5 + 9) = 0LL;
            }
            v33 = 0;
LABEL_37:
            v34 = (int)a2;
LABEL_38:
            if ( (xmmword_140CFC490 & 0x20000) != 0 )
              CcPerfLogScheduleReadAhead(0, (_DWORD)Object, v34, v64, v15, v18, v33);
            KxReleaseSpinLock(SpinLock);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v51 = KeGetCurrentIrql();
                if ( v51 <= 0xFu && v62 <= 0xFu && v51 >= 2u )
                {
                  v52 = KeGetCurrentPrcb();
                  v53 = v52->SchedulerAssist;
                  v54 = ~(unsigned __int16)(-1LL << (v62 + 1));
                  v42 = (v54 & v53[5]) == 0;
                  v53[5] &= v54;
                  if ( v42 )
                    KiRemoveSystemWorkPriorityKick(v52);
                }
              }
            }
            result = v62;
            __writecr8(v62);
          }
        }
      }
    }
  }
  return result;
}
