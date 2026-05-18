/*
 * XREFs of sub_1800A6664 @ 0x1800A6664
 * Callers:
 *     sub_1800B0380 @ 0x1800B0380 (sub_1800B0380.c)
 * Callees:
 *     sub_1800A36E8 @ 0x1800A36E8 (sub_1800A36E8.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800A6664(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rax
  const void ***v5; // rsi
  const void **v6; // rbx
  const void ***v7; // rax
  const void **i; // rax
  const void **j; // rdx
  char v11; // [rsp+30h] [rbp-28h]
  _BYTE v12[24]; // [rsp+40h] [rbp-18h] BYREF

  *(_OWORD *)a2 = 0LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  v4 = operator new(0x40uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *a2 = (__int64)v4;
  v5 = *(const void ****)(a1 + 18560);
  v6 = *v5;
  while ( v6 != (const void **)v5 )
  {
    sub_1800A36E8(a2, (__int64)v12, 0, v6 + 4, v11);
    v7 = (const void ***)v6[2];
    if ( *((_BYTE *)v7 + 25) )
    {
      for ( i = (const void **)v6[1]; !*((_BYTE *)i + 25) && v6 == i[2]; i = (const void **)i[1] )
        v6 = i;
      v6 = i;
    }
    else
    {
      v6 = (const void **)v6[2];
      for ( j = *v7; !*((_BYTE *)j + 25); j = (const void **)*j )
        v6 = j;
    }
  }
  return a2;
}
