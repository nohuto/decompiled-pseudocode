/*
 * XREFs of XmSetDataType @ 0x140394A98
 * Callers:
 *     XmPortDX @ 0x140393D50 (XmPortDX.c)
 *     XmGroup3General @ 0x140393DA0 (XmGroup3General.c)
 *     XmAccumImmediate @ 0x140393E40 (XmAccumImmediate.c)
 *     XmMoveGeneral @ 0x140393FB0 (XmMoveGeneral.c)
 *     XmGroup1General @ 0x140394510 (XmGroup1General.c)
 *     XmGroup1Immediate @ 0x140394600 (XmGroup1Immediate.c)
 *     XmGroup2By1 @ 0x1403BE230 (XmGroup2By1.c)
 *     XmGroup2ByByte @ 0x1403BE450 (XmGroup2ByByte.c)
 *     XmGroup2ByCL @ 0x1403C0970 (XmGroup2ByCL.c)
 *     XmGroup45General @ 0x1403C09D0 (XmGroup45General.c)
 *     XmSegmentOffset @ 0x1403C5C10 (XmSegmentOffset.c)
 *     XmStringOperands @ 0x1403C5ED0 (XmStringOperands.c)
 *     XmMoveImmediate @ 0x1404E06E0 (XmMoveImmediate.c)
 *     XmPortImmediate @ 0x1404E0780 (XmPortImmediate.c)
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
