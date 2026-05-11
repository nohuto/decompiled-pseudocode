/*
 * XREFs of IsDevicePoweredUp @ 0x1C0023524
 * Callers:
 *     PinAddPinToList @ 0x1C000222C (PinAddPinToList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsDevicePoweredUp(__int64 a1)
{
  return *(_DWORD *)(*(_QWORD *)(a1 + 16) + 528LL) == 1;
}
