/*
 * XREFs of ?_CalculateCurrentLogicalWindowSize@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJPEAUSize@Foundation@5@@Z @ 0x180253DDC
 * Callers:
 *     ?_OnShellFullscreenStateChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_N@Z @ 0x180254D18 (-_OnShellFullscreenStateChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA.c)
 *     ?get_Size@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAUSize@Foundation@5@@Z @ 0x1802567C0 (-get_Size@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAUSize@Foundation@5.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180139C44 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 */

signed int __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_CalculateCurrentLogicalWindowSize(
        RTL_SRWLOCK *this,
        struct Windows::Foundation::Size *a2)
{
  RTL_SRWLOCK *v4; // rdi
  HWND Ptr; // rbx
  __int64 v6; // rdx
  wil::details *v7; // rcx
  __int64 v8; // r8
  const char *v9; // r9
  struct tagRECT Rect; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)a2 = 0LL;
  v4 = this + 28;
  AcquireSRWLockShared(this + 28);
  Ptr = (HWND)this[66].Ptr;
  if ( v4 )
    ReleaseSRWLockShared(v4);
  Rect = 0LL;
  if ( !GetWindowRect(Ptr, &Rect) )
    return wil::details::GetLastErrorFailHr(v7, v6, v8, v9);
  *(float *)a2 = (float)((float)(Rect.right - Rect.left) * 100.0) / 150.0;
  *((float *)a2 + 1) = (float)((float)(Rect.bottom - Rect.top) * 100.0) / 150.0;
  return 0;
}
