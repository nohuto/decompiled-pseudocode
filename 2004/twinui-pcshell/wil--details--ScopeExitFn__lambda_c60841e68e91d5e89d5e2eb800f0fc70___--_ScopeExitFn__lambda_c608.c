/*
 * XREFs of wil::details::ScopeExitFn__lambda_c60841e68e91d5e89d5e2eb800f0fc70___::_ScopeExitFn__lambda_c60841e68e91d5e89d5e2eb800f0fc70___ @ 0x1801B36F4
 * Callers:
 *     _CControlCenterExperienceManager::RuntimeClassInitialize_::_1_::dtor$2 @ 0x1801B560A (_CControlCenterExperienceManager--RuntimeClassInitialize_--_1_--dtor$2.c)
 * Callees:
 *     ?Close@CControlCenterExperienceManager@@UEAAJXZ @ 0x1801B3A20 (-Close@CControlCenterExperienceManager@@UEAAJXZ.c)
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
