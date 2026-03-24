/*
 * XREFs of MiTrimUnusedPageFileRegionsWorker @ 0x140267690
 * Callers:
 *     <none>
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x14023DD80 (MiUpdatePageFileHighInPte.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402546F4 (KiQueryUnbiasedInterruptTime.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiTransferSoftwarePte @ 0x14026A0D8 (MiTransferSoftwarePte.c)
 *     MiPageFileLargestBitmapsRun @ 0x14026AE68 (MiPageFileLargestBitmapsRun.c)
 *     KeResetEvent @ 0x14027BC40 (KeResetEvent.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     PsDereferencePartition @ 0x1402ABFDC (PsDereferencePartition.c)
 *     MiQueueSyncModifiedWriterApc @ 0x1402D3D2C (MiQueueSyncModifiedWriterApc.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ZwFsControlFile @ 0x1403FAAC0 (ZwFsControlFile.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiContractWsSwapPageFile @ 0x14071068C (MiContractWsSwapPageFile.c)
 */

__int64 __fastcall MiTrimUnusedPageFileRegionsWorker(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v3; // rsi
  ULONG_PTR v4; // r12
  unsigned int v5; // eax
  unsigned int SessionId; // r13d
  unsigned int v7; // edi
  __int64 *v8; // r14
  unsigned int v9; // r12d
  __int64 v10; // r13
  unsigned int v11; // eax
  __int64 updated; // rdi
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r14
  int v15; // ebx
  struct _KTHREAD *v16; // rdi
  int v17; // edx
  __int64 v18; // r8
  __int64 v19; // rdx
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  signed __int32 v26[8]; // [rsp+8h] [rbp-100h] BYREF
  int v27; // [rsp+58h] [rbp-B0h]
  NTSTATUS Status; // [rsp+5Ch] [rbp-ACh]
  unsigned int v29; // [rsp+60h] [rbp-A8h]
  unsigned int v30; // [rsp+64h] [rbp-A4h]
  struct _KEVENT Event; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v32; // [rsp+80h] [rbp-88h]
  __int128 v33; // [rsp+90h] [rbp-78h]
  __int64 *v34; // [rsp+A8h] [rbp-60h]
  struct _KTHREAD *v35; // [rsp+B0h] [rbp-58h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp-50h] BYREF
  int v37[22]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 InputBuffer; // [rsp+128h] [rbp+20h] BYREF
  unsigned __int64 v39; // [rsp+138h] [rbp+30h]

  memset(v37, 0, sizeof(v37));
  v39 = 0LL;
  Event.Header.WaitListHead = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  InputBuffer = 0LL;
  IoStatusBlock = 0LL;
  CurrentThread = KeGetCurrentThread();
  v35 = CurrentThread;
  v3 = MiSwizzleInvalidPte(0LL);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 952)) )
  {
    --CurrentThread->SpecialApcDisable;
    v4 = a1 + 1128;
    ExAcquirePushLockExclusiveEx(a1 + 1128, 0LL);
    KiLeaveGuardedRegionUnsafe(CurrentThread);
    v5 = *(_DWORD *)(a1 + 6936);
    SessionId = -1;
    v29 = v5;
    v7 = 0;
    v30 = 0;
    if ( v5 )
    {
      v8 = (__int64 *)(a1 + 6944);
      v9 = v5;
      v34 = (__int64 *)(a1 + 6944);
      do
      {
        v10 = *v8;
        if ( (*(_WORD *)(*v8 + 204) & 0x850) == 0x10 )
        {
          Event.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)393216;
          *(_QWORD *)&v32 = &Event.Header.WaitListHead.Blink;
          Event.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&Event.Header.WaitListHead.Blink;
          v33 = v7 | 0x200000000000uLL;
          *((_QWORD *)&v32 + 1) = a1;
          v11 = MiPageFileLargestBitmapsRun(v10);
          if ( v11 >= DWORD1(v33) )
          {
            do
            {
              MiQueueSyncModifiedWriterApc(
                a1,
                (int)v37,
                (int)MiTrimUnusedPageFileRegionsApc,
                (int)&Event.Header.WaitListHead,
                &Event.Header.WaitListHead);
              if ( !HIDWORD(v33) )
                break;
              *((_QWORD *)&InputBuffer + 1) = (unsigned __int64)DWORD2(v33) << 12;
              v39 = (unsigned __int64)HIDWORD(v33) << 12;
              *(_QWORD *)&InputBuffer = 0x100000000LL;
              KeResetEvent((PRKEVENT)&Event.Header.WaitListHead);
              Status = ZwFsControlFile(
                         *(HANDLE *)(v10 + 224),
                         0LL,
                         MiIrpCompletionApcRoutine,
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
              updated = MiTransferSoftwarePte(v3, v10, DWORD2(v33), 3LL);
              v13 = updated;
              if ( qword_140C4DF40 )
              {
                if ( (updated & 0x10) != 0 )
                  v13 = updated & 0xFFFFFFFFFFFFFFEFuLL;
                else
                  v13 = updated & ~qword_140C4DF40;
              }
              v14 = HIDWORD(v13);
              if ( HIDWORD(v33) )
              {
                v15 = HIDWORD(v33);
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
              *((_QWORD *)&v33 + 1) = (unsigned int)(HIDWORD(v33) + DWORD2(v33));
            }
            while ( (unsigned __int64)DWORD2(v33) < *(_QWORD *)v10 );
            v7 = v30;
            v8 = v34;
            v9 = v29;
          }
        }
        ++v7;
        ++v8;
        v30 = v7;
        v34 = v8;
      }
      while ( v7 < v9 );
      CurrentThread = v35;
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
    v18 = v4 & 0x7FFFFFFFFFFFFFFCLL;
    LOBYTE(v27) = v16->AbAllocationRegionCount;
    LODWORD(v19) = v17 ^ 0x3F;
    while ( 1 )
    {
      v20 = !_BitScanReverse((unsigned int *)&v21, v19);
      Event.Header.LockNV = v21;
      if ( v20 )
        break;
      v22 = (__int64)&v16->LockEntries[v21];
      v19 = ~(1 << v21) & (unsigned int)v19;
      if ( (*(_BYTE *)(v22 + 26) & 1) != 0
        && (*(_DWORD *)(v22 + 32) & 1) == 0
        && (*(_QWORD *)(v22 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v18
        && *(_DWORD *)(v22 + 40) == SessionId )
      {
        *(_BYTE *)(v22 + 26) &= ~1u;
        if ( *(_QWORD *)(v22 + 32) )
        {
          if ( v22 )
          {
            *(_BYTE *)(v22 + 32) |= 2u;
            if ( *(__int64 *)(v22 + 32) < 0 )
              KiAbEntryRemoveFromTree(v22, v19, v18);
            Event.Header.SignalState = *(_DWORD *)(v22 + 88) & 0x1FFFF;
            *(_DWORD *)(v22 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v22 + 25) &= ~1u;
            *(_QWORD *)(v22 + 32) = 0LL;
            v23 = (signed __int64)(v22 - (unsigned __int64)v16->LockEntries) / 96;
            if ( (_BYTE)v27 == 1 )
              v16->AbEntrySummary |= 1 << v23;
            else
              _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v23);
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
    v20 = v16->SpecialApcDisable++ == -1;
    if ( v20 && ($C459BD0D405E8E46662177FB3D0A143F *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
      KiCheckForKernelApcDelivery(v24);
    KiLeaveGuardedRegionUnsafe(CurrentThread);
    MiContractWsSwapPageFile(a1);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 952));
    *(_QWORD *)(a1 + 1080) = KiQueryUnbiasedInterruptTime();
    _InterlockedOr(v26, 0);
    *(_QWORD *)(a1 + 1072) = 0LL;
  }
  return PsDereferencePartition(*(_QWORD *)(a1 + 176));
}
