/*
 * XREFs of ?GetFirstViewTypeIfExists@TouchKeyboardExperienceManager@@QEAA_NIAEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x18034AE20
 * Callers:
 *     ?IsInputAppViewShowHideCallbackSafeToReportToTelemetry@TabTipAdapter@KeyboardHosting@@AEAA_NI@Z @ 0x18035E4F0 (-IsInputAppViewShowHideCallbackSafeToReportToTelemetry@TabTipAdapter@KeyboardHosting@@AEAA_NI@Z.c)
 *     ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x18035F6D0 (-OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x18035FA10 (-OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x18035FE50 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     ?GetFirstViewType@KBViewInfo@@QEBAIXZ @ 0x18034AE00 (-GetFirstViewType@KBViewInfo@@QEBAIXZ.c)
 *     ?IsValid@KBViewInfo@@QEBA_NXZ @ 0x18034C938 (-IsValid@KBViewInfo@@QEBA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall TouchKeyboardExperienceManager::GetFirstViewTypeIfExists(
        RTL_SRWLOCK *this,
        int a2,
        enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType *a3)
{
  RTL_SRWLOCK *v6; // rdi
  KBViewInfo **Ptr; // rbx
  KBViewInfo **v8; // rbp
  int FirstViewType; // eax
  char v10; // bl

  *(_DWORD *)a3 = 11;
  v6 = this + 52;
  AcquireSRWLockShared(this + 52);
  Ptr = (KBViewInfo **)this[53].Ptr;
  v8 = (KBViewInfo **)this[54].Ptr;
  while ( Ptr != v8 && (!KBViewInfo::IsValid(*Ptr) || *((_DWORD *)*Ptr + 26) != a2) )
    Ptr += 2;
  if ( Ptr == this[54].Ptr || (FirstViewType = KBViewInfo::GetFirstViewType(*Ptr), FirstViewType == -1) )
  {
    v10 = 0;
  }
  else
  {
    *(_DWORD *)a3 = FirstViewType;
    v10 = 1;
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v10;
}
