/*
 * XREFs of sub_1800FB958 @ 0x1800FB958
 * Callers:
 *     sub_1800FB1A4 @ 0x1800FB1A4 (sub_1800FB1A4.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800FB958(__int64 a1, __int64 a2, void *a3)
{
  int v6; // ebx
  bool v7; // zf
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10; // [rsp+30h] [rbp-20h]
  PROPVARIANT v11[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v12; // [rsp+48h] [rbp-8h]
  LPVOID pv; // [rsp+88h] [rbp+38h] BYREF
  __int64 v14; // [rsp+98h] [rbp+48h] BYREF

  v14 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v10 = 0LL;
  *(_OWORD *)v11 = 0LL;
  v12 = 0LL;
  if ( !a2 )
  {
    v6 = -2147467261;
    goto LABEL_27;
  }
  v14 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, 2LL, &v14);
  if ( v6 < 0 )
    goto LABEL_27;
  if ( a3 )
  {
    pv = 0LL;
    sub_18002A504(&pv, 0LL);
    v6 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)a2 + 40LL))(a2, &pv);
    if ( v6 < 0
      || (unsigned int)o__wcsicmp(a3, pv)
      && ((v6 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v14 + 40LL))(
                  v14,
                  &unk_1801607E0,
                  pvar),
           v6 < 0)
       || (LOWORD(pvar[0]) != 31 || !pvar[1] || (unsigned int)o__wcsicmp(a3, pvar[1]))
       && (unsigned int)o__wcsicmp(a3, pv)
       && (unsigned int)o__wcsicmp(a3, pvar[1])
       && (PropVariantClear(pvar),
           LOWORD(pvar[0]) = 31,
           pvar[1] = a3,
           v6 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v14 + 48LL))(
                  v14,
                  &unk_1801607E0,
                  pvar),
           LOWORD(pvar[0]) = 0,
           v6 < 0)) )
    {
      if ( pv )
        CoTaskMemFree(pv);
      goto LABEL_27;
    }
    if ( pv )
      CoTaskMemFree(pv);
  }
  v6 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v14 + 40LL))(v14, &unk_18015C928, v11);
  if ( v6 >= 0 )
  {
    if ( LOWORD(v11[0]) == 11 )
    {
      if ( *(_BYTE *)(a1 + 352) )
      {
        if ( LOWORD(v11[1]) == 0xFFFF )
          goto LABEL_27;
      }
      else if ( !LOWORD(v11[1]) )
      {
        goto LABEL_27;
      }
    }
    LOWORD(v11[0]) = 11;
    v7 = *(_BYTE *)(a1 + 352) == 0;
    LOWORD(v11[1]) = -1;
    if ( v7 )
      LOWORD(v11[1]) = 0;
    v6 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v14 + 48LL))(v14, &unk_18015C928, v11);
  }
LABEL_27:
  PropVariantClear(v11);
  PropVariantClear(pvar);
  sub_18000F708(&v14);
  return (unsigned int)v6;
}
