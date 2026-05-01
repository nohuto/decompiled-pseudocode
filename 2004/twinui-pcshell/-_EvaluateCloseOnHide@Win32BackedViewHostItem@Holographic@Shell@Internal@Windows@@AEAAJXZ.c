/*
 * XREFs of ?_EvaluateCloseOnHide@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJXZ @ 0x1800AACB0
 * Callers:
 *     ?put_KeepAlive@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z @ 0x1800AAE70 (-put_KeepAlive@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z.c)
 *     ?put_Visibility@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z @ 0x180256CB0 (-put_Visibility@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ClosingExclusiveOnHide@PEBGI@Win32BackedViewHostItemTelemetry@@SAX$$QEAPEBG$$QEAI@Z @ 0x180249A38 (--$ClosingExclusiveOnHide@PEBGI@Win32BackedViewHostItemTelemetry@@SAX$$QEAPEBG$$QEAI@Z.c)
 *     ?TryClose@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z @ 0x180253B90 (-TryClose@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z.c)
 *     ?get_FrameworkViewType@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAH@Z @ 0x180256470 (-get_FrameworkViewType@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAH@Z.c)
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_EvaluateCloseOnHide(
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v6; // [rsp+38h] [rbp+10h] BYREF
  PCWSTR StringRawBuffer; // [rsp+40h] [rbp+18h] BYREF

  if ( !SHRegGetBoolValueFromHKCUHKLM(
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Holographic",
          L"CloseWin32ExclusivesOnHide",
          1) )
    return 0LL;
  v6 = 0;
  if ( (int)Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::get_FrameworkViewType(this, &v6) < 0 )
    return 0LL;
  if ( v6 != 1 )
    return 0LL;
  v6 = *((_DWORD *)this + 132);
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 65), 0LL);
  Win32BackedViewHostItemTelemetry::ClosingExclusiveOnHide<unsigned short const *,unsigned int>(&StringRawBuffer, &v6);
  v2 = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::TryClose(this, 0);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x103,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
