/*
 * XREFs of ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0047E74
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C00472F4 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     WindowHasShadow @ 0x1C003CBA4 (WindowHasShadow.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C003CBD8 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1C003ED78 (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 *     ?PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0048134 (-PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C00482A4 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C0048D78 (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxNotifyMonitorChanged @ 0x1C004A38C (xxxNotifyMonitorChanged.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     CalcWindowFullScreen @ 0x1C00906E4 (CalcWindowFullScreen.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     DwmChildRectChange @ 0x1C00CB830 (DwmChildRectChange.c)
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 *     xxxRemoveShadow @ 0x1C00D3F2C (xxxRemoveShadow.c)
 *     ShouldHaveShadow @ 0x1C011377C (ShouldHaveShadow.c)
 *     xxxAddShadow @ 0x1C0136968 (xxxAddShadow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C013709C (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     xxxUpdateShadowZorder @ 0x1C023DCA8 (xxxUpdateShadowZorder.c)
 *     zzzMoveShadow @ 0x1C023DE50 (zzzMoveShadow.c)
 */

void __fastcall xxxSendChangedMsgs(struct tagSMWP *a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // ebp
  __int64 v5; // rdi
  __int64 ThreadWin32Thread; // rax
  int v7; // r8d
  char v8; // r8
  int v9; // esi
  const struct tagCVR *v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct tagWND **Shadow; // rax
  __int128 v15; // [rsp+60h] [rbp-38h] BYREF
  __int64 v16; // [rsp+70h] [rbp-28h]
  __int64 v17; // [rsp+A0h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  v3 = *((_DWORD *)a1 + 7);
  v15 = 0LL;
  v16 = 0LL;
  while ( --v3 >= 0 )
  {
    if ( !*(_QWORD *)v2 )
      goto LABEL_22;
    LOBYTE(a2) = 1;
    v5 = HMValidateHandleNoSecure(*(_QWORD *)v2, a2);
    if ( !v5 )
    {
      *(_DWORD *)(v2 + 32) = 6159;
LABEL_38:
      *(_QWORD *)v2 = 0LL;
      goto LABEL_22;
    }
    if ( !(unsigned int)IsStillWindowC(*(HWND *)(v2 + 8)) )
      goto LABEL_38;
    if ( (*(_DWORD *)(v2 + 32) & 0x40000) != 0 || (*(_DWORD *)(v2 + 32) & 0x18E7) == 0x1807 )
    {
      PostIAMPosChangedNotification((struct tagCVR *)v2, (struct tagWND *)v5);
    }
    else
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v15 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v15;
      *((_QWORD *)&v15 + 1) = v5;
      HMLockObject(v5);
      v7 = *(_DWORD *)(v2 + 32);
      if ( (v7 & 0x80u) != 0 )
      {
        xxxRemoveShadow(v5);
        v7 = *(_DWORD *)(v2 + 32);
      }
      if ( (v7 & 0x40) != 0 )
      {
        if ( (unsigned int)ShouldHaveShadow(v5) )
          xxxAddShadow((struct tagWND *)v5);
      }
      else if ( (unsigned int)WindowHasShadow(v5) )
      {
        if ( (v8 & 1) == 0 || (v8 & 0x20) != 0 )
        {
          Shadow = (struct tagWND **)FindShadow((struct tagWND *)v5);
          if ( Shadow )
            zzzApplyShadow(*Shadow, Shadow[1]);
        }
        else if ( (v8 & 2) == 0 )
        {
          zzzMoveShadow(v5);
        }
        if ( (*(_DWORD *)(v2 + 32) & 4) == 0 )
          xxxUpdateShadowZorder(v5);
      }
      v9 = *(_DWORD *)(v2 + 32) & 0x9820;
      if ( (unsigned int)IsWindowDesktopComposed(v5) && v9 != 6144 )
        DwmChildRectChange(v5);
      if ( (*(_DWORD *)(gptiCurrent + 1232LL) & 0x40000) == 0 || gptiCurrent == *(_QWORD *)(v5 + 16) )
      {
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(v5, 71, 0, v2, 0, 0, 0LL, 1, 0);
      }
      else if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 392LL) != 1 )
      {
        v17 = 0LL;
        xxxSendTransformableMessageTimeout(v5, 71, 0, v2, 2, 100, (unsigned __int64)&v17, 1, 0);
      }
      if ( (*(_DWORD *)(v2 + 156) & 0x40) != 0 )
      {
        ValidateHmonitorNoRip(*(_QWORD *)(v2 + 128));
        xxxNotifyMonitorChanged((struct tagWND *)v5);
      }
      PostIAMPosChangedNotification((struct tagCVR *)v2, (struct tagWND *)v5);
      NotifyShell::PositioningChanged((NotifyShell *)v5, (struct tagWND *)v2, v10);
      CalcWindowFullScreen((struct tagWND *)v5);
      if ( v9 != 6144 )
        xxxWindowEvent(0x800Bu, 1u);
      ThreadUnlock1(v12, v11, v13);
    }
LABEL_22:
    v2 += 168LL;
  }
  if ( (*gpsi & 4) != 0 )
    xxxImeWindowPosChanged(a1);
}
