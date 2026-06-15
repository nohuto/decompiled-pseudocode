/*
 * XREFs of sub_18011B850 @ 0x18011B850
 * Callers:
 *     sub_1800B9818 @ 0x1800B9818 (sub_1800B9818.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18011B850(__int64 a1, PWSTR *a2, int *a3)
{
  unsigned int v6; // edi
  int v7; // eax
  PROPVARIANT propvar[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v10; // [rsp+40h] [rbp-10h]
  __int64 v11; // [rsp+88h] [rbp+38h] BYREF
  __int64 v12; // [rsp+90h] [rbp+40h] BYREF
  LPVOID ppv; // [rsp+98h] [rbp+48h] BYREF

  v6 = -2147023728;
  ppv = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  *(_OWORD *)propvar = 0LL;
  v10 = 0LL;
  *a2 = 0LL;
  if ( a3 )
    *a3 = 0;
  if ( CoCreateInstance(&rclsid, 0LL, 0x17u, &stru_18015B0C0, &ppv) >= 0
    && (*(int (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, a1, &v12) >= 0
    && (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v12 + 32LL))(v12, 0LL, &v11) >= 0 )
  {
    if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v11 + 40LL))(v11, &unk_18015B098, propvar) >= 0
      && LOWORD(propvar[0]) == 31
      && PropVariantToStringAlloc(propvar, a2) >= 0 )
    {
      v6 = 0;
    }
    if ( a3 )
    {
      PropVariantClear(propvar);
      if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v11 + 40LL))(v11, &unk_18015EB08, propvar) < 0
        || LOWORD(propvar[0]) != 11
        || (v7 = 1, LOWORD(propvar[1]) != 0xFFFF) )
      {
        v7 = 0;
      }
      *a3 = v7;
    }
  }
  PropVariantClear(propvar);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return v6;
}
