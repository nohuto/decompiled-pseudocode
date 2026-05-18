/*
 * XREFs of sub_180127FC8 @ 0x180127FC8
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010A94 @ 0x180010A94 (sub_180010A94.c)
 *     sub_180067A1C @ 0x180067A1C (sub_180067A1C.c)
 *     sub_180067DB4 @ 0x180067DB4 (sub_180067DB4.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180127FC8(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  sub_180067A1C(*(_QWORD *)(a2 + 64), *(__int64 **)(a2 + 80), *(__int64 **)(a2 + 56));
  v3 = sub_180010A94(*(_QWORD *)(a2 + 64));
  sub_180067DB4(v3, *(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 72));
  throw;
}
