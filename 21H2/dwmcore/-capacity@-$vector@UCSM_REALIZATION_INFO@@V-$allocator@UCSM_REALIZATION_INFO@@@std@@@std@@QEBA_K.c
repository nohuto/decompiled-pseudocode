/*
 * XREFs of ?capacity@?$vector@UCSM_REALIZATION_INFO@@V?$allocator@UCSM_REALIZATION_INFO@@@std@@@std@@QEBA_KXZ @ 0x1802492AC
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UCSM_REALIZATION_INFO@@V?$allocator@UCSM_REALIZATION_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800E3B38 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UCSM_REALIZATION_INFO@@V-$allocator@UCSM_R.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::vector<CSM_REALIZATION_INFO>::capacity(_QWORD *a1)
{
  return 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(a1[2] - *a1) >> 3);
}
