/*
 * XREFs of ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803467C8
 * Callers:
 *     ?OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18034CE50 (-OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x18034D000 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 *     ?OnDismiss@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18034D2D0 (-OnDismiss@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z @ 0x18034D9EC (-OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z.c)
 *     ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x18034DB3C (-OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z.c)
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@UViewOptions@@@Z @ 0x18034DCA4 (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@UViewOptions@@@Z.c)
 *     ?OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18034DFA0 (-OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x18034E4B0 (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18034EAD0 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18034EEE0 (-PreloadInputApp@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180352F20 (-SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x180362A78 (-SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18001DE04 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     memset_0 @ 0x18008DA68 (memset_0.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1,
        __int64 a2)
{
  *(_QWORD *)a1 = &wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    (struct wil::details::IFailureCallback *)((char *)a1 + 96),
    0);
  *((_QWORD *)a1 + 6) = (char *)a1 + 56;
  *((_DWORD *)a1 + 14) = 0;
  *((_DWORD *)a1 + 24) = 0;
  *((_QWORD *)a1 + 14) = 0LL;
  *((_DWORD *)a1 + 33) = 0;
  *((_BYTE *)a1 + 60) = 0;
  *((_BYTE *)a1 + 120) = 0;
  *((_QWORD *)a1 + 13) = a2;
  *((_DWORD *)a1 + 32) = 1;
  *((_QWORD *)a1 + 35) = 0LL;
  *((_QWORD *)a1 + 36) = 0LL;
  memset_0((char *)a1 + 136, 0, 0x90uLL);
  *((_QWORD *)a1 + 37) = 0LL;
  *((_QWORD *)a1 + 38) = 0LL;
  return a1;
}
