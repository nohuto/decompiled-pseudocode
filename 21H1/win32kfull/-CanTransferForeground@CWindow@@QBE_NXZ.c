/*
 * XREFs of ?CanTransferForeground@CWindow@@QBE_NXZ @ 0x19ED3A
 * Callers:
 *     _lambda_6b132068d456328099b9be1436a530a1_::operator() @ 0x19EA98 (_lambda_6b132068d456328099b9be1436a530a1_--operator().c)
 *     ?_UpdateWindowInternal@CWindowGroup@@AAE_NPAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OPTIONS@@@Z @ 0x19F7F7 (-_UpdateWindowInternal@CWindowGroup@@AAE_NPAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OP.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0xC7072 (-CompositeAppHasForeground@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 */

char __thiscall CWindow::CanTransferForeground(CWindow *this)
{
  char v1; // bl
  void *v2; // eax

  v1 = 1;
  v2 = (void *)HMValidateHandleNoSecure(*((_DWORD *)this + 2), 1);
  if ( !v2 || !CoreWindowProp::CompositeAppHasForeground(v2) )
    return 0;
  return v1;
}
