/*
 * XREFs of sub_180126B49 @ 0x180126B49
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010A94 @ 0x180010A94 (sub_180010A94.c)
 *     sub_180098218 @ 0x180098218 (sub_180098218.c)
 *     sub_180098370 @ 0x180098370 (sub_180098370.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180126B49(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  sub_180098218(*(_QWORD *)(a2 + 32), *(_QWORD **)(a2 + 56), *(_QWORD **)(a2 + 48));
  v3 = sub_180010A94(*(_QWORD *)(a2 + 32));
  sub_180098370(v3, *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 40));
  throw;
}
