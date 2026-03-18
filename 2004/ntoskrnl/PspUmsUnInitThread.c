/*
 * XREFs of PspUmsUnInitThread @ 0x1409074CC
 * Callers:
 *     PspExitThread @ 0x1406B05E0 (PspExitThread.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     PsTerminateProcess @ 0x14065797C (PsTerminateProcess.c)
 *     KeSetUmsThreadKernelLock @ 0x1408BA0F8 (KeSetUmsThreadKernelLock.c)
 *     KeUnInitializeUmsThread @ 0x1408BA1C8 (KeUnInitializeUmsThread.c)
 *     KeUpdateUmsThreadState @ 0x1408BA23C (KeUpdateUmsThreadState.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14090B458 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14090B7EC (PspRundownUmsThreadForApcDelivery.c)
 */

__int64 __fastcall PspUmsUnInitThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  char v8; // di
  int v9; // eax
  int updated; // edi
  struct _DMA_ADAPTER *v11; // rsi
  int v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = 0;
  CurrentThread = (struct _KTHREAD *)a1;
  if ( !a1 )
    CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->Header.Reserved1 & 0x40) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 496);
    v7 = *(_QWORD *)v6;
    if ( (*(_DWORD *)(v6 + 80) & 4) != 0 )
    {
      v8 = 1;
      LOBYTE(a4) = 1;
      v9 = PspRundownUmsThreadForApcDelivery(a1, &v13, v7, a4);
      if ( (*(_DWORD *)(a1 + 1296) & 0x10000) != 0 )
        v9 = 0;
      if ( v9 < 0 || (v13 & 8) == 0 && (v13 & 1) == 0 )
        v8 = (*(_DWORD *)(a1 + 1296) & 0x10000) != 0;
    }
    else
    {
      KeSetUmsThreadKernelLock(v7, 0LL);
      v8 = 1;
    }
    updated = KeUpdateUmsThreadState(v7, 2, v8);
  }
  else
  {
    --*(_WORD *)(a1 + 486);
    updated = PspDisassociateUmsThreadFromPrimary((PETHREAD)a1, 0LL);
    KiLeaveGuardedRegionUnsafe(a1);
  }
  v11 = *(struct _DMA_ADAPTER **)(*(_QWORD *)(a1 + 496) + 16LL);
  KeUnInitializeUmsThread(a1);
  if ( v11 )
    HalPutDmaAdapter(v11);
  if ( updated < 0 && (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x4000000800000000LL) == 0 )
    PsTerminateProcess((ULONG_PTR)KeGetCurrentThread()->ApcState.Process);
  return (unsigned int)updated;
}
