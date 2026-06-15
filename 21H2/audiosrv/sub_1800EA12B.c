/*
 * XREFs of sub_1800EA12B @ 0x1800EA12B
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x180074427 (_CxxThrowException.c)
 *     sub_1800EE0B4 @ 0x1800EE0B4 (sub_1800EE0B4.c)
 */

void __fastcall __noreturn sub_1800EA12B(__int64 a1, __int64 a2)
{
  sub_1800EE0B4(a1, *(_QWORD *)(a2 + 128));
  throw;
}
