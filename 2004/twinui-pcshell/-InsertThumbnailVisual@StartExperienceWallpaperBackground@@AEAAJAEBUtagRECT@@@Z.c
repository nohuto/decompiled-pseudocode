/*
 * XREFs of ?InsertThumbnailVisual@StartExperienceWallpaperBackground@@AEAAJAEBUtagRECT@@@Z @ 0x1801F9DAC
 * Callers:
 *     ?RebuildScene@StartExperienceWallpaperBackground@@AEAAJAEBUtagRECT@@@Z @ 0x1801F9F08 (-RebuildScene@StartExperienceWallpaperBackground@@AEAAJAEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?DwmUnregisterThumbnail@@YAJ0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1801FA0C4 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-DwmUnregisterThumbnail@@YAJ0.c)
 */

__int64 __fastcall StartExperienceWallpaperBackground::InsertThumbnailVisual(
        StartExperienceWallpaperBackground *this,
        const struct tagRECT *a2)
{
  HWND ShellWindow; // rdi
  int SharedThumbnailVisual; // ebx
  __int64 v6; // rdx
  int SystemMetrics; // ebx
  int v9; // eax
  LONG bottom; // edx
  LONG right; // r8d
  int v12; // ecx
  LONG v13; // ecx
  int v14; // r8d
  int v15; // ecx
  LONG v16; // ecx
  int v17; // edx
  _DWORD v18[9]; // [rsp+40h] [rbp-40h] BYREF
  char v19; // [rsp+64h] [rbp-1Ch]
  int v20; // [rsp+65h] [rbp-1Bh]
  int v21; // [rsp+69h] [rbp-17h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  ShellWindow = GetShellWindow();
  if ( !ShellWindow )
  {
    SharedThumbnailVisual = -2147023496;
    v6 = 95LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencewallpaperbackground.cpp",
      (const char *)(unsigned int)SharedThumbnailVisual);
    return (unsigned int)SharedThumbnailVisual;
  }
  v19 = 0;
  v18[0] = 2;
  SystemMetrics = GetSystemMetrics(76);
  v9 = GetSystemMetrics(77);
  bottom = a2->bottom;
  right = a2->right;
  v12 = a2->left - SystemMetrics;
  v18[1] = 0;
  v18[2] = 0;
  v18[0] = 27;
  v18[5] = v12;
  v13 = right;
  v14 = right - a2->left;
  v18[7] = v13 - SystemMetrics;
  v15 = a2->top - v9;
  v18[3] = v14;
  v18[6] = v15;
  v16 = bottom;
  v17 = bottom - a2->top;
  v18[8] = v16 - v9;
  v18[4] = v17;
  v20 = 1;
  v21 = 1;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long DwmUnregisterThumbnail(void *)>>::reset(
    (char *)this + 48,
    0LL);
  SharedThumbnailVisual = DwmpCreateSharedThumbnailVisual(
                            *((_QWORD *)this + 3),
                            ShellWindow,
                            0LL,
                            v18,
                            *((_QWORD *)this + 4),
                            (char *)this + 40,
                            (char *)this + 48);
  if ( SharedThumbnailVisual < 0 )
  {
    v6 = 128LL;
    goto LABEL_3;
  }
  return 0LL;
}
