/*
 * XREFs of ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76
 * Callers:
 *     _xxxSwitchToThisWindow@8 @ 0x11FBE (_xxxSwitchToThisWindow@8.c)
 *     ?CreateAndPostTSFNotify@@YGXKPAUtagWND@@JJPAUtagTHREADINFO@@1K@Z @ 0x12096 (-CreateAndPostTSFNotify@@YGXKPAUtagWND@@JJPAUtagTHREADINFO@@1K@Z.c)
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 *     _xxxProcessNotifyWinEvent@4 @ 0x143A2 (_xxxProcessNotifyWinEvent@4.c)
 *     _xxxApplyGlobalInputSettings@4 @ 0x1855E (_xxxApplyGlobalInputSettings@4.c)
 *     ?xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x19168 (-xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroun.c)
 *     _SetWindowExtendedBoundsMargin@8 @ 0x258E8 (_SetWindowExtendedBoundsMargin@8.c)
 *     ?xxxMouseActivate@@YGHPAUtagTHREADINFO@@PAUtagWND@@PBUtagQMSG@@H@Z @ 0x7007A (-xxxMouseActivate@@YGHPAUtagTHREADINFO@@PAUtagWND@@PBUtagQMSG@@H@Z.c)
 *     ?xxxFW_DestroyAllChildren@@YGXPAUtagWND@@@Z @ 0x716C8 (-xxxFW_DestroyAllChildren@@YGXPAUtagWND@@@Z.c)
 *     ?BeginGetWidnowTrackInfoAsync@@YG_NPAUtagWND@@@Z @ 0x7D7DC (-BeginGetWidnowTrackInfoAsync@@YG_NPAUtagWND@@@Z.c)
 *     _NtUserDisableThreadIme@4 @ 0x801DE (_NtUserDisableThreadIme@4.c)
 *     __ScheduleDispatchNotification@4 @ 0x99DF0 (__ScheduleDispatchNotification@4.c)
 *     _EditionHandleAndPostKeyEvent@68 @ 0xA3150 (_EditionHandleAndPostKeyEvent@68.c)
 *     ?AsyncWindowPos@@YGXPAUtagSMWP@@@Z @ 0xA4AAA (-AsyncWindowPos@@YGXPAUtagSMWP@@@Z.c)
 *     ?xxxDeliverRestoreFocusMessage@@YGXPAUtagWND@@@Z @ 0xAC35E (-xxxDeliverRestoreFocusMessage@@YGXPAUtagWND@@@Z.c)
 *     _NtUserRegisterBSDRWindow@8 @ 0xAECA2 (_NtUserRegisterBSDRWindow@8.c)
 *     ?PostThreadRecalc@@YGHPAUtagTHREADINFO@@PAUtagMONITORRECTS@@PAUtagWINDOWANDRECT@@HK@Z @ 0xB065A (-PostThreadRecalc@@YGHPAUtagTHREADINFO@@PAUtagMONITORRECTS@@PAUtagWINDOWANDRECT@@HK@Z.c)
 *     _zzzDecomposeDesktop@8 @ 0xCF042 (_zzzDecomposeDesktop@8.c)
 *     _NtUserBroadcastThemeChangeEvent@8 @ 0xE78DA (_NtUserBroadcastThemeChangeEvent@8.c)
 *     ?PostEventMessage@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJ@Z @ 0xF0F56 (-PostEventMessage@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJ@Z.c)
 *     _EditionPostInputEvent@32 @ 0xF15F0 (_EditionPostInputEvent@32.c)
 *     _EditionPostThreadInputEvent@32 @ 0xF1784 (_EditionPostThreadInputEvent@32.c)
 *     _EditionPostUpdateKeyStateEvent@8 @ 0xF20D0 (_EditionPostUpdateKeyStateEvent@8.c)
 *     _EditionPostRitSound@12 @ 0xF3B2A (_EditionPostRitSound@12.c)
 *     ?_ShowWindowAsync@@YGHPAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@HI@Z @ 0xF505E (-_ShowWindowAsync@@YGHPAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@HI@Z.c)
 *     ?CloneWindowPosAndArrangementAsync@@YG_NPAUtagWND@@PBU1@1W4CloneWindowPosOptions@@@Z @ 0x13F438 (-CloneWindowPosAndArrangementAsync@@YG_NPAUtagWND@@PBU1@1W4CloneWindowPosOptions@@@Z.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YGXPAUtagWND@@KH@Z @ 0x150226 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YGXPAUtagWND@@KH@Z.c)
 *     ?xxxPointerActivateInternal@@YGXPAUtagWND@@FKPBUtagPOINTEREVENTINT@@H@Z @ 0x15B536 (-xxxPointerActivateInternal@@YGXPAUtagWND@@FKPBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?BeginSetWindowArrangement@@YG_NPAUtagWND@@QBUtagRECT@@1K@Z @ 0x170CB9 (-BeginSetWindowArrangement@@YG_NPAUtagWND@@QBUtagRECT@@1K@Z.c)
 *     _EditionPostAccessibility@4 @ 0x178273 (_EditionPostAccessibility@4.c)
 *     _xxxMinimizeHungWindow@4 @ 0x19E29E (_xxxMinimizeHungWindow@4.c)
 *     ?ForceForeground@CWindow@@QAE_NXZ @ 0x19F061 (-ForceForeground@CWindow@@QAE_NXZ.c)
 *     ?CreateAndPostRequest@CMoveSizeRequest@@CG_NPAUtagWND@@W4MOVESIZE_OPERATION@@ABUtagPOINT@@@Z @ 0x19FB8D (-CreateAndPostRequest@CMoveSizeRequest@@CG_NPAUtagWND@@W4MOVESIZE_OPERATION@@ABUtagPOINT@@@Z.c)
 * Callees:
 *     _SetWakeBit@8 @ 0x44776 (_SetWakeBit@8.c)
 *     ??1?$CLockExclusiveInUserCrit@VDLT_POST@@@@QAE@XZ @ 0x6D242 (--1-$CLockExclusiveInUserCrit@VDLT_POST@@@@QAE@XZ.c)
 *     ?AllocQEntryEx@@YGPAUtagQMSG@@PAUtagMLIST@@PAU1@_N@Z @ 0x6D81C (-AllocQEntryEx@@YGPAUtagQMSG@@PAUtagMLIST@@PAU1@_N@Z.c)
 *     ??0?$CLockExclusiveInUserCrit@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z @ 0x9DD9A (--0-$CLockExclusiveInUserCrit@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z.c)
 *     ?vAdjustDelegatePriority@@YGXPAUtagTHREADINFO@@@Z @ 0xA1CA0 (-vAdjustDelegatePriority@@YGXPAUtagTHREADINFO@@@Z.c)
 *     _PtiKbdFromQ@4 @ 0xA98F4 (_PtiKbdFromQ@4.c)
 *     _ProcessSuspendedEventMessage@24 @ 0xADCB2 (_ProcessSuspendedEventMessage@24.c)
 *     ?StoreQMessage@@YGXPAUtagQMSG@@PAUtagWND@@IIJK_KKKKPAUtagINPUT_MESSAGE_SOURCE@@KPAXPAUtagUIPI_INFO@@@Z @ 0xEFC1E (-StoreQMessage@@YGXPAUtagQMSG@@PAUtagWND@@IIJK_KKKKPAUtagINPUT_MESSAGE_SOURCE@@KPAXPAUtagUIPI_IN.c)
 */

int __userpurge PostEventMessageEx@<eax>(
        tagDomLock *a1@<edx>,
        int a2@<ecx>,
        struct tagTHREADINFO *a3,
        HWND *a4,
        struct tagQMSG *a5,
        struct tagWND *a6,
        unsigned int a7,
        _DWORD *a8,
        int a9,
        struct tagINPUT_MESSAGE_SOURCE *a10)
{
  int v12; // edi
  HWND *v13; // edx
  unsigned int v14; // eax
  struct tagQMSG *v16; // [esp+0h] [ebp-18h]
  void *v17; // [esp+0h] [ebp-18h]
  int v18; // [esp+0h] [ebp-18h]
  bool v19; // [esp+4h] [ebp-14h]
  struct tagUIPI_INFO *v20; // [esp+4h] [ebp-14h]
  int v21; // [esp+4h] [ebp-14h]
  struct tagQMSG *v22; // [esp+Ch] [ebp-Ch]
  tagDomLock *v23; // [esp+10h] [ebp-8h] BYREF

  CLockExclusiveInUserCrit<DLT_QUEUE>::CLockExclusiveInUserCrit<DLT_QUEUE>(&v23, a1);
  v12 = 0;
  if ( !a2
    || (*(_BYTE *)(a2 + 264) & 1) == 0
    && ((vAdjustDelegatePriority(a2), (*(_BYTE *)(a2 + 688) & 0x20) == 0)
     || ProcessSuspendedEventMessage(a2, (int)a3, (struct tagMLIST **)a4, (unsigned int)a5, (unsigned int)a6, a7)) )
  {
    v22 = AllocQEntryEx(0, (_DWORD *)a1 + 3, 0, v16, v19);
    if ( v22 )
    {
      v13 = a4;
      if ( a4 )
        v14 = *((_DWORD *)a4[5] + 46);
      else
        v14 = *(_DWORD *)(*(_DWORD *)(PtiKbdFromQ(a1) + 232) + 156);
      StoreQMessage(v13, v22, a5, a6, a7, 0, 0, 0, (unsigned int)a3, 0, a8, v14, 0, 0, v17, v20);
      *((_DWORD *)v22 + 17) = a2;
      if ( a3 == (struct tagTHREADINFO *)20 )
        CTouchProcessor::ReferenceMsgDataExternal(_gpTouchProcessor, a7, 3, v22, v18, v21);
      if ( !a2 )
      {
        SetWakeBit(*((_DWORD *)a1 + 12), 8256);
        a2 = *((_DWORD *)a1 + 13);
      }
      SetWakeBit(a2, 8256);
      v12 = 1;
    }
  }
  CLockExclusiveInUserCrit<DLT_POST>::~CLockExclusiveInUserCrit<DLT_POST>();
  return v12;
}
