/*
 * XREFs of ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006F48C
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C006DEE0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     WindowHasShadow @ 0x1C001DE04 (WindowHasShadow.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C001DE38 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     CalcWindowFullScreen @ 0x1C00239C8 (CalcWindowFullScreen.c)
 *     xxxNotifyMonitorChanged @ 0x1C006B018 (xxxNotifyMonitorChanged.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C006CE1C (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     ?PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C006F74C (-PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C006F798 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 *     xxxRemoveShadow @ 0x1C008EB8C (xxxRemoveShadow.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0097EC0 (xxxSendTransformableMessageTimeout.c)
 *     DwmChildRectChange @ 0x1C00A5C78 (DwmChildRectChange.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1C00AFF48 (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 *     ShouldHaveShadow @ 0x1C011225C (ShouldHaveShadow.c)
 *     xxxAddShadow @ 0x1C0134A18 (xxxAddShadow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C013514C (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     xxxUpdateShadowZorder @ 0x1C023EF48 (xxxUpdateShadowZorder.c)
 *     zzzMoveShadow @ 0x1C023F0F0 (zzzMoveShadow.c)
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
  struct tagRECT v15; // xmm0
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int16 v18; // cx
  struct tagRECT v19; // [rsp+50h] [rbp-48h] BYREF
  __int128 v20; // [rsp+60h] [rbp-38h] BYREF
  __int64 v21; // [rsp+70h] [rbp-28h]
  __int64 v22; // [rsp+A0h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  v3 = *((_DWORD *)a1 + 7);
  v20 = 0LL;
  v21 = 0LL;
  while ( --v3 >= 0 )
  {
    if ( !*(_QWORD *)v2 )
      goto LABEL_21;
    LOBYTE(a2) = 1;
    v5 = HMValidateHandleNoSecure(*(_QWORD *)v2, a2);
    if ( !v5 )
    {
      *(_DWORD *)(v2 + 32) = 6159;
LABEL_37:
      *(_QWORD *)v2 = 0LL;
      goto LABEL_21;
    }
    if ( !(unsigned int)IsStillWindowC(*(HWND *)(v2 + 8)) )
      goto LABEL_37;
    if ( (*(_DWORD *)(v2 + 32) & 0x40000) != 0 || (*(_DWORD *)(v2 + 32) & 0x18E7) == 0x1807 )
    {
      PostIAMPosChangedNotification((struct tagCVR *)v2, (struct tagWND *)v5);
    }
    else
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v20 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v20;
      *((_QWORD *)&v20 + 1) = v5;
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
      if ( (*(_DWORD *)(gptiCurrent + 1224LL) & 0x40000) == 0 || gptiCurrent == *(_QWORD *)(v5 + 16) )
      {
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(v5, 71, 0, v2, 0, 0, 0LL, 1, 0);
      }
      else if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 392LL) != 1 )
      {
        v22 = 0LL;
        xxxSendTransformableMessageTimeout(v5, 71, 0, v2, 2, 100, (unsigned __int64)&v22, 1, 0);
      }
      if ( (*(_DWORD *)(v2 + 156) & 0x40) != 0 )
      {
        if ( (*(_DWORD *)(v2 + 32) & 0x80000) != 0 )
          v15 = *(struct tagRECT *)(*(_QWORD *)(v5 + 40) + 88LL);
        else
          v15 = *(struct tagRECT *)(v2 + 136);
        v16 = *(_QWORD *)(v2 + 128);
        v19 = v15;
        v17 = ValidateHmonitorNoRip(v16);
        if ( v17 )
          v18 = *(_WORD *)(*(_QWORD *)(v17 + 40) + 64LL);
        else
          v18 = 0;
        xxxNotifyMonitorChanged((struct tagWND *)v5, &v19, *(struct tagBWL **)(v2 + 160), v18);
      }
      PostIAMPosChangedNotification((struct tagCVR *)v2, (struct tagWND *)v5);
      NotifyShell::PositioningChanged((NotifyShell *)v5, (struct tagWND *)v2, v10);
      CalcWindowFullScreen((struct tagWND *)v5);
      if ( v9 != 6144 )
        xxxWindowEvent(0x800Bu, 1u);
      ThreadUnlock1(v12, v11, v13);
    }
LABEL_21:
    v2 += 168LL;
  }
  if ( (*gpsi & 4) != 0 )
    xxxImeWindowPosChanged(a1);
}
