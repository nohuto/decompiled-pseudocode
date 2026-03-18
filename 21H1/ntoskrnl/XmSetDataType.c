/*
 * XREFs of XmSetDataType @ 0x140393EC8
 * Callers:
 *     XmPortDX @ 0x140393180 (XmPortDX.c)
 *     XmGroup3General @ 0x1403931D0 (XmGroup3General.c)
 *     XmAccumImmediate @ 0x140393270 (XmAccumImmediate.c)
 *     XmMoveGeneral @ 0x1403933E0 (XmMoveGeneral.c)
 *     XmGroup1General @ 0x140393940 (XmGroup1General.c)
 *     XmGroup1Immediate @ 0x140393A30 (XmGroup1Immediate.c)
 *     XmGroup2By1 @ 0x1403BD2A0 (XmGroup2By1.c)
 *     XmGroup2ByByte @ 0x1403BD4C0 (XmGroup2ByByte.c)
 *     XmGroup2ByCL @ 0x1403BFAB0 (XmGroup2ByCL.c)
 *     XmGroup45General @ 0x1403BFB10 (XmGroup45General.c)
 *     XmSegmentOffset @ 0x1403C4CA0 (XmSegmentOffset.c)
 *     XmStringOperands @ 0x1403C4F60 (XmStringOperands.c)
 *     XmMoveImmediate @ 0x1404E0120 (XmMoveImmediate.c)
 *     XmPortImmediate @ 0x1404E01C0 (XmPortImmediate.c)
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
