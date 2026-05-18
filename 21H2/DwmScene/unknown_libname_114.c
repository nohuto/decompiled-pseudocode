/*
 * XREFs of unknown_libname_114 @ 0x180125D94
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_98 @ 0x18000F360 (unknown_libname_98.c)
 */

// Microsoft VisualC v14 64bit runtime
void __fastcall unknown_libname_114(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    unknown_libname_98((_QWORD *)(a2 + 112));
  }
}
