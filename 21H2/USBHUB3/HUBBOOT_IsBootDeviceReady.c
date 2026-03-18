/*
 * XREFs of HUBBOOT_IsBootDeviceReady @ 0x1C003DC70
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_IsBootDeviceReady @ 0x1C0030C48 (HUBMISC_IsBootDeviceReady.c)
 */

char __fastcall HUBBOOT_IsBootDeviceReady(__int64 a1, __int64 a2)
{
  return HUBMISC_IsBootDeviceReady(a2);
}
