/*
 * XREFs of MiTrimUnusedPageFileRegionsWorker @ 0x140345720
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     PsDereferencePartition @ 0x140263688 (PsDereferencePartition.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140264D24 (KiQueryUnbiasedInterruptTime.c)
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     MiQueueSyncModifiedWriterApc @ 0x140331A5C (MiQueueSyncModifiedWriterApc.c)
 *     MiPageFileLargestBitmapsRun @ 0x14033A8B0 (MiPageFileLargestBitmapsRun.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MiTransferSoftwarePte @ 0x140347114 (MiTransferSoftwarePte.c)
 *     MiUpdatePageFileHighInPte @ 0x140348DE0 (MiUpdatePageFileHighInPte.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwFsControlFile @ 0x1403F8890 (ZwFsControlFile.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiContractWsSwapPageFile @ 0x1406F0C78 (MiContractWsSwapPageFile.c)
 */

void __fastcall MiTrimUnusedPageFileRegionsWorker(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v3; // rsi
  unsigned __int64 v4; // r12
  unsigned int v5; // eax
  unsigned int SessionId; // r13d
  unsigned int v7; // edi
  __int64 *v8; // r14
  unsigned int v9; // r12d
  __int64 v10; // r13
  unsigned int v11; // eax
  unsigned __int64 updated; // rdi
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
  signed __int32 v24[8]; // [rsp+8h] [rbp-100h] BYREF
  int v25; // [rsp+58h] [rbp-B0h]
  NTSTATUS Status; // [rsp+5Ch] [rbp-ACh]
  unsigned int v27; // [rsp+60h] [rbp-A8h]
  unsigned int v28; // [rsp+64h] [rbp-A4h]
  struct _KEVENT Event; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v30; // [rsp+80h] [rbp-88h]
  __int128 v31; // [rsp+90h] [rbp-78h]
  __int64 v32; // [rsp+A8h] [rbp-60h]
  struct _KTHREAD *v33; // [rsp+B0h] [rbp-58h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp-50h] BYREF
  int v35[24]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 InputBuffer; // [rsp+128h] [rbp+20h] BYREF
  unsigned __int64 v37; // [rsp+138h] [rbp+30h]

  memset(v35, 0, 0x58uLL);
  v37 = 0LL;
  Event.Header.WaitListHead = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  InputBuffer = 0LL;
  IoStatusBlock = 0LL;
  CurrentThread = KeGetCurrentThread();
  v33 = CurrentThread;
  v3 = MiSwizzleInvalidPte(0LL);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 952)) )
  {
    --CurrentThread->SpecialApcDisable;
    v4 = a1 + 1128;
    ExAcquirePushLockExclusiveEx(a1 + 1128, 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v5 = *(_DWORD *)(a1 + 6936);
    SessionId = -1;
    v27 = v5;
    v7 = 0;
    v28 = 0;
    if ( v5 )
    {
      v8 = (__int64 *)(a1 + 6944);
      v9 = v5;
      v32 = a1 + 6944;
      do
      {
        v10 = *v8;
        if ( (*(_WORD *)(*v8 + 204) & 0x850) == 0x10 )
        {
          Event.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)393216;
          *(_QWORD *)&v30 = &Event.Header.WaitListHead.Blink;
          Event.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&Event.Header.WaitListHead.Blink;
          v31 = v7 | 0x200000000000uLL;
          *((_QWORD *)&v30 + 1) = a1;
          v11 = MiPageFileLargestBitmapsRun(v10);
          if ( v11 >= DWORD1(v31) )
          {
            do
            {
              MiQueueSyncModifiedWriterApc(
                a1,
                (__int64)v35,
                (__int64)MiTrimUnusedPageFileRegionsApc,
                (__int64)&Event.Header.WaitListHead,
                &Event.Header.WaitListHead);
              if ( !HIDWORD(v31) )
                break;
              *((_QWORD *)&InputBuffer + 1) = (unsigned __int64)DWORD2(v31) << 12;
              v37 = (unsigned __int64)HIDWORD(v31) << 12;
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
              updated = MiTransferSoftwarePte(v3, v10, DWORD2(v31), 3LL);
              v13 = updated;
              if ( qword_140C4DDC0 )
              {
                if ( (updated & 0x10) != 0 )
                  v13 = updated & 0xFFFFFFFFFFFFFFEFuLL;
                else
                  v13 = updated & ~qword_140C4DDC0;
              }
              v14 = HIDWORD(v13);
              if ( HIDWORD(v31) )
              {
                v15 = HIDWORD(v31);
                do
                {
                  MiReleasePageFileInfo(a1, updated, 2);
                  updated = MiUpdatePageFileHighInPte(updated, ++v14);
                  --v15;
                }
                while ( v15 );
              }
              if ( Status < 0 )
                break;
              KeResetEvent((PRKEVENT)&Event.Header.WaitListHead);
              *((_QWORD *)&v31 + 1) = (unsigned int)(HIDWORD(v31) + DWORD2(v31));
            }
            while ( (unsigned __int64)DWORD2(v31) < *(_QWORD *)v10 );
            v7 = v28;
            v8 = (__int64 *)v32;
            v9 = v27;
          }
        }
        ++v7;
        ++v8;
        v28 = v7;
        v32 = (__int64)v8;
      }
      while ( v7 < v9 );
      CurrentThread = v33;
      v4 = a1 + 1128;
      SessionId = -1;
    }
    --CurrentThread->SpecialApcDisable;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v4);
    Event.Header.SignalState = 0;
    v16 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v4) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v16->ApcState.Process);
    --v16->SpecialApcDisable;
    ++v16->AbAllocationRegionCount;
    v17 = (char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary;
    LOBYTE(v25) = v16->AbAllocationRegionCount;
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
            if ( (_BYTE)v25 == 1 )
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
    KiAbThreadRemoveBoosts((ULONG_PTR)v16, v4, &Event.Header.SignalState);
    v19 = v16->SpecialApcDisable++ == -1;
    if ( v19 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
      KiCheckForKernelApcDelivery(v23);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    MiContractWsSwapPageFile(a1);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 952));
    *(_QWORD *)(a1 + 1080) = KiQueryUnbiasedInterruptTime();
    _InterlockedOr(v24, 0);
    *(_QWORD *)(a1 + 1072) = 0LL;
  }
  PsDereferencePartition(*(_QWORD *)(a1 + 176));
}
