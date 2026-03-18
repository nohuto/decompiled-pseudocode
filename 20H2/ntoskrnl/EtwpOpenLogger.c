/*
 * XREFs of EtwpOpenLogger @ 0x140245C78
 * Callers:
 *     NtTraceEvent @ 0x140244D40 (NtTraceEvent.c)
 *     EtwpTraceMessageVa @ 0x140245640 (EtwpTraceMessageVa.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403A9378 (EtwpLogSystemEventUnsafe.c)
 *     EtwpCCSwapFlush @ 0x1403A9B28 (EtwpCCSwapFlush.c)
 *     EtwSendTraceBuffer @ 0x1405A4500 (EtwSendTraceBuffer.c)
 *     EtwTraceEvent @ 0x1405A4670 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1405A4B18 (EtwTraceRaw.c)
 *     EtwpKernelTraceRundown @ 0x14078D08C (EtwpKernelTraceRundown.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140202F70 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ObGetCurrentIrql @ 0x1402473F0 (ObGetCurrentIrql.c)
 *     EtwpCloseLogger @ 0x140379D38 (EtwpCloseLogger.c)
 */

__int64 __fastcall EtwpOpenLogger(unsigned int a1, __int64 a2, char a3, _BYTE *a4)
{
  __int64 v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rbp
  __int64 v9; // r8
  __int64 result; // rax

  v4 = a1;
  *a4 = 0;
  if ( a3 == 1 || (unsigned __int8)ObGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = v4;
    if ( !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a2 + 448) + 8 * v4), 1u) )
    {
      KeLeaveCriticalRegion();
      return 0LL;
    }
    *a4 = 1;
  }
  else
  {
    v8 = v4;
  }
  result = *(_QWORD *)(*(_QWORD *)(a2 + 456) + 8 * v8);
  if ( (result & 1) != 0 )
  {
    LOBYTE(v9) = *a4;
    EtwpCloseLogger((unsigned int)v4, a2, v9);
    return 0LL;
  }
  return result;
}
