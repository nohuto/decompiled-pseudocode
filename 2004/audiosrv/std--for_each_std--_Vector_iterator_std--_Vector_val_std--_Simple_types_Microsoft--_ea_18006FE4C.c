/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_3bf79a1ab22c4b13356b4cd7b985015c___ @ 0x18006FE4C
 * Callers:
 *     ?ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z @ 0x1800EDC60 (-ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800BC05C (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_3bf79a1ab22c4b13356b4cd7b985015c___(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 *a4)
{
  _QWORD *i; // rdi
  int v8; // eax
  __int64 v9; // rax

  for ( i = a2; i != a3; ++i )
  {
    v8 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, _QWORD, __int64))(*(_QWORD *)g_DeviceGraphManager
                                                                                  + 40LL))(
           g_DeviceGraphManager,
           *i,
           *a4);
    if ( v8 < 0
      && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        33LL,
        &WPP_276a5657edfd3c3fe0681675fccda4ef_Traceguids,
        (unsigned int)v8);
    }
  }
  v9 = *a4;
  *a4 = 0LL;
  *a1 = v9;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(a4);
  return a1;
}
