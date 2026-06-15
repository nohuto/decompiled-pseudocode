/*
 * XREFs of sub_18003C07E @ 0x18003C07E
 * Callers:
 *     <none>
 * Callees:
 *     sub_180019300 @ 0x180019300 (sub_180019300.c)
 *     _CxxThrowException @ 0x18003AE03 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18003C07E(__int64 a1, __int64 a2)
{
  sub_180019300(a1, *(_QWORD **)(a2 + 128));
  throw;
}
