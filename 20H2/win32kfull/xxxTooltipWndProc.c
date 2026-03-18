/*
 * XREFs of xxxTooltipWndProc @ 0x1C011C5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C001B5B4 (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     xxxDefWindowProc @ 0x1C00743E0 (xxxDefWindowProc.c)
 *     xxxBeginPaint @ 0x1C00CFA68 (xxxBeginPaint.c)
 *     xxxEndPaint @ 0x1C00F4F60 (xxxEndPaint.c)
 *     ?InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C011C8CC (-InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     InitTooltipDelay @ 0x1C011CA64 (InitTooltipDelay.c)
 *     ?DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C011CB04 (-DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     xxxValidateClassAndSize @ 0x1C015BB84 (xxxValidateClassAndSize.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E68A8 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     StopFade @ 0x1C01E77F0 (StopFade.c)
 *     zzzStartFade @ 0x1C01E7F8C (zzzStartFade.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C0242090 (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C0242A70 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C0242B4C (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 */

unsigned __int64 __fastcall xxxTooltipWndProc(struct tagWND *a1, unsigned int a2, HDC a3, unsigned __int64 a4)
{
  __int64 v9; // rbx
  __int64 v10; // rcx
  struct tagTOOLTIPWND *v11; // rcx
  int v12; // eax
  int v13; // r8d
  int v14; // edx
  HDC FadeInternal; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // [rsp+50h] [rbp-98h] BYREF
  HDC v18[10]; // [rsp+60h] [rbp-88h] BYREF

  memset(v18, 0, 0x48uLL);
  v17 = 0LL;
  if ( !(unsigned int)xxxValidateClassAndSize(a1, 694, 129, (__int64)&v17) )
    return v17;
  v9 = *((_QWORD *)a1 + 35);
  *(_QWORD *)v9 = a1;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 1) != 0 && a2 != 130 )
    return xxxDefWindowProc(a1, a2, (unsigned __int64)a3, a4);
  if ( a2 == 15 )
  {
    xxxBeginPaint(a1, (__int64)v18);
    xxxTooltipRender((struct tagTOOLTIPWND *)v9, v18[0]);
    xxxEndPaint(a1, v18);
    return 0LL;
  }
  if ( a2 != 20 )
  {
    if ( a2 != 71 )
    {
      switch ( a2 )
      {
        case 0x81u:
          InitTooltipDelay(v9);
          InitTooltipAnimation(v11);
          break;
        case 0x82u:
          DestroyTooltipBitmap((struct tagTOOLTIPWND *)v9);
          v10 = *(_QWORD *)(v9 + 16);
          if ( v10 )
            GreDeleteDC(v10);
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 24LL) + 48LL) &= 0xFFFFFCFF;
          break;
        case 0x118u:
          xxxTooltipHandleTimer((struct tagTOOLTIPWND *)v9, (unsigned int)a3);
          return 0LL;
        case 0x318u:
          xxxTooltipRender((struct tagTOOLTIPWND *)v9, a3);
          return 0LL;
      }
      return xxxDefWindowProc(a1, a2, (unsigned __int64)a3, a4);
    }
    v12 = *(_DWORD *)(a4 + 32);
    if ( (v12 & 0x40) == 0 )
    {
      if ( (v12 & 0x80u) != 0 )
      {
        if ( (gfade[6] & 0x20) != 0 )
          StopFade();
        else
          DestroyTooltipBitmap((struct tagTOOLTIPWND *)v9);
      }
      return xxxDefWindowProc(a1, a2, (unsigned __int64)a3, a4);
    }
    if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000800) != 0x80000800 )
    {
LABEL_20:
      v13 = *(_DWORD *)(v9 + 12);
LABEL_21:
      v14 = 2;
LABEL_22:
      SetTooltipTimer((struct tagTOOLTIPWND *)v9, v14, v13);
      return xxxDefWindowProc(a1, a2, (unsigned __int64)a3, a4);
    }
    if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80001000) != 0x80001000 )
    {
      if ( !(unsigned int)CreateTooltipBitmap(
                            (struct tagTOOLTIPWND *)v9,
                            *(_DWORD *)(*((_QWORD *)a1 + 5) + 96LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL),
                            *(_DWORD *)(*((_QWORD *)a1 + 5) + 100LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL)) )
        goto LABEL_32;
      FadeInternal = *(HDC *)(v9 + 16);
    }
    else
    {
      FadeInternal = CreateFadeInternal(a1, 0LL, 0x87u, 0x21u, 0);
    }
    if ( FadeInternal )
    {
      v16 = *(_QWORD *)v9;
      _InterlockedIncrement(&glSendMessage);
      xxxSendTransformableMessageTimeout(
        v16,
        0x317u,
        (unsigned __int64)FadeInternal,
        (struct _LARGE_STRING *)0x1E,
        0,
        0,
        0LL,
        1,
        1);
      if ( (gfade[6] & 0x20) == 0 )
      {
        v14 = 3;
        v13 = 20;
        *(_DWORD *)(v9 + 40) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        goto LABEL_22;
      }
      zzzStartFade();
      goto LABEL_20;
    }
LABEL_32:
    v13 = 0;
    goto LABEL_21;
  }
  return 0LL;
}
