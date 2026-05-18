/*
 * XREFs of sub_180121486 @ 0x180121486
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003CF58 @ 0x18003CF58 (sub_18003CF58.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180121486(__int64 a1, __int64 a2)
{
  sub_18003CF58(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 96));
  throw;
}
