/*
 * XREFs of ?IconLoaded@AppViewIconLoader@@UEAAXPEAUHBITMAP__@@@Z @ 0x18033D890
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IconLoadedInternal@AppViewIconLoader@@AEAAJPEAUHBITMAP__@@@Z @ 0x18033D8E0 (-IconLoadedInternal@AppViewIconLoader@@AEAAJPEAUHBITMAP__@@@Z.c)
 */

void __fastcall AppViewIconLoader::IconLoaded(AppViewIconLoader *this, HBITMAP a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = AppViewIconLoader::IconLoadedInternal((AppViewIconLoader *)((char *)this - 8), a2);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1E,
      (__int64)"internal\\pcshellshell\\private\\inc\\AppViewDataSource\\AppViewIconFactory.h",
      (const char *)(unsigned int)v3);
  if ( a2 )
    DeleteObject(a2);
}
