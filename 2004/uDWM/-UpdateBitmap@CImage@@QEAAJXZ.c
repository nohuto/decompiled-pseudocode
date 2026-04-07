/*
 * XREFs of ?UpdateBitmap@CImage@@QEAAJXZ @ 0x18000AF08
 * Callers:
 *     ?ValidateVisual@CImage@@UEAAJXZ @ 0x180016C90 (-ValidateVisual@CImage@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x18000AF90 (-Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x1800178D0 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001A02C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 */

__int64 __fastcall CImage::UpdateBitmap(struct CBitmapSource **this)
{
  int v2; // eax
  int v3; // ebx
  struct CBitmapSource *v4; // rcx
  int v5; // eax
  int v6; // eax
  CBaseObject *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  v2 = CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x42u);
  }
  else
  {
    v4 = this[35];
    if ( v4 )
    {
      v5 = CDrawNineGridInstruction::Create(v4, &v8);
      v3 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x1A4u);
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x46u);
      }
      else
      {
        v6 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v8);
        v3 = v6;
        if ( v6 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x47u);
      }
      if ( v8 )
        CBaseObject::Release(v8);
    }
  }
  return (unsigned int)v3;
}
