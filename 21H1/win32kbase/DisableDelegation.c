/*
 * XREFs of DisableDelegation @ 0x1C00463C0
 * Callers:
 *     SetInputDelegationModeImpl @ 0x1C0031834 (SetInputDelegationModeImpl.c)
 *     xxxDestroyThreadInfo @ 0x1C0071CF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x1C01A5B0C (-OverrideClip@CCursorClip@@QEAAX_N@Z.c)
 */

void __fastcall DisableDelegation(CCursorClip *a1)
{
  if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 2) != 0 )
    CCursorClip::OverrideClip(a1, 0);
  InputDelegation::CInputDelegationInfo::gInstance = 0LL;
}
