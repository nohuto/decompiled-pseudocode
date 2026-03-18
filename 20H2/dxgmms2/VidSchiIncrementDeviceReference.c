/*
 * XREFs of VidSchiIncrementDeviceReference @ 0x1C00103E4
 * Callers:
 *     VidSchiCreateDeviceInternal @ 0x1C0068C00 (VidSchiCreateDeviceInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiIncrementDeviceReference(__int64 a1)
{
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 24));
}
