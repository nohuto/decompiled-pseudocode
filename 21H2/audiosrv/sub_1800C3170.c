/*
 * XREFs of sub_1800C3170 @ 0x1800C3170
 * Callers:
 *     <none>
 * Callees:
 *     sub_180048790 @ 0x180048790 (sub_180048790.c)
 *     sub_1800C3DF0 @ 0x1800C3DF0 (sub_1800C3DF0.c)
 */

__int64 __fastcall sub_1800C3170(struct _RTL_CRITICAL_SECTION *a1, __int64 a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  sub_180048790(&v4, a2);
  return sub_1800C3DF0(a1 + 3);
}
