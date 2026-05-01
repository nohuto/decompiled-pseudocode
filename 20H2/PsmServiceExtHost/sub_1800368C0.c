/*
 * XREFs of sub_1800368C0 @ 0x1800368C0
 * Callers:
 *     sub_180036430 @ 0x180036430 (sub_180036430.c)
 *     sub_180036450 @ 0x180036450 (sub_180036450.c)
 * Callees:
 *     sub_18002B954 @ 0x18002B954 (sub_18002B954.c)
 *     sub_18003667C @ 0x18003667C (sub_18003667C.c)
 */

__int64 __fastcall sub_1800368C0(__int64 a1, int a2)
{
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  if ( *(_QWORD *)(a1 + 96) != a1 + 96 )
    sub_18003667C((char *)qword_1800B3E30, a1 + 88, 0);
  if ( *(_QWORD *)(a1 + 120) != a1 + 120 )
    sub_18003667C((char *)qword_1800B3E38, a1 + 112, 0);
  return sub_18002B954((void **)a1, &v4, 4uLL, 0);
}
