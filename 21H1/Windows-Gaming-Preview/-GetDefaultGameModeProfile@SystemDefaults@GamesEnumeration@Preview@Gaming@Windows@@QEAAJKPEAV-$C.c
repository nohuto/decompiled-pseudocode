/*
 * XREFs of ?GetDefaultGameModeProfile@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@QEAAJKPEAV?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Z @ 0x18003D9F0
 * Callers:
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18002A9D0 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18003D5A0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::GetDefaultGameModeProfile(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  DWORD v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rcx
  DWORD LastError; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = WaitForSingleObject(hEvent, 0x1F4u);
  if ( !v5 )
  {
    v6 = *a3;
    if ( *a3 )
    {
      *a3 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v7 = *(_QWORD *)(a1 + 40);
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      v7 = *(_QWORD *)(a1 + 40);
    }
    *a3 = v7;
    return 0LL;
  }
  if ( v5 == -1 )
  {
    LastError = GetLastError();
    if ( !LastError )
      return 0LL;
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x65,
             (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
             (const char *)LastError);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x69,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
      (const char *)0x800705B4LL);
    return 2147943860LL;
  }
}
