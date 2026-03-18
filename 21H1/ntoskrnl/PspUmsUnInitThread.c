/*
 * XREFs of PspUmsUnInitThread @ 0x14090621C
 * Callers:
 *     PspExitThread @ 0x1407064A0 (PspExitThread.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     PsTerminateProcess @ 0x1406E666C (PsTerminateProcess.c)
 *     KeSetUmsThreadKernelLock @ 0x1408B8DD8 (KeSetUmsThreadKernelLock.c)
 *     KeUnInitializeUmsThread @ 0x1408B8EA8 (KeUnInitializeUmsThread.c)
 *     KeUpdateUmsThreadState @ 0x1408B8F1C (KeUpdateUmsThreadState.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14090A1A8 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14090A53C (PspRundownUmsThreadForApcDelivery.c)
 */

__int64 __fastcall PspUmsUnInitThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  char v8; // di
  int v9; // eax
  int updated; // edi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _DMA_ADAPTER *v14; // rsi
  int v16; // [rsp+30h] [rbp+8h] BYREF

  v16 = 0;
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
      v9 = PspRundownUmsThreadForApcDelivery(a1, &v16, v7, a4);
      if ( (*(_DWORD *)(a1 + 1296) & 0x10000) != 0 )
        v9 = 0;
      if ( v9 < 0 || (v16 & 8) == 0 && (v16 & 1) == 0 )
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
    KiLeaveGuardedRegionUnsafe(a1, v11, v12, v13);
  }
  v14 = *(struct _DMA_ADAPTER **)(*(_QWORD *)(a1 + 496) + 16LL);
  KeUnInitializeUmsThread(a1);
  if ( v14 )
    HalPutDmaAdapter(v14);
  if ( updated < 0 && (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x4000000800000000LL) == 0 )
    PsTerminateProcess((ULONG_PTR)KeGetCurrentThread()->ApcState.Process);
  return (unsigned int)updated;
}
