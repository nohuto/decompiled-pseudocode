/*
 * XREFs of EtwTraceCompletePowerRequest @ 0x1C00646A0
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C0064450 (xxxUserPowerCalloutWorker.c)
 *     QueuePowerRequest @ 0x1C0064F40 (QueuePowerRequest.c)
 *     ?CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1C011F2E0 (-CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C012AF50 (McTemplateK0pq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceCompletePowerRequest(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return McTemplateK0pq_EtwWriteTransfer(a1, &CompletedPowerRequest, a3, a1, a2);
  return result;
}
