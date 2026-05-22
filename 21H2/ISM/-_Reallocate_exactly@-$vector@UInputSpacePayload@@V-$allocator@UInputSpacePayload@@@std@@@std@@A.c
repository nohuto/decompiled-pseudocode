/*
 * XREFs of ?_Reallocate_exactly@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@AEAAX_K@Z @ 0x18012DDA8
 * Callers:
 *     ??$emplace@UHeatInputConfigContextMessage@@AEAKAEAPEAUINPUT_SPACE_PAYLOAD@@$00$0A@@?$variant@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@@std@@QEAAAEAUHeatInputConfigContextMessage@@AEAKAEAPEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x18012BF94 (--$emplace@UHeatInputConfigContextMessage@@AEAKAEAPEAUINPUT_SPACE_PAYLOAD@@$00$0A@@-$variant@Umo.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUInputSpacePayload@@PEAU1@V?$allocator@UInputSpacePayload@@@std@@@std@@YAPEAUInputSpacePayload@@QEAU1@0PEAU1@AEAV?$allocator@UInputSpacePayload@@@0@@Z @ 0x18012BD0C (--$_Uninitialized_move@PEAUInputSpacePayload@@PEAU1@V-$allocator@UInputSpacePayload@@@std@@@std@.c)
 */

__int64 __fastcall std::vector<InputSpacePayload>::_Reallocate_exactly(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rsi
  size_t v5; // rcx
  _QWORD *v6; // rdi

  v4 = (*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) / 40LL;
  v5 = 40 * a2;
  if ( a2 > 0x666666666666666LL )
    v5 = -1LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  std::_Uninitialized_move<InputSpacePayload *,InputSpacePayload *,std::allocator<InputSpacePayload>>(
    *(_QWORD **)a1,
    *(_QWORD **)(a1 + 8),
    (__int64)v6);
  return std::vector<InputSpacePayload>::_Change_array(a1, (__int64)v6, v4, a2);
}
