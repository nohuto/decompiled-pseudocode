/*
 * XREFs of ?_Umove_if_noexcept1@?$vector@UCSM_REALIZATION_INFO@@V?$allocator@UCSM_REALIZATION_INFO@@@std@@@std@@AEAAXPEAUCSM_REALIZATION_INFO@@00U?$integral_constant@_N$00@2@@Z @ 0x18024927C
 * Callers:
 *     ?_Umove_if_noexcept@?$vector@UCSM_REALIZATION_INFO@@V?$allocator@UCSM_REALIZATION_INFO@@@std@@@std@@AEAAXPEAUCSM_REALIZATION_INFO@@00@Z @ 0x180249294 (-_Umove_if_noexcept@-$vector@UCSM_REALIZATION_INFO@@V-$allocator@UCSM_REALIZATION_INFO@@@std@@@s.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<CSM_REALIZATION_INFO>::_Umove_if_noexcept1(__int64 a1, void *a2, __int64 a3, void *a4)
{
  return std::_Uninitialized_move<CSM_REALIZATION_INFO *>(a2, a3, a4);
}
