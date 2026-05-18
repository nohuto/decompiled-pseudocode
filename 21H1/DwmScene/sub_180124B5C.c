/*
 * XREFs of sub_180124B5C @ 0x180124B5C
 * Callers:
 *     <none>
 * Callees:
 *     sub_180067A1C @ 0x180067A1C (sub_180067A1C.c)
 *     sub_180067DB4 @ 0x180067DB4 (sub_180067DB4.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180124B5C(__int64 a1, __int64 a2)
{
  sub_180067A1C(*(_QWORD *)(a2 + 104), *(__int64 **)(a2 + 56), *(__int64 **)(a2 + 96));
  sub_180067DB4(*(_QWORD *)(a2 + 120), *(_QWORD *)(a2 + 112), *(_QWORD *)(a2 + 64));
  throw;
}
