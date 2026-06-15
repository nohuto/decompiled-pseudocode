/*
 * XREFs of sub_18005A98C @ 0x18005A98C
 * Callers:
 *     sub_180059458 @ 0x180059458 (sub_180059458.c)
 *     sub_1801191A4 @ 0x1801191A4 (sub_1801191A4.c)
 * Callees:
 *     sub_180047FDC @ 0x180047FDC (sub_180047FDC.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18005A98C(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  int v9; // ebx
  char v10; // di
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // esi
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-38h]
  __int16 v17; // [rsp+38h] [rbp-30h] BYREF
  int v18; // [rsp+40h] [rbp-28h]
  __int64 v19; // [rsp+48h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  v6 = *(_QWORD *)(a1 + 40);
  *(_OWORD *)pvar = 0LL;
  v16 = 0LL;
  (*(void (__fastcall **)(__int64, __int64, PROPVARIANT *))(*(_QWORD *)v6 + 40LL))(v6, a3, pvar);
  v9 = 0;
  if ( LOWORD(pvar[0]) != 65 || (v10 = 0, *(_DWORD *)(a4 + 60) != *(_DWORD *)(v16 + 60)) )
    v10 = 1;
  PropVariantClear(pvar);
  v11 = *(_QWORD *)(a1 + 40);
  v17 = 65;
  v18 = 68;
  v19 = a4;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int16 *))(*(_QWORD *)v11 + 48LL))(v11, a3, &v17);
  v13 = v12;
  if ( v12 < 0 )
  {
    sub_18004BD84(
      (int)retaddr,
      1929,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      v12);
    return v13;
  }
  else
  {
    if ( v10 )
    {
      LOBYTE(v9) = a2 == 3;
      sub_180047FDC(a1, v9 + 1);
    }
    return 0LL;
  }
}
