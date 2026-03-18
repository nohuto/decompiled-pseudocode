/*
 * XREFs of rimQueueCompleteFrame @ 0x1C017D0D4
 * Callers:
 *     rimProcessCompleteFrame @ 0x1C017C3A8 (rimProcessCompleteFrame.c)
 * Callees:
 *     ?QueueFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z @ 0x1C017B758 (-QueueFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z.c)
 *     WPP_RECORDER_SF_qi @ 0x1C017BC94 (WPP_RECORDER_SF_qi.c)
 */

_QWORD *__fastcall rimQueueCompleteFrame(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // edx
  int v7; // r8d
  _QWORD *v8; // rdx
  _QWORD *result; // rax

  InputTraceLogging::RIM::QueueFrame((const struct RIMDEV *)a2, (const struct RIMCOMPLETEFRAME *)a3);
  *(LARGE_INTEGER *)(a3 + 72) = KeQueryPerformanceCounter(0LL);
  ++*(_QWORD *)(a2 + 192);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qi((unsigned int)&WPP_RECORDER_INITIALIZED, v6, v7, 16);
  v8 = *(_QWORD **)(a1 + 560);
  result = (_QWORD *)(a3 + 8);
  if ( *v8 != a1 + 552 )
    __fastfail(3u);
  *result = a1 + 552;
  *(_QWORD *)(a3 + 16) = v8;
  *v8 = result;
  *(_QWORD *)(a1 + 560) = result;
  return result;
}
