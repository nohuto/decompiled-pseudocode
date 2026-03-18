/*
 * XREFs of DisableDelegation @ 0x1C00B4690
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00533CC (xxxDestroyThreadInfo.c)
 *     SetInputDelegationModeImpl @ 0x1C00A28D4 (SetInputDelegationModeImpl.c)
 * Callees:
 *     ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x1C019DA0C (-OverrideClip@CCursorClip@@QEAAX_N@Z.c)
 */

void __fastcall DisableDelegation(CCursorClip *a1)
{
  if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 2) != 0 )
    CCursorClip::OverrideClip(a1, 0);
  InputDelegation::CInputDelegationInfo::gInstance = 0LL;
}
