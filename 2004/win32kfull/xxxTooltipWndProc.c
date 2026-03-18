/*
 * XREFs of xxxTooltipWndProc @ 0x1C00BB110
 * Callers:
 *     <none>
 * Callees:
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C0056670 (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     InitTooltipDelay @ 0x1C0057094 (InitTooltipDelay.c)
 *     xxxEndPaint @ 0x1C005D6C0 (xxxEndPaint.c)
 *     xxxBeginPaint @ 0x1C008B1A8 (xxxBeginPaint.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1C008F2E4 (xxxClientFreeWindowClassExtraBytes.c)
 *     xxxClientAllocWindowClassExtraBytes @ 0x1C008F69C (xxxClientAllocWindowClassExtraBytes.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0097EC0 (xxxSendTransformableMessageTimeout.c)
 *     xxxDefWindowProc @ 0x1C00AF770 (xxxDefWindowProc.c)
 *     ?DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C00BAC6C (-DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     ?InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C00BAC90 (-InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E7568 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     StopFade @ 0x1C01E84B0 (StopFade.c)
 *     zzzStartFade @ 0x1C01E8C4C (zzzStartFade.c)
 *     ??$?B_N@RedirectedFieldpExtraBytes@tagWND@@QEBA_NXZ @ 0x1C01E9A50 (--$-B_N@RedirectedFieldpExtraBytes@tagWND@@QEBA_NXZ.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C0243330 (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C0243D10 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C0243DEC (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxTooltipWndProc(__int64 a1, unsigned int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  HDC v4; // r14
  _QWORD *v8; // r15
  __int64 v9; // r10
  __int16 v10; // ax
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r8
  __int64 v14; // rdx
  unsigned int v15; // r8d
  unsigned int v16; // ebx
  __int64 v17; // r14
  __int64 v18; // r9
  unsigned int v19; // r8d
  size_t v20; // r14
  void *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rcx
  unsigned __int64 v28; // r15
  struct tagTOOLTIPWND *v29; // rcx
  int v30; // eax
  int v31; // r8d
  int v32; // edx
  HDC FadeInternal; // r14
  unsigned __int64 v34; // rcx
  HDC v38[10]; // [rsp+C0h] [rbp-98h] BYREF

  v4 = (HDC)a3;
  memset(v38, 0, 0x48uLL);
  v8 = (_QWORD *)(a1 + 40);
  v9 = *(_QWORD *)(a1 + 40);
  if ( (*(_DWORD *)(v9 + 232) & 0x800) != 0 )
    return 0LL;
  v10 = *(_WORD *)(v9 + 42);
  if ( v10 != 694 )
  {
    if ( v10 )
      return 0LL;
    if ( a2 != 129 )
    {
      v11 = a4;
      v12 = (unsigned __int64)v4;
      return xxxDefWindowProc((__int64 *)a1, a2, v12, v11);
    }
    v14 = *(unsigned int *)(v9 + 252);
    v15 = *(unsigned __int16 *)(gpsi + 384LL);
    if ( (int)v14 + 320 >= v15 )
    {
      v24 = *(_QWORD *)(a1 + 280);
      if ( v24 )
      {
        v25 = 0LL;
        if ( (_DWORD)v14 )
        {
          while ( !*(_BYTE *)((unsigned int)v25 + v24) )
          {
            v25 = (unsigned int)(v25 + 1);
            if ( (unsigned int)v25 >= (unsigned int)v14 )
              goto LABEL_33;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v14);
          v9 = *(_QWORD *)(a1 + 40);
        }
LABEL_33:
        memset(*(void **)(a1 + 280), 0, *(unsigned int *)(v9 + 252));
      }
    }
    else
    {
      if ( (int)v14 + *(_DWORD *)(v9 + 200) + 320 < v15 )
        return 0LL;
      v16 = v15 - 320;
      v17 = Win32AllocPoolZInit(v15 - 320, 1937208149LL);
      if ( !v17 )
        return 0LL;
      v18 = *(_QWORD *)(a1 + 280);
      if ( v18 )
      {
        v19 = 0;
        if ( *(_DWORD *)(*v8 + 252LL) )
        {
          while ( !*(_BYTE *)(v19 + v18) )
          {
            if ( ++v19 >= *(_DWORD *)(*(_QWORD *)(a1 + 40) + 252LL) )
              goto LABEL_16;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(*v8, a1);
        }
LABEL_16:
        Win32FreePool(*(_QWORD *)(a1 + 280));
      }
      *(_QWORD *)(a1 + 280) = v17;
      *(_DWORD *)(*v8 + 252LL) = v16;
      v20 = *(unsigned int *)(*v8 + 200LL);
      if ( (_DWORD)v20 )
      {
        v21 = (void *)xxxClientAllocWindowClassExtraBytes((unsigned int)v20);
        if ( !v21 )
          return 0LL;
      }
      else
      {
        v21 = 0LL;
      }
      if ( (unsigned __int8)tagWND::RedirectedFieldpExtraBytes::operator<bool> bool(a1 + 320) )
      {
        if ( v21 )
          memmove(v21, (const void *)(*(_QWORD *)(*v8 + 296LL) + *(unsigned int *)(*v8 + 252LL)), v20);
        v22 = *(_QWORD *)(a1 + 40);
        v23 = *(_QWORD *)(v22 + 296);
        *(_QWORD *)(v22 + 296) = v21;
        *(_DWORD *)(*(_QWORD *)(a1 + 40) + 200LL) = v20;
        xxxClientFreeWindowClassExtraBytes(a1, v23);
      }
      else
      {
        *(_QWORD *)(*v8 + 296LL) = v21;
        *(_DWORD *)(*v8 + 200LL) = v20;
      }
      v4 = (HDC)a3;
    }
    *(_WORD *)(*v8 + 42LL) = 694;
  }
  v26 = *(_QWORD *)(a1 + 280);
  *(_QWORD *)v26 = a1;
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 1) != 0 && a2 != 130 )
  {
LABEL_49:
    v28 = a4;
LABEL_50:
    v11 = v28;
    v12 = a3;
    return xxxDefWindowProc((__int64 *)a1, a2, v12, v11);
  }
  if ( a2 == 15 )
  {
    xxxBeginPaint((struct tagWND *)a1, (__int64)v38);
    xxxTooltipRender((struct tagTOOLTIPWND *)v26, v38[0]);
    xxxEndPaint((struct tagWND *)a1, v38);
    return 0LL;
  }
  if ( a2 != 20 )
  {
    if ( a2 != 71 )
    {
      switch ( a2 )
      {
        case 0x81u:
          InitTooltipDelay(v26);
          InitTooltipAnimation(v29);
          break;
        case 0x82u:
          DestroyTooltipBitmap((struct tagTOOLTIPWND *)v26);
          v27 = *(_QWORD *)(v26 + 16);
          if ( v27 )
            GreDeleteDC(v27);
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v26 + 24LL) + 48LL) &= 0xFFFFFCFF;
          break;
        case 0x118u:
          xxxTooltipHandleTimer((struct tagTOOLTIPWND *)v26, (unsigned int)v4);
          return 0LL;
        case 0x318u:
          xxxTooltipRender((struct tagTOOLTIPWND *)v26, v4);
          return 0LL;
      }
      goto LABEL_49;
    }
    v28 = a4;
    v30 = *(_DWORD *)(a4 + 32);
    if ( (v30 & 0x40) == 0 )
    {
      if ( (v30 & 0x80u) != 0 )
      {
        if ( (gfade[6] & 0x20) != 0 )
          StopFade();
        else
          DestroyTooltipBitmap((struct tagTOOLTIPWND *)v26);
      }
      goto LABEL_50;
    }
    if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000800) == 0x80000800 )
    {
      FadeInternal = 0LL;
      if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80001000) != 0x80001000 )
      {
        if ( (unsigned int)CreateTooltipBitmap(
                             (struct tagTOOLTIPWND *)v26,
                             *(_DWORD *)(*(_QWORD *)(a1 + 40) + 96LL) - *(_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL),
                             *(_DWORD *)(*(_QWORD *)(a1 + 40) + 100LL) - *(_DWORD *)(*(_QWORD *)(a1 + 40) + 92LL)) )
          FadeInternal = *(HDC *)(v26 + 16);
      }
      else
      {
        FadeInternal = CreateFadeInternal((struct tagWND *)a1, 0LL, 0x87u, 0x21u, 0);
      }
      if ( !FadeInternal )
      {
        v31 = 0;
        goto LABEL_55;
      }
      v34 = *(_QWORD *)v26;
      _InterlockedIncrement(&glSendMessage);
      xxxSendTransformableMessageTimeout(
        v34,
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
        *(_DWORD *)(v26 + 40) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        v32 = 3;
        v31 = 20;
        goto LABEL_56;
      }
      zzzStartFade();
    }
    v31 = *(_DWORD *)(v26 + 12);
LABEL_55:
    v32 = 2;
LABEL_56:
    SetTooltipTimer((struct tagTOOLTIPWND *)v26, v32, v31);
    goto LABEL_50;
  }
  return 0LL;
}
