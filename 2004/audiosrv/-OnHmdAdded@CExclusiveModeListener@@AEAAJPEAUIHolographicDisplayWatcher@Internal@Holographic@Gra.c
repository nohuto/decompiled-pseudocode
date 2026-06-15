/*
 * XREFs of ?OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x18010DC50
 * Callers:
 *     ?RuntimeClassInitialize@CExclusiveModeListener@@QEAAJXZ @ 0x18010E4F8 (-RuntimeClassInitialize@CExclusiveModeListener@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006DF3C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@Z @ 0x1800C7024 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@.c)
 *     ??$_Try_emplace@AEBU_GUID@@$$V@?$map@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@std@@_N@1@AEBU_GUID@@@Z @ 0x18010D0F8 (--$_Try_emplace@AEBU_GUID@@$$V@-$map@U_GUID@@UHmdInfo@@U-$less@U_GUID@@@std@@V-$allocator@U-$pai.c)
 *     ?LogOnHmdAdded@CSpatialAudioResourceManagerTraceLogger@@QEAAXAEBU_GUID@@H@Z @ 0x18010D79C (-LogOnHmdAdded@CSpatialAudioResourceManagerTraceLogger@@QEAAXAEBU_GUID@@H@Z.c)
 *     ?UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ @ 0x18010EDF0 (-UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CExclusiveModeListener::OnHmdAdded(
        CExclusiveModeListener *this,
        struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *a2,
        struct Windows::Graphics::Holographic::IHolographicDisplay *a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  __int64 v6; // r14
  int v7; // ebx
  __int64 v8; // rdx
  int v10; // eax
  int v11; // r9d
  __int64 v12; // rbx
  CSpatialAudioResourceManagerTraceLogger *v13; // rcx
  unsigned __int8 v14; // al
  int updated; // eax
  __int64 v16; // [rsp+20h] [rbp-78h] BYREF
  __int128 v17; // [rsp+28h] [rbp-70h] BYREF
  __int64 v18; // [rsp+38h] [rbp-60h]
  char *v19; // [rsp+40h] [rbp-58h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-50h]
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+50h] [rbp-48h]
  __int64 v22; // [rsp+58h] [rbp-40h] BYREF
  struct _GUID v23; // [rsp+68h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 80);
  v19 = (char *)this + 80;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 80);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 2);
  v21 = v5;
  v17 = 0LL;
  v18 = 0LL;
  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=((__int64 *)&v17, (__int64)a3);
  v16 = 0LL;
  v6 = v17;
  v7 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v17)(
         v17,
         &GUID_2396ae05_f3f5_49e9_954b_d178b5677fd7,
         &v16);
  if ( v7 < 0 )
  {
    v8 = 191LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      (const char *)(unsigned int)v7);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
    if ( v5 )
      LeaveCriticalSection(v5);
    return (unsigned int)v7;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, struct _GUID *))(*(_QWORD *)v16 + 48LL))(v16, &v23);
  v7 = v10;
  if ( v10 < 0 )
  {
    v8 = 194LL;
    goto LABEL_3;
  }
  try
  {
    std::map<_GUID,HmdInfo>::_Try_emplace<_GUID const &,>((__int64 **)this + 20, (__int64)&v22, &v23, v11);
    v12 = v22;
    wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=((__int64 *)(v22 + 48), v6);
    *(_QWORD *)(v12 + 56) = *((_QWORD *)&v17 + 1);
    v14 = v18;
    *(_BYTE *)(v12 + 64) = v18;
  }
  catch ( std::bad_alloc )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCA,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      (const char *)0x8007000ELL);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
    if ( v19 )
      LeaveCriticalSection(lpCriticalSection);
    return 2147942414LL;
  }
  CSpatialAudioResourceManagerTraceLogger::LogOnHmdAdded(v13, &v23, v14);
  *(struct _GUID *)((char *)this + 136) = v23;
  updated = CExclusiveModeListener::UpdateExclusiveViewingMode(this);
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      208LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      (const char *)(unsigned int)updated);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
  if ( v5 )
    LeaveCriticalSection(v5);
  return 0LL;
}
