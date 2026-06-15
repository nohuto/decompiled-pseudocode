/*
 * XREFs of ?IsLockedToPeriodicity@CSaDeviceProxy@@UEAA_NXZ @ 0x180052210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSaDeviceProxy::IsLockedToPeriodicity(CSaDeviceProxy *this)
{
  return *((_DWORD *)this + 21) != 0;
}
