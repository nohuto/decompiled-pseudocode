/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_390f66de9da3e24cab3ad3e60ecadd9e___ @ 0x18006F2B8
 * Callers:
 *     _lambda_db18f22ab46b33b274128dc9e227aeaf_::operator() @ 0x18006FD6C (_lambda_db18f22ab46b33b274128dc9e227aeaf_--operator().c)
 * Callees:
 *     ??1?$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ @ 0x18000FF90 (--1-$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800BB3CC (WPP_SF_d.c)
 *     ??0?$CComPtr@UISaDeviceProxy@@@ATL@@QEAA@AEBV01@@Z @ 0x1800CD898 (--0-$CComPtr@UISaDeviceProxy@@@ATL@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_390f66de9da3e24cab3ad3e60ecadd9e___(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 *a4)
{
  _QWORD *i; // rdi
  int v8; // eax

  for ( i = a2; i != a3; ++i )
  {
    v8 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, _QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)g_DeviceGraphManager
                                                                                                  + 32LL))(
           g_DeviceGraphManager,
           *i,
           *a4,
           0LL,
           0LL);
    if ( v8 < 0
      && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        39LL,
        &WPP_276a5657edfd3c3fe0681675fccda4ef_Traceguids,
        (unsigned int)v8);
    }
  }
  ATL::CComPtr<ISaDeviceProxy>::CComPtr<ISaDeviceProxy>(a1, a4);
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(a4);
  return a1;
}
