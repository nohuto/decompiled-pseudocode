/*
 * XREFs of _xxxFlashEnabledPopup@4 @ 0x1A1F03
 * Callers:
 *     ?xxxDWP_SetCursor@@YGHPAUtagWND@@PAUHWND__@@HI@Z @ 0x43794 (-xxxDWP_SetCursor@@YGHPAUtagWND@@PAUHWND__@@HI@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxFlashWindow@12 @ 0xCA4EE (_xxxFlashWindow@12.c)
 *     _xxxMessageBeep@4 @ 0x178F72 (_xxxMessageBeep@4.c)
 *     _DWP_GetEnabledPopup@4 @ 0x1A1D7D (_DWP_GetEnabledPopup@4.c)
 */

int __thiscall xxxFlashEnabledPopup(_DWORD *this)
{
  struct tagHOOK **EnabledPopup; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD *v4; // eax
  int v6; // [esp+Ch] [ebp-Ch] BYREF
  struct tagHOOK **v7; // [esp+10h] [ebp-8h]
  int v8; // [esp+14h] [ebp-4h]

  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( (*(_BYTE *)(&_gSoundSentry + 1) & 1) == 0 )
  {
    EnabledPopup = (struct tagHOOK **)DWP_GetEnabledPopup(this);
    if ( EnabledPopup )
    {
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v6 = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = &v6;
      v7 = EnabledPopup;
      HMLockObject(EnabledPopup);
      v4 = (_DWORD *)UPDWORDPointer(8196);
      xxxFlashWindow(EnabledPopup, ((unsigned __int16)*v4 << 16) | 3, *(_DWORD *)(_gpsi + 4452) >> 3);
      ThreadUnlock1();
    }
  }
  return xxxMessageBeep(0);
}
