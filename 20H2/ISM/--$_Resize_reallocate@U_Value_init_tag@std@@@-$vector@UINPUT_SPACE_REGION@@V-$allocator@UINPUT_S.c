/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180037424
 * Callers:
 *     ?OnSystemContextNotification@DWMCursorBroker@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@@Z @ 0x180037320 (-OnSystemContextNotification@DWMCursorBroker@@UEAAJPEAV-$variant@Umonostate@std@@UInputConfigCon.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEBA_K_K@Z @ 0x180037578 (-_Calculate_growth@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_SPACE_REGION@@@std@@@std@@A.c)
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     ?_Xlength@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@std@@@std@@@std@@@2@@std@@CAXXZ @ 0x18003FB2C (-_Xlength@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBKU.c)
 *     memmove_0 @ 0x18004A647 (memmove_0.c)
 */

__int64 __fastcall std::vector<INPUT_SPACE_REGION>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // r15
  size_t v6; // rcx
  unsigned __int64 v7; // r10
  _QWORD *v8; // r14

  if ( a2 > 0x147AE147AE147AELL )
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,InputInfoValidator::PointerState>>>>>::_Xlength();
  v4 = (*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) / 200LL;
  v5 = std::vector<INPUT_SPACE_REGION>::_Calculate_growth(a1, a2);
  v6 = 200 * v5;
  if ( v5 > v7 )
    v6 = -1LL;
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(v6);
  if ( a2 != v4 )
    memset_0(&v8[25 * v4], 0, 200 * (a2 - v4));
  memmove_0(v8, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return std::vector<INPUT_SPACE_REGION>::_Change_array(a1, v8, a2, v5);
}
