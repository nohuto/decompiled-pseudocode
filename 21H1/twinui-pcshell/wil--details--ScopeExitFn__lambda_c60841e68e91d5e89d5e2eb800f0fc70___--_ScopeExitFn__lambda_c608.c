/*
 * XREFs of wil::details::ScopeExitFn__lambda_c60841e68e91d5e89d5e2eb800f0fc70___::_ScopeExitFn__lambda_c60841e68e91d5e89d5e2eb800f0fc70___ @ 0x18018FA14
 * Callers:
 *     _CControlCenterExperienceManager::RuntimeClassInitialize_::_1_::dtor$2 @ 0x18019192A (_CControlCenterExperienceManager--RuntimeClassInitialize_--_1_--dtor$2.c)
 * Callees:
 *     ?Close@CControlCenterExperienceManager@@UEAAJXZ @ 0x18018FD40 (-Close@CControlCenterExperienceManager@@UEAAJXZ.c)
 */

int __fastcall wil::details::ScopeExitFn__lambda_c60841e68e91d5e89d5e2eb800f0fc70___::_ScopeExitFn__lambda_c60841e68e91d5e89d5e2eb800f0fc70___(
        _BYTE *a1)
{
  int result; // eax

  if ( a1[8] )
  {
    a1[8] = 0;
    return CControlCenterExperienceManager::Close((CControlCenterExperienceManager *)(*(_QWORD *)a1 + 64LL));
  }
  return result;
}
