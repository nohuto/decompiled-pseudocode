/*
 * XREFs of sub_18003CA32 @ 0x18003CA32
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002FB78 @ 0x18002FB78 (sub_18002FB78.c)
 *     _CxxThrowException @ 0x18003AE03 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18003CA32(__int64 a1, __int64 a2)
{
  sub_18002FB78(*(_QWORD *)(a2 + 112), *(_QWORD ***)(a2 + 136));
  throw;
}
