/*
 * XREFs of _xxxFlashWindow@12 @ 0xCA4EE
 * Callers:
 *     ?xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x19168 (-xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroun.c)
 *     _xxxSystemTimerProc@16 @ 0xCA358 (_xxxSystemTimerProc@16.c)
 *     _NtUserFlashWindowEx@4 @ 0x161709 (_NtUserFlashWindowEx@4.c)
 *     ?SoundSentryTimer@@YGXPAUtagWND@@IIJ@Z @ 0x178139 (-SoundSentryTimer@@YGXPAUtagWND@@IIJ@Z.c)
 *     _xxxSoundSentry@0 @ 0x1782B3 (_xxxSoundSentry@0.c)
 *     _xxxFlashEnabledPopup@4 @ 0x1A1F03 (_xxxFlashEnabledPopup@4.c)
 * Callees:
 *     _PostShellHookMessages@8 @ 0x17142 (_PostShellHookMessages@8.c)
 *     _IsTrayWindow@4 @ 0x40204 (_IsTrayWindow@4.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _FindTimer@20 @ 0x92EB2 (_FindTimer@20.c)
 *     _InternalSetProp@16 @ 0xB4FE8 (_InternalSetProp@16.c)
 *     _InternalRemoveProp@12 @ 0xB50F2 (_InternalRemoveProp@12.c)
 *     __SetSystemTimer@20 @ 0xCA7A8 (__SetSystemTimer@20.c)
 */

unsigned int __fastcall xxxFlashWindow(struct tagHOOK **BugCheckParameter2, int a2, int a3)
{
  int Prop; // eax
  unsigned int v5; // ebx
  int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // eax
  struct tagHOOK *v9; // eax
  unsigned int *v10; // esi
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  struct tagHOOK *v14; // eax
  int v15; // eax
  int v16; // [esp+0h] [ebp-28h]
  int v17; // [esp+4h] [ebp-24h]
  unsigned int v19; // [esp+10h] [ebp-18h]
  int v20; // [esp+14h] [ebp-14h]
  int v21; // [esp+18h] [ebp-10h]
  int v22; // [esp+1Ch] [ebp-Ch]
  int v23[2]; // [esp+20h] [ebp-8h] BYREF

  v22 = 0;
  v23[0] = 0;
  Prop = _GetProp((int)BugCheckParameter2, (unsigned __int16)gaFlashWState, 1);
  v5 = Prop;
  if ( Prop == 2048 )
  {
    v7 = 0;
    v5 = 18432;
    v19 = 0;
    goto LABEL_35;
  }
  if ( Prop )
  {
    v6 = a2;
    if ( a2 == 1024 )
      v6 = Prop;
  }
  else
  {
    if ( _gbFullScreen == 1 )
      _PostMessage(gspwndFullScreen, 1030, 0, 0);
    v14 = BugCheckParameter2[5];
    if ( (*((_BYTE *)v14 + 8) & 0x40) != 0 || (a2 & 1) != 0 && (*((_BYTE *)v14 + 22) & 0xC0) != 0 )
      v5 = 36864;
    v6 = a2;
  }
  v7 = v6 & 0xFFFF000F;
  v19 = v7;
  v22 = v5 & 0x8000;
  if ( BugCheckParameter2 != (struct tagHOOK **)gspwndAltTab )
  {
    if ( (v5 & 8) != 0 )
    {
      v7 &= -(*((_DWORD *)BugCheckParameter2[2] + 59) != _gpqForeground);
      v19 = v7;
    }
    if ( v7 )
    {
      v8 = (v5 & 0x8000) == 0;
      goto LABEL_10;
    }
LABEL_35:
    if ( _gpqForeground && *(struct tagHOOK ***)(_gpqForeground + 64) == BugCheckParameter2 )
    {
      v8 = 1;
      v20 = 1;
      v21 = 1;
      goto LABEL_43;
    }
    v8 = 0;
LABEL_10:
    v20 = v8;
    v21 = v8;
    if ( v7 && (v7 & 1) == 0 )
    {
LABEL_12:
      if ( !v7 || (v7 & 2) != 0 )
      {
        if ( IsTrayWindow(BugCheckParameter2) )
        {
          v9 = *BugCheckParameter2;
          v23[1] = (int)*BugCheckParameter2;
          if ( (v5 & 0x800) != 0 )
            v10 = (unsigned int *)(v20 ^ 1);
          else
            v10 = v19 != 0 ? (unsigned int *)v21 : 0;
          xxxCallHook(v9, 6, v10, 0xAu, v16, v17);
          PostShellHookMessages();
        }
        v7 = v19;
      }
      if ( !v7 )
      {
        if ( (v5 & 0x4000) != 0 )
          FindTimer((unsigned int)BugCheckParameter2, 65528, 2u, 1, 0);
        InternalRemoveProp((int)BugCheckParameter2, gaFlashWState, 1);
        return v22;
      }
      if ( HIWORD(v7) )
      {
        v5 |= 0x2000u;
        if ( ((v5 >> 12) & 1) == v20 )
        {
          v7 -= 0x10000;
          v19 = v7;
        }
        if ( (v5 & 0x4000) == 0 )
        {
          v7 |= 4u;
          v19 = v7;
        }
      }
      if ( (v7 & 4) != 0 )
      {
        v15 = a3;
        v5 |= 0x4000u;
        if ( !a3 )
          v15 = *(_DWORD *)(_gpsi + 4452);
        if ( !_SetSystemTimer(v15, xxxSystemTimerProc, 1) )
          return v22;
        v7 = v19;
      }
      if ( (v5 & 0x2000) != 0 && !HIWORD(v7) )
      {
        v12 = 2048;
      }
      else
      {
        if ( v20 )
          v11 = v5 | 0x8000;
        else
          v11 = v5 & 0xFFFF7FFF;
        v12 = (v7 ^ v11) & 0xFFFF000B ^ v11;
      }
      InternalSetProp((int)BugCheckParameter2, (unsigned __int16)gaFlashWState, v12, 5);
      return v22;
    }
LABEL_43:
    xxxSendTransformableMessageTimeout((int)BugCheckParameter2, 0x86u, v8, 0, 0, (struct tagDDECONV *)0x64, v23, 1u, 0);
    v7 = v19;
    goto LABEL_12;
  }
  return v5 & 0x8000;
}
