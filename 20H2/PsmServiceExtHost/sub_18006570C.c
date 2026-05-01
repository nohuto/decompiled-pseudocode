/*
 * XREFs of sub_18006570C @ 0x18006570C
 * Callers:
 *     sub_18003ACB0 @ 0x18003ACB0 (sub_18003ACB0.c)
 * Callees:
 *     sub_1800383E4 @ 0x1800383E4 (sub_1800383E4.c)
 *     sub_18003850C @ 0x18003850C (sub_18003850C.c)
 *     sub_18003A22C @ 0x18003A22C (sub_18003A22C.c)
 *     sub_180064130 @ 0x180064130 (sub_180064130.c)
 *     sub_1800646F4 @ 0x1800646F4 (sub_1800646F4.c)
 *     sub_180065FF4 @ 0x180065FF4 (sub_180065FF4.c)
 *     sub_1800667C4 @ 0x1800667C4 (sub_1800667C4.c)
 */

__int64 __fastcall sub_18006570C(__int64 a1, _QWORD *a2, unsigned __int64 *a3)
{
  unsigned __int64 v6; // rax
  __int64 v7; // r8
  void *v8; // rbx
  unsigned int v9; // edi
  unsigned __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // r8
  __int128 v14; // [rsp+20h] [rbp-18h] BYREF
  void *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0LL;
  v6 = (unsigned __int64)sub_18003A22C(8u, 0x130uLL);
  v8 = (void *)v6;
  if ( v6 )
  {
    v10 = v6;
    v14 = 0LL;
    if ( (v6 & 3) != 0 )
      sub_1800667C4();
    v11 = sub_1800646F4((void **)&v14, a1, v7, v6 >> 2);
    v9 = v11;
    if ( v11 >= 0 )
    {
      sub_180064130((__int64)v8, a2, &v14);
      v8 = 0LL;
      *a3 = v10;
      v9 = 0;
      v10 = 0LL;
    }
    else
    {
      sub_180065FF4(retaddr, 325LL, v12, (unsigned int)v11);
    }
    if ( *((_QWORD *)&v14 + 1) )
      sub_1800383E4(*((void **)&v14 + 1));
    if ( (_QWORD)v14 )
      sub_1800383E4((void *)v14);
    if ( v10 )
      sub_18003850C(v8);
  }
  else
  {
    v9 = -2147024882;
    sub_180065FF4(retaddr, 322LL, v7, 2147942414LL);
  }
  return v9;
}
