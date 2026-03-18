/*
 * XREFs of HalRequestDeferredRecoveryServiceInterrupt @ 0x1404B8770
 * Callers:
 *     WheaRequestDeferredRecovery @ 0x1405B73E0 (WheaRequestDeferredRecovery.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x14026E120 (HalpInterruptSendIpi.c)
 */

__int64 HalRequestDeferredRecoveryServiceInterrupt()
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF
  __int64 v2; // [rsp+30h] [rbp-18h]

  v1 = 0LL;
  LODWORD(v1) = 5;
  v2 = 0LL;
  return HalpInterruptSendIpi(&v1, 0xE3u);
}
