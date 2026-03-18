/*
 * XREFs of XmSetDestinationValue @ 0x140394668
 * Callers:
 *     XmGroup3General @ 0x140393DA0 (XmGroup3General.c)
 *     XmAccumImmediate @ 0x140393E40 (XmAccumImmediate.c)
 *     XmOpcodeRegister @ 0x1403944C0 (XmOpcodeRegister.c)
 *     XmGroup1General @ 0x140394510 (XmGroup1General.c)
 *     XmGroup1Immediate @ 0x140394600 (XmGroup1Immediate.c)
 *     XmGroup2By1 @ 0x1403BE230 (XmGroup2By1.c)
 *     XmGroup2ByByte @ 0x1403BE450 (XmGroup2ByByte.c)
 *     XmPopaOp @ 0x1403C0680 (XmPopaOp.c)
 *     XmGroup2ByCL @ 0x1403C0970 (XmGroup2ByCL.c)
 *     XmGroup45General @ 0x1403C09D0 (XmGroup45General.c)
 *     XmPushPopSegment @ 0x1403C1190 (XmPushPopSegment.c)
 *     XmAccumRegister @ 0x1403C2040 (XmAccumRegister.c)
 *     XmFlagsRegister @ 0x1404E0280 (XmFlagsRegister.c)
 *     XmGeneralBitOffset @ 0x1404E02C0 (XmGeneralBitOffset.c)
 *     XmGroup7General @ 0x1404E03E0 (XmGroup7General.c)
 *     XmGroup8BitOffset @ 0x1404E0440 (XmGroup8BitOffset.c)
 *     XmImulImmediate @ 0x1404E0590 (XmImulImmediate.c)
 *     XmLoadSegment @ 0x1404E0610 (XmLoadSegment.c)
 *     XmPopGeneral @ 0x1404E0730 (XmPopGeneral.c)
 *     XmShiftDouble @ 0x1404E0840 (XmShiftDouble.c)
 *     XmCmpsOp @ 0x1404E1540 (XmCmpsOp.c)
 *     XmScasOp @ 0x1404E1870 (XmScasOp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XmSetDestinationValue(__int64 a1, unsigned __int16 *a2)
{
  int v2; // eax
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 88) = a2;
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
  *(_DWORD *)(a1 + 104) = result;
  return result;
}
