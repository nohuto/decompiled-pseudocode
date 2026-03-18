/*
 * XREFs of sub_1C00317D8 @ 0x1C00317D8
 * Callers:
 *     sub_1C000E9B0 @ 0x1C000E9B0 (sub_1C000E9B0.c)
 *     sub_1C0033288 @ 0x1C0033288 (sub_1C0033288.c)
 *     sub_1C0033368 @ 0x1C0033368 (sub_1C0033368.c)
 *     sub_1C003E230 @ 0x1C003E230 (sub_1C003E230.c)
 *     sub_1C0041094 @ 0x1C0041094 (sub_1C0041094.c)
 *     sub_1C004204C @ 0x1C004204C (sub_1C004204C.c)
 *     sub_1C0043F70 @ 0x1C0043F70 (sub_1C0043F70.c)
 *     sub_1C0043FF0 @ 0x1C0043FF0 (sub_1C0043FF0.c)
 *     sub_1C0044090 @ 0x1C0044090 (sub_1C0044090.c)
 *     sub_1C0044230 @ 0x1C0044230 (sub_1C0044230.c)
 *     sub_1C0044420 @ 0x1C0044420 (sub_1C0044420.c)
 *     sub_1C0044590 @ 0x1C0044590 (sub_1C0044590.c)
 *     sub_1C00446D4 @ 0x1C00446D4 (sub_1C00446D4.c)
 *     sub_1C005C970 @ 0x1C005C970 (sub_1C005C970.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 */

LONG __fastcall sub_1C00317D8(__int64 a1, __int64 a2)
{
  struct _KSEMAPHORE *v3; // rbx

  v3 = (struct _KSEMAPHORE *)sub_1C000F050(a1);
  sub_1C000F050(*(_QWORD *)(a2 + 8));
  *(_DWORD *)(a2 + 48) = 1734964085;
  v3[41].Header.WaitListHead.Blink = 0LL;
  return KeReleaseSemaphore(v3 + 155, 16, 1, 0);
}
