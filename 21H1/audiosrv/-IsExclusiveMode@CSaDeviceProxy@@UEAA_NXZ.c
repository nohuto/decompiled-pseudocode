/*
 * XREFs of ?IsExclusiveMode@CSaDeviceProxy@@UEAA_NXZ @ 0x18004D910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSaDeviceProxy::IsExclusiveMode(CSaDeviceProxy *this)
{
  return *((_BYTE *)this + 64);
}
