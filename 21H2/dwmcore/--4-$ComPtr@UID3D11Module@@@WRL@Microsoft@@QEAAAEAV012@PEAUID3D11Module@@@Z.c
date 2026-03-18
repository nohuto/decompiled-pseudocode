/*
 * XREFs of ??4?$ComPtr@UID3D11Module@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11Module@@@Z @ 0x1800F80F4
 * Callers:
 *     LoadShaderBody @ 0x180033A60 (LoadShaderBody.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<ID3D11Module>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v2 = *a1;
    }
    v6 = v2;
    *a1 = a2;
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v6);
  }
  return a1;
}
