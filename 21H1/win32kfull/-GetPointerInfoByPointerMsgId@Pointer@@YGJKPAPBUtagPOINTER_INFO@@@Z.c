/*
 * XREFs of ?GetPointerInfoByPointerMsgId@Pointer@@YGJKPAPBUtagPOINTER_INFO@@@Z @ 0x1A1621
 * Callers:
 *     ?GetPointerInfoByPointerId@Pointer@@YGJIPAPBUtagPOINTER_INFO@@@Z @ 0x1A15D9 (-GetPointerInfoByPointerId@Pointer@@YGJIPAPBUtagPOINTER_INFO@@@Z.c)
 *     ?OnPointerMessagePosted@InkProcessor@@QAEXIK@Z @ 0x1AC217 (-OnPointerMessagePosted@InkProcessor@@QAEXIK@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall Pointer::GetPointerInfoByPointerMsgId(unsigned int a1, const struct tagPOINTER_INFO **a2)
{
  int v3; // edi
  const struct tagPOINTER_INFO *PointerInfo; // eax

  v3 = 0;
  PointerInfo = CTouchProcessor::GetPointerInfo(_gpTouchProcessor, a1);
  *a2 = PointerInfo;
  if ( !PointerInfo )
    return -1073741811;
  return v3;
}
