/*
 * XREFs of XmSetDestinationValue @ 0x140393A98
 * Callers:
 *     XmGroup3General @ 0x1403931D0 (XmGroup3General.c)
 *     XmAccumImmediate @ 0x140393270 (XmAccumImmediate.c)
 *     XmOpcodeRegister @ 0x1403938F0 (XmOpcodeRegister.c)
 *     XmGroup1General @ 0x140393940 (XmGroup1General.c)
 *     XmGroup1Immediate @ 0x140393A30 (XmGroup1Immediate.c)
 *     XmGroup2By1 @ 0x1403BD2A0 (XmGroup2By1.c)
 *     XmGroup2ByByte @ 0x1403BD4C0 (XmGroup2ByByte.c)
 *     XmPopaOp @ 0x1403BF7C0 (XmPopaOp.c)
 *     XmGroup2ByCL @ 0x1403BFAB0 (XmGroup2ByCL.c)
 *     XmGroup45General @ 0x1403BFB10 (XmGroup45General.c)
 *     XmPushPopSegment @ 0x1403C02D0 (XmPushPopSegment.c)
 *     XmAccumRegister @ 0x1403C1180 (XmAccumRegister.c)
 *     XmFlagsRegister @ 0x1404DFCC0 (XmFlagsRegister.c)
 *     XmGeneralBitOffset @ 0x1404DFD00 (XmGeneralBitOffset.c)
 *     XmGroup7General @ 0x1404DFE20 (XmGroup7General.c)
 *     XmGroup8BitOffset @ 0x1404DFE80 (XmGroup8BitOffset.c)
 *     XmImulImmediate @ 0x1404DFFD0 (XmImulImmediate.c)
 *     XmLoadSegment @ 0x1404E0050 (XmLoadSegment.c)
 *     XmPopGeneral @ 0x1404E0170 (XmPopGeneral.c)
 *     XmShiftDouble @ 0x1404E0280 (XmShiftDouble.c)
 *     XmCmpsOp @ 0x1404E0F80 (XmCmpsOp.c)
 *     XmScasOp @ 0x1404E12B0 (XmScasOp.c)
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
