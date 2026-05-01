/*
 * XREFs of wil::details::lambda_call__lambda_8390a35183845e038b2d3788dae82ba3___::_lambda_call__lambda_8390a35183845e038b2d3788dae82ba3___ @ 0x18023C064
 * Callers:
 *     __lambda_6f903727e28235e985aa4aa4647c4ffc_::operator()_::_1_::dtor$1 @ 0x18023C51D (__lambda_6f903727e28235e985aa4aa4647c4ffc_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x18023FAAC (-RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_8390a35183845e038b2d3788dae82ba3___::_lambda_call__lambda_8390a35183845e038b2d3788dae82ba3___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    PeoplePaneViewManager::RemovePaneViewInfoForContactId(
      *(PeoplePaneViewManager **)a1,
      **(const unsigned __int16 ***)(a1 + 8));
  }
}
