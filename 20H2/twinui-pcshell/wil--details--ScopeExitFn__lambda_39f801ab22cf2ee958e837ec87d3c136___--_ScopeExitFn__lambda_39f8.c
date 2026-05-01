/*
 * XREFs of wil::details::ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___::_ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___ @ 0x1801C1338
 * Callers:
 *     _CToastCenterExperienceManager::RuntimeClassInitialize_::_1_::dtor$2 @ 0x1801C61BC (_CToastCenterExperienceManager--RuntimeClassInitialize_--_1_--dtor$2.c)
 * Callees:
 *     ?Close@CToastCenterExperienceManager@@UEAAJXZ @ 0x1801C1C30 (-Close@CToastCenterExperienceManager@@UEAAJXZ.c)
 */

int __fastcall wil::details::ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___::_ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___(
        _BYTE *a1)
{
  int result; // eax

  if ( a1[8] )
  {
    a1[8] = 0;
    return CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)(*(_QWORD *)a1 + 48LL));
  }
  return result;
}
