/*
 * XREFs of ?data@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBAPEBDXZ @ 0x18002C704
 * Callers:
 *     sub_18002384C @ 0x18002384C (sub_18002384C.c)
 *     sub_1800345D4 @ 0x1800345D4 (sub_1800345D4.c)
 *     sub_180035AD0 @ 0x180035AD0 (sub_180035AD0.c)
 *     sub_1800366DC @ 0x1800366DC (sub_1800366DC.c)
 * Callees:
 *     <none>
 */

// Microsoft VisualC v7/14 64bit runtime
_QWORD *__fastcall std::string::data(_QWORD *a1)
{
  if ( a1[3] >= 0x10uLL )
    return (_QWORD *)*a1;
  return a1;
}
