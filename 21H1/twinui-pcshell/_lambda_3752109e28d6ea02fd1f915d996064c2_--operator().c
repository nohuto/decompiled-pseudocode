/*
 * XREFs of _lambda_3752109e28d6ea02fd1f915d996064c2_::operator() @ 0x18016A32C
 * Callers:
 *     wil::details::lambda_call__lambda_3752109e28d6ea02fd1f915d996064c2___::_lambda_call__lambda_3752109e28d6ea02fd1f915d996064c2___ @ 0x180169C1C (wil--details--lambda_call__lambda_3752109e28d6ea02fd1f915d996064c2___--_lambda_call__lambda_3752.c)
 *     ?RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x18016BA20 (-RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_.c)
 * Callees:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180028660 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007F164 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_996cccf22044f7b06fef961424ec8d78___ @ 0x1801683BC (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_996cccf22044f7b06fef9.c)
 */

// Hidden C++ exception states: #wind=2
_DWORD *__fastcall lambda_3752109e28d6ea02fd1f915d996064c2_::operator()(__int64 a1)
{
  _DWORD *result; // rax
  __int64 v3; // rbx
  LPCWSTR v4; // [rsp+20h] [rbp-20h] BYREF
  __int64 v5; // [rsp+28h] [rbp-18h]
  __int64 v6; // [rsp+30h] [rbp-10h]
  __int64 v7; // [rsp+50h] [rbp+10h] BYREF

  result = *(_DWORD **)a1;
  if ( !**(_DWORD **)a1 )
  {
    v7 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
    if ( (****(int (__fastcall *****)(_QWORD, GUID *, __int64 *))(a1 + 8))(
           **(_QWORD **)(a1 + 8),
           &GUID_979cde28_2164_437c_b963_55e5d4ac1d02,
           &v7) >= 0 )
    {
      v4 = 0LL;
      v5 = 0LL;
      v6 = 0LL;
      v3 = v7;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v4);
      v5 = -1LL;
      v6 = -1LL;
      if ( (*(int (__fastcall **)(__int64, LPCWSTR *))(*(_QWORD *)v3 + 32LL))(v3, &v4) >= 0 )
        GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_996cccf22044f7b06fef961424ec8d78___(&v4);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v4);
    }
    CApplicationViewManager::RaiseApplicationViewChanged(*(_QWORD *)(a1 + 16) + 136LL, **(_QWORD **)(a1 + 8), 2u, 0LL);
    return (_DWORD *)Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  }
  return result;
}
