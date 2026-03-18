/*
 * XREFs of XmStoreResult @ 0x140394490
 * Callers:
 *     XmXchgOp @ 0x140393C60 (XmXchgOp.c)
 *     XmInOp @ 0x140393CA0 (XmInOp.c)
 *     XmPopOp @ 0x140394040 (XmPopOp.c)
 *     XmSetLogicalResult @ 0x140394068 (XmSetLogicalResult.c)
 *     XmAddOperands @ 0x1403940F0 (XmAddOperands.c)
 *     XmSubOperands @ 0x140394278 (XmSubOperands.c)
 *     XmMovOp @ 0x140394420 (XmMovOp.c)
 *     XmPushStack @ 0x140394438 (XmPushStack.c)
 *     XmShlOp @ 0x1403A8D00 (XmShlOp.c)
 *     XmShrOp @ 0x1403A8E20 (XmShrOp.c)
 *     XmRolOp @ 0x1403BD560 (XmRolOp.c)
 *     XmLoopOp @ 0x1403BD7E0 (XmLoopOp.c)
 *     XmStosOp @ 0x1403BDFA0 (XmStosOp.c)
 *     XmPopaOp @ 0x1403C0680 (XmPopaOp.c)
 *     XmMulOp @ 0x1403C08D0 (XmMulOp.c)
 *     XmDivOp @ 0x1403C5DF0 (XmDivOp.c)
 *     XmNotOp @ 0x1403C61E0 (XmNotOp.c)
 *     XmCmpxchgOp @ 0x1404E0940 (XmCmpxchgOp.c)
 *     XmXaddOp @ 0x1404E0A00 (XmXaddOp.c)
 *     XmRclOp @ 0x1404E0CB0 (XmRclOp.c)
 *     XmRcrOp @ 0x1404E0D80 (XmRcrOp.c)
 *     XmRorOp @ 0x1404E0E20 (XmRorOp.c)
 *     XmSarOp @ 0x1404E0EA0 (XmSarOp.c)
 *     XmShldOp @ 0x1404E0F80 (XmShldOp.c)
 *     XmShrdOp @ 0x1404E10C0 (XmShrdOp.c)
 *     XmLahfOp @ 0x1404E1220 (XmLahfOp.c)
 *     XmInsOp @ 0x1404E1250 (XmInsOp.c)
 *     XmLodsOp @ 0x1404E1760 (XmLodsOp.c)
 *     XmMovsOp @ 0x1404E17E0 (XmMovsOp.c)
 *     XmBsfOp @ 0x1404E1910 (XmBsfOp.c)
 *     XmBsrOp @ 0x1404E1950 (XmBsrOp.c)
 *     XmBtcOp @ 0x1404E19A0 (XmBtcOp.c)
 *     XmBtrOp @ 0x1404E19E0 (XmBtrOp.c)
 *     XmBtsOp @ 0x1404E1A30 (XmBtsOp.c)
 *     XmCbwOp @ 0x1404E1A70 (XmCbwOp.c)
 *     XmCwdOp @ 0x1404E1AB0 (XmCwdOp.c)
 *     XmBswapOp @ 0x1404E1BB0 (XmBswapOp.c)
 *     XmSmswOp @ 0x1404E1C20 (XmSmswOp.c)
 *     XmImulOp @ 0x1404E1C40 (XmImulOp.c)
 *     XmImulxOp @ 0x1404E1CF0 (XmImulxOp.c)
 *     XmIdivOp @ 0x1404E1DF0 (XmIdivOp.c)
 *     XmSxxOp @ 0x1404E1F00 (XmSxxOp.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall XmStoreResult(__int64 a1, int a2)
{
  int v2; // r8d
  _WORD *result; // rax

  v2 = *(_DWORD *)(a1 + 120);
  result = *(_WORD **)(a1 + 88);
  if ( v2 )
  {
    if ( v2 == 1 )
      *result = a2;
    else
      *(_DWORD *)result = a2;
  }
  else
  {
    *(_BYTE *)result = a2;
  }
  return result;
}
