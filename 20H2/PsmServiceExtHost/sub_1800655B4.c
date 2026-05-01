/*
 * XREFs of sub_1800655B4 @ 0x1800655B4
 * Callers:
 *     sub_1800644CC @ 0x1800644CC (sub_1800644CC.c)
 * Callees:
 *     sub_1800383E4 @ 0x1800383E4 (sub_1800383E4.c)
 *     sub_18003850C @ 0x18003850C (sub_18003850C.c)
 *     sub_18003A22C @ 0x18003A22C (sub_18003A22C.c)
 *     memset @ 0x18004683A (memset.c)
 *     sub_1800646F4 @ 0x1800646F4 (sub_1800646F4.c)
 *     sub_180065FF4 @ 0x180065FF4 (sub_180065FF4.c)
 *     sub_1800667C4 @ 0x1800667C4 (sub_1800667C4.c)
 */

__int64 __fastcall sub_1800655B4(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v6; // rax
  __int64 v7; // r8
  _WORD *v8; // rbx
  unsigned int v9; // edi
  int v10; // eax
  __int64 v11; // r8
  void *v12; // rbp
  void *v13; // rsi
  _WORD *v14; // rax
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  *a3 = 0LL;
  v6 = (unsigned __int64)sub_18003A22C(8u, 0x78uLL);
  v8 = (_WORD *)v6;
  if ( v6 )
  {
    v16 = 0LL;
    if ( (v6 & 3) != 0 )
      sub_1800667C4();
    v10 = sub_1800646F4((void **)&v16, a1, v7, v6 >> 2);
    v9 = v10;
    if ( v10 >= 0 )
    {
      *(_DWORD *)v8 = 1;
      v12 = 0LL;
      *((_QWORD *)v8 + 1) = *a2;
      *a2 = 0LL;
      v13 = 0LL;
      *((_QWORD *)v8 + 2) = v16;
      *(_QWORD *)&v16 = 0LL;
      *((_QWORD *)v8 + 3) = *((_QWORD *)&v16 + 1);
      *((_QWORD *)&v16 + 1) = 0LL;
      memset(v8 + 16, 0, 0x58uLL);
      v8[16] = 88;
      *((_DWORD *)v8 + 9) = 1;
      memset(v8 + 20, 0, 0x50uLL);
      v14 = v8;
      v8 = 0LL;
      v9 = 0;
      *a3 = v14;
    }
    else
    {
      sub_180065FF4(retaddr, 325LL, v11, (unsigned int)v10);
      v12 = (void *)*((_QWORD *)&v16 + 1);
      v13 = (void *)v16;
    }
    if ( v12 )
      sub_1800383E4(v12);
    if ( v13 )
      sub_1800383E4(v13);
    if ( v8 )
      sub_18003850C(v8);
  }
  else
  {
    v9 = -2147024882;
    sub_180065FF4(retaddr, 322LL, v7, 2147942414LL);
  }
  return v9;
}
