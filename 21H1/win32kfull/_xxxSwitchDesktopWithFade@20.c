/*
 * XREFs of _xxxSwitchDesktopWithFade@20 @ 0xAF188
 * Callers:
 *     _NtUserSwitchDesktop@12 @ 0xAF4AC (_NtUserSwitchDesktop@12.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 *     _RestoreGammaRamp@4 @ 0xCE8E0 (_RestoreGammaRamp@4.c)
 *     _FadeDesktop@16 @ 0xCE936 (_FadeDesktop@16.c)
 *     _PrepareGammaRampData@12 @ 0xD0E00 (_PrepareGammaRampData@12.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __fastcall xxxSwitchDesktopWithFade(int a1, int a2, int a3, unsigned int a4, int a5)
{
  int v5; // ebx
  int v6; // esi
  int v9; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD v12[3]; // [esp+Ch] [ebp-24h] BYREF
  int v13; // [esp+18h] [ebp-18h]
  int v14; // [esp+1Ch] [ebp-14h]
  int v15; // [esp+20h] [ebp-10h]
  int v16; // [esp+24h] [ebp-Ch] BYREF
  int v17; // [esp+28h] [ebp-8h] BYREF
  int v18; // [esp+2Ch] [ebp-4h] BYREF
  int v19; // [esp+3Ch] [ebp+Ch]
  int v20; // [esp+40h] [ebp+10h]

  v15 = a2;
  v13 = a1;
  memset(v12, 0, sizeof(v12));
  v5 = 0;
  v16 = 0;
  v6 = 0;
  v14 = 0;
  v18 = 0;
  v17 = 0;
  if ( PsGetCurrentProcessId() != (HANDLE)_gpidLogon )
    return -1073741790;
  if ( v15 == _grpdeskRitInput )
    return 0;
  if ( (!v15
     || !_grpdeskRitInput
     || (*(_BYTE *)(**(_DWORD **)(v15 + 4) + 32) & 1) == 0
     || (*(_BYTE *)(**(_DWORD **)(_grpdeskRitInput + 4) + 32) & 1) == 0
     || !a5)
    && !_gfIsFadingInProgress )
  {
    _gfIsFadingInProgress = 1;
    v14 = 1;
    v9 = PrepareGammaRampData(&v18, &v17, &v16);
    v6 = v17;
    if ( v9 >= 0 )
      PushW32ThreadLock(v17, v12, (int)RestoreGammaRamp);
    if ( v16 )
    {
      v19 = 1;
      if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
      UserSessionSwitchLeaveCrit();
      v5 = v18;
      FadeDesktop(v18, v6, a4 >> 1, 0);
      EnterCrit(0, 1);
      goto LABEL_9;
    }
    v5 = v18;
  }
  v19 = 0;
LABEL_9:
  v20 = xxxSwitchDesktop(v13, v15, 0, a5);
  if ( v19 )
  {
    if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
    UserSessionSwitchLeaveCrit();
    FadeDesktop(v5, v6, a4 >> 1, 1);
    EnterCrit(0, 1);
  }
  if ( v6 )
  {
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    *(_DWORD *)(ThreadWin32Thread + 8) = v12[0];
    RestoreGammaRamp(v6);
  }
  if ( v14 )
    _gfIsFadingInProgress = 0;
  return v20;
}
