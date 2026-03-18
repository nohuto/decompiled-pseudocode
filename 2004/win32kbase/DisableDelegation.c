/*
 * XREFs of DisableDelegation @ 0x1C0054000
 * Callers:
 *     SetInputDelegationModeImpl @ 0x1C00403F4 (SetInputDelegationModeImpl.c)
 *     xxxDestroyThreadInfo @ 0x1C0074C34 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x1C019FDAC (-OverrideClip@CCursorClip@@QEAAX_N@Z.c)
 */

void __fastcall DisableDelegation(CCursorClip *a1)
{
  if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 2) != 0 )
    CCursorClip::OverrideClip(a1, 0);
  InputDelegation::CInputDelegationInfo::gInstance = 0LL;
}
