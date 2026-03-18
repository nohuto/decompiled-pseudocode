/*
 * XREFs of PspRundownUmsThreadForApcDelivery @ 0x14090A53C
 * Callers:
 *     PspGetSetContextInternal @ 0x1406F1830 (PspGetSetContextInternal.c)
 *     KiSuspendUmsThread @ 0x1408B9088 (KiSuspendUmsThread.c)
 *     PspUmsUnInitThread @ 0x14090621C (PspUmsUnInitThread.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeWaitForGate @ 0x1402CCFD8 (KeWaitForGate.c)
 *     ObReferenceObjectSafe @ 0x1402EEA30 (ObReferenceObjectSafe.c)
 *     KeInitializeGate @ 0x140322400 (KeInitializeGate.c)
 *     KeInitializeApc @ 0x140355490 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1403575C0 (KeInsertQueueApc.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PsLookupThreadByThreadId @ 0x1405DFE40 (PsLookupThreadByThreadId.c)
 *     KeClearUmsThreadKernelLock @ 0x1408B8C34 (KeClearUmsThreadKernelLock.c)
 *     KeSetUmsThreadKernelLock @ 0x1408B8DD8 (KeSetUmsThreadKernelLock.c)
 *     KeSynchronizeUmsThread @ 0x1408B8E48 (KeSynchronizeUmsThread.c)
 */

__int64 __fastcall PspRundownUmsThreadForApcDelivery(__int64 a1, _DWORD *a2, __int64 a3, char a4)
{
  __int64 v8; // r13
  char v9; // r15
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  NTSTATUS v14; // r14d
  __int64 v15; // rdi
  struct _DMA_ADAPTER *v16; // rdi
  HANDLE ThreadId[2]; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v18[22]; // [rsp+50h] [rbp-59h] BYREF
  PETHREAD Thread; // [rsp+110h] [rbp+67h] BYREF
  __int64 v20; // [rsp+120h] [rbp+77h]

  v20 = a3;
  memset(v18, 0, 0x80uLL);
  ThreadId[0] = 0LL;
  Thread = 0LL;
  v8 = *(_QWORD *)(a1 + 496);
  v9 = 0;
  result = KeSetUmsThreadKernelLock(a3, (unsigned __int64 *)ThreadId);
  v14 = result;
  if ( (int)result < 0 )
    return result;
  *a2 |= 4u;
  --*(_WORD *)(a1 + 486);
  if ( a4 )
  {
    v15 = _InterlockedExchange64((volatile __int64 *)(a1 + 504), -1LL);
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 504);
    if ( v15 == -1 )
      goto LABEL_18;
  }
  if ( !*(_QWORD *)(v8 + 72) )
  {
    *a2 |= 1u;
LABEL_19:
    v16 = (struct _DMA_ADAPTER *)Thread;
    goto LABEL_20;
  }
  if ( !v15 )
  {
    if ( ThreadId[0] )
    {
      v14 = PsLookupThreadByThreadId(ThreadId[0], &Thread);
      if ( v14 >= 0 )
      {
        v16 = (struct _DMA_ADAPTER *)Thread;
        v9 = 1;
        if ( Thread->Process != *(_KPROCESS **)(a1 + 544) )
        {
          *a2 |= 2u;
          goto LABEL_20;
        }
        goto LABEL_9;
      }
    }
LABEL_18:
    *a2 |= 2u;
    goto LABEL_19;
  }
  v16 = *(struct _DMA_ADAPTER **)(v15 + 96);
  ObReferenceObjectSafe((__int64)v16);
LABEL_9:
  KeInitializeGate((__int64)&v18[13]);
  v18[11] = a2;
  KeInitializeApc((__int64)v18, (__int64)v16, 0, (__int64)PspRelinquishUmsThreadSpecialApc, 0LL, 0LL, 0, 0LL);
  if ( KeInsertQueueApc((__int64)v18, (__int64)v16, a1, 2u) )
  {
    KeWaitForGate((__int64)&v18[13], 0);
    v14 = v18[12];
    v9 = 1;
    if ( SLODWORD(v18[12]) >= 0 && (*a2 & 1) != 0 )
    {
      KeSynchronizeUmsThread(a1, a4);
LABEL_21:
      HalPutDmaAdapter(v16);
      goto LABEL_22;
    }
  }
  else
  {
    *a2 |= 2u;
    v9 = 1;
  }
LABEL_20:
  KiLeaveGuardedRegionUnsafe(a1, v11, v12, v13);
  if ( v9 )
    goto LABEL_21;
LABEL_22:
  if ( v14 < 0 )
  {
    KeClearUmsThreadKernelLock(v20);
    *a2 &= ~4u;
  }
  return (unsigned int)v14;
}
