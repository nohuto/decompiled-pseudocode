/*
 * XREFs of sub_18003C514 @ 0x18003C514
 * Callers:
 *     sub_18003C500 @ 0x18003C500 (sub_18003C500.c)
 *     sub_18003E220 @ 0x18003E220 (sub_18003E220.c)
 * Callees:
 *     sub_18002B954 @ 0x18002B954 (sub_18002B954.c)
 *     sub_18003667C @ 0x18003667C (sub_18003667C.c)
 */

__int64 __fastcall sub_18003C514(__int64 a1, int a2)
{
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  if ( *(_QWORD *)(a1 + 104) != a1 + 104 )
    sub_18003667C((char *)qword_1800B3E30, a1 + 96, 0);
  if ( *(_QWORD *)(a1 + 128) != a1 + 128 )
    sub_18003667C((char *)qword_1800B3E38, a1 + 120, 0);
  return sub_18002B954((void **)a1, &v4, 4uLL, 0);
}
