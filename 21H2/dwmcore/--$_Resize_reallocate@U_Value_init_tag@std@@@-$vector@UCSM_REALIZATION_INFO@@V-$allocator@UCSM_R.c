/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UCSM_REALIZATION_INFO@@V?$allocator@UCSM_REALIZATION_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800E3B38
 * Callers:
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@UCSM_REALIZATION_INFO@@V?$allocator@UCSM_REALIZATION_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800E3A9C (--$_Resize@U_Value_init_tag@std@@@-$vector@UCSM_REALIZATION_INFO@@V-$allocator@UCSM_REALIZATION_.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1800B7328 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     ?_Xlength@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@CAXXZ @ 0x18019180C (-_Xlength@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@CAXXZ.c)
 *     ?_Umove_if_noexcept@?$vector@UCSM_REALIZATION_INFO@@V?$allocator@UCSM_REALIZATION_INFO@@@std@@@std@@AEAAXPEAUCSM_REALIZATION_INFO@@00@Z @ 0x180249294 (-_Umove_if_noexcept@-$vector@UCSM_REALIZATION_INFO@@V-$allocator@UCSM_REALIZATION_INFO@@@std@@@s.c)
 *     ?capacity@?$vector@UCSM_REALIZATION_INFO@@V?$allocator@UCSM_REALIZATION_INFO@@@std@@@std@@QEBA_KXZ @ 0x1802492AC (-capacity@-$vector@UCSM_REALIZATION_INFO@@V-$allocator@UCSM_REALIZATION_INFO@@@std@@@std@@QEBA_K.c)
 */

__int64 __fastcall std::vector<CSM_REALIZATION_INFO>::_Resize_reallocate<std::_Value_init_tag>(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  SIZE_T size_of; // rax
  __int64 v9; // r15
  void *v10; // rcx

  v2 = 0x666666666666666LL;
  if ( a2 > 0x666666666666666LL )
    std::vector<KernelTap>::_Xlength(a1);
  v5 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(a1[1] - *a1) >> 3);
  v6 = std::vector<CSM_REALIZATION_INFO>::capacity();
  v7 = v6 >> 1;
  if ( v6 <= 0x666666666666666LL - (v6 >> 1) )
  {
    v2 = v7 + v6;
    if ( v7 + v6 < a2 )
      v2 = a2;
  }
  size_of = std::_Get_size_of_n<40>(v2);
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v10 = (void *)(v9 + 40 * v5);
  if ( a2 != v5 )
    memset_0(v10, 0, 40 * (a2 - v5));
  std::vector<CSM_REALIZATION_INFO>::_Umove_if_noexcept(v10, *a1, a1[1], v9);
  return std::vector<CSM_REALIZATION_INFO>::_Change_array(a1, v9, a2, v2);
}
