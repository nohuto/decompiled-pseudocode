/*
 * XREFs of ??$_Visit@V_lambda_7c9a1ed22efa7e719e5ba754edc265b7_@@AEAV?$_Variant_storage_@$0A@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@@std@@@?$_Variant_raw_visit1@$01@std@@SAX_K$$QEAV_lambda_7c9a1ed22efa7e719e5ba754edc265b7_@@AEAV?$_Variant_storage_@$0A@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@@1@@Z @ 0x18012B8A8
 * Callers:
 *     ??$emplace@UHeatInputConfigContextMessage@@AEAKAEAPEAUINPUT_SPACE_PAYLOAD@@$00$0A@@?$variant@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@@std@@QEAAAEAUHeatInputConfigContextMessage@@AEAKAEAPEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x18012BAA4 (--$emplace@UHeatInputConfigContextMessage@@AEAKAEAPEAUINPUT_SPACE_PAYLOAD@@$00$0A@@-$variant@Umo.c)
 *     ??1?$variant@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@@std@@QEAA@XZ @ 0x18012C080 (--1-$variant@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@U.c)
 *     ?BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@PEAUIHeatSystemContextClient@@@Z @ 0x18012C440 (-BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV-$variant@Umonostate@std@@UInputConfigCo.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180045414 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBEUTar.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KUtagRECT@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUtagRECT@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUtagRECT@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800BBF28 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KUtagRECT@@@std@@PEAX@std@@@std@@@-$_L.c)
 *     ??$_Destroy_range@V?$allocator@UInputSpacePayload@@@std@@@std@@YAXPEAUInputSpacePayload@@0AEAV?$allocator@UInputSpacePayload@@@0@@Z @ 0x18012A7F0 (--$_Destroy_range@V-$allocator@UInputSpacePayload@@@std@@@std@@YAXPEAUInputSpacePayload@@0AEAV-$.c)
 */

void __fastcall std::_Variant_raw_visit1<2>::_Visit<_lambda_7c9a1ed22efa7e719e5ba754edc265b7_,std::_Variant_storage_<0,std::monostate,HeatInputConfigContextMessage,HeatLowPowerStateContextMessage,HeatHingeAngleContextMessage,HeatDisplayOcclusionContextMessage,HeatVirtualTouchpadContextMessage> &>(
        int a1,
        __int64 a2,
        __int64 a3)
{
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  bool v8; // zf
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  _QWORD **v12; // rcx
  _QWORD *v13; // rcx
  _QWORD *v14; // rbx
  void *v15; // rbx

  if ( a1 )
  {
    v4 = a1 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            v8 = v7 == 1;
            v9 = a3 + 24;
            if ( v8 )
            {
              std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy(v9);
              v12 = *(_QWORD ***)(a3 + 8);
              *v12[1] = 0LL;
              v13 = *v12;
              if ( v13 )
              {
                do
                {
                  v14 = (_QWORD *)*v13;
                  std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)0xB0);
                  v13 = v14;
                }
                while ( v14 );
              }
              v11 = 176LL;
            }
            else
            {
              std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy(v9);
              std::_List_node<std::pair<unsigned __int64 const,tagRECT>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,tagRECT>,void *>>>(
                v10,
                *(_QWORD ***)(a3 + 8));
              v11 = 40LL;
            }
            std::_Deallocate<16,0>(*(void **)(a3 + 8), (const struct std::nothrow_t *)v11);
          }
        }
      }
      else
      {
        v15 = *(void **)a3;
        if ( *(_QWORD *)a3 )
        {
          std::_Destroy_range<std::allocator<InputSpacePayload>>(*(_QWORD **)a3, *(_QWORD **)(a3 + 8));
          std::_Deallocate<16,0>(
            v15,
            (const struct std::nothrow_t *)(40 * ((*(_QWORD *)(a3 + 16) - (_QWORD)v15) / 40LL)));
          *(_QWORD *)a3 = 0LL;
          *(_QWORD *)(a3 + 8) = 0LL;
          *(_QWORD *)(a3 + 16) = 0LL;
        }
      }
    }
  }
}
