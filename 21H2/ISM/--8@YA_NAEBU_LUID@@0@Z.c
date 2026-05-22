/*
 * XREFs of ??8@YA_NAEBU_LUID@@0@Z @ 0x1800B71C0
 * Callers:
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUHitTestResult@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x180017B90 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 *     ?OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z @ 0x18001A290 (-OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z.c)
 *     ?IsSameByLuid@DWMInputTarget@@UEBA_NPEAX@Z @ 0x1800B6F90 (-IsSameByLuid@DWMInputTarget@@UEBA_NPEAX@Z.c)
 *     std::_Func_impl_no_alloc__lambda_d5678778919a42e7570bc6bda635f82a__bool_ActivatableEntityBamoPrincipal___::_Do_call @ 0x180105670 (std--_Func_impl_no_alloc__lambda_d5678778919a42e7570bc6bda635f82a__bool_Activatable_ea_180105670.c)
 *     ?IsSameByInputDest@InputDestTarget@@UEBA_NAEBUtagINPUTDEST@@@Z @ 0x18013AA30 (-IsSameByInputDest@InputDestTarget@@UEBA_NAEBUtagINPUTDEST@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator==(_DWORD *a1, _DWORD *a2)
{
  return a1[1] == a2[1] && *a1 == *a2;
}
