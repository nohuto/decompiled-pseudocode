/*
 * XREFs of _lambda_3dfc3574f1764bae2e3df8ef16480b1e_::operator() @ 0xEF93E
 * Callers:
 *     _lambda_3dfc3574f1764bae2e3df8ef16480b1e_::_lambda_invoker_stdcall_ @ 0xEF7DC (_lambda_3dfc3574f1764bae2e3df8ef16480b1e_--_lambda_invoker_stdcall_.c)
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     ?GroupManagementEnabledForCaller@WindowGroupingUtility@@YG_NXZ @ 0x9272E (-GroupManagementEnabledForCaller@WindowGroupingUtility@@YG_NXZ.c)
 *     ?GetGroupActiveWindow@CWindowGroupManager@@QAEPAUtagWND@@PAU2@W4GetWindowForActivationOption@WindowGroupingWindowManagement@@@Z @ 0x19F0FC (-GetGroupActiveWindow@CWindowGroupManager@@QAEPAUtagWND@@PAU2@W4GetWindowForActivationOption@Win.c)
 *     _anonymous_namespace_::GetWindowInGroupFromHint @ 0x19F198 (_anonymous_namespace_--GetWindowInGroupFromHint.c)
 */

bool __stdcall lambda_3dfc3574f1764bae2e3df8ef16480b1e_::operator()(int a1, int *a2)
{
  int GroupActiveWindow; // edi
  int WindowInGroupFromHint; // eax
  int v4; // ecx
  _BYTE v6[8]; // [esp+8h] [ebp-8h] BYREF

  GroupActiveWindow = 0;
  *a2 = 0;
  a2[1] = 0;
  if ( (unsigned __int8)WindowGroupingUtility::GroupManagementEnabledForCaller() )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v6);
    WindowInGroupFromHint = anonymous_namespace_::GetWindowInGroupFromHint(a1);
    if ( WindowInGroupFromHint )
      GroupActiveWindow = CWindowGroupManager::GetGroupActiveWindow(WindowInGroupFromHint, v4);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v6);
    if ( GroupActiveWindow )
    {
      *a2 = GroupActiveWindow;
      a2[1] = 6;
    }
  }
  return *a2 != 0;
}
