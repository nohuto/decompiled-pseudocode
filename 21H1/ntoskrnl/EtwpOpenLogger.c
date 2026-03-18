/*
 * XREFs of EtwpOpenLogger @ 0x1402D6EF8
 * Callers:
 *     NtTraceEvent @ 0x1402D5FC0 (NtTraceEvent.c)
 *     EtwpTraceMessageVa @ 0x1402D68C0 (EtwpTraceMessageVa.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403AA58C (EtwpLogSystemEventUnsafe.c)
 *     EtwpCCSwapFlush @ 0x1403AAD38 (EtwpCCSwapFlush.c)
 *     EtwSendTraceBuffer @ 0x1405A0370 (EtwSendTraceBuffer.c)
 *     EtwTraceEvent @ 0x1405A04E0 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1405A0988 (EtwTraceRaw.c)
 *     EtwpKernelTraceRundown @ 0x140780158 (EtwpKernelTraceRundown.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140236140 (ObGetCurrentIrql.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402C2730 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpCloseLogger @ 0x140377084 (EtwpCloseLogger.c)
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
  if ( a3 == 1 || ObGetCurrentIrql() < 2u )
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
