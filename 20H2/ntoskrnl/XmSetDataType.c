/*
 * XREFs of XmSetDataType @ 0x140396F58
 * Callers:
 *     XmPortDX @ 0x140396210 (XmPortDX.c)
 *     XmGroup3General @ 0x140396260 (XmGroup3General.c)
 *     XmAccumImmediate @ 0x140396300 (XmAccumImmediate.c)
 *     XmMoveGeneral @ 0x140396470 (XmMoveGeneral.c)
 *     XmGroup1General @ 0x1403969D0 (XmGroup1General.c)
 *     XmGroup1Immediate @ 0x140396AC0 (XmGroup1Immediate.c)
 *     XmGroup2By1 @ 0x1403C0750 (XmGroup2By1.c)
 *     XmGroup2ByByte @ 0x1403C0970 (XmGroup2ByByte.c)
 *     XmGroup2ByCL @ 0x1403C30E0 (XmGroup2ByCL.c)
 *     XmGroup45General @ 0x1403C3140 (XmGroup45General.c)
 *     XmSegmentOffset @ 0x1403C8600 (XmSegmentOffset.c)
 *     XmStringOperands @ 0x1403C8960 (XmStringOperands.c)
 *     XmMoveImmediate @ 0x1404E3C70 (XmMoveImmediate.c)
 *     XmPortImmediate @ 0x1404E3D10 (XmPortImmediate.c)
 * Callees:
 *     <none>
 */

char __fastcall XmSetDataType(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 112);
  if ( (v1 & 1) != 0 )
  {
    LOBYTE(v1) = -*(_BYTE *)(a1 + 138);
    *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  }
  else
  {
    *(_DWORD *)(a1 + 120) = 0;
  }
  return v1;
}
