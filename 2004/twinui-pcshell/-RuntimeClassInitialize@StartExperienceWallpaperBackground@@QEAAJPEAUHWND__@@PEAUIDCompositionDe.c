/*
 * XREFs of ?RuntimeClassInitialize@StartExperienceWallpaperBackground@@QEAAJPEAUHWND__@@PEAUIDCompositionDevice@@@Z @ 0x1801F9F68
 * Callers:
 *     ??$MakeAndInitialize@VStartExperienceWallpaperBackground@@V1@AEAPEAUHWND__@@PEAUIDCompositionDevice@@@Details@WRL@Microsoft@@YAJPEAPEAVStartExperienceWallpaperBackground@@AEAPEAUHWND__@@$$QEAPEAUIDCompositionDevice@@@Z @ 0x1801D2760 (--$MakeAndInitialize@VStartExperienceWallpaperBackground@@V1@AEAPEAUHWND__@@PEAUIDCompositionDev.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180150574 (-ResultFromKnownLastError@@YAJXZ.c)
 *     McTemplateU0dddd_EventWriteTransfer @ 0x180161EF8 (McTemplateU0dddd_EventWriteTransfer.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180161F94 (McTemplateU0q_EventWriteTransfer.c)
 *     ?RebuildScene@StartExperienceWallpaperBackground@@AEAAJAEBUtagRECT@@@Z @ 0x1801F9F08 (-RebuildScene@StartExperienceWallpaperBackground@@AEAAJAEBUtagRECT@@@Z.c)
 */

__int64 __fastcall StartExperienceWallpaperBackground::RuntimeClassInitialize(
        StartExperienceWallpaperBackground *this,
        HWND a2,
        struct IDCompositionDevice *a3)
{
  struct IDCompositionDevice *v4; // rax
  int updated; // eax
  HWND v7; // rcx
  int v8; // edi
  __int64 v9; // rcx
  signed int Error; // ebx
  struct IDCompositionDevice *v12; // [rsp+38h] [rbp-28h] BYREF
  struct tagRECT Rect; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  *((_QWORD *)this + 3) = a2;
  v4 = (struct IDCompositionDevice *)*((_QWORD *)this + 4);
  if ( v4 != a3 )
  {
    if ( a3 )
    {
      (*(void (__fastcall **)(struct IDCompositionDevice *))(*(_QWORD *)a3 + 8LL))(a3);
      v4 = (struct IDCompositionDevice *)*((_QWORD *)this + 4);
    }
    v12 = v4;
    *((_QWORD *)this + 4) = a3;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  }
  updated = UpdateWallpaperTransition(13LL);
  v7 = (HWND)*((_QWORD *)this + 3);
  v8 = updated;
  Rect = 0LL;
  if ( GetWindowRect(v7, &Rect) )
    Error = 0;
  else
    Error = ResultFromKnownLastError();
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
    McTemplateU0dddd_EventWriteTransfer(
      v9,
      &WallpaperBackground_SceneInitialization_Start,
      (unsigned int)Rect.left,
      Rect.top,
      Rect.right,
      Rect.bottom);
  if ( Error >= 0 )
  {
    *((_BYTE *)this + 16) = v8 >= 0;
    if ( v8 >= 0 )
      v8 = StartExperienceWallpaperBackground::RebuildScene(this, &Rect);
    Error = v8;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencewallpaperbackground.cpp",
      (const char *)(unsigned int)Error);
    v8 = Error;
  }
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
    McTemplateU0q_EventWriteTransfer(v9, &WallpaperBackground_SceneInitialization_Stop, (unsigned int)v8);
  return (unsigned int)Error;
}
