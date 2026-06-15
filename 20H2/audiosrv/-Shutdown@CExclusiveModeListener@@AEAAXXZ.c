/*
 * XREFs of ?Shutdown@CExclusiveModeListener@@AEAAXXZ @ 0x18010DEEC
 * Callers:
 *     ??1CExclusiveModeListener@@UEAA@XZ @ 0x18010C710 (--1CExclusiveModeListener@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F6D8 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800488C0 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D390 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CB034 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800E3488 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKK@std@@@std@.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x18010E658 (-clear@-$_Tree@V-$_Tmap_traits@U_GUID@@UHmdInfo@@U-$less@U_GUID@@@std@@V-$allocator@U-$pair@$$CB.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CExclusiveModeListener::Shutdown(CExclusiveModeListener *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  __int64 *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rdx
  int v11; // eax
  const CHAR *v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp+10h] BYREF
  __int64 v18; // [rsp+50h] [rbp+18h] BYREF

  *((_BYTE *)this + 377) = 0;
  if ( *((_QWORD *)this + 44) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)this + 44) = 0LL;
  }
  v5 = *((_QWORD *)this + 9);
  if ( v5 )
  {
    if ( *((_QWORD *)this + 15) )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, *((_QWORD *)this + 15));
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          132LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
          (const char *)(unsigned int)v6);
      *((_QWORD *)this + 15) = 0LL;
    }
    if ( *((_QWORD *)this + 16) )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 9) + 80LL))(
             *((_QWORD *)this + 9),
             *((_QWORD *)this + 16));
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          138LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
          (const char *)(unsigned int)v7);
      *((_QWORD *)this + 16) = 0LL;
    }
    v8 = (__int64 *)*((_QWORD *)this + 20);
    v9 = *v8;
    v18 = *v8;
    while ( (__int64 *)v9 != v8 )
    {
      v10 = *(_QWORD *)(v9 + 48);
      if ( v10 && *(_QWORD *)(v9 + 56) )
      {
        ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v17, v10);
        v16 = 0LL;
        v11 = (**v17)(v17, &GUID_2396ae05_f3f5_49e9_954b_d178b5677fd7, &v16);
        if ( v11 >= 0 )
        {
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 104LL))(v16, *(_QWORD *)(v9 + 56));
          *(_QWORD *)(v9 + 56) = 0LL;
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            147LL,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
            (const char *)(unsigned int)v11);
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>,std::_Iterator_base0>::operator++(&v18);
      v9 = v18;
    }
    std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::clear((char *)this + 160);
  }
  v12 = (const CHAR *)*((_QWORD *)this + 7);
  if ( v12 )
  {
    v13 = (*(__int64 (__fastcall **)(const CHAR *, CExclusiveModeListener *))(*(_QWORD *)v12 + 56LL))(v12, this);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        159LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
        (const char *)(unsigned int)v13);
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)this + 7);
  }
  v14 = *((unsigned int *)this + 92);
  if ( (_DWORD)v14 )
  {
    (*(void (__fastcall **)(struct IAudioPolicyManager *, __int64, char *))(*(_QWORD *)g_PolicyManager + 352LL))(
      g_PolicyManager,
      v14,
      (char *)this + 8);
    *((_DWORD *)this + 92) = 0;
  }
  CSpatialAudioResourceManagerTraceLogger::LogExclusiveModeListenerRunning(v12, 0, a3, a4);
}
