/*
 * XREFs of XmEmulateStream @ 0x140393D08
 * Callers:
 *     XmEmulateInterrupt @ 0x140392F3C (XmEmulateInterrupt.c)
 * Callees:
 *     MiCreateSystemWsles @ 0x1402B3480 (MiCreateSystemWsles.c)
 *     XmOpcodeEscape @ 0x140362940 (XmOpcodeEscape.c)
 *     XmClcOp @ 0x140362960 (XmClcOp.c)
 *     XmCldOp @ 0x140362970 (XmCldOp.c)
 *     XmCliOp @ 0x140362980 (XmCliOp.c)
 *     XmCmcOp @ 0x140362990 (XmCmcOp.c)
 *     XmSahfOp @ 0x1403629B0 (XmSahfOp.c)
 *     XmStcOp @ 0x1403629D0 (XmStcOp.c)
 *     XmStdOp @ 0x1403629E0 (XmStdOp.c)
 *     XmStiOp @ 0x1403629F0 (XmStiOp.c)
 *     XmBtOp @ 0x140362A00 (XmBtOp.c)
 *     XmIretOp @ 0x140392FE0 (XmIretOp.c)
 *     XmDecOp @ 0x140393050 (XmDecOp.c)
 *     XmOrOp @ 0x140393070 (XmOrOp.c)
 *     XmXchgOp @ 0x140393090 (XmXchgOp.c)
 *     XmInOp @ 0x1403930D0 (XmInOp.c)
 *     XmOutOp @ 0x140393120 (XmOutOp.c)
 *     XmIncOp @ 0x140393160 (XmIncOp.c)
 *     XmPortDX @ 0x140393180 (XmPortDX.c)
 *     XmTestOp @ 0x1403931B0 (XmTestOp.c)
 *     XmGroup3General @ 0x1403931D0 (XmGroup3General.c)
 *     XmAccumImmediate @ 0x140393270 (XmAccumImmediate.c)
 *     XmCallOp @ 0x1403932B0 (XmCallOp.c)
 *     XmRetOp @ 0x140393310 (XmRetOp.c)
 *     XmMoveRegImmediate @ 0x140393380 (XmMoveRegImmediate.c)
 *     XmMoveGeneral @ 0x1403933E0 (XmMoveGeneral.c)
 *     XmPushOp @ 0x140393450 (XmPushOp.c)
 *     XmPopOp @ 0x140393470 (XmPopOp.c)
 *     XmSubOp @ 0x140393690 (XmSubOp.c)
 *     XmMovOp @ 0x140393850 (XmMovOp.c)
 *     XmOpcodeRegister @ 0x1403938F0 (XmOpcodeRegister.c)
 *     XmGroup1General @ 0x140393940 (XmGroup1General.c)
 *     XmGroup1Immediate @ 0x140393A30 (XmGroup1Immediate.c)
 *     XmGetCodeByte @ 0x140393E68 (XmGetCodeByte.c)
 *     XmLongJump @ 0x140393F00 (XmLongJump.c)
 *     XmJxxOp @ 0x140394BB0 (XmJxxOp.c)
 *     XmShortJump @ 0x140394C10 (XmShortJump.c)
 *     XmPrefixOpcode @ 0x1403950F0 (XmPrefixOpcode.c)
 *     XmJmpOp @ 0x1403962B0 (XmJmpOp.c)
 *     xHalTimerWatchdogStop @ 0x1403974F0 (xHalTimerWatchdogStop.c)
 *     XmShlOp @ 0x1403AF120 (XmShlOp.c)
 *     XmShrOp @ 0x1403AF240 (XmShrOp.c)
 *     XmRolOp @ 0x1403BC240 (XmRolOp.c)
 *     XmLoopOp @ 0x1403BC850 (XmLoopOp.c)
 *     XmStosOp @ 0x1403BD010 (XmStosOp.c)
 *     XmGroup2By1 @ 0x1403BD2A0 (XmGroup2By1.c)
 *     XmGroup2ByByte @ 0x1403BD4C0 (XmGroup2ByByte.c)
 *     XmAddOp @ 0x1403BF7A0 (XmAddOp.c)
 *     XmPopaOp @ 0x1403BF7C0 (XmPopaOp.c)
 *     XmMoveXxGeneral @ 0x1403BF840 (XmMoveXxGeneral.c)
 *     XmMulOp @ 0x1403BFA10 (XmMulOp.c)
 *     XmGroup2ByCL @ 0x1403BFAB0 (XmGroup2ByCL.c)
 *     XmGroup45General @ 0x1403BFB10 (XmGroup45General.c)
 *     XmPushPopSegment @ 0x1403C02D0 (XmPushPopSegment.c)
 *     XmPushaOp @ 0x1403C0310 (XmPushaOp.c)
 *     XmAccumRegister @ 0x1403C1180 (XmAccumRegister.c)
 *     XmXorOp @ 0x1403C2F70 (XmXorOp.c)
 *     XmSegmentOffset @ 0x1403C4CA0 (XmSegmentOffset.c)
 *     XmDivOp @ 0x1403C4E80 (XmDivOp.c)
 *     XmStringOperands @ 0x1403C4F60 (XmStringOperands.c)
 *     XmNotOp @ 0x1403C5270 (XmNotOp.c)
 *     XmMoveSegment @ 0x1403C5450 (XmMoveSegment.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     _setjmp @ 0x1403FFAD0 (_setjmp.c)
 *     XmBitScanGeneral @ 0x1404DFBB0 (XmBitScanGeneral.c)
 *     XmByteImmediate @ 0x1404DFC10 (XmByteImmediate.c)
 *     XmEffectiveOffset @ 0x1404DFC40 (XmEffectiveOffset.c)
 *     XmFlagsRegister @ 0x1404DFCC0 (XmFlagsRegister.c)
 *     XmGeneralBitOffset @ 0x1404DFD00 (XmGeneralBitOffset.c)
 *     XmGeneralRegister @ 0x1404DFDA0 (XmGeneralRegister.c)
 *     XmGroup7General @ 0x1404DFE20 (XmGroup7General.c)
 *     XmGroup8BitOffset @ 0x1404DFE80 (XmGroup8BitOffset.c)
 *     XmImmediateEnter @ 0x1404DFF30 (XmImmediateEnter.c)
 *     XmImmediateJump @ 0x1404DFF80 (XmImmediateJump.c)
 *     XmImulImmediate @ 0x1404DFFD0 (XmImulImmediate.c)
 *     XmLoadSegment @ 0x1404E0050 (XmLoadSegment.c)
 *     XmMoveImmediate @ 0x1404E0120 (XmMoveImmediate.c)
 *     XmPopGeneral @ 0x1404E0170 (XmPopGeneral.c)
 *     XmPortImmediate @ 0x1404E01C0 (XmPortImmediate.c)
 *     XmPushImmediate @ 0x1404E0200 (XmPushImmediate.c)
 *     XmSetccByte @ 0x1404E0240 (XmSetccByte.c)
 *     XmShiftDouble @ 0x1404E0280 (XmShiftDouble.c)
 *     XmXlatOpcode @ 0x1404E0300 (XmXlatOpcode.c)
 *     XmAdcOp @ 0x1404E0360 (XmAdcOp.c)
 *     XmCmpxchgOp @ 0x1404E0380 (XmCmpxchgOp.c)
 *     XmNegOp @ 0x1404E03F0 (XmNegOp.c)
 *     XmSbbOp @ 0x1404E0420 (XmSbbOp.c)
 *     XmXaddOp @ 0x1404E0440 (XmXaddOp.c)
 *     XmAaaOp @ 0x1404E0480 (XmAaaOp.c)
 *     XmAadOp @ 0x1404E04D0 (XmAadOp.c)
 *     XmAamOp @ 0x1404E0560 (XmAamOp.c)
 *     XmAasOp @ 0x1404E05F0 (XmAasOp.c)
 *     XmDaaOp @ 0x1404E0650 (XmDaaOp.c)
 *     XmDasOp @ 0x1404E06A0 (XmDasOp.c)
 *     XmRclOp @ 0x1404E06F0 (XmRclOp.c)
 *     XmRcrOp @ 0x1404E07C0 (XmRcrOp.c)
 *     XmRorOp @ 0x1404E0860 (XmRorOp.c)
 *     XmSarOp @ 0x1404E08E0 (XmSarOp.c)
 *     XmShldOp @ 0x1404E09C0 (XmShldOp.c)
 *     XmShrdOp @ 0x1404E0B00 (XmShrdOp.c)
 *     XmLahfOp @ 0x1404E0C60 (XmLahfOp.c)
 *     XmInsOp @ 0x1404E0C90 (XmInsOp.c)
 *     XmOutsOp @ 0x1404E0D20 (XmOutsOp.c)
 *     XmEnterOp @ 0x1404E0DB0 (XmEnterOp.c)
 *     XmHltOp @ 0x1404E0E60 (XmHltOp.c)
 *     XmIntOp @ 0x1404E0E80 (XmIntOp.c)
 *     XmLeaveOp @ 0x1404E0F30 (XmLeaveOp.c)
 *     XmCmpsOp @ 0x1404E0F80 (XmCmpsOp.c)
 *     XmLodsOp @ 0x1404E11A0 (XmLodsOp.c)
 *     XmMovsOp @ 0x1404E1220 (XmMovsOp.c)
 *     XmScasOp @ 0x1404E12B0 (XmScasOp.c)
 *     XmBsfOp @ 0x1404E1350 (XmBsfOp.c)
 *     XmBsrOp @ 0x1404E1390 (XmBsrOp.c)
 *     XmBtcOp @ 0x1404E13E0 (XmBtcOp.c)
 *     XmBtrOp @ 0x1404E1420 (XmBtrOp.c)
 *     XmBtsOp @ 0x1404E1470 (XmBtsOp.c)
 *     XmCbwOp @ 0x1404E14B0 (XmCbwOp.c)
 *     XmCwdOp @ 0x1404E14F0 (XmCwdOp.c)
 *     XmBoundOp @ 0x1404E1540 (XmBoundOp.c)
 *     XmBswapOp @ 0x1404E15F0 (XmBswapOp.c)
 *     XmIllOp @ 0x1404E1610 (XmIllOp.c)
 *     XmRdtscOp @ 0x1404E1630 (XmRdtscOp.c)
 *     XmSmswOp @ 0x1404E1660 (XmSmswOp.c)
 *     XmImulOp @ 0x1404E1680 (XmImulOp.c)
 *     XmImulxOp @ 0x1404E1730 (XmImulxOp.c)
 *     XmJcxzOp @ 0x1404E1800 (XmJcxzOp.c)
 *     XmIdivOp @ 0x1404E1830 (XmIdivOp.c)
 *     XmSxxOp @ 0x1404E1940 (XmSxxOp.c)
 */

__int64 __fastcall XmEmulateStream(__int64 a1, __int16 a2, unsigned __int16 a3, __int64 a4)
{
  unsigned int v4; // edx
  unsigned __int8 CodeByte; // al
  __int16 v6; // cx

  dword_140CED338 = *(_DWORD *)a4;
  dword_140CED33C = *(_DWORD *)(a4 + 4);
  dword_140CED340 = *(_DWORD *)(a4 + 8);
  dword_140CED344 = *(_DWORD *)(a4 + 12);
  dword_140CED34C = *(_DWORD *)(a4 + 16);
  dword_140CED350 = *(_DWORD *)(a4 + 20);
  dword_140CED354 = *(_DWORD *)(a4 + 24);
  word_140CED35E = *(_WORD *)(a4 + 28);
  word_140CED358 = *(_WORD *)(a4 + 30);
  word_140CED35A = a2;
  dword_140CED334 = a3;
  v4 = setjmp(Buf);
  for ( XmStatus = v4; !XmStatus; v4 = XmStatus )
  {
    *((_DWORD *)&XmContext + 29) = 3;
    *((_QWORD *)&XmContext + 17) = 0LL;
    XmContext = XmOpcodeControlTable1;
    do
    {
      CodeByte = XmGetCodeByte(&XmContext);
      *((_DWORD *)&XmContext + 28) = CodeByte;
      v6 = *(_WORD *)(XmContext + 2LL * CodeByte);
      *((_WORD *)&XmContext + 40) = v6;
      *((_DWORD *)&XmContext + 31) = (unsigned __int8)v6;
    }
    while ( !((unsigned int (__fastcall *)(void *))XmOperandDecodeTable[*((unsigned __int8 *)&XmContext + 81)])(&XmContext) );
    ((void (__fastcall *)(void *))XmOpcodeFunctionTable[*((unsigned int *)&XmContext + 31)])(&XmContext);
  }
  *(_DWORD *)a4 = *((_DWORD *)&XmContext + 6);
  *(_DWORD *)(a4 + 4) = *((_DWORD *)&XmContext + 7);
  *(_DWORD *)(a4 + 8) = *((_DWORD *)&XmContext + 8);
  *(_DWORD *)(a4 + 12) = *((_DWORD *)&XmContext + 9);
  *(_DWORD *)(a4 + 16) = *((_DWORD *)&XmContext + 11);
  *(_DWORD *)(a4 + 20) = *((_DWORD *)&XmContext + 12);
  *(_DWORD *)(a4 + 24) = *((_DWORD *)&XmContext + 13);
  return v4;
}
