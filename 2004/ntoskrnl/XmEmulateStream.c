/*
 * XREFs of XmEmulateStream @ 0x1403948D8
 * Callers:
 *     XmEmulateInterrupt @ 0x140393B0C (XmEmulateInterrupt.c)
 * Callees:
 *     MiCreateSystemWsles @ 0x14025A450 (MiCreateSystemWsles.c)
 *     XmOpcodeEscape @ 0x140363300 (XmOpcodeEscape.c)
 *     XmClcOp @ 0x140363320 (XmClcOp.c)
 *     XmCldOp @ 0x140363330 (XmCldOp.c)
 *     XmCliOp @ 0x140363340 (XmCliOp.c)
 *     XmCmcOp @ 0x140363350 (XmCmcOp.c)
 *     XmSahfOp @ 0x140363370 (XmSahfOp.c)
 *     XmStcOp @ 0x140363390 (XmStcOp.c)
 *     XmStdOp @ 0x1403633A0 (XmStdOp.c)
 *     XmStiOp @ 0x1403633B0 (XmStiOp.c)
 *     XmBtOp @ 0x1403633C0 (XmBtOp.c)
 *     XmIretOp @ 0x140393BB0 (XmIretOp.c)
 *     XmDecOp @ 0x140393C20 (XmDecOp.c)
 *     XmOrOp @ 0x140393C40 (XmOrOp.c)
 *     XmXchgOp @ 0x140393C60 (XmXchgOp.c)
 *     XmInOp @ 0x140393CA0 (XmInOp.c)
 *     XmOutOp @ 0x140393CF0 (XmOutOp.c)
 *     XmIncOp @ 0x140393D30 (XmIncOp.c)
 *     XmPortDX @ 0x140393D50 (XmPortDX.c)
 *     XmTestOp @ 0x140393D80 (XmTestOp.c)
 *     XmGroup3General @ 0x140393DA0 (XmGroup3General.c)
 *     XmAccumImmediate @ 0x140393E40 (XmAccumImmediate.c)
 *     XmCallOp @ 0x140393E80 (XmCallOp.c)
 *     XmRetOp @ 0x140393EE0 (XmRetOp.c)
 *     XmMoveRegImmediate @ 0x140393F50 (XmMoveRegImmediate.c)
 *     XmMoveGeneral @ 0x140393FB0 (XmMoveGeneral.c)
 *     XmPushOp @ 0x140394020 (XmPushOp.c)
 *     XmPopOp @ 0x140394040 (XmPopOp.c)
 *     XmSubOp @ 0x140394260 (XmSubOp.c)
 *     XmMovOp @ 0x140394420 (XmMovOp.c)
 *     XmOpcodeRegister @ 0x1403944C0 (XmOpcodeRegister.c)
 *     XmGroup1General @ 0x140394510 (XmGroup1General.c)
 *     XmGroup1Immediate @ 0x140394600 (XmGroup1Immediate.c)
 *     XmGetCodeByte @ 0x140394A38 (XmGetCodeByte.c)
 *     XmLongJump @ 0x140394AD0 (XmLongJump.c)
 *     XmJxxOp @ 0x140395780 (XmJxxOp.c)
 *     XmShortJump @ 0x1403957E0 (XmShortJump.c)
 *     XmPrefixOpcode @ 0x140395CC0 (XmPrefixOpcode.c)
 *     XmJmpOp @ 0x140396EC0 (XmJmpOp.c)
 *     xHalTimerWatchdogStop @ 0x140398100 (xHalTimerWatchdogStop.c)
 *     XmShlOp @ 0x1403A8D00 (XmShlOp.c)
 *     XmShrOp @ 0x1403A8E20 (XmShrOp.c)
 *     XmRolOp @ 0x1403BD560 (XmRolOp.c)
 *     XmLoopOp @ 0x1403BD7E0 (XmLoopOp.c)
 *     XmStosOp @ 0x1403BDFA0 (XmStosOp.c)
 *     XmGroup2By1 @ 0x1403BE230 (XmGroup2By1.c)
 *     XmGroup2ByByte @ 0x1403BE450 (XmGroup2ByByte.c)
 *     XmAddOp @ 0x1403C0660 (XmAddOp.c)
 *     XmPopaOp @ 0x1403C0680 (XmPopaOp.c)
 *     XmMoveXxGeneral @ 0x1403C0700 (XmMoveXxGeneral.c)
 *     XmMulOp @ 0x1403C08D0 (XmMulOp.c)
 *     XmGroup2ByCL @ 0x1403C0970 (XmGroup2ByCL.c)
 *     XmGroup45General @ 0x1403C09D0 (XmGroup45General.c)
 *     XmPushPopSegment @ 0x1403C1190 (XmPushPopSegment.c)
 *     XmPushaOp @ 0x1403C11D0 (XmPushaOp.c)
 *     XmAccumRegister @ 0x1403C2040 (XmAccumRegister.c)
 *     XmXorOp @ 0x1403C3E30 (XmXorOp.c)
 *     XmSegmentOffset @ 0x1403C5C10 (XmSegmentOffset.c)
 *     XmDivOp @ 0x1403C5DF0 (XmDivOp.c)
 *     XmStringOperands @ 0x1403C5ED0 (XmStringOperands.c)
 *     XmNotOp @ 0x1403C61E0 (XmNotOp.c)
 *     XmMoveSegment @ 0x1403C63C0 (XmMoveSegment.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     _setjmp @ 0x140400D60 (_setjmp.c)
 *     XmBitScanGeneral @ 0x1404E0170 (XmBitScanGeneral.c)
 *     XmByteImmediate @ 0x1404E01D0 (XmByteImmediate.c)
 *     XmEffectiveOffset @ 0x1404E0200 (XmEffectiveOffset.c)
 *     XmFlagsRegister @ 0x1404E0280 (XmFlagsRegister.c)
 *     XmGeneralBitOffset @ 0x1404E02C0 (XmGeneralBitOffset.c)
 *     XmGeneralRegister @ 0x1404E0360 (XmGeneralRegister.c)
 *     XmGroup7General @ 0x1404E03E0 (XmGroup7General.c)
 *     XmGroup8BitOffset @ 0x1404E0440 (XmGroup8BitOffset.c)
 *     XmImmediateEnter @ 0x1404E04F0 (XmImmediateEnter.c)
 *     XmImmediateJump @ 0x1404E0540 (XmImmediateJump.c)
 *     XmImulImmediate @ 0x1404E0590 (XmImulImmediate.c)
 *     XmLoadSegment @ 0x1404E0610 (XmLoadSegment.c)
 *     XmMoveImmediate @ 0x1404E06E0 (XmMoveImmediate.c)
 *     XmPopGeneral @ 0x1404E0730 (XmPopGeneral.c)
 *     XmPortImmediate @ 0x1404E0780 (XmPortImmediate.c)
 *     XmPushImmediate @ 0x1404E07C0 (XmPushImmediate.c)
 *     XmSetccByte @ 0x1404E0800 (XmSetccByte.c)
 *     XmShiftDouble @ 0x1404E0840 (XmShiftDouble.c)
 *     XmXlatOpcode @ 0x1404E08C0 (XmXlatOpcode.c)
 *     XmAdcOp @ 0x1404E0920 (XmAdcOp.c)
 *     XmCmpxchgOp @ 0x1404E0940 (XmCmpxchgOp.c)
 *     XmNegOp @ 0x1404E09B0 (XmNegOp.c)
 *     XmSbbOp @ 0x1404E09E0 (XmSbbOp.c)
 *     XmXaddOp @ 0x1404E0A00 (XmXaddOp.c)
 *     XmAaaOp @ 0x1404E0A40 (XmAaaOp.c)
 *     XmAadOp @ 0x1404E0A90 (XmAadOp.c)
 *     XmAamOp @ 0x1404E0B20 (XmAamOp.c)
 *     XmAasOp @ 0x1404E0BB0 (XmAasOp.c)
 *     XmDaaOp @ 0x1404E0C10 (XmDaaOp.c)
 *     XmDasOp @ 0x1404E0C60 (XmDasOp.c)
 *     XmRclOp @ 0x1404E0CB0 (XmRclOp.c)
 *     XmRcrOp @ 0x1404E0D80 (XmRcrOp.c)
 *     XmRorOp @ 0x1404E0E20 (XmRorOp.c)
 *     XmSarOp @ 0x1404E0EA0 (XmSarOp.c)
 *     XmShldOp @ 0x1404E0F80 (XmShldOp.c)
 *     XmShrdOp @ 0x1404E10C0 (XmShrdOp.c)
 *     XmLahfOp @ 0x1404E1220 (XmLahfOp.c)
 *     XmInsOp @ 0x1404E1250 (XmInsOp.c)
 *     XmOutsOp @ 0x1404E12E0 (XmOutsOp.c)
 *     XmEnterOp @ 0x1404E1370 (XmEnterOp.c)
 *     XmHltOp @ 0x1404E1420 (XmHltOp.c)
 *     XmIntOp @ 0x1404E1440 (XmIntOp.c)
 *     XmLeaveOp @ 0x1404E14F0 (XmLeaveOp.c)
 *     XmCmpsOp @ 0x1404E1540 (XmCmpsOp.c)
 *     XmLodsOp @ 0x1404E1760 (XmLodsOp.c)
 *     XmMovsOp @ 0x1404E17E0 (XmMovsOp.c)
 *     XmScasOp @ 0x1404E1870 (XmScasOp.c)
 *     XmBsfOp @ 0x1404E1910 (XmBsfOp.c)
 *     XmBsrOp @ 0x1404E1950 (XmBsrOp.c)
 *     XmBtcOp @ 0x1404E19A0 (XmBtcOp.c)
 *     XmBtrOp @ 0x1404E19E0 (XmBtrOp.c)
 *     XmBtsOp @ 0x1404E1A30 (XmBtsOp.c)
 *     XmCbwOp @ 0x1404E1A70 (XmCbwOp.c)
 *     XmCwdOp @ 0x1404E1AB0 (XmCwdOp.c)
 *     XmBoundOp @ 0x1404E1B00 (XmBoundOp.c)
 *     XmBswapOp @ 0x1404E1BB0 (XmBswapOp.c)
 *     XmIllOp @ 0x1404E1BD0 (XmIllOp.c)
 *     XmRdtscOp @ 0x1404E1BF0 (XmRdtscOp.c)
 *     XmSmswOp @ 0x1404E1C20 (XmSmswOp.c)
 *     XmImulOp @ 0x1404E1C40 (XmImulOp.c)
 *     XmImulxOp @ 0x1404E1CF0 (XmImulxOp.c)
 *     XmJcxzOp @ 0x1404E1DC0 (XmJcxzOp.c)
 *     XmIdivOp @ 0x1404E1DF0 (XmIdivOp.c)
 *     XmSxxOp @ 0x1404E1F00 (XmSxxOp.c)
 */

__int64 __fastcall XmEmulateStream(__int64 a1, __int16 a2, unsigned __int16 a3, __int64 a4)
{
  unsigned int v4; // edx
  unsigned __int8 CodeByte; // al
  __int16 v6; // cx

  dword_140CED1F8 = *(_DWORD *)a4;
  dword_140CED1FC = *(_DWORD *)(a4 + 4);
  dword_140CED200 = *(_DWORD *)(a4 + 8);
  dword_140CED204 = *(_DWORD *)(a4 + 12);
  dword_140CED20C = *(_DWORD *)(a4 + 16);
  dword_140CED210 = *(_DWORD *)(a4 + 20);
  dword_140CED214 = *(_DWORD *)(a4 + 24);
  word_140CED21E = *(_WORD *)(a4 + 28);
  word_140CED218 = *(_WORD *)(a4 + 30);
  word_140CED21A = a2;
  dword_140CED1F4 = a3;
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
