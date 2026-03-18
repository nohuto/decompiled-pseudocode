/*
 * XREFs of XmEmulateStream @ 0x140396D98
 * Callers:
 *     XmEmulateInterrupt @ 0x140395FCC (XmEmulateInterrupt.c)
 * Callees:
 *     MiCreateSystemWsles @ 0x140231820 (MiCreateSystemWsles.c)
 *     XmOpcodeEscape @ 0x1403652E0 (XmOpcodeEscape.c)
 *     XmClcOp @ 0x140365300 (XmClcOp.c)
 *     XmCldOp @ 0x140365310 (XmCldOp.c)
 *     XmCliOp @ 0x140365320 (XmCliOp.c)
 *     XmCmcOp @ 0x140365330 (XmCmcOp.c)
 *     XmSahfOp @ 0x140365350 (XmSahfOp.c)
 *     XmStcOp @ 0x140365370 (XmStcOp.c)
 *     XmStdOp @ 0x140365380 (XmStdOp.c)
 *     XmStiOp @ 0x140365390 (XmStiOp.c)
 *     XmBtOp @ 0x1403653A0 (XmBtOp.c)
 *     XmIretOp @ 0x140396070 (XmIretOp.c)
 *     XmDecOp @ 0x1403960E0 (XmDecOp.c)
 *     XmOrOp @ 0x140396100 (XmOrOp.c)
 *     XmXchgOp @ 0x140396120 (XmXchgOp.c)
 *     XmInOp @ 0x140396160 (XmInOp.c)
 *     XmOutOp @ 0x1403961B0 (XmOutOp.c)
 *     XmIncOp @ 0x1403961F0 (XmIncOp.c)
 *     XmPortDX @ 0x140396210 (XmPortDX.c)
 *     XmTestOp @ 0x140396240 (XmTestOp.c)
 *     XmGroup3General @ 0x140396260 (XmGroup3General.c)
 *     XmAccumImmediate @ 0x140396300 (XmAccumImmediate.c)
 *     XmCallOp @ 0x140396340 (XmCallOp.c)
 *     XmRetOp @ 0x1403963A0 (XmRetOp.c)
 *     XmMoveRegImmediate @ 0x140396410 (XmMoveRegImmediate.c)
 *     XmMoveGeneral @ 0x140396470 (XmMoveGeneral.c)
 *     XmPushOp @ 0x1403964E0 (XmPushOp.c)
 *     XmPopOp @ 0x140396500 (XmPopOp.c)
 *     XmSubOp @ 0x140396720 (XmSubOp.c)
 *     XmMovOp @ 0x1403968E0 (XmMovOp.c)
 *     XmOpcodeRegister @ 0x140396980 (XmOpcodeRegister.c)
 *     XmGroup1General @ 0x1403969D0 (XmGroup1General.c)
 *     XmGroup1Immediate @ 0x140396AC0 (XmGroup1Immediate.c)
 *     XmGetCodeByte @ 0x140396EF8 (XmGetCodeByte.c)
 *     XmLongJump @ 0x140396F90 (XmLongJump.c)
 *     XmJxxOp @ 0x140397C40 (XmJxxOp.c)
 *     XmShortJump @ 0x140397CA0 (XmShortJump.c)
 *     XmPrefixOpcode @ 0x140398180 (XmPrefixOpcode.c)
 *     XmJmpOp @ 0x140399340 (XmJmpOp.c)
 *     xHalTimerWatchdogStop @ 0x14039A580 (xHalTimerWatchdogStop.c)
 *     XmShlOp @ 0x1403AB6F0 (XmShlOp.c)
 *     XmShrOp @ 0x1403AB810 (XmShrOp.c)
 *     XmRolOp @ 0x1403BF9E0 (XmRolOp.c)
 *     XmLoopOp @ 0x1403BFD00 (XmLoopOp.c)
 *     XmStosOp @ 0x1403C04C0 (XmStosOp.c)
 *     XmGroup2By1 @ 0x1403C0750 (XmGroup2By1.c)
 *     XmGroup2ByByte @ 0x1403C0970 (XmGroup2ByByte.c)
 *     XmAddOp @ 0x1403C2DD0 (XmAddOp.c)
 *     XmPopaOp @ 0x1403C2DF0 (XmPopaOp.c)
 *     XmMoveXxGeneral @ 0x1403C2E70 (XmMoveXxGeneral.c)
 *     XmMulOp @ 0x1403C3040 (XmMulOp.c)
 *     XmGroup2ByCL @ 0x1403C30E0 (XmGroup2ByCL.c)
 *     XmGroup45General @ 0x1403C3140 (XmGroup45General.c)
 *     XmPushPopSegment @ 0x1403C3900 (XmPushPopSegment.c)
 *     XmPushaOp @ 0x1403C3940 (XmPushaOp.c)
 *     XmAccumRegister @ 0x1403C47B0 (XmAccumRegister.c)
 *     XmXorOp @ 0x1403C65A0 (XmXorOp.c)
 *     XmSegmentOffset @ 0x1403C8600 (XmSegmentOffset.c)
 *     XmDivOp @ 0x1403C8880 (XmDivOp.c)
 *     XmStringOperands @ 0x1403C8960 (XmStringOperands.c)
 *     XmNotOp @ 0x1403C8C70 (XmNotOp.c)
 *     XmMoveSegment @ 0x1403C8E50 (XmMoveSegment.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     _setjmp @ 0x140407160 (_setjmp.c)
 *     XmBitScanGeneral @ 0x1404E3700 (XmBitScanGeneral.c)
 *     XmByteImmediate @ 0x1404E3760 (XmByteImmediate.c)
 *     XmEffectiveOffset @ 0x1404E3790 (XmEffectiveOffset.c)
 *     XmFlagsRegister @ 0x1404E3810 (XmFlagsRegister.c)
 *     XmGeneralBitOffset @ 0x1404E3850 (XmGeneralBitOffset.c)
 *     XmGeneralRegister @ 0x1404E38F0 (XmGeneralRegister.c)
 *     XmGroup7General @ 0x1404E3970 (XmGroup7General.c)
 *     XmGroup8BitOffset @ 0x1404E39D0 (XmGroup8BitOffset.c)
 *     XmImmediateEnter @ 0x1404E3A80 (XmImmediateEnter.c)
 *     XmImmediateJump @ 0x1404E3AD0 (XmImmediateJump.c)
 *     XmImulImmediate @ 0x1404E3B20 (XmImulImmediate.c)
 *     XmLoadSegment @ 0x1404E3BA0 (XmLoadSegment.c)
 *     XmMoveImmediate @ 0x1404E3C70 (XmMoveImmediate.c)
 *     XmPopGeneral @ 0x1404E3CC0 (XmPopGeneral.c)
 *     XmPortImmediate @ 0x1404E3D10 (XmPortImmediate.c)
 *     XmPushImmediate @ 0x1404E3D50 (XmPushImmediate.c)
 *     XmSetccByte @ 0x1404E3D90 (XmSetccByte.c)
 *     XmShiftDouble @ 0x1404E3DD0 (XmShiftDouble.c)
 *     XmXlatOpcode @ 0x1404E3E50 (XmXlatOpcode.c)
 *     XmAdcOp @ 0x1404E3EB0 (XmAdcOp.c)
 *     XmCmpxchgOp @ 0x1404E3ED0 (XmCmpxchgOp.c)
 *     XmNegOp @ 0x1404E3F40 (XmNegOp.c)
 *     XmSbbOp @ 0x1404E3F70 (XmSbbOp.c)
 *     XmXaddOp @ 0x1404E3F90 (XmXaddOp.c)
 *     XmAaaOp @ 0x1404E3FD0 (XmAaaOp.c)
 *     XmAadOp @ 0x1404E4020 (XmAadOp.c)
 *     XmAamOp @ 0x1404E40B0 (XmAamOp.c)
 *     XmAasOp @ 0x1404E4140 (XmAasOp.c)
 *     XmDaaOp @ 0x1404E41A0 (XmDaaOp.c)
 *     XmDasOp @ 0x1404E41F0 (XmDasOp.c)
 *     XmRclOp @ 0x1404E4240 (XmRclOp.c)
 *     XmRcrOp @ 0x1404E4310 (XmRcrOp.c)
 *     XmRorOp @ 0x1404E43B0 (XmRorOp.c)
 *     XmSarOp @ 0x1404E4430 (XmSarOp.c)
 *     XmShldOp @ 0x1404E4510 (XmShldOp.c)
 *     XmShrdOp @ 0x1404E4650 (XmShrdOp.c)
 *     XmLahfOp @ 0x1404E47B0 (XmLahfOp.c)
 *     XmInsOp @ 0x1404E47E0 (XmInsOp.c)
 *     XmOutsOp @ 0x1404E4870 (XmOutsOp.c)
 *     XmEnterOp @ 0x1404E4900 (XmEnterOp.c)
 *     XmHltOp @ 0x1404E49B0 (XmHltOp.c)
 *     XmIntOp @ 0x1404E49D0 (XmIntOp.c)
 *     XmLeaveOp @ 0x1404E4A80 (XmLeaveOp.c)
 *     XmCmpsOp @ 0x1404E4AD0 (XmCmpsOp.c)
 *     XmLodsOp @ 0x1404E4CF0 (XmLodsOp.c)
 *     XmMovsOp @ 0x1404E4D70 (XmMovsOp.c)
 *     XmScasOp @ 0x1404E4E00 (XmScasOp.c)
 *     XmBsfOp @ 0x1404E4EA0 (XmBsfOp.c)
 *     XmBsrOp @ 0x1404E4EE0 (XmBsrOp.c)
 *     XmBtcOp @ 0x1404E4F30 (XmBtcOp.c)
 *     XmBtrOp @ 0x1404E4F70 (XmBtrOp.c)
 *     XmBtsOp @ 0x1404E4FC0 (XmBtsOp.c)
 *     XmCbwOp @ 0x1404E5000 (XmCbwOp.c)
 *     XmCwdOp @ 0x1404E5040 (XmCwdOp.c)
 *     XmBoundOp @ 0x1404E5090 (XmBoundOp.c)
 *     XmBswapOp @ 0x1404E5140 (XmBswapOp.c)
 *     XmIllOp @ 0x1404E5160 (XmIllOp.c)
 *     XmRdtscOp @ 0x1404E5180 (XmRdtscOp.c)
 *     XmSmswOp @ 0x1404E51B0 (XmSmswOp.c)
 *     XmImulOp @ 0x1404E51D0 (XmImulOp.c)
 *     XmImulxOp @ 0x1404E5280 (XmImulxOp.c)
 *     XmJcxzOp @ 0x1404E5350 (XmJcxzOp.c)
 *     XmIdivOp @ 0x1404E5380 (XmIdivOp.c)
 *     XmSxxOp @ 0x1404E5490 (XmSxxOp.c)
 */

__int64 __fastcall XmEmulateStream(__int64 a1, __int16 a2, unsigned __int16 a3, __int64 a4)
{
  unsigned int v4; // edx
  unsigned __int8 CodeByte; // al
  __int16 v6; // cx

  dword_140CED2B8 = *(_DWORD *)a4;
  dword_140CED2BC = *(_DWORD *)(a4 + 4);
  dword_140CED2C0 = *(_DWORD *)(a4 + 8);
  dword_140CED2C4 = *(_DWORD *)(a4 + 12);
  dword_140CED2CC = *(_DWORD *)(a4 + 16);
  dword_140CED2D0 = *(_DWORD *)(a4 + 20);
  dword_140CED2D4 = *(_DWORD *)(a4 + 24);
  word_140CED2DE = *(_WORD *)(a4 + 28);
  word_140CED2D8 = *(_WORD *)(a4 + 30);
  word_140CED2DA = a2;
  dword_140CED2B4 = a3;
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
