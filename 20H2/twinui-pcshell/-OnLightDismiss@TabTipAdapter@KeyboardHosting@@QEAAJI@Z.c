/*
 * XREFs of ?OnLightDismiss@TabTipAdapter@KeyboardHosting@@QEAAJI@Z @ 0x18035FE08
 * Callers:
 *     ?OnDismiss@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18034D2D0 (-OnDismiss@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal@Windows@@I@Z @ 0x180360DB8 (-ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal.c)
 *     ?VerifyLightDismiss@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEA_N@Z @ 0x18036A780 (-VerifyLightDismiss@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEA_N@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnLightDismiss(
        KeyboardHosting::TabTipAdapter *this,
        unsigned int a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  v4 = KeyboardHosting::TabTipAdapterPolicy::VerifyLightDismiss(
         (KeyboardHosting::TabTipAdapterPolicy *)(*((_QWORD *)this + 13) + 16LL),
         a2,
         &v8);
  if ( v4 < 0 )
  {
    v5 = 2382LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  if ( v8 )
  {
    v4 = KeyboardHosting::TabTipAdapter::ProcessChangeRequest(this, 2LL, a2);
    if ( v4 < 0 )
    {
      v5 = 2386LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
