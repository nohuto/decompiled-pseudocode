/*
 * XREFs of ?IsAnyViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NXZ @ 0x1803691EC
 * Callers:
 *     ?HandleEditControlEmbeddedHandwritingViewVisibleSettingChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180086420 (-HandleEditControlEmbeddedHandwritingViewVisibleSettingChanged@TabTipAdapterPolicy@KeyboardHosti.c)
 *     ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x18035F6D0 (-OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnPrimaryViewHidingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewHidingResponseEventArgs@45678@@Z @ 0x180360850 (-OnPrimaryViewHidingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@T.c)
 *     ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x18036353C (-SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeyboardHosting::TabTipAdapterPolicy::IsAnyViewShown(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  __int64 **Ptr; // rcx
  __int64 *i; // rax
  bool v5; // zf
  bool v6; // bl

  v2 = this + 55;
  AcquireSRWLockShared(this + 55);
  Ptr = (__int64 **)this[48].Ptr;
  for ( i = *Ptr; ; i = (__int64 *)*i )
  {
    v5 = Ptr == (__int64 **)i;
    if ( Ptr == (__int64 **)i )
      break;
    if ( *((_BYTE *)i + 20) )
    {
      v5 = Ptr == (__int64 **)i;
      break;
    }
  }
  v6 = !v5;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v6;
}
