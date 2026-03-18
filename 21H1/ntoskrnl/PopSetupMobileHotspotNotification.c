/*
 * XREFs of PopSetupMobileHotspotNotification @ 0x1407BEDFC
 * Callers:
 *     PoInitSystem @ 0x140A3BEEC (PoInitSystem.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x1406DD990 (ExSubscribeWnfStateChange.c)
 */

__int64 PopSetupMobileHotspotNotification()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  return ExSubscribeWnfStateChange(
           (__int64)&v1,
           (__int64)&WNF_SEB_MOBILE_HOTSPOT,
           1,
           0,
           (__int64)PopWnfMobileHotspotCallback,
           0LL);
}
