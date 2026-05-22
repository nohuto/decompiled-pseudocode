/*
 * XREFs of ??1?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@QEAA@XZ @ 0x18012C134
 * Callers:
 *     _std::vector_InputSpacePayload_std::allocator_InputSpacePayload___::_Emplace_reallocate_INPUT_SPACE_PAYLOAD_&__::_1_::dtor$13 @ 0x18012AAD9 (_std--vector_InputSpacePayload_std--allocator_InputSpacePayload___--_Emplace_reallocate_INPUT_SP.c)
 *     _std::vector_InputSpacePayload_std::allocator_InputSpacePayload___::emplace_back_INPUT_SPACE_PAYLOAD_&__::_1_::dtor$7 @ 0x18012BC86 (_std--vector_InputSpacePayload_std--allocator_InputSpacePayload___--emplace_back_INPUT_SPACE_PAY.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<INPUT_SPACE_REGION>::~vector<INPUT_SPACE_REGION>(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)(200 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v2) / 200LL)));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
