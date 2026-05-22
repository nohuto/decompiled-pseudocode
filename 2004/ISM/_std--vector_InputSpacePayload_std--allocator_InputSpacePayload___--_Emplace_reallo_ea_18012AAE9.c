/*
 * XREFs of _std::vector_InputSpacePayload_std::allocator_InputSpacePayload___::_Emplace_reallocate_INPUT_SPACE_PAYLOAD_&__::_1_::catch$40 @ 0x18012AAE9
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18003CC06 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@UInputSpacePayload@@@std@@@std@@YAXPEAUInputSpacePayload@@0AEAV?$allocator@UInputSpacePayload@@@0@@Z @ 0x18012A880 (--$_Destroy_range@V-$allocator@UInputSpacePayload@@@std@@@std@@YAXPEAUInputSpacePayload@@0AEAV-$.c)
 */

void __fastcall __noreturn std::vector_InputSpacePayload_std::allocator_InputSpacePayload___::_Emplace_reallocate_INPUT_SPACE_PAYLOAD____::_1_::catch_40(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<InputSpacePayload>>(*(_QWORD **)(a2 + 128), *(_QWORD **)(a2 + 40));
  std::_Deallocate<16,0>(*(void **)(a2 + 48), (const struct std::nothrow_t *)(40LL * *(_QWORD *)(a2 + 152)));
  throw;
}
