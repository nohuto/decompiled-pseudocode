/*
 * XREFs of sub_180120C9D @ 0x180120C9D
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002B790 @ 0x18002B790 (sub_18002B790.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180120C9D(__int64 a1, __int64 a2)
{
  sub_18002B790(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
