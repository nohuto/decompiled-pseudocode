/*
 * XREFs of EtwTraceCompletePowerRequest @ 0x1C005BCC0
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C005BA70 (xxxUserPowerCalloutWorker.c)
 *     QueuePowerRequest @ 0x1C005C560 (QueuePowerRequest.c)
 *     ?CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1C0125270 (-CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0130F40 (McTemplateK0pq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceCompletePowerRequest(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return McTemplateK0pq_EtwWriteTransfer(a1, &CompletedPowerRequest, a3, a1, a2);
  return result;
}
