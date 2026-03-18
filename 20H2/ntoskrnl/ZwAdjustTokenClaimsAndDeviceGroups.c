/*
 * XREFs of ZwAdjustTokenClaimsAndDeviceGroups @ 0x1403F8F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAdjustTokenClaimsAndDeviceGroups(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
