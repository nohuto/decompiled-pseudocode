/*
 * XREFs of sub_1800D4BAC @ 0x1800D4BAC
 * Callers:
 *     sub_180006FA0 @ 0x180006FA0 (sub_180006FA0.c)
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800D4D18 @ 0x1800D4D18 (sub_1800D4D18.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D4BAC(__int64 a1, __int64 a2, int a3, char a4, char a5, _OWORD *a6, _OWORD *a7)
{
  _OWORD *v10; // rax
  _OWORD *v11; // rax

  *(_QWORD *)a1 = &off_180146488;
  sub_1800D4D18(a1 + 8);
  *(_DWORD *)(a1 + 128) = a3;
  *(_BYTE *)(a1 + 132) = a4;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_BYTE *)(a1 + 144) = a5;
  *(_QWORD *)a1 = off_1801552A8;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  if ( a6 )
  {
    v10 = sub_180055F40(0x10uLL);
    if ( v10 )
      *v10 = *a6;
    *(_QWORD *)(a1 + 152) = v10;
    if ( !v10 )
      sub_1800B8610(-2147024882);
  }
  if ( a7 )
  {
    v11 = sub_180055F40(0x10uLL);
    if ( v11 )
      *v11 = *a7;
    *(_QWORD *)(a1 + 160) = v11;
    if ( !v11 )
    {
      sub_18006A148(*(void **)(a1 + 152));
      *(_QWORD *)(a1 + 152) = 0LL;
      sub_1800B8610(-2147024882);
    }
  }
  return a1;
}
