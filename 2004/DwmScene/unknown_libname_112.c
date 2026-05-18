/*
 * XREFs of unknown_libname_112 @ 0x1801204C4
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_96 @ 0x18000F280 (unknown_libname_96.c)
 */

// Microsoft VisualC v14 64bit runtime
void __fastcall unknown_libname_112(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    unknown_libname_96((_QWORD *)(a2 + 112));
  }
}
