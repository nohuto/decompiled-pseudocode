/*
 * XREFs of CmpLoadManufacturingProfileServicesNode @ 0x140A8FE84
 * Callers:
 *     CmpFindDrivers @ 0x140A61F64 (CmpFindDrivers.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyByName @ 0x1407ACAD4 (CmpFindSubKeyByName.c)
 *     CmpLoadManufacturingProfileNode @ 0x140A8FDBC (CmpLoadManufacturingProfileNode.c)
 */

bool __fastcall CmpLoadManufacturingProfileServicesNode(
        __int64 a1,
        __int64 a2,
        const WCHAR *a3,
        __int64 *a4,
        __int64 a5)
{
  unsigned int SubKeyByName; // edi
  __int64 v8; // rax
  bool result; // al
  _DWORD v10[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h] BYREF

  v11 = 0LL;
  v10[0] = -1;
  v10[1] = 0;
  result = 0;
  if ( CmpLoadManufacturingProfileNode(a1, a2, a3, &v11, (__int64)v10) )
  {
    SubKeyByName = CmpFindSubKeyByName(a1, v11, (__int64)&CmpServicesString);
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v10);
    if ( SubKeyByName != -1 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 8))(a1, SubKeyByName, a5);
      *a4 = v8;
      if ( v8 )
        return 1;
    }
  }
  return result;
}
