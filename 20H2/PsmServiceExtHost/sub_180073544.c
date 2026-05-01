/*
 * XREFs of sub_180073544 @ 0x180073544
 * Callers:
 *     sub_18006770C @ 0x18006770C (sub_18006770C.c)
 * Callees:
 *     sub_1800024F8 @ 0x1800024F8 (sub_1800024F8.c)
 *     sub_18000476C @ 0x18000476C (sub_18000476C.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     sub_18006B47C @ 0x18006B47C (sub_18006B47C.c)
 */

__int64 __fastcall sub_180073544(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        bool *a7)
{
  int v10; // edi
  __int64 v11; // rcx
  char *v12; // rbx
  PVOID P; // [rsp+70h] [rbp+8h] BYREF
  char v15; // [rsp+88h] [rbp+20h] BYREF

  P = 0LL;
  if ( a4 )
  {
    sub_18006B47C(*(_QWORD *)(a1 + 128), a6, (__int64 *)&P);
    v12 = (char *)P;
    if ( P )
      sub_18000476C(v11, 2, a3, a4, (__int64)P);
    v10 = sub_1800024F8(a2, a3, a4, a6, a5, 1, &v15, &P, 0LL);
    if ( v10 >= 0 )
      *a7 = (_BYTE)P && !v15;
    if ( v12 )
      sub_1800265B0(v12);
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v10;
}
