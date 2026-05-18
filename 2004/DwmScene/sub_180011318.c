/*
 * XREFs of sub_180011318 @ 0x180011318
 * Callers:
 *     sub_18011919C @ 0x18011919C (sub_18011919C.c)
 * Callees:
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 */

__int64 __fastcall sub_180011318(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  sub_18001269C(a1, a2);
  return a1;
}
