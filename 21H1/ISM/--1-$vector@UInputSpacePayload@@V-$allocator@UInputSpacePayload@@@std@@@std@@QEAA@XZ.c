/*
 * XREFs of ??1?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@QEAA@XZ @ 0x18012C654
 * Callers:
 *     _std::variant_std::monostate_HeatInputConfigContextMessage_HeatLowPowerStateContextMessage_HeatHingeAngleContextMessage_HeatDisplayOcclusionContextMessage_HeatVirtualTouchpadContextMessage_::emplace_HeatInputConfigContextMessage_unsigned_long_&_INPUT_SPACE_PAYLOAD___&_1_0__::_1_::dtor$1 @ 0x18012C088 (_std--variant_std--monostate_HeatInputConfigContextMessage_HeatLowPowerStateContextMessage_HeatH.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UInputSpacePayload@@@std@@@std@@YAXPEAUInputSpacePayload@@0AEAV?$allocator@UInputSpacePayload@@@0@@Z @ 0x18012AD40 (--$_Destroy_range@V-$allocator@UInputSpacePayload@@@std@@@std@@YAXPEAUInputSpacePayload@@0AEAV-$.c)
 */

void __fastcall std::vector<InputSpacePayload>::~vector<InputSpacePayload>(__int64 a1)
{
  void *v1; // rdi

  v1 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    std::_Destroy_range<std::allocator<InputSpacePayload>>(*(_QWORD **)a1, *(_QWORD **)(a1 + 8));
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)(40 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v1) / 40LL)));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
