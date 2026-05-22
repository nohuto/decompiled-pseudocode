/*
 * XREFs of ??$emplace@UHeatInputConfigContextMessage@@AEAKAEAPEAUINPUT_SPACE_PAYLOAD@@$00$0A@@?$variant@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@@std@@QEAAAEAUHeatInputConfigContextMessage@@AEAKAEAPEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x18012BF94
 * Callers:
 *     ?BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@PEAUIHeatSystemContextClient@@@Z @ 0x18012C930 (-BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV-$variant@Umonostate@std@@UInputConfigCo.c)
 * Callees:
 *     ??$_Visit@V_lambda_7c9a1ed22efa7e719e5ba754edc265b7_@@AEAV?$_Variant_storage_@$0A@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@@std@@@?$_Variant_raw_visit1@$01@std@@SAX_K$$QEAV_lambda_7c9a1ed22efa7e719e5ba754edc265b7_@@AEAV?$_Variant_storage_@$0A@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@@1@@Z @ 0x18012BD98 (--$_Visit@V_lambda_7c9a1ed22efa7e719e5ba754edc265b7_@@AEAV-$_Variant_storage_@$0A@Umonostate@std.c)
 *     ??$emplace_back@AEAUINPUT_SPACE_PAYLOAD@@@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@QEAAAEAUInputSpacePayload@@AEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x18012C03C (--$emplace_back@AEAUINPUT_SPACE_PAYLOAD@@@-$vector@UInputSpacePayload@@V-$allocator@UInputSpaceP.c)
 *     ?_Reallocate_exactly@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@AEAAX_K@Z @ 0x18012DDA8 (-_Reallocate_exactly@-$vector@UInputSpacePayload@@V-$allocator@UInputSpacePayload@@@std@@@std@@A.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::variant<std::monostate,HeatInputConfigContextMessage,HeatLowPowerStateContextMessage,HeatHingeAngleContextMessage,HeatDisplayOcclusionContextMessage,HeatVirtualTouchpadContextMessage>::emplace<HeatInputConfigContextMessage,unsigned long &,INPUT_SPACE_PAYLOAD * &,1,0>(
        __int64 a1,
        unsigned int *a2,
        __int64 *a3)
{
  __int64 v6; // r14
  unsigned int v7; // ebx
  unsigned int v8; // eax

  std::_Variant_raw_visit1<2>::_Visit<_lambda_7c9a1ed22efa7e719e5ba754edc265b7_,std::_Variant_storage_<0,std::monostate,HeatInputConfigContextMessage,HeatLowPowerStateContextMessage,HeatHingeAngleContextMessage,HeatDisplayOcclusionContextMessage,HeatVirtualTouchpadContextMessage> &>(
    *(char *)(a1 + 64) + 1,
    (__int64)a2,
    a1);
  *(_BYTE *)(a1 + 64) = -1;
  v6 = *a3;
  v7 = 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v8 = *a2;
  if ( *a2 )
  {
    std::vector<InputSpacePayload>::_Reallocate_exactly(a1, v8);
    v8 = *a2;
  }
  if ( v8 )
  {
    do
      std::vector<InputSpacePayload>::emplace_back<INPUT_SPACE_PAYLOAD &>(a1, v6 + 24LL * v7++);
    while ( v7 < *a2 );
  }
  *(_BYTE *)(a1 + 64) = 1;
  return a1;
}
