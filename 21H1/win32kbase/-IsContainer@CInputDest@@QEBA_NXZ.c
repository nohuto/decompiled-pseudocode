/*
 * XREFs of ?IsContainer@CInputDest@@QEBA_NXZ @ 0x1C0189110
 * Callers:
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C00646B4 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C018F3FC (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CInputDest::IsContainer(CInputDest *this)
{
  char result; // al

  result = 0;
  if ( *((_WORD *)this + 54) || *((_WORD *)this + 55) )
    return 1;
  return result;
}
