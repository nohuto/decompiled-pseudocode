/*
 * XREFs of xxxFlashWindow @ 0x1C0019218
 * Callers:
 *     xxxSystemTimerProc @ 0x1C00190C0 (xxxSystemTimerProc.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C00388C0 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxSoundSentry @ 0x1C0152300 (xxxSoundSentry.c)
 *     NtUserFlashWindowEx @ 0x1C01F8650 (NtUserFlashWindowEx.c)
 *     ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0212D50 (-SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxFlashEnabledPopup @ 0x1C0243784 (xxxFlashEnabledPopup.c)
 * Callees:
 *     FindTimer @ 0x1C000BFEC (FindTimer.c)
 *     _SetSystemTimer @ 0x1C0017B98 (_SetSystemTimer.c)
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0055B10 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     IsTrayWindow @ 0x1C0058D40 (IsTrayWindow.c)
 *     PostShellHookMessages @ 0x1C00BF140 (PostShellHookMessages.c)
 *     InternalSetProp @ 0x1C00C7238 (InternalSetProp.c)
 */

__int64 __fastcall xxxFlashWindow(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // r15d
  int v4; // r14d
  int v7; // r13d
  unsigned int Prop; // eax
  unsigned int v9; // r12d
  unsigned int v10; // edi
  unsigned int v11; // ebx
  BOOL v12; // ebp
  unsigned __int64 v13; // rcx
  unsigned int v14; // r14d
  unsigned int v15; // eax
  int v16; // edi
  unsigned int v17; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 LowLimit; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-40h]
  unsigned int v25; // [rsp+B8h] [rbp+20h]

  v3 = 0;
  v4 = a3;
  LowLimit = 0LL;
  v7 = 1;
  Prop = GetProp(a1, (unsigned __int16)gaFlashWState, 1LL);
  v9 = 2048;
  v10 = Prop;
  if ( Prop == 2048 )
  {
    v10 = 18432;
    v25 = 0;
    v11 = 0;
    goto LABEL_45;
  }
  if ( Prop )
  {
    if ( a2 == 1024 )
      a2 = Prop;
  }
  else
  {
    v19 = *(_QWORD *)(a1 + 40);
    if ( (*(_BYTE *)(v19 + 16) & 0x40) != 0 || (a2 & 1) != 0 && (*(_BYTE *)(v19 + 30) & 0xC0) != 0 )
      v10 = 36864;
  }
  v11 = a2 & 0xFFFF000F;
  v3 = v10 & 0x8000;
  if ( (struct tagWND *)a1 != gspwndAltTab )
  {
    if ( (v10 & 8) != 0 && gpqForeground == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL) )
      v11 = 0;
    v25 = v11;
    if ( v11 )
    {
      v12 = v3 == 0;
      goto LABEL_11;
    }
LABEL_45:
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 120LL) == a1 )
    {
      v12 = 1;
      goto LABEL_15;
    }
    v12 = 0;
LABEL_11:
    v7 = v12;
    if ( v11 && (v11 & 1) == 0 )
    {
LABEL_16:
      if ( (!v11 || (v11 & 2) != 0) && (unsigned int)IsTrayWindow(a1) )
      {
        v13 = *(_QWORD *)a1;
        v23 = *(_QWORD *)a1;
        if ( (v10 & 0x800) != 0 )
          v14 = !v12;
        else
          v14 = v11 != 0 ? v7 : 0;
        xxxCallHook(6, v13, v14, 10);
        PostShellHookMessages(v14 != 0 ? 32774 : 6, v23);
        v4 = a3;
      }
      if ( v11 )
      {
        if ( HIWORD(v11) )
        {
          v10 |= 0x2000u;
          v11 = v25 - 0x10000;
          if ( ((v10 >> 12) & 1) != v12 )
            v11 = v25;
          if ( (v10 & 0x4000) == 0 )
            v11 |= 4u;
        }
        if ( (v11 & 4) == 0 )
          goto LABEL_30;
        v10 |= 0x4000u;
        if ( !v4 )
          v4 = *(_DWORD *)(gpsi + 4984LL);
        if ( SetSystemTimer(a1, 65528, v4, (int)xxxSystemTimerProc, 1) )
        {
LABEL_30:
          if ( (v10 & 0x2000) == 0 || HIWORD(v11) )
          {
            v15 = v10;
            v16 = v10 | 0x8000;
            v17 = v15 & 0xFFFF7FFF;
            if ( !v12 )
              v16 = v17;
            v9 = v16 ^ (v11 ^ v16) & 0xFFFF000B;
          }
          InternalSetProp(a1, (unsigned __int16)gaFlashWState, v9, 5LL);
        }
      }
      else
      {
        if ( (v10 & 0x4000) != 0 )
          FindTimer(a1, 65528LL, 2u, 1, 0LL);
        v20 = (unsigned __int16)gaFlashWState;
        v21 = *(_QWORD *)(a1 + 144);
        if ( gaFlashWState == word_1C0339F54 )
          *(_QWORD *)(*(_QWORD *)(a1 + 40) + 312LL) = 0LL;
        RealInternalRemoveProp(v21, v20, 1LL);
      }
      return v3;
    }
LABEL_15:
    xxxSendTransformableMessageTimeout(a1, 134, v12, 0, 0, 100, (unsigned __int64)&LowLimit, 1, 0);
    goto LABEL_16;
  }
  return v3;
}
