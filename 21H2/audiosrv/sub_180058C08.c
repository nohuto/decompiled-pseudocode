/*
 * XREFs of sub_180058C08 @ 0x180058C08
 * Callers:
 *     sub_180054760 @ 0x180054760 (sub_180054760.c)
 *     sub_180058B74 @ 0x180058B74 (sub_180058B74.c)
 * Callees:
 *     sub_18002A0F0 @ 0x18002A0F0 (sub_18002A0F0.c)
 *     sub_180058DB4 @ 0x180058DB4 (sub_180058DB4.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180058C08(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _QWORD *a5)
{
  char *v8; // rsi
  int v9; // ebx
  unsigned int v11; // r15d
  char *v12; // r14
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rbp
  char *v15; // rax
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v17; // [rsp+50h] [rbp-38h]

  *a4 = 0;
  *(_OWORD *)pvar = 0LL;
  v17 = 0LL;
  *a5 = 0LL;
  v8 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, PROPVARIANT *))(*(_QWORD *)a1 + 40LL))(a1, a3, pvar);
  if ( v9 >= 0 )
  {
    if ( !LOWORD(pvar[0]) )
    {
LABEL_3:
      v9 = -2147023728;
      goto LABEL_4;
    }
    if ( LOWORD(pvar[0]) != 19 )
      goto LABEL_20;
    v11 = (unsigned int)pvar[1];
    PropVariantClear(pvar);
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, PROPVARIANT *))(*(_QWORD *)a1 + 40LL))(a1, a2, pvar);
    if ( v9 < 0 )
      goto LABEL_4;
    if ( !LOWORD(pvar[0]) )
      goto LABEL_3;
    if ( LOWORD(pvar[0]) != 31 )
    {
LABEL_20:
      v9 = -2147418113;
      goto LABEL_4;
    }
    v12 = (char *)pvar[1];
    v13 = -1LL;
    v9 = 0;
    do
      ++v13;
    while ( *((_WORD *)pvar[1] + v13) );
    v14 = v13 + 1;
    if ( v13 + 1 < v13 )
    {
      v9 = -2147024362;
      goto LABEL_4;
    }
    if ( is_mul_ok(v14, 2uLL) )
    {
      v15 = (char *)CoTaskMemAlloc(2 * v14);
      v8 = v15;
      if ( !v15 )
      {
        v9 = -2147024882;
        goto LABEL_4;
      }
      sub_18002A0F0(v15, v13 + 1, v12, v13);
    }
    else
    {
      v9 = -2147024362;
    }
    if ( v9 >= 0 )
    {
      PropVariantClear(pvar);
      v9 = sub_180058DB4(v8, v11, a4, a5);
      if ( v9 >= 0 )
        v9 = 0;
    }
  }
LABEL_4:
  CoTaskMemFree(v8);
  PropVariantClear(pvar);
  return (unsigned int)v9;
}
