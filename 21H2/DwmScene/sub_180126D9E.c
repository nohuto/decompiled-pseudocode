/*
 * XREFs of sub_180126D9E @ 0x180126D9E
 * Callers:
 *     <none>
 * Callees:
 *     sub_180042828 @ 0x180042828 (sub_180042828.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180126D9E(__int64 a1, __int64 a2)
{
  sub_180042828(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 96));
  throw;
}
