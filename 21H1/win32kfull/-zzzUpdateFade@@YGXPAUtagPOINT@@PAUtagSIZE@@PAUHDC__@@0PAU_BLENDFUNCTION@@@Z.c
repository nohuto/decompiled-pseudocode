/*
 * XREFs of ?zzzUpdateFade@@YGXPAUtagPOINT@@PAUtagSIZE@@PAUHDC__@@0PAU_BLENDFUNCTION@@@Z @ 0x1535CE
 * Callers:
 *     _zzzAnimateFade@0 @ 0x153DEC (_zzzAnimateFade@0.c)
 *     _zzzShowFade@0 @ 0x153F22 (_zzzShowFade@0.c)
 * Callees:
 *     _GreUpdateSprite@60 @ 0x2B28E (_GreUpdateSprite@60.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _zzzUpdateLayeredWindow@40 @ 0xBABAE (_zzzUpdateLayeredWindow@40.c)
 */

void __userpurge zzzUpdateFade(
        HDC a1@<edx>,
        void *a2@<ecx>,
        struct tagPOINT *a3,
        struct tagSIZE *a4,
        struct tagPOINT *a5,
        struct tagPOINT *a6,
        struct _BLENDFUNCTION *a7)
{
  HDEV v9; // eax
  struct tagEVENTHOOK *v10; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD v13[3]; // [esp+Ch] [ebp-Ch] BYREF

  v13[2] = 0;
  v9 = _gfade[9];
  if ( ((unsigned __int8)v9 & 8) != 0 )
  {
    v10 = (struct tagEVENTHOOK *)HMValidateHandleNoSecure((unsigned int)_gfade[0], 1);
    if ( v10 )
    {
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v13[0] = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = v13;
      v13[1] = v10;
      HMLockObject(v10);
      zzzUpdateLayeredWindow(v10, 0, (int)a2, (int)a1, (int)a3, (int)a4, 0, (int)a5, 2u, 0);
      ThreadUnlock1();
    }
  }
  else
  {
    GreUpdateSprite(
      *(_DWORD *)(_gpDispInfo + 20),
      0,
      _gfade[0],
      0,
      a2,
      a1,
      a3,
      a4,
      (HDC)_gfade[10],
      a5,
      (((unsigned __int8)v9 & 0x40) == 0) + 1,
      0,
      0,
      (struct tagRECT *)1,
      0);
  }
}
