/*
 * XREFs of sub_1800F31F0 @ 0x1800F31F0
 * Callers:
 *     sub_1800F40E0 @ 0x1800F40E0 (sub_1800F40E0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800F31F0(__int64 a1, __int64 a2, _DWORD *a3)
{
  HRESULT v5; // ebx
  PROPVARIANT pvar[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v8; // [rsp+40h] [rbp-10h]
  __int64 v9; // [rsp+70h] [rbp+20h] BYREF
  __int64 v10; // [rsp+80h] [rbp+30h] BYREF
  LPVOID ppv; // [rsp+88h] [rbp+38h] BYREF

  v5 = 0;
  ppv = 0LL;
  v10 = 0LL;
  v9 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v8 = 0LL;
  *a3 = 1;
  if ( (unsigned int)MMDevAPI_7(a2) )
  {
    *a3 = 0;
  }
  else if ( *a3 )
  {
    v5 = CoCreateInstance(&rclsid, 0LL, 0x17u, &stru_18015B0C0, &ppv);
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, a2, &v10);
      if ( v5 >= 0 )
      {
        v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v10 + 32LL))(v10, 0LL, &v9);
        if ( v5 >= 0
          && (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v9 + 40LL))(v9, &unk_18015AF70, pvar) >= 0
          && LOWORD(pvar[0]) == 72 )
        {
          *a3 = 0;
        }
      }
    }
    PropVariantClear(pvar);
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v5;
}
