/*
 * XREFs of unknown_libname_106 @ 0x180031650
 * Callers:
 *     sub_1800345D4 @ 0x1800345D4 (sub_1800345D4.c)
 *     sub_180035AD0 @ 0x180035AD0 (sub_180035AD0.c)
 *     sub_1800366DC @ 0x1800366DC (sub_1800366DC.c)
 * Callees:
 *     <none>
 */

// Microsoft VisualC v14 64bit runtime
_QWORD *__fastcall unknown_libname_106(_QWORD *a1, _BYTE *a2)
{
  unsigned __int64 v2; // r8

  v2 = -1LL;
  do
    ++v2;
  while ( a2[v2] );
  return std::string::append(a1, a2, v2);
}
