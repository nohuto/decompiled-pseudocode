/*
 * XREFs of ?GetD2DInk@CInk@@QEAAJPEAVCD3DDevice@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x1801C6854
 * Callers:
 *     ?Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C6440 (-Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterface@VCResource@@@@YAXAEAPEAVCResource@@@Z @ 0x1800BD9D0 (--$ReleaseInterface@VCResource@@@@YAXAEAPEAVCResource@@@Z.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DInk@@@Z @ 0x1801C6518 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAAJPEAVCD3DDevice@@PEAPEA.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x1801C6950 (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::GetD2DInk(CInk *this, struct CD3DDevice *a2, struct ID2D1Ink **a3, struct ID2D1InkStyle **a4)
{
  int v6; // eax
  unsigned int v8; // ebx
  int ID2D1InkAndInkStyle; // eax
  __int64 v10; // rcx
  unsigned int v12; // [rsp+20h] [rbp-18h]
  CD2DInk *v13; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  *a4 = 0LL;
  v6 = *((_DWORD *)this + 8);
  v13 = 0LL;
  *((_DWORD *)this + 8) = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(v6 + 2)) & 6;
  if ( (((unsigned __int8)v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(v6 + 2)) & 6) & 6) != 2 )
  {
    v8 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147467259, 0x111u, 0LL);
LABEL_8:
    ReleaseInterface<CResource>((__int64 *)a3);
    ReleaseInterface<CResource>((__int64 *)a4);
    goto LABEL_9;
  }
  ID2D1InkAndInkStyle = CDeviceResourceTable<CD2DInk,CInk>::FindOrCreateResourceNoRef((__int64)this + 64, a2, &v13);
  v8 = ID2D1InkAndInkStyle;
  if ( ID2D1InkAndInkStyle < 0 )
  {
    v12 = 276;
    goto LABEL_7;
  }
  ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(v13, a3, a4);
  v8 = ID2D1InkAndInkStyle;
  if ( ID2D1InkAndInkStyle < 0 )
  {
    v12 = 277;
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, ID2D1InkAndInkStyle, v12, 0LL);
    goto LABEL_8;
  }
LABEL_9:
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  return v8;
}
