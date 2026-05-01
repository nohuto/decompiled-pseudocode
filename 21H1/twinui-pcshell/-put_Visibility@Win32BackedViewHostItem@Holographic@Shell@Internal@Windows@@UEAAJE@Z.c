/*
 * XREFs of ?put_Visibility@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z @ 0x180234D30
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180115624 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ??$ClosingExclusiveOnHide@PEBGI@Win32BackedViewHostItemTelemetry@@SAX$$QEAPEBG$$QEAI@Z @ 0x180226BC0 (--$ClosingExclusiveOnHide@PEBGI@Win32BackedViewHostItemTelemetry@@SAX$$QEAPEBG$$QEAI@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CloseWin32ExclusivesOnHide@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18022FB38 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CloseWin32ExclusivesOnHide@@@details@wil@.c)
 *     ?TryClose@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z @ 0x180231A40 (-TryClose@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z.c)
 *     _anonymous_namespace_::_DisplayInHeadset @ 0x180231F78 (_anonymous_namespace_--_DisplayInHeadset.c)
 *     ?_RaisePresentationReadyEvent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_N@Z @ 0x180232DC8 (-_RaisePresentationReadyEvent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_.c)
 *     ?_RaiseTitleBarChangedEvent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJXZ @ 0x180232E6C (-_RaiseTitleBarChangedEvent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJXZ.c)
 *     ?get_FrameworkViewType@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAH@Z @ 0x1802344F0 (-get_FrameworkViewType@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAH@Z.c)
 */

signed int __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::put_Visibility(
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *this,
        char a2)
{
  RTL_SRWLOCK *v2; // rdi
  HWND v5; // r14
  __int64 v6; // rdx
  wil::details *v7; // rcx
  __int64 v8; // r8
  const char *v9; // r9
  int ready; // eax
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // r8
  HSTRING v19; // rcx
  int v20; // eax
  int v21; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PCWSTR StringRawBuffer; // [rsp+40h] [rbp+8h] BYREF
  int v24; // [rsp+48h] [rbp+10h] BYREF

  v2 = (RTL_SRWLOCK *)((char *)this + 216);
  AcquireSRWLockShared((PSRWLOCK)this + 27);
  v5 = (HWND)*((_QWORD *)this + 65);
  if ( v2 )
    ReleaseSRWLockShared(v2);
  if ( !PostMessageW(v5, 0x18u, a2 != 0, 0LL) )
    return wil::details::GetLastErrorFailHr(v7, v6, v8, v9);
  if ( !a2 )
  {
    ready = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_RaisePresentationReadyEvent(this, 0);
    v12 = ready;
    if ( ready < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC3,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
        (const char *)(unsigned int)ready);
      return v12;
    }
    if ( (unsigned __int8)GetPropW(v5, L"Windows.Graphics.Holographic.DisableForegroundOnPresence") )
    {
      if ( anonymous_namespace_::_DisplayInHeadset(v14, v13, v15, v16) )
      {
        v17 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 73) + 56LL))(*((_QWORD *)this + 73));
        if ( v17 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xCA,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
            (const char *)(unsigned int)v17);
      }
    }
  }
  AcquireSRWLockExclusive(v2);
  *((_BYTE *)this + 544) = a2 != 0;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_RaiseTitleBarChangedEvent(this);
  if ( a2 )
    return 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloseWin32ExclusivesOnHide>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_CloseWin32ExclusivesOnHide>::GetImpl'::`2'::impl,
    1u,
    v18);
  if ( !SHRegGetBoolValueFromHKCUHKLM(
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Holographic",
          L"CloseWin32ExclusivesOnHide",
          1) )
    return 0;
  if ( (int)Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::get_FrameworkViewType(this, &v24) < 0 )
    return 0;
  if ( v24 != 1 )
    return 0;
  v19 = (HSTRING)*((_QWORD *)this + 64);
  v24 = *((_DWORD *)this + 130);
  StringRawBuffer = WindowsGetStringRawBuffer(v19, 0LL);
  Win32BackedViewHostItemTelemetry::ClosingExclusiveOnHide<unsigned short const *,unsigned int>(
    (__int64 *)&StringRawBuffer,
    &v24);
  v20 = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::TryClose((RTL_SRWLOCK *)this, 0);
  v21 = v20;
  if ( v20 >= 0 )
    return 0;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE3,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
    (const char *)(unsigned int)v20);
  return v21;
}
