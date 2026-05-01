/*
 * XREFs of ?IsHidingAnimationRunning@TabTipAdapterPolicy@KeyboardHosting@@QEBA_NI@Z @ 0x180368A30
 * Callers:
 *     ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x18035ED80 (-OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnPrimaryViewHidingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewHidingResponseEventArgs@45678@@Z @ 0x18035FF00 (-OnPrimaryViewHidingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@T.c)
 *     ?VerifyInputAppRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAIPEAE@Z @ 0x180369E50 (-VerifyInputAppRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAIPEAE@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180073B14 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 */

bool __fastcall KeyboardHosting::TabTipAdapterPolicy::IsHidingAnimationRunning(
        KeyboardHosting::TabTipAdapterPolicy *this,
        int a2)
{
  __int64 appended; // rax
  _QWORD *v4; // r11
  __int64 v5; // r9
  __int64 *v6; // rdx
  __int64 v7; // r8
  __int64 *i; // rcx
  __int64 *v9; // rax
  int v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  appended = std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v11, 4uLL);
  v5 = v4[69];
  v6 = (__int64 *)v4[67];
  v7 = 2 * (v4[72] & appended);
  for ( i = *(__int64 **)(v5 + 16 * (v4[72] & appended)); ; i = (__int64 *)*i )
  {
    v9 = *(__int64 **)(v5 + 8 * v7) == v6 ? (__int64 *)v4[67] : **(__int64 ***)(v5 + 8 * v7 + 8);
    if ( i == v9 )
      break;
    if ( *((_DWORD *)i + 4) == a2 )
      goto LABEL_9;
  }
  i = (__int64 *)v4[67];
LABEL_9:
  if ( i == v6 )
    return 0;
  else
    return *((_BYTE *)i + 20);
}
