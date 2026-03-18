/*
 * XREFs of ??$_Uninitialized_move@PEAUCSM_REALIZATION_INFO@@V?$allocator@UCSM_REALIZATION_INFO@@@std@@@std@@YAPEAUCSM_REALIZATION_INFO@@QEAU1@0PEAU1@AEAV?$allocator@UCSM_REALIZATION_INFO@@@0@@Z @ 0x1802480B8
 * Callers:
 *     ?_Umove_if_noexcept1@?$vector@UCSM_REALIZATION_INFO@@V?$allocator@UCSM_REALIZATION_INFO@@@std@@@std@@AEAAXPEAUCSM_REALIZATION_INFO@@00U?$integral_constant@_N$00@2@@Z @ 0x18024927C (-_Umove_if_noexcept1@-$vector@UCSM_REALIZATION_INFO@@V-$allocator@UCSM_REALIZATION_INFO@@@std@@@.c)
 * Callees:
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 */

__int64 __fastcall std::_Uninitialized_move<CSM_REALIZATION_INFO *>(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove_0(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + 40 * (v4 / 40);
}
