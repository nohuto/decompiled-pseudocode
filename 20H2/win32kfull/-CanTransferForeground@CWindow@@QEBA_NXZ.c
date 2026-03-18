/*
 * XREFs of ?CanTransferForeground@CWindow@@QEBA_NXZ @ 0x1C023FBBC
 * Callers:
 *     _lambda_a3dfffe89e22da34bf9580289d018c81_::operator() @ 0x1C023F7A0 (_lambda_a3dfffe89e22da34bf9580289d018c81_--operator().c)
 *     ?_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OPTIONS@@@Z @ 0x1C02409FC (-_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_.c)
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C000796C (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 */

char __fastcall CWindow::CanTransferForeground(CWindow *this)
{
  char v1; // bl
  const struct tagWND *v2; // rax

  v1 = 1;
  v2 = (const struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)this + 2), 1);
  if ( !v2 || !(unsigned int)CoreWindowProp::CompositeAppHasForeground(v2) )
    return 0;
  return v1;
}
