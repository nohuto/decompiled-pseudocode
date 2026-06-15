/*
 * XREFs of sub_18003C023 @ 0x18003C023
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001A100 @ 0x18001A100 (sub_18001A100.c)
 *     _CxxThrowException @ 0x18003AE03 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18003C023(__int64 a1, __int64 a2)
{
  sub_18001A100(a1, *(void **)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
