/*
 * XREFs of ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0213BD0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     xxxRedrawWindow @ 0x1C0071544 (xxxRedrawWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     FindTimer @ 0x1C00C0ABC (FindTimer.c)
 *     xxxFlashWindow @ 0x1C0113948 (xxxFlashWindow.c)
 */

void __fastcall SoundSentryTimer(struct tagWND *a1)
{
  __int64 v1; // rax
  unsigned __int64 *v2; // rbx
  struct tagRECT *v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 ThreadWin32Thread; // rax
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  v9 = 0LL;
  v10 = 0LL;
  v1 = HMValidateHandleNoSecure((unsigned __int64)ghwndSoundSentry, 1);
  v2 = (unsigned __int64 *)v1;
  if ( !v1 )
    gdwCurrentEffect = 3;
  switch ( gdwCurrentEffect )
  {
    case 1u:
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v9 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v9;
      *((_QWORD *)&v9 + 1) = v2;
      if ( v2 )
        HMLockObject(v2);
      xxxFlashWindow(v2, 0, 0);
      goto LABEL_16;
    case 2u:
      if ( (unsigned int)IsWindowDesktopComposed(v1) )
      {
        v3 = &grcScreenFlash;
        goto LABEL_7;
      }
      v4 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v9 = *(_QWORD *)(v4 + 408);
      *(_QWORD *)(v4 + 408) = &v9;
      *((_QWORD *)&v9 + 1) = v2;
      if ( v2 )
        HMLockObject(v2);
      xxxRedrawWindow((struct tagWND *)v2, 0LL, 0LL, 645);
LABEL_16:
      ThreadUnlock1(v6, v5, v7);
      break;
    case 3u:
      v3 = 0LL;
LABEL_7:
      xxxRedrawWindow(0LL, &v3->left, 0LL, 66181);
      break;
  }
  gdwCurrentEffect = 0;
  ghwndSoundSentry = 0LL;
  FindTimer(0LL, gtmridSoundSentry, 4u, 1, 0LL);
  gtmridSoundSentry = 0LL;
}
