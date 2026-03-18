/*
 * XREFs of ?_TemplateWindow@CWindowGroup@@AAE_NPAVCWindow@@0W4TemplateWindowOptions@@@Z @ 0x19F7A9
 * Callers:
 *     _lambda_1c3d49064923e57234eebd0c1aed86d1_::operator() @ 0x19E983 (_lambda_1c3d49064923e57234eebd0c1aed86d1_--operator().c)
 *     _lambda_6b132068d456328099b9be1436a530a1_::operator() @ 0x19EA98 (_lambda_6b132068d456328099b9be1436a530a1_--operator().c)
 *     ?_UpdateWindowInternal@CWindowGroup@@AAE_NPAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OPTIONS@@@Z @ 0x19F7F7 (-_UpdateWindowInternal@CWindowGroup@@AAE_NPAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OP.c)
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     ?TemplateWindow@CWindow@@QAE_NPAUtagWND@@W4TemplateWindowOptions@@@Z @ 0x19F569 (-TemplateWindow@CWindow@@QAE_NPAUtagWND@@W4TemplateWindowOptions@@@Z.c)
 */

char __stdcall CWindowGroup::_TemplateWindow(unsigned int *a1, unsigned int *a2, char a3)
{
  char v3; // bl
  int v4; // esi
  _BYTE v6[8]; // [esp+Ch] [ebp-8h] BYREF

  if ( a1 == a2 )
    return 1;
  v3 = 0;
  v4 = HMValidateHandleNoSecure(a1[2], 1);
  if ( v4 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v6);
    v3 = CWindow::TemplateWindow(a2, v4, a3);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v6);
  }
  return v3;
}
