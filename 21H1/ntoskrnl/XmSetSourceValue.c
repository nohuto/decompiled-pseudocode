/*
 * XREFs of XmSetSourceValue @ 0x140393A08
 * Callers:
 *     XmOutOp @ 0x140393120 (XmOutOp.c)
 *     XmGroup3General @ 0x1403931D0 (XmGroup3General.c)
 *     XmMoveGeneral @ 0x1403933E0 (XmMoveGeneral.c)
 *     XmOpcodeRegister @ 0x1403938F0 (XmOpcodeRegister.c)
 *     XmGroup1General @ 0x140393940 (XmGroup1General.c)
 *     XmPopStack @ 0x1403939BC (XmPopStack.c)
 *     XmStosOp @ 0x1403BD010 (XmStosOp.c)
 *     XmMoveXxGeneral @ 0x1403BF840 (XmMoveXxGeneral.c)
 *     XmGroup45General @ 0x1403BFB10 (XmGroup45General.c)
 *     XmPushPopSegment @ 0x1403C02D0 (XmPushPopSegment.c)
 *     XmPushaOp @ 0x1403C0310 (XmPushaOp.c)
 *     XmAccumRegister @ 0x1403C1180 (XmAccumRegister.c)
 *     XmSegmentOffset @ 0x1403C4CA0 (XmSegmentOffset.c)
 *     XmMoveSegment @ 0x1403C5450 (XmMoveSegment.c)
 *     XmBitScanGeneral @ 0x1404DFBB0 (XmBitScanGeneral.c)
 *     XmFlagsRegister @ 0x1404DFCC0 (XmFlagsRegister.c)
 *     XmGeneralBitOffset @ 0x1404DFD00 (XmGeneralBitOffset.c)
 *     XmGeneralRegister @ 0x1404DFDA0 (XmGeneralRegister.c)
 *     XmLoadSegment @ 0x1404E0050 (XmLoadSegment.c)
 *     XmShiftDouble @ 0x1404E0280 (XmShiftDouble.c)
 *     XmXlatOpcode @ 0x1404E0300 (XmXlatOpcode.c)
 *     XmOutsOp @ 0x1404E0D20 (XmOutsOp.c)
 *     XmCmpsOp @ 0x1404E0F80 (XmCmpsOp.c)
 *     XmLodsOp @ 0x1404E11A0 (XmLodsOp.c)
 *     XmMovsOp @ 0x1404E1220 (XmMovsOp.c)
 *     XmScasOp @ 0x1404E12B0 (XmScasOp.c)
 *     XmBoundOp @ 0x1404E1540 (XmBoundOp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XmSetSourceValue(__int64 a1, unsigned __int16 *a2)
{
  int v2; // eax
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 96) = a2;
  if ( v2 )
  {
    if ( v2 == 1 )
      result = *a2;
    else
      result = *(unsigned int *)a2;
  }
  else
  {
    result = *(unsigned __int8 *)a2;
  }
  *(_DWORD *)(a1 + 108) = result;
  return result;
}
