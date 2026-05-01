/*
 * XREFs of ?SetNoActivate@AccessibilityExperienceManager@@UEAAX_N@Z @ 0x180371140
 * Callers:
 *     ?OnChromeOffsetsChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180370710 (-OnChromeOffsetsChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?OnPositionChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180370990 (-OnPositionChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x180371A64 (-_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AccessibilityExperienceManager::SetNoActivate(AccessibilityExperienceManager *this, unsigned __int8 a2)
{
  int v2; // esi
  __int64 v4; // rbx
  LONG WindowLongW; // r8d
  unsigned int v6; // eax
  LONG v7; // r8d
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  HWND hWnd; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  v8 = 0LL;
  v4 = *((_QWORD *)this + 29);
  if ( v4 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 32LL))(v4, &v8) >= 0
      && (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v8 + 24LL))(v8, &hWnd) >= 0 )
    {
      WindowLongW = GetWindowLongW(hWnd, -20);
      v6 = WindowLongW & 0xF7FFFFFF;
      v7 = WindowLongW | 0x8000000;
      if ( !(_BYTE)v2 )
        v7 = v6;
      *((_DWORD *)this + 81) = v2 << 27;
      SetWindowLongW(hWnd, -20, v7);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
}
