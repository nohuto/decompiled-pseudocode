/*
 * XREFs of _EngIsCddDeviceBitmap@4 @ 0x1D4465
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall EngIsCddDeviceBitmap(int a1)
{
  return *(_DWORD *)(a1 + 60) & 0x100;
}
