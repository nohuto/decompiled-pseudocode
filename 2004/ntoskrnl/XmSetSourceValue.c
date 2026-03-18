/*
 * XREFs of XmSetSourceValue @ 0x1403945D8
 * Callers:
 *     XmOutOp @ 0x140393CF0 (XmOutOp.c)
 *     XmGroup3General @ 0x140393DA0 (XmGroup3General.c)
 *     XmMoveGeneral @ 0x140393FB0 (XmMoveGeneral.c)
 *     XmOpcodeRegister @ 0x1403944C0 (XmOpcodeRegister.c)
 *     XmGroup1General @ 0x140394510 (XmGroup1General.c)
 *     XmPopStack @ 0x14039458C (XmPopStack.c)
 *     XmStosOp @ 0x1403BDFA0 (XmStosOp.c)
 *     XmMoveXxGeneral @ 0x1403C0700 (XmMoveXxGeneral.c)
 *     XmGroup45General @ 0x1403C09D0 (XmGroup45General.c)
 *     XmPushPopSegment @ 0x1403C1190 (XmPushPopSegment.c)
 *     XmPushaOp @ 0x1403C11D0 (XmPushaOp.c)
 *     XmAccumRegister @ 0x1403C2040 (XmAccumRegister.c)
 *     XmSegmentOffset @ 0x1403C5C10 (XmSegmentOffset.c)
 *     XmMoveSegment @ 0x1403C63C0 (XmMoveSegment.c)
 *     XmBitScanGeneral @ 0x1404E0170 (XmBitScanGeneral.c)
 *     XmFlagsRegister @ 0x1404E0280 (XmFlagsRegister.c)
 *     XmGeneralBitOffset @ 0x1404E02C0 (XmGeneralBitOffset.c)
 *     XmGeneralRegister @ 0x1404E0360 (XmGeneralRegister.c)
 *     XmLoadSegment @ 0x1404E0610 (XmLoadSegment.c)
 *     XmShiftDouble @ 0x1404E0840 (XmShiftDouble.c)
 *     XmXlatOpcode @ 0x1404E08C0 (XmXlatOpcode.c)
 *     XmOutsOp @ 0x1404E12E0 (XmOutsOp.c)
 *     XmCmpsOp @ 0x1404E1540 (XmCmpsOp.c)
 *     XmLodsOp @ 0x1404E1760 (XmLodsOp.c)
 *     XmMovsOp @ 0x1404E17E0 (XmMovsOp.c)
 *     XmScasOp @ 0x1404E1870 (XmScasOp.c)
 *     XmBoundOp @ 0x1404E1B00 (XmBoundOp.c)
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
