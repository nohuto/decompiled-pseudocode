/*
 * XREFs of ?Draw@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800C0BC0
 * Callers:
 *     ?Draw@CAtlasedRectsGroup@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800EEF70 (-Draw@CAtlasedRectsGroup@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18009E650 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?IsEmptyDrawing@CAtlasedRectsGroup@@UEBA_NXZ @ 0x1800C0C60 (-IsEmptyDrawing@CAtlasedRectsGroup@@UEBA_NXZ.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801523A8 (McTemplateU0qq_EventWriteTransfer.c)
 */

__int64 __fastcall CAtlasedRectsGroup::Draw(
        CAtlasedRectsGroup *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx

  v8 = 0;
  if ( !CAtlasedRectsGroup::IsEmptyDrawing((CAtlasedRectsGroup *)((char *)this - 136)) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qq_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Start,
        7LL,
        *((unsigned int *)a2 + 1486));
    v9 = CContent::Draw((CAtlasedRectsGroup *)((char *)this - 48), a2, a3, a4);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xCEu, 0LL);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qq_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Stop,
        7LL,
        *((unsigned int *)a2 + 1486));
  }
  return v8;
}
