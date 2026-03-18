/*
 * XREFs of ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C01E7FA4
 * Callers:
 *     zzzAnimateFade @ 0x1C01E8ABC (zzzAnimateFade.c)
 *     zzzShowFade @ 0x1C01E8BE4 (zzzShowFade.c)
 * Callees:
 *     GreUpdateSprite @ 0x1C002032C (GreUpdateSprite.c)
 *     zzzUpdateLayeredWindow @ 0x1C0024D74 (zzzUpdateLayeredWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

void __fastcall zzzUpdateFade(
        struct tagPOINT *a1,
        struct tagSIZE *a2,
        HDC a3,
        struct tagPOINT *a4,
        struct _BLENDFUNCTION *a5)
{
  int v9; // eax
  struct tagWND *v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  void *v15; // [rsp+50h] [rbp-58h]
  _QWORD v16[4]; // [rsp+80h] [rbp-28h] BYREF

  v16[2] = 0LL;
  v9 = gfade[6];
  if ( (v9 & 8) != 0 )
  {
    v10 = (struct tagWND *)HMValidateHandleNoSecure(gfade[0], 1);
    if ( v10 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v16[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v16;
      v16[1] = v10;
      HMLockObject(v10);
      zzzUpdateLayeredWindow(v10, 0LL, a1, a2, a3, a4, 0, a5, 2u, 0LL);
      ThreadUnlock1(v13, v12, v14);
    }
  }
  else
  {
    LODWORD(v15) = 2 - ((v9 & 0x40) != 0);
    GreUpdateSprite(
      *(HDEV *)(gpDispInfo + 40LL),
      0LL,
      (void *)gfade[0],
      0LL,
      a1,
      a2,
      a3,
      a4,
      HIDWORD(gfade[6]),
      a5,
      v15,
      0LL,
      0LL,
      1,
      0);
  }
}
