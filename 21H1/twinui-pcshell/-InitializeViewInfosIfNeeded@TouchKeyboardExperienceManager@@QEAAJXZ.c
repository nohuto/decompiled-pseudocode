/*
 * XREFs of ?InitializeViewInfosIfNeeded@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x18032A63C
 * Callers:
 *     ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x18033E030 (-OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x18033E370 (-OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x18033E7B0 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18000F1A8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000F6F0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18011C428 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18032A304 (-InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::InitializeViewInfosIfNeeded(RTL_SRWLOCK *this)
{
  struct KBViewInfo **Ptr; // rbx
  struct KBViewInfo **v3; // rsi
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v7, this + 52);
  Ptr = (struct KBViewInfo **)this[53].Ptr;
  v3 = (struct KBViewInfo **)this[54].Ptr;
  while ( Ptr != v3 )
  {
    v4 = TouchKeyboardExperienceManager::InitializeViewInfoIfNeeded((TouchKeyboardExperienceManager *)this, *Ptr);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        2819LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
      __debugbreak();
    }
    Ptr += 2;
  }
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v7);
  return 0LL;
}
