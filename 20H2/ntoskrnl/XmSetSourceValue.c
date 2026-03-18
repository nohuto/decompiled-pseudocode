/*
 * XREFs of XmSetSourceValue @ 0x140396A98
 * Callers:
 *     XmOutOp @ 0x1403961B0 (XmOutOp.c)
 *     XmGroup3General @ 0x140396260 (XmGroup3General.c)
 *     XmMoveGeneral @ 0x140396470 (XmMoveGeneral.c)
 *     XmOpcodeRegister @ 0x140396980 (XmOpcodeRegister.c)
 *     XmGroup1General @ 0x1403969D0 (XmGroup1General.c)
 *     XmPopStack @ 0x140396A4C (XmPopStack.c)
 *     XmStosOp @ 0x1403C04C0 (XmStosOp.c)
 *     XmMoveXxGeneral @ 0x1403C2E70 (XmMoveXxGeneral.c)
 *     XmGroup45General @ 0x1403C3140 (XmGroup45General.c)
 *     XmPushPopSegment @ 0x1403C3900 (XmPushPopSegment.c)
 *     XmPushaOp @ 0x1403C3940 (XmPushaOp.c)
 *     XmAccumRegister @ 0x1403C47B0 (XmAccumRegister.c)
 *     XmSegmentOffset @ 0x1403C8600 (XmSegmentOffset.c)
 *     XmMoveSegment @ 0x1403C8E50 (XmMoveSegment.c)
 *     XmBitScanGeneral @ 0x1404E3700 (XmBitScanGeneral.c)
 *     XmFlagsRegister @ 0x1404E3810 (XmFlagsRegister.c)
 *     XmGeneralBitOffset @ 0x1404E3850 (XmGeneralBitOffset.c)
 *     XmGeneralRegister @ 0x1404E38F0 (XmGeneralRegister.c)
 *     XmLoadSegment @ 0x1404E3BA0 (XmLoadSegment.c)
 *     XmShiftDouble @ 0x1404E3DD0 (XmShiftDouble.c)
 *     XmXlatOpcode @ 0x1404E3E50 (XmXlatOpcode.c)
 *     XmOutsOp @ 0x1404E4870 (XmOutsOp.c)
 *     XmCmpsOp @ 0x1404E4AD0 (XmCmpsOp.c)
 *     XmLodsOp @ 0x1404E4CF0 (XmLodsOp.c)
 *     XmMovsOp @ 0x1404E4D70 (XmMovsOp.c)
 *     XmScasOp @ 0x1404E4E00 (XmScasOp.c)
 *     XmBoundOp @ 0x1404E5090 (XmBoundOp.c)
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
