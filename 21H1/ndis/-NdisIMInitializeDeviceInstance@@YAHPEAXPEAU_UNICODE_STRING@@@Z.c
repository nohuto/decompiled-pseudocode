/*
 * XREFs of ?NdisIMInitializeDeviceInstance@@YAHPEAXPEAU_UNICODE_STRING@@@Z @ 0x1C0065800
 * Callers:
 *     <none>
 * Callees:
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C0066100 (NdisIMInitializeDeviceInstanceEx.c)
 */

NDIS_STATUS __fastcall NdisIMInitializeDeviceInstance(void *a1, struct _UNICODE_STRING *a2)
{
  return NdisIMInitializeDeviceInstanceEx(a1, a2, 0LL);
}
