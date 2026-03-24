/*
 * XREFs of VidSchiIncrementDeviceReference @ 0x1C00115A4
 * Callers:
 *     VidSchiCreateDeviceInternal @ 0x1C00816A0 (VidSchiCreateDeviceInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiIncrementDeviceReference(__int64 a1)
{
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 24));
}
