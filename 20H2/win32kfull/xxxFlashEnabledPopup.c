/*
 * XREFs of xxxFlashEnabledPopup @ 0x1C0243784
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C009495C (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 * Callees:
 *     DWP_GetEnabledPopup @ 0x1C00071C0 (DWP_GetEnabledPopup.c)
 *     xxxFlashWindow @ 0x1C0019218 (xxxFlashWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     xxxMessageBeep @ 0x1C0152270 (xxxMessageBeep.c)
 */

__int64 __fastcall xxxFlashEnabledPopup(_QWORD *a1)
{
  _QWORD *EnabledPopup; // rbx
  __int64 ThreadWin32Thread; // rax
  _DWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v9 = 0LL;
  v8 = 0LL;
  if ( (HIDWORD(gSoundSentry) & 1) == 0 )
  {
    EnabledPopup = DWP_GetEnabledPopup(a1);
    if ( EnabledPopup )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v8 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v8;
      *((_QWORD *)&v8 + 1) = EnabledPopup;
      HMLockObject(EnabledPopup);
      v3 = (_DWORD *)UPDWORDPointer(8196LL);
      xxxFlashWindow((__int64)EnabledPopup, ((unsigned __int16)*v3 << 16) | 3, *(_DWORD *)(gpsi + 4984LL) >> 3);
      ThreadUnlock1(v5, v4, v6);
    }
  }
  return xxxMessageBeep(0LL);
}
