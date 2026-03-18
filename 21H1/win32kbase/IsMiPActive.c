/*
 * XREFs of IsMiPActive @ 0x1C0031048
 * Callers:
 *     MiPCheckMsgFilter @ 0x1C0030FD0 (MiPCheckMsgFilter.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C0069ADC (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?IsPointerMessageTouchpad@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C019AE70 (-IsPointerMessageTouchpad@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1C01C42A4 (-RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsMiPActive(__int64 a1, __int64 a2)
{
  return a2 != 1
      && !*(_QWORD *)(a1 + 600)
      && ((*(_DWORD *)(*(_QWORD *)(a1 + 416) + 820LL) & 4) != 0 || (*(_DWORD *)(a1 + 1216) & 0x6000000) != 0)
      && (!a2 || (*(_DWORD *)(a2 + 100) & 0x20) == 0);
}
