/*
 * XREFs of ?SoundSentryTimer@@YGXPAUtagWND@@IIJ@Z @ 0x178139
 * Callers:
 *     <none>
 * Callees:
 *     _xxxRedrawWindow@16 @ 0x3332A (_xxxRedrawWindow@16.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _FindTimer@20 @ 0x92EB2 (_FindTimer@20.c)
 *     _xxxFlashWindow@12 @ 0xCA4EE (_xxxFlashWindow@12.c)
 */

void __stdcall SoundSentryTimer(struct tagWND *a1, unsigned int a2, unsigned int a3, int a4)
{
  int v4; // eax
  struct tagHOOK **v5; // esi
  _DWORD *v6; // edx
  PKTHREAD v7; // eax
  int v8; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v11; // [esp+8h] [ebp-Ch] BYREF
  struct tagHOOK **v12; // [esp+Ch] [ebp-8h]
  int v13; // [esp+10h] [ebp-4h]

  v11 = 0;
  v12 = 0;
  v13 = 0;
  v4 = HMValidateHandleNoSecure((unsigned int)ghwndSoundSentry, 1);
  v5 = (struct tagHOOK **)v4;
  if ( !v4 )
    gdwCurrentEffect = 3;
  switch ( gdwCurrentEffect )
  {
    case 1u:
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v11 = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = &v11;
      v12 = v5;
      if ( v5 )
        HMLockObject(v5);
      xxxFlashWindow(v5, 0, 0);
      goto LABEL_16;
    case 2u:
      if ( IsWindowDesktopComposed(v4) )
      {
        v6 = &grcScreenFlash;
        goto LABEL_7;
      }
      v7 = KeGetCurrentThread();
      v8 = W32GetThreadWin32Thread(v7);
      v11 = *(_DWORD *)(v8 + 228);
      *(_DWORD *)(v8 + 228) = &v11;
      v12 = v5;
      if ( v5 )
        HMLockObject(v5);
      xxxRedrawWindow((int)v5, 0, 0, 645);
LABEL_16:
      ThreadUnlock1();
      break;
    case 3u:
      v6 = 0;
LABEL_7:
      xxxRedrawWindow(0, v6, 0, 66181);
      break;
  }
  gdwCurrentEffect = 0;
  ghwndSoundSentry = 0;
  FindTimer(0, gtmridSoundSentry, 4u, 1, 0);
  gtmridSoundSentry = 0;
}
