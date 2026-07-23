/*
 * XREFs of MiTrimUnusedPageFileRegionsWorker @ 0x14034E9A0
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     MiUpdatePageFileHighInPte @ 0x140228500 (MiUpdatePageFileHighInPte.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14023F4A4 (KiQueryUnbiasedInterruptTime.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     PsDereferencePartition @ 0x1402D4730 (PsDereferencePartition.c)
 *     MiQueueSyncModifiedWriterApc @ 0x1403231BC (MiQueueSyncModifiedWriterApc.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     MiPageFileLargestBitmapsRun @ 0x14034D3A4 (MiPageFileLargestBitmapsRun.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     MiTransferSoftwarePte @ 0x140350D84 (MiTransferSoftwarePte.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwFsControlFile @ 0x1403F2A50 (ZwFsControlFile.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiContractWsSwapPageFile @ 0x140655F58 (MiContractWsSwapPageFile.c)
 */

void __fastcall MiTrimUnusedPageFileRegionsWorker(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v3; // rsi
  unsigned __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // eax
  unsigned int SessionId; // r13d
  unsigned int v10; // edi
  __int64 *v11; // r14
  unsigned int v12; // r12d
  __int64 v13; // r13
  unsigned int v14; // eax
  __int64 updated; // rdi
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r14
  int v18; // ebx
  struct _KTHREAD *v19; // rdi
  int v20; // edx
  unsigned int v21; // edx
  bool v22; // zf
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  signed __int32 v30[8]; // [rsp+8h] [rbp-100h] BYREF
  int v31; // [rsp+58h] [rbp-B0h]
  NTSTATUS Status; // [rsp+5Ch] [rbp-ACh]
  unsigned int v33; // [rsp+60h] [rbp-A8h]
  unsigned int v34; // [rsp+64h] [rbp-A4h]
  struct _KEVENT Event; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v36; // [rsp+80h] [rbp-88h]
  __int128 v37; // [rsp+90h] [rbp-78h]
  __int64 v38; // [rsp+A8h] [rbp-60h]
  struct _KTHREAD *v39; // [rsp+B0h] [rbp-58h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp-50h] BYREF
  int v41[24]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 InputBuffer; // [rsp+128h] [rbp+20h] BYREF
  unsigned __int64 v43; // [rsp+138h] [rbp+30h]

  memset(v41, 0, 0x58uLL);
  v43 = 0LL;
  Event.Header.WaitListHead = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  InputBuffer = 0LL;
  IoStatusBlock = 0LL;
  CurrentThread = KeGetCurrentThread();
  v39 = CurrentThread;
  v3 = MiSwizzleInvalidPte(0LL);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 952)) )
  {
    --CurrentThread->SpecialApcDisable;
    v4 = a1 + 1128;
    ExAcquirePushLockExclusiveEx(a1 + 1128, 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v5, v6, v7);
    v8 = *(_DWORD *)(a1 + 6936);
    SessionId = -1;
    v33 = v8;
    v10 = 0;
    v34 = 0;
    if ( v8 )
    {
      v11 = (__int64 *)(a1 + 6944);
      v12 = v8;
      v38 = a1 + 6944;
      do
      {
        v13 = *v11;
        if ( (*(_WORD *)(*v11 + 204) & 0x850) == 0x10 )
        {
          Event.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)393216;
          *(_QWORD *)&v36 = &Event.Header.WaitListHead.Blink;
          Event.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&Event.Header.WaitListHead.Blink;
          v37 = v10 | 0x200000000000uLL;
          *((_QWORD *)&v36 + 1) = a1;
          v14 = MiPageFileLargestBitmapsRun(v13);
          if ( v14 >= DWORD1(v37) )
          {
            do
            {
              MiQueueSyncModifiedWriterApc(
                a1,
                (__int64)v41,
                (__int64)MiTrimUnusedPageFileRegionsApc,
                (__int64)&Event.Header.WaitListHead,
                &Event.Header.WaitListHead);
              if ( !HIDWORD(v37) )
                break;
              *((_QWORD *)&InputBuffer + 1) = (unsigned __int64)DWORD2(v37) << 12;
              v43 = (unsigned __int64)HIDWORD(v37) << 12;
              *(_QWORD *)&InputBuffer = 0x100000000LL;
              KeResetEvent((PRKEVENT)&Event.Header.WaitListHead);
              Status = ZwFsControlFile(
                         *(HANDLE *)(v13 + 224),
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
              updated = MiTransferSoftwarePte(v3, v13, DWORD2(v37), 3LL);
              v16 = updated;
              if ( qword_140C4DE80 )
              {
                if ( (updated & 0x10) != 0 )
                  v16 = updated & 0xFFFFFFFFFFFFFFEFuLL;
                else
                  v16 = updated & ~qword_140C4DE80;
              }
              v17 = HIDWORD(v16);
              if ( HIDWORD(v37) )
              {
                v18 = HIDWORD(v37);
                do
                {
                  MiReleasePageFileInfo(a1, updated, 2LL);
                  updated = MiUpdatePageFileHighInPte(updated, ++v17);
                  --v18;
                }
                while ( v18 );
              }
              if ( Status < 0 )
                break;
              KeResetEvent((PRKEVENT)&Event.Header.WaitListHead);
              *((_QWORD *)&v37 + 1) = (unsigned int)(HIDWORD(v37) + DWORD2(v37));
            }
            while ( (unsigned __int64)DWORD2(v37) < *(_QWORD *)v13 );
            v10 = v34;
            v11 = (__int64 *)v38;
            v12 = v33;
          }
        }
        ++v10;
        ++v11;
        v34 = v10;
        v38 = (__int64)v11;
      }
      while ( v10 < v12 );
      CurrentThread = v39;
      v4 = a1 + 1128;
      SessionId = -1;
    }
    --CurrentThread->SpecialApcDisable;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v4);
    Event.Header.SignalState = 0;
    v19 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v4) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v19->ApcState.Process);
    --v19->SpecialApcDisable;
    ++v19->AbAllocationRegionCount;
    v20 = (char)v19->AbEntrySummary | (char)v19->AbOrphanedEntrySummary;
    LOBYTE(v31) = v19->AbAllocationRegionCount;
    v21 = v20 ^ 0x3F;
    while ( 1 )
    {
      v22 = !_BitScanReverse((unsigned int *)&v23, v21);
      Event.Header.LockNV = v23;
      if ( v22 )
        break;
      v24 = (__int64)&v19->LockEntries[v23];
      v21 &= ~(1 << v23);
      if ( (*(_BYTE *)(v24 + 26) & 1) != 0
        && (*(_DWORD *)(v24 + 32) & 1) == 0
        && (*(_QWORD *)(v24 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v24 + 40) == SessionId )
      {
        *(_BYTE *)(v24 + 26) &= ~1u;
        if ( *(_QWORD *)(v24 + 32) )
        {
          if ( v24 )
          {
            *(_BYTE *)(v24 + 32) |= 2u;
            if ( *(__int64 *)(v24 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v24);
            Event.Header.SignalState = *(_DWORD *)(v24 + 88) & 0x1FFFF;
            *(_DWORD *)(v24 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v24 + 25) &= ~1u;
            *(_QWORD *)(v24 + 32) = 0LL;
            v25 = (signed __int64)(v24 - (unsigned __int64)v19->LockEntries) / 96;
            if ( (_BYTE)v31 == 1 )
              v19->AbEntrySummary |= 1 << v25;
            else
              _InterlockedOr8((volatile signed __int8 *)&v19->AbOrphanedEntrySummary, 1 << v25);
            goto LABEL_36;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v19->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v19, v4, SessionId, 0LL);
LABEL_36:
    --v19->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v19, v4, &Event.Header.SignalState);
    v22 = v19->SpecialApcDisable++ == -1;
    if ( v22 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v19->ApcState.ApcListHead[0].Flink != &v19->152 )
      KiCheckForKernelApcDelivery(v27);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v26, v28, v29);
    MiContractWsSwapPageFile(a1);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 952));
    *(_QWORD *)(a1 + 1080) = KiQueryUnbiasedInterruptTime();
    _InterlockedOr(v30, 0);
    *(_QWORD *)(a1 + 1072) = 0LL;
  }
  PsDereferencePartition(*(_QWORD *)(a1 + 176));
}
