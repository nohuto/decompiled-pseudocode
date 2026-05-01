/*
 * XREFs of ?TryClose@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z @ 0x180231A40
 * Callers:
 *     ?put_Visibility@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z @ 0x180234D30 (-put_Visibility@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$TryClose@PEBGIAEAE@Win32BackedViewHostItemTelemetry@@SAX$$QEAPEBG$$QEAIAEAE@Z @ 0x1802281D4 (--$TryClose@PEBGIAEAE@Win32BackedViewHostItemTelemetry@@SAX$$QEAPEBG$$QEAIAEAE@Z.c)
 *     ?_MoveViewToDesktopAfterDelayIfSlate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_N@Z @ 0x180232AD4 (-_MoveViewToDesktopAfterDelayIfSlate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@.c)
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::TryClose(RTL_SRWLOCK *this, char a2)
{
  RTL_SRWLOCK *v2; // rbx
  HWND Ptr; // rsi
  HSTRING v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+40h] [rbp+8h] BYREF
  char v11; // [rsp+48h] [rbp+10h] BYREF
  PCWSTR StringRawBuffer; // [rsp+50h] [rbp+18h] BYREF

  v11 = a2;
  v2 = this + 27;
  AcquireSRWLockShared(this + 27);
  Ptr = (HWND)this[65].Ptr;
  v5 = (HSTRING)this[64].Ptr;
  v10 = (int)Ptr;
  StringRawBuffer = WindowsGetStringRawBuffer(v5, 0LL);
  Win32BackedViewHostItemTelemetry::TryClose<unsigned short const *,unsigned int,unsigned char &>(
    (__int64 *)&StringRawBuffer,
    &v10,
    &v11);
  if ( v2 )
    ReleaseSRWLockShared(v2);
  PostMessageW(Ptr, 0x112u, 0xF060uLL, 0LL);
  v6 = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_MoveViewToDesktopAfterDelayIfSlate(
         (Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)this,
         1);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x17B,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
