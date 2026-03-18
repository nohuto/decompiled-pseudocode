/*
 * XREFs of _xxxTooltipWndProc@16 @ 0xE4592
 * Callers:
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     _xxxSendMessageCallback@36 @ 0x46062 (_xxxSendMessageCallback@36.c)
 * Callees:
 *     _xxxEndPaint@8 @ 0x12580 (_xxxEndPaint@8.c)
 *     _xxxDefWindowProc@16 @ 0x16650 (_xxxDefWindowProc@16.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _xxxBeginPaint@8 @ 0x7140C (_xxxBeginPaint@8.c)
 *     ?DestroyTooltipBitmap@@YGXPAUtagTOOLTIPWND@@@Z @ 0xD4BE4 (-DestroyTooltipBitmap@@YGXPAUtagTOOLTIPWND@@@Z.c)
 *     ?InitTooltipAnimation@@YGXPAUtagTOOLTIPWND@@@Z @ 0xE4948 (-InitTooltipAnimation@@YGXPAUtagTOOLTIPWND@@@Z.c)
 *     _InitTooltipDelay@4 @ 0xE4A64 (_InitTooltipDelay@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?CreateFadeInternal@@YGPAUHDC__@@PAUtagWND@@PAUtagRECT@@KKK@Z @ 0x152DDB (-CreateFadeInternal@@YGPAUHDC__@@PAUtagWND@@PAUtagRECT@@KKK@Z.c)
 *     _StopFade@0 @ 0x1538B2 (_StopFade@0.c)
 *     _zzzStartFade@0 @ 0x153F74 (_zzzStartFade@0.c)
 *     ?CreateTooltipBitmap@@YGHPAUtagTOOLTIPWND@@II@Z @ 0x1A073D (-CreateTooltipBitmap@@YGHPAUtagTOOLTIPWND@@II@Z.c)
 *     ?SetTooltipTimer@@YGXPAUtagTOOLTIPWND@@II@Z @ 0x1A08F8 (-SetTooltipTimer@@YGXPAUtagTOOLTIPWND@@II@Z.c)
 *     ?xxxTooltipHandleTimer@@YGHPAUtagTOOLTIPWND@@I@Z @ 0x1A0F63 (-xxxTooltipHandleTimer@@YGHPAUtagTOOLTIPWND@@I@Z.c)
 *     ?xxxTooltipRender@@YGXPAUtagTOOLTIPWND@@PAUHDC__@@@Z @ 0x1A0FFC (-xxxTooltipRender@@YGXPAUtagTOOLTIPWND@@PAUHDC__@@@Z.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __stdcall xxxTooltipWndProc(struct tagVWPL **a1, int a2, int a3, int a4)
{
  int v4; // edi
  struct tagVWPL *v5; // ecx
  __int16 v6; // ax
  unsigned int v8; // edx
  unsigned int v9; // esi
  unsigned int v10; // esi
  struct tagVWPL *v11; // ebx
  struct tagVWPL *v12; // edx
  int v13; // ecx
  unsigned int v14; // eax
  struct tagVWPL *v15; // eax
  struct tagVWPL *v16; // esi
  int v17; // eax
  struct tagVWPL *v18; // esi
  int v19; // eax
  HDC FadeInternal; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // ebx
  unsigned int v26; // edx
  struct tagTOOLTIPWND *v27; // [esp+0h] [ebp-68h]
  unsigned int v28; // [esp+0h] [ebp-68h]
  HDC v29; // [esp+4h] [ebp-64h]
  unsigned int v30; // [esp+4h] [ebp-64h]
  _DWORD v31[17]; // [esp+20h] [ebp-48h] BYREF

  v4 = (int)a1;
  memset(v31, 0, 0x40u);
  v5 = a1[5];
  if ( (*((_DWORD *)v5 + 36) & 0x800) != 0 )
    return 0;
  v6 = *((_WORD *)v5 + 15);
  if ( v6 == 694 )
    goto LABEL_26;
  if ( v6 )
    return 0;
  if ( a2 == 129 )
  {
    v8 = *((_DWORD *)v5 + 40);
    v9 = *(unsigned __int16 *)(_gpsi + 220);
    if ( v8 + 204 >= v9 )
    {
      v16 = a1[41];
      if ( v16 )
      {
        v17 = 0;
        if ( v8 )
        {
          while ( !*((_BYTE *)v16 + v17) )
          {
            if ( ++v17 >= v8 )
              goto LABEL_24;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
          v5 = a1[5];
        }
LABEL_24:
        memset(a1[41], 0, *((_DWORD *)v5 + 40));
      }
    }
    else
    {
      if ( v8 + *((_DWORD *)v5 + 32) + 204 < v9 )
        return 0;
      v10 = v9 - 204;
      v11 = (struct tagVWPL *)Win32AllocPoolZInit(v10, 1937208149);
      if ( !v11 )
        return 0;
      v12 = a1[41];
      if ( v12 )
      {
        v13 = 0;
        v14 = *((_DWORD *)a1[5] + 40);
        if ( v14 )
        {
          while ( !*((_BYTE *)v12 + v13) )
          {
            if ( ++v13 >= v14 )
              goto LABEL_16;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
        }
LABEL_16:
        Win32FreePool(a1[41]);
      }
      v15 = a1[5];
      a1[41] = v11;
      *((_DWORD *)v15 + 40) = v10;
    }
    *((_WORD *)a1[5] + 15) = 694;
LABEL_26:
    v18 = a1[41];
    *(_DWORD *)v18 = a1;
    if ( (*(_BYTE *)(_gptiCurrent + 264) & 1) != 0 && a2 != 130 )
      return xxxDefWindowProc(v4, a2, a3, a4);
    if ( a2 == 15 )
    {
      xxxBeginPaint(a1, v31);
      xxxTooltipRender(v27, v29);
      xxxEndPaint(a1, v31);
      return 0;
    }
    if ( a2 != 20 )
    {
      if ( a2 != 71 )
      {
        switch ( a2 )
        {
          case 129:
            InitTooltipDelay(v18);
            InitTooltipAnimation(v27);
            break;
          case 130:
            DestroyTooltipBitmap(v18);
            if ( *((_DWORD *)v18 + 3) )
              GreDeleteDC(*((_DWORD *)v18 + 3));
            *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v18 + 12) + 24) &= 0xFFFFFCFF;
            break;
          case 280:
            xxxTooltipHandleTimer(v27, (unsigned int)v29);
            return 0;
          case 792:
            xxxTooltipRender(v27, v29);
            return 0;
        }
        return xxxDefWindowProc(v4, a2, a3, a4);
      }
      v19 = *(_DWORD *)(a4 + 24);
      if ( (v19 & 0x40) == 0 )
      {
        if ( (v19 & 0x80u) != 0 )
        {
          if ( (_gfade[36] & 0x20) != 0 )
            StopFade();
          else
            DestroyTooltipBitmap(v18);
        }
        return xxxDefWindowProc(v4, a2, a3, a4);
      }
      if ( ((unsigned int)_gpdwCPUserPreferencesMask & 0x80000800) != 0x80000800 )
      {
        SetTooltipTimer(*((struct tagTOOLTIPWND **)v18 + 2), (unsigned int)v27, (unsigned int)v29);
        return xxxDefWindowProc(v4, a2, a3, a4);
      }
      if ( _gbDisableAlpha || ((unsigned int)_gpdwCPUserPreferencesMask & 0x80001000) != 0x80001000 )
      {
        if ( !CreateTooltipBitmap(
                (struct tagTOOLTIPWND *)(*((_DWORD *)a1[5] + 16) - *((_DWORD *)a1[5] + 14)),
                (unsigned int)v27,
                (unsigned int)v29) )
        {
LABEL_61:
          SetTooltipTimer(0, v28, v30);
          return xxxDefWindowProc(v4, a2, a3, a4);
        }
        FadeInternal = (HDC)*((_DWORD *)v18 + 3);
      }
      else
      {
        FadeInternal = CreateFadeInternal(
                         (struct tagWND *)0x87,
                         (struct tagRECT *)0x21,
                         0,
                         (unsigned int)v27,
                         (unsigned int)v29);
      }
      if ( FadeInternal )
      {
        v21 = *(_DWORD *)v18;
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(v21, 0x317u, (unsigned int)FadeInternal, 30, 0, 0, 0, 1u, 1);
        if ( (_gfade[36] & 0x20) != 0 )
        {
          zzzStartFade();
          v22 = *((_DWORD *)v18 + 2);
        }
        else
        {
          v23 = MEMORY[0xFFDF0004];
          if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
          {
            v25 = MEMORY[0xFFDF0324];
            v26 = MEMORY[0xFFDF0320];
            if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
            {
              do
              {
                _mm_pause();
                v25 = MEMORY[0xFFDF0324];
                v26 = MEMORY[0xFFDF0320];
              }
              while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
              v4 = (int)a1;
              v23 = MEMORY[0xFFDF0004];
            }
            v24 = v23 * (v25 << 8) + (((unsigned int)v23 * (unsigned __int64)v26) >> 24);
          }
          else
          {
            v24 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
          }
          *((_DWORD *)v18 + 7) = v24;
          v22 = 20;
        }
        SetTooltipTimer((struct tagTOOLTIPWND *)v22, v28, v30);
        return xxxDefWindowProc(v4, a2, a3, a4);
      }
      goto LABEL_61;
    }
    return 0;
  }
  return xxxDefWindowProc((int)a1, a2, a3, a4);
}
