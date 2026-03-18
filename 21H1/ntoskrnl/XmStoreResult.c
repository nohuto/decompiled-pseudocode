/*
 * XREFs of XmStoreResult @ 0x1403938C0
 * Callers:
 *     XmXchgOp @ 0x140393090 (XmXchgOp.c)
 *     XmInOp @ 0x1403930D0 (XmInOp.c)
 *     XmPopOp @ 0x140393470 (XmPopOp.c)
 *     XmSetLogicalResult @ 0x140393498 (XmSetLogicalResult.c)
 *     XmAddOperands @ 0x140393520 (XmAddOperands.c)
 *     XmSubOperands @ 0x1403936A8 (XmSubOperands.c)
 *     XmMovOp @ 0x140393850 (XmMovOp.c)
 *     XmPushStack @ 0x140393868 (XmPushStack.c)
 *     XmShlOp @ 0x1403AF120 (XmShlOp.c)
 *     XmShrOp @ 0x1403AF240 (XmShrOp.c)
 *     XmRolOp @ 0x1403BC240 (XmRolOp.c)
 *     XmLoopOp @ 0x1403BC850 (XmLoopOp.c)
 *     XmStosOp @ 0x1403BD010 (XmStosOp.c)
 *     XmPopaOp @ 0x1403BF7C0 (XmPopaOp.c)
 *     XmMulOp @ 0x1403BFA10 (XmMulOp.c)
 *     XmDivOp @ 0x1403C4E80 (XmDivOp.c)
 *     XmNotOp @ 0x1403C5270 (XmNotOp.c)
 *     XmCmpxchgOp @ 0x1404E0380 (XmCmpxchgOp.c)
 *     XmXaddOp @ 0x1404E0440 (XmXaddOp.c)
 *     XmRclOp @ 0x1404E06F0 (XmRclOp.c)
 *     XmRcrOp @ 0x1404E07C0 (XmRcrOp.c)
 *     XmRorOp @ 0x1404E0860 (XmRorOp.c)
 *     XmSarOp @ 0x1404E08E0 (XmSarOp.c)
 *     XmShldOp @ 0x1404E09C0 (XmShldOp.c)
 *     XmShrdOp @ 0x1404E0B00 (XmShrdOp.c)
 *     XmLahfOp @ 0x1404E0C60 (XmLahfOp.c)
 *     XmInsOp @ 0x1404E0C90 (XmInsOp.c)
 *     XmLodsOp @ 0x1404E11A0 (XmLodsOp.c)
 *     XmMovsOp @ 0x1404E1220 (XmMovsOp.c)
 *     XmBsfOp @ 0x1404E1350 (XmBsfOp.c)
 *     XmBsrOp @ 0x1404E1390 (XmBsrOp.c)
 *     XmBtcOp @ 0x1404E13E0 (XmBtcOp.c)
 *     XmBtrOp @ 0x1404E1420 (XmBtrOp.c)
 *     XmBtsOp @ 0x1404E1470 (XmBtsOp.c)
 *     XmCbwOp @ 0x1404E14B0 (XmCbwOp.c)
 *     XmCwdOp @ 0x1404E14F0 (XmCwdOp.c)
 *     XmBswapOp @ 0x1404E15F0 (XmBswapOp.c)
 *     XmSmswOp @ 0x1404E1660 (XmSmswOp.c)
 *     XmImulOp @ 0x1404E1680 (XmImulOp.c)
 *     XmImulxOp @ 0x1404E1730 (XmImulxOp.c)
 *     XmIdivOp @ 0x1404E1830 (XmIdivOp.c)
 *     XmSxxOp @ 0x1404E1940 (XmSxxOp.c)
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
