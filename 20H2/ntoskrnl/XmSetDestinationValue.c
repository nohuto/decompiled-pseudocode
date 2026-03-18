/*
 * XREFs of XmSetDestinationValue @ 0x140396B28
 * Callers:
 *     XmGroup3General @ 0x140396260 (XmGroup3General.c)
 *     XmAccumImmediate @ 0x140396300 (XmAccumImmediate.c)
 *     XmOpcodeRegister @ 0x140396980 (XmOpcodeRegister.c)
 *     XmGroup1General @ 0x1403969D0 (XmGroup1General.c)
 *     XmGroup1Immediate @ 0x140396AC0 (XmGroup1Immediate.c)
 *     XmGroup2By1 @ 0x1403C0750 (XmGroup2By1.c)
 *     XmGroup2ByByte @ 0x1403C0970 (XmGroup2ByByte.c)
 *     XmPopaOp @ 0x1403C2DF0 (XmPopaOp.c)
 *     XmGroup2ByCL @ 0x1403C30E0 (XmGroup2ByCL.c)
 *     XmGroup45General @ 0x1403C3140 (XmGroup45General.c)
 *     XmPushPopSegment @ 0x1403C3900 (XmPushPopSegment.c)
 *     XmAccumRegister @ 0x1403C47B0 (XmAccumRegister.c)
 *     XmFlagsRegister @ 0x1404E3810 (XmFlagsRegister.c)
 *     XmGeneralBitOffset @ 0x1404E3850 (XmGeneralBitOffset.c)
 *     XmGroup7General @ 0x1404E3970 (XmGroup7General.c)
 *     XmGroup8BitOffset @ 0x1404E39D0 (XmGroup8BitOffset.c)
 *     XmImulImmediate @ 0x1404E3B20 (XmImulImmediate.c)
 *     XmLoadSegment @ 0x1404E3BA0 (XmLoadSegment.c)
 *     XmPopGeneral @ 0x1404E3CC0 (XmPopGeneral.c)
 *     XmShiftDouble @ 0x1404E3DD0 (XmShiftDouble.c)
 *     XmCmpsOp @ 0x1404E4AD0 (XmCmpsOp.c)
 *     XmScasOp @ 0x1404E4E00 (XmScasOp.c)
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
