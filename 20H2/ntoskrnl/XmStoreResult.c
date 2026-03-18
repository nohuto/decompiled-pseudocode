/*
 * XREFs of XmStoreResult @ 0x140396950
 * Callers:
 *     XmXchgOp @ 0x140396120 (XmXchgOp.c)
 *     XmInOp @ 0x140396160 (XmInOp.c)
 *     XmPopOp @ 0x140396500 (XmPopOp.c)
 *     XmSetLogicalResult @ 0x140396528 (XmSetLogicalResult.c)
 *     XmAddOperands @ 0x1403965B0 (XmAddOperands.c)
 *     XmSubOperands @ 0x140396738 (XmSubOperands.c)
 *     XmMovOp @ 0x1403968E0 (XmMovOp.c)
 *     XmPushStack @ 0x1403968F8 (XmPushStack.c)
 *     XmShlOp @ 0x1403AB6F0 (XmShlOp.c)
 *     XmShrOp @ 0x1403AB810 (XmShrOp.c)
 *     XmRolOp @ 0x1403BF9E0 (XmRolOp.c)
 *     XmLoopOp @ 0x1403BFD00 (XmLoopOp.c)
 *     XmStosOp @ 0x1403C04C0 (XmStosOp.c)
 *     XmPopaOp @ 0x1403C2DF0 (XmPopaOp.c)
 *     XmMulOp @ 0x1403C3040 (XmMulOp.c)
 *     XmDivOp @ 0x1403C8880 (XmDivOp.c)
 *     XmNotOp @ 0x1403C8C70 (XmNotOp.c)
 *     XmCmpxchgOp @ 0x1404E3ED0 (XmCmpxchgOp.c)
 *     XmXaddOp @ 0x1404E3F90 (XmXaddOp.c)
 *     XmRclOp @ 0x1404E4240 (XmRclOp.c)
 *     XmRcrOp @ 0x1404E4310 (XmRcrOp.c)
 *     XmRorOp @ 0x1404E43B0 (XmRorOp.c)
 *     XmSarOp @ 0x1404E4430 (XmSarOp.c)
 *     XmShldOp @ 0x1404E4510 (XmShldOp.c)
 *     XmShrdOp @ 0x1404E4650 (XmShrdOp.c)
 *     XmLahfOp @ 0x1404E47B0 (XmLahfOp.c)
 *     XmInsOp @ 0x1404E47E0 (XmInsOp.c)
 *     XmLodsOp @ 0x1404E4CF0 (XmLodsOp.c)
 *     XmMovsOp @ 0x1404E4D70 (XmMovsOp.c)
 *     XmBsfOp @ 0x1404E4EA0 (XmBsfOp.c)
 *     XmBsrOp @ 0x1404E4EE0 (XmBsrOp.c)
 *     XmBtcOp @ 0x1404E4F30 (XmBtcOp.c)
 *     XmBtrOp @ 0x1404E4F70 (XmBtrOp.c)
 *     XmBtsOp @ 0x1404E4FC0 (XmBtsOp.c)
 *     XmCbwOp @ 0x1404E5000 (XmCbwOp.c)
 *     XmCwdOp @ 0x1404E5040 (XmCwdOp.c)
 *     XmBswapOp @ 0x1404E5140 (XmBswapOp.c)
 *     XmSmswOp @ 0x1404E51B0 (XmSmswOp.c)
 *     XmImulOp @ 0x1404E51D0 (XmImulOp.c)
 *     XmImulxOp @ 0x1404E5280 (XmImulxOp.c)
 *     XmIdivOp @ 0x1404E5380 (XmIdivOp.c)
 *     XmSxxOp @ 0x1404E5490 (XmSxxOp.c)
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
