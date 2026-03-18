/*
 * XREFs of ?IsTouchpadQuery@@YGHKPAG@Z @ 0x9D122
 * Callers:
 *     ?OpenDeviceCfgKey@@YGJKPAGKPAPAXH@Z @ 0x9CFD8 (-OpenDeviceCfgKey@@YGJKPAGKPAPAXH@Z.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall IsTouchpadQuery(int a1, const void *a2)
{
  int v2; // esi

  v2 = 0;
  if ( a1 == 122 )
    return RtlCompareMemory(L"\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad", a2, 0x7Au) == 122;
  if ( a1 == 136 )
    return RtlCompareMemory(L"\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad\\Status", a2, 0x88u) == 136;
  return v2;
}
