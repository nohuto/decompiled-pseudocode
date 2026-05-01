/*
 * XREFs of ?FocusEyeControl@AccessibilityExperienceManager@@UEAAXXZ @ 0x18036FFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AccessibilityExperienceManager::FocusEyeControl(AccessibilityExperienceManager *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  HWND hWnd; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  v2 = *((_QWORD *)this + 9);
  if ( !v2 || (*(int (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2) >= 0 )
  {
    v3 = *((_QWORD *)this + 29);
    if ( v3 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 32LL))(v3, &v4) >= 0
        && (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v4 + 24LL))(v4, &hWnd) >= 0 )
      {
        SetForegroundWindow(hWnd);
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
}
