/*
 * XREFs of MiTrimUnusedPageFileRegionsWorker @ 0x140255630
 * Callers:
 *     <none>
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     MiQueueSyncModifiedWriterApc @ 0x140251F9C (MiQueueSyncModifiedWriterApc.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiTransferSoftwarePte @ 0x140258078 (MiTransferSoftwarePte.c)
 *     MiPageFileLargestBitmapsRun @ 0x140258E08 (MiPageFileLargestBitmapsRun.c)
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     PsDereferencePartition @ 0x140274588 (PsDereferencePartition.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140275C64 (KiQueryUnbiasedInterruptTime.c)
 *     MiUpdatePageFileHighInPte @ 0x1402E25D0 (MiUpdatePageFileHighInPte.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwFsControlFile @ 0x1403FACA0 (ZwFsControlFile.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiContractWsSwapPageFile @ 0x1406BECDC (MiContractWsSwapPageFile.c)
 */

__int64 __fastcall MiTrimUnusedPageFileRegionsWorker(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v3; // rsi
  ULONG_PTR v4; // r12
  unsigned int v5; // eax
  unsigned int SessionId; // r13d
  unsigned int v7; // edi
  __int64 v8; // r14
  unsigned int v9; // r12d
  __int64 v10; // r13
  unsigned int v11; // eax
  __int64 updated; // rdi
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r14
  int v15; // ebx
  struct _KTHREAD *v16; // rdi
  int v17; // edx
  unsigned int v18; // edx
  bool v19; // zf
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  signed __int32 v25[8]; // [rsp+8h] [rbp-100h] BYREF
  int v26; // [rsp+58h] [rbp-B0h]
  NTSTATUS Status; // [rsp+5Ch] [rbp-ACh]
  unsigned int v28; // [rsp+60h] [rbp-A8h]
  unsigned int v29; // [rsp+64h] [rbp-A4h]
  struct _KEVENT Event; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v31; // [rsp+80h] [rbp-88h]
  __int128 v32; // [rsp+90h] [rbp-78h]
  __int64 v33; // [rsp+A8h] [rbp-60h]
  struct _KTHREAD *v34; // [rsp+B0h] [rbp-58h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp-50h] BYREF
  int v36[24]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 InputBuffer; // [rsp+128h] [rbp+20h] BYREF
  unsigned __int64 v38; // [rsp+138h] [rbp+30h]

  memset(v36, 0, 0x58uLL);
  v38 = 0LL;
  Event.Header.WaitListHead = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  InputBuffer = 0LL;
  IoStatusBlock = 0LL;
  CurrentThread = KeGetCurrentThread();
  v34 = CurrentThread;
  v3 = MiSwizzleInvalidPte(0LL);
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 952)) )
  {
    --CurrentThread->SpecialApcDisable;
    v4 = a1 + 1128;
    ExAcquirePushLockExclusiveEx(a1 + 1128, 0LL);
    KiLeaveGuardedRegionUnsafe(CurrentThread);
    v5 = *(_DWORD *)(a1 + 6936);
    SessionId = -1;
    v28 = v5;
    v7 = 0;
    v29 = 0;
    if ( v5 )
    {
      v8 = a1 + 6944;
      v9 = v5;
      v33 = a1 + 6944;
      do
      {
        v10 = *(_QWORD *)v8;
        if ( (*(_WORD *)(*(_QWORD *)v8 + 204LL) & 0x850) == 0x10 )
        {
          Event.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)393216;
          *(_QWORD *)&v31 = &Event.Header.WaitListHead.Blink;
          Event.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&Event.Header.WaitListHead.Blink;
          v32 = v7 | 0x200000000000uLL;
          *((_QWORD *)&v31 + 1) = a1;
          v11 = MiPageFileLargestBitmapsRun(v10);
          if ( v11 >= DWORD1(v32) )
          {
            do
            {
              MiQueueSyncModifiedWriterApc(
                a1,
                (__int64)v36,
                (__int64)MiTrimUnusedPageFileRegionsApc,
                (__int64)&Event.Header.WaitListHead,
                &Event.Header.WaitListHead);
              if ( !HIDWORD(v32) )
                break;
              *((_QWORD *)&InputBuffer + 1) = (unsigned __int64)DWORD2(v32) << 12;
              v38 = (unsigned __int64)HIDWORD(v32) << 12;
              *(_QWORD *)&InputBuffer = 0x100000000LL;
              KeResetEvent((PRKEVENT)&Event.Header.WaitListHead);
              Status = ZwFsControlFile(
                         *(HANDLE *)(v10 + 224),
                         0LL,
                         (PIO_APC_ROUTINE)MiIrpCompletionApcRoutine,
                         &Event.Header.WaitListHead,
                         &IoStatusBlock,
                         0x98208u,
                         &InputBuffer,
                         0x18u,
                         0LL,
                         0);
              if ( Status == 259 )
              {
                KeWaitForSingleObject(&Event.Header.WaitListHead, Executive, 0, 0, 0LL);
                Status = IoStatusBlock.Status;
              }
              updated = MiTransferSoftwarePte(v3, v10, DWORD2(v32), 3LL);
              v13 = updated;
              if ( qword_140C4DF80 )
              {
                if ( (updated & 0x10) != 0 )
                  v13 = updated & 0xFFFFFFFFFFFFFFEFuLL;
                else
                  v13 = updated & ~qword_140C4DF80;
              }
              v14 = HIDWORD(v13);
              if ( HIDWORD(v32) )
              {
                v15 = HIDWORD(v32);
                do
                {
                  MiReleasePageFileInfo(a1, updated, 2LL);
                  updated = MiUpdatePageFileHighInPte(updated, ++v14);
                  --v15;
                }
                while ( v15 );
              }
              if ( Status < 0 )
                break;
              KeResetEvent((PRKEVENT)&Event.Header.WaitListHead);
              *((_QWORD *)&v32 + 1) = (unsigned int)(HIDWORD(v32) + DWORD2(v32));
            }
            while ( (unsigned __int64)DWORD2(v32) < *(_QWORD *)v10 );
            v7 = v29;
            v8 = v33;
            v9 = v28;
          }
        }
        ++v7;
        v8 += 8LL;
        v29 = v7;
        v33 = v8;
      }
      while ( v7 < v9 );
      CurrentThread = v34;
      v4 = a1 + 1128;
      SessionId = -1;
    }
    --CurrentThread->SpecialApcDisable;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v4);
    Event.Header.SignalState = 0;
    v16 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v4) == 1 )
      SessionId = MmGetSessionIdEx(v16->ApcState.Process);
    --v16->SpecialApcDisable;
    ++v16->AbAllocationRegionCount;
    v17 = (char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary;
    LOBYTE(v26) = v16->AbAllocationRegionCount;
    v18 = v17 ^ 0x3F;
    while ( 1 )
    {
      v19 = !_BitScanReverse((unsigned int *)&v20, v18);
      Event.Header.LockNV = v20;
      if ( v19 )
        break;
      v21 = (__int64)&v16->LockEntries[v20];
      v18 &= ~(1 << v20);
      if ( (*(_BYTE *)(v21 + 26) & 1) != 0
        && (*(_DWORD *)(v21 + 32) & 1) == 0
        && (*(_QWORD *)(v21 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v21 + 40) == SessionId )
      {
        *(_BYTE *)(v21 + 26) &= ~1u;
        if ( *(_QWORD *)(v21 + 32) )
        {
          if ( v21 )
          {
            *(_BYTE *)(v21 + 32) |= 2u;
            if ( *(__int64 *)(v21 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v21);
            Event.Header.SignalState = *(_DWORD *)(v21 + 88) & 0x1FFFF;
            *(_DWORD *)(v21 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v21 + 25) &= ~1u;
            *(_QWORD *)(v21 + 32) = 0LL;
            v22 = (signed __int64)(v21 - (unsigned __int64)v16->LockEntries) / 96;
            if ( (_BYTE)v26 == 1 )
              v16->AbEntrySummary |= 1 << v22;
            else
              _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v22);
            goto LABEL_36;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v16, v4, SessionId, 0LL);
LABEL_36:
    --v16->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v16);
    v19 = v16->SpecialApcDisable++ == -1;
    if ( v19 && ($C459BD0D405E8E46662177FB3D0A143F *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
      KiCheckForKernelApcDelivery();
    KiLeaveGuardedRegionUnsafe(CurrentThread);
    MiContractWsSwapPageFile(a1);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 952));
    LOBYTE(v23) = 1;
    *(_QWORD *)(a1 + 1080) = KiQueryUnbiasedInterruptTime(v23);
    _InterlockedOr(v25, 0);
    *(_QWORD *)(a1 + 1072) = 0LL;
  }
  return PsDereferencePartition(*(_QWORD *)(a1 + 176));
}
