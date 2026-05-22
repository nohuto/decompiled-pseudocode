/*
 * XREFs of ?CopyFrom@?$VariableSizedPayloadStorage@UInputInfo@@@@QEAAAEAU1@PEBUInputInfo@@@Z @ 0x1800AF454
 * Callers:
 *     ?DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@@Z @ 0x1800AF6C0 (-DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$ComPtr@UIIn.c)
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification@@_N2@Z @ 0x1800B14BC (-ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification.c)
 * Callees:
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     memcpy_0 @ 0x18004B25B (memcpy_0.c)
 */

__int64 __fastcall VariableSizedPayloadStorage<InputInfo>::CopyFrom(__int64 a1, int *a2)
{
  __int64 v2; // rbp
  _DWORD *v4; // rcx
  int v5; // esi

  v2 = a2[6];
  v4 = *(_DWORD **)a1;
  v5 = v4[6];
  if ( (int)v2 >= v5 )
  {
    memcpy_0(v4, a2, (int)v4[6]);
  }
  else
  {
    memcpy_0(v4, a2, a2[6]);
    memset_0((void *)(v2 + *(_QWORD *)a1), 0, v5 - (int)v2);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 24LL) = v5;
  return a1;
}
