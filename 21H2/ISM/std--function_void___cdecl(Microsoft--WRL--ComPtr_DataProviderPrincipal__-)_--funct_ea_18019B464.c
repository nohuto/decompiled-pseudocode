/*
 * XREFs of std::function_void___cdecl(Microsoft::WRL::ComPtr_DataProviderPrincipal__&)_::function_void___cdecl(Microsoft::WRL::ComPtr_DataProviderPrincipal__&)___lambda_9b9f0c840769002edef58b55115a0dea__void_ @ 0x18019B464
 * Callers:
 *     ?CreateMotionTransformAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z @ 0x18019BB84 (-CreateMotionTransformAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::function_void___cdecl_Microsoft::WRL::ComPtr_DataProviderPrincipal_____::function_void___cdecl_Microsoft::WRL::ComPtr_DataProviderPrincipal_______lambda_9b9f0c840769002edef58b55115a0dea__void_(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 *v3; // rcx
  __int64 *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx

  a1[7] = 0LL;
  *a1 = off_1801AED30;
  v3 = a1 + 1;
  *v3 = 0LL;
  if ( v3 != a2 )
  {
    *v3 = *a2;
    *a2 = 0LL;
  }
  v5 = a2 + 1;
  v3[1] = 0LL;
  if ( v3 + 1 != v5 )
  {
    v3[1] = *v5;
    *v5 = 0LL;
  }
  *((_DWORD *)v3 + 4) = *((_DWORD *)a2 + 4);
  a1[7] = a1;
  v6 = *v5;
  if ( *v5 )
  {
    *v5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return a1;
}
