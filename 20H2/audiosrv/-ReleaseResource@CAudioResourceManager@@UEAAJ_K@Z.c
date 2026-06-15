/*
 * XREFs of ?ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z @ 0x1800ECFD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F6D8 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047410 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800488C0 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_3bf79a1ab22c4b13356b4cd7b985015c___ @ 0x18006F38C (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_18006F38C.c)
 *     ??1HmdInfo@@QEAA@XZ @ 0x18006F970 (--1HmdInfo@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CB034 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800CD47C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_ff03322a3f89e5994eee42624e4a348b___ @ 0x1800EA2FC (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800EA2FC.c)
 *     WPP_SF_Pi @ 0x1800EE188 (WPP_SF_Pi.c)
 *     WPP_SF_i @ 0x1800EE1E4 (WPP_SF_i.c)
 */

__int64 __fastcall CAudioResourceManager::ReleaseResource(CAudioResourceManager *this, __int64 a2, __int64 a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  char v6; // si
  __int64 v7; // rbx
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r8
  void *v14; // rdi
  __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+38h] [rbp-28h] BYREF
  __int64 v18; // [rsp+40h] [rbp-20h] BYREF
  __int128 v19; // [rsp+48h] [rbp-18h] BYREF
  __int64 v20; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+90h] [rbp+30h] BYREF
  __int64 v23; // [rsp+98h] [rbp+38h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_i(*((_QWORD *)WPP_GLOBAL_Control + 2), 31LL, a3, a2);
  }
  v23 = 0LL;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v23);
  v4 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, __int64, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 64LL))(
         g_DeviceGraphStore,
         a2,
         &v23);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 88LL))(v23);
    v16 = 0LL;
    v7 = *(_QWORD *)g_DeviceGraphStore;
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 24LL))(v23);
    v9 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, __int64, __int64 *))(v7 + 24))(
           g_DeviceGraphStore,
           v8,
           &v16);
    v5 = v9;
    if ( v9 >= 0 )
    {
      v20 = 0LL;
      v19 = 0LL;
      (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v16 + 112LL))(v16, &lpCriticalSection);
      v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v16 + 104LL))(v16, v23, &v19);
      v5 = v10;
      if ( v10 >= 0 )
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_Pi(*((_QWORD *)WPP_GLOBAL_Control + 2), v11, v12, (__int64)(*((_QWORD *)&v19 + 1) - v19) >> 3, a2);
        }
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v23 + 88LL))(v23) )
        {
          ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v17, v23);
          std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_3bf79a1ab22c4b13356b4cd7b985015c___(
            &v18,
            (_QWORD *)v19,
            *((_QWORD **)&v19 + 1),
            &v17);
          HmdInfo::~HmdInfo(&v18);
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_i(*((_QWORD *)WPP_GLOBAL_Control + 2), 34LL, v13, a2);
          }
          wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v23);
        }
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_ff03322a3f89e5994eee42624e4a348b___(
          &lpCriticalSection,
          (__int64 *)v19,
          *((__int64 **)&v19 + 1),
          v6);
        v5 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x987,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v10);
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
      }
      v14 = (void *)v19;
      if ( (_QWORD)v19 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
          (__int64 *)v19,
          *((__int64 **)&v19 + 1));
        std::_Deallocate<16,0>(v14, (const struct std::nothrow_t *)((v20 - (_QWORD)v14) & 0xFFFFFFFFFFFFFFF8uLL));
        v20 = 0LL;
        v19 = 0LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x97F,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v9);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x979,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v4);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
  return v5;
}
