/*
 * XREFs of sub_18005A220 @ 0x18005A220
 * Callers:
 *     sub_180054760 @ 0x180054760 (sub_180054760.c)
 *     sub_180059A8C @ 0x180059A8C (sub_180059A8C.c)
 * Callees:
 *     sub_18005A458 @ 0x18005A458 (sub_18005A458.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18005A220(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  HRESULT v6; // edi
  int (__fastcall *v7)(__int64, __int64, PROPVARIANT *); // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+30h] [rbp-20h]
  GUID pclsid; // [rsp+38h] [rbp-18h] BYREF

  v12 = 0LL;
  v6 = 0;
  v7 = *(int (__fastcall **)(__int64, __int64, PROPVARIANT *))(*(_QWORD *)a2 + 40LL);
  *(_OWORD *)pvar = 0LL;
  if ( v7(a2, a3, pvar) >= 0 && LOWORD(pvar[0]) == 4127 && LODWORD(pvar[1]) )
  {
    v9 = 0LL;
    do
    {
      v6 = CLSIDFromString(*(LPCOLESTR *)(v12 + 8 * v9), &pclsid);
      if ( v6 < 0 )
        break;
      if ( a4 )
        goto LABEL_16;
      v10 = *(_QWORD *)&pclsid.Data1 - 0x4FD1B4939E90EA20LL;
      if ( *(_QWORD *)&pclsid.Data1 == 0x4FD1B4939E90EA20LL )
        v10 = *(_QWORD *)pclsid.Data4 + 0x30A9569EEC81575FLL;
      if ( v10 )
      {
LABEL_16:
        v6 = sub_18005A458(a5, 1LL, &pclsid);
        if ( v6 < 0 )
          break;
      }
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < LODWORD(pvar[1]) );
  }
  PropVariantClear(pvar);
  return (unsigned int)v6;
}
