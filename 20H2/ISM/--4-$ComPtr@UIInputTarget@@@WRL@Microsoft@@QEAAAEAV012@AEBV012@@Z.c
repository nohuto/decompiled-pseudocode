/*
 * XREFs of ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000F088
 * Callers:
 *     ?GetTargetWithFocus@DWMInputRouter@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800483E0 (-GetTargetWithFocus@DWMInputRouter@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEA.c)
 *     ??$_Insert_or_assign@AEBKAEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@Z @ 0x1800ACC54 (--$_Insert_or_assign@AEBKAEAV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@-$unordered_map@KV-$ComPtr.c)
 *     ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V?$function@$$A6AXPEAVInputContext@@@Z@std@@V?$function@$$A6AXPEAUIInputTarget@@@Z@4@@Z @ 0x1800AFBE0 (-DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V-$function@$$A6AXPEAVInputCon.c)
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification@@_N2@Z @ 0x1800B105C (-ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification.c)
 *     std::_Func_impl_no_alloc__lambda_269e715c3a16826785faf617fd4a94c4__void_InputContext___::_Do_call @ 0x1800B2D20 (std--_Func_impl_no_alloc__lambda_269e715c3a16826785faf617fd4a94c4__void_InputContext___--_Do_cal.c)
 *     std::_Func_impl_no_alloc__lambda_978562f3f4c12d64883c4a0c7d68827a__void_InputContext___::_Do_call @ 0x1800B2FE0 (std--_Func_impl_no_alloc__lambda_978562f3f4c12d64883c4a0c7d68827a__void_InputContext___--_Do_cal.c)
 *     ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180135250 (-OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@1AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@4@@Z @ 0x18014B88C (-DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$Com.c)
 *     ?ProcessContextualProcessorDecision@ContextualProcessorBuffer@@AEAAXPEAUInputInfo@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@4@AEAV34@@Z @ 0x18014CB34 (-ProcessContextualProcessorDecision@ContextualProcessorBuffer@@AEAAXPEAUInputInfo@@V-$unordered_.c)
 *     ?OnHitTest@InputForwardProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180176880 (-OnHitTest@InputForwardProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcesso.c)
 *     ?OnInput@InputForwardProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180176A70 (-OnInput@InputForwardProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRes.c)
 *     ?UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z @ 0x18017B214 (-UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z.c)
 *     ?EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z @ 0x18017B6C0 (-EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z.c)
 *     ?OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18017D160 (-OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 *     ?OnInputReport@GazeProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801889A0 (-OnInputReport@GazeProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ @ 0x1800337B0 (-InternalAddRef@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IInputTarget>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  if ( *a1 != *a2 )
  {
    v5 = *a2;
    Microsoft::WRL::ComPtr<IInputTarget>::InternalAddRef(&v5);
    v5 = *a1;
    *a1 = v2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
  }
  return a1;
}
