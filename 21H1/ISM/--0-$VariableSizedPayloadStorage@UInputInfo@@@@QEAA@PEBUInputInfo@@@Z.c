/*
 * XREFs of ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@PEBUInputInfo@@@Z @ 0x1800A2F40
 * Callers:
 *     ?NotifyInputReport@ConsumerControlNexusDevice@@AEAAJPEAUInputInfo@@@Z @ 0x1800A3C0C (-NotifyInputReport@ConsumerControlNexusDevice@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?MakeRoutingDecisionsForAllFrames@Win32kInterop@@AEAAJAEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAUInputInfo@@PEAUIInputTarget@@@Z @ 0x1800B0ED4 (-MakeRoutingDecisionsForAllFrames@Win32kInterop@@AEAAJAEAV-$unordered_set@KU-$hash@K@std@@U-$equ.c)
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800FA4F0 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x18014B760 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@1AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@4@@Z @ 0x18014BDDC (-DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$Com.c)
 *     ?MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x18014C954 (-MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualPr.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18003D2A4 (--_U@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memcpy_0 @ 0x18004AC7B (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>(
        void **a1,
        int *a2,
        __int64 a3,
        const char *a4)
{
  size_t v6; // rdi
  void *v7; // rax
  const struct std::nothrow_t *v8; // rdx
  void *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a1 = 0LL;
  v6 = a2[6];
  if ( v6 < 0x20 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      441LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\inc\\rawinput.h",
      a4);
    __debugbreak();
  }
  v7 = operator new[](a2[6]);
  v9 = *a1;
  *a1 = v7;
  if ( v9 )
    operator delete(v9, v8);
  memcpy_0(*a1, a2, v6);
  return a1;
}
