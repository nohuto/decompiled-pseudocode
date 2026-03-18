/*
 * XREFs of ??4?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801965A0
 * Callers:
 *     ?SetBootstrapProxy@DiagnosticCallbacksManager@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x180198190 (-SetBootstrapProxy@DiagnosticCallbacksManager@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1801000AC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v4 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(*a2);
      v2 = *a1;
    }
    v6 = v2;
    *a1 = v4;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v6);
  }
  return a1;
}
