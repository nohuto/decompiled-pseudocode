/*
 * XREFs of ?LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ @ 0x1801D0990
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180020098 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008BF68 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     WINRT_WindowsGetStringRawBuffer @ 0x18008D902 (WINRT_WindowsGetStringRawBuffer.c)
 *     ??$AppLaunched@W4Location@PerfTrack@@PEBG@AppLaunchTelemetry@PerfTrack@@SAX$$QEAW4Location@1@$$QEAPEBG@Z @ 0x1801CE4E4 (--$AppLaunched@W4Location@PerfTrack@@PEBG@AppLaunchTelemetry@PerfTrack@@SAX$$QEAW4Location@1@$$Q.c)
 *     ?ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z @ 0x1801CEED8 (-ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z.c)
 *     ?GetStoreCortanaAumId@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x1801D0124 (-GetStoreCortanaAumId@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 *     ?OnViewConsolidationRequested@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801D0BCC (-OnViewConsolidationRequested@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CortanaStoreAppExperienceManager::LaunchOrCloseAppAsync(
        CortanaStoreAppExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  ExperienceManagerUtils *v3; // rcx
  HSTRING *v4; // rax
  CortanaStoreAppExperienceManager *v5; // rcx
  int v6; // eax
  const char *v7; // r9
  unsigned int v8; // ebx
  __int64 result; // rax
  HWND v10; // rdi
  HMONITOR v11; // rsi
  HMONITOR v12; // r14
  HRESULT WindowAttribute; // eax
  HSTRING *StoreCortanaAumId; // rax
  CortanaStoreAppExperienceManager *v15; // rcx
  int v16; // eax
  unsigned int v17; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int pvAttribute; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+58h] [rbp+10h] BYREF
  PCWSTR StringRawBuffer; // [rsp+60h] [rbp+18h] BYREF
  HSTRING v22; // [rsp+68h] [rbp+20h] BYREF

  try
  {
    v3 = (ExperienceManagerUtils *)*((_QWORD *)this + 14);
    if ( v3 )
    {
      v10 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(v3, a2);
      v11 = MonitorFromWindow(v10, 0);
      v12 = MonitorFromRect((LPCRECT)this + 11, 0);
      pvAttribute = 0;
      WindowAttribute = DwmGetWindowAttribute(v10, 0xEu, &pvAttribute, 4u);
      if ( WindowAttribute < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x21F,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
          (const char *)(unsigned int)WindowAttribute);
      if ( pvAttribute || v11 != v12 )
      {
        StoreCortanaAumId = (HSTRING *)CortanaExperienceHelpers::GetStoreCortanaAumId((CortanaExperienceHelpers::Testing *)&v22);
        StringRawBuffer = WINRT_WindowsGetStringRawBuffer(*StoreCortanaAumId, 0LL);
        v20 = 38;
        PerfTrack::AppLaunchTelemetry::AppLaunched<enum PerfTrack::Location,unsigned short const *>(
          &v20,
          &StringRawBuffer);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v22);
        v16 = CortanaStoreAppExperienceManager::ActivateAppAsync(v15, 0, (unsigned __int16 *)&word_1804BE2A8);
        v17 = v16;
        if ( v16 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x226,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
            (const char *)(unsigned int)v16);
          return v17;
        }
      }
      else
      {
        CortanaStoreAppExperienceManager::OnViewConsolidationRequested((CortanaStoreAppExperienceManager *)((char *)this - 120));
      }
      result = 0LL;
    }
    else
    {
      v4 = (HSTRING *)CortanaExperienceHelpers::GetStoreCortanaAumId((CortanaExperienceHelpers::Testing *)&v22);
      StringRawBuffer = WINRT_WindowsGetStringRawBuffer(*v4, 0LL);
      v20 = 38;
      PerfTrack::AppLaunchTelemetry::AppLaunched<enum PerfTrack::Location,unsigned short const *>(
        &v20,
        &StringRawBuffer);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v22);
      v6 = CortanaStoreAppExperienceManager::ActivateAppAsync(v5, 0, (unsigned __int16 *)&word_1804BE2A8);
      v8 = v6;
      if ( v6 >= 0 )
      {
        result = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x214,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
          (const char *)(unsigned int)v6);
        result = v8;
      }
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x22E,
                           (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
                           v7);
  }
  return result;
}
