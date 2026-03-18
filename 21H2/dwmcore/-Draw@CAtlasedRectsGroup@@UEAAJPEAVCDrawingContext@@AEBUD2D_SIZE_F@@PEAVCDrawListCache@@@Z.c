/*
 * XREFs of ?Draw@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D39E0
 * Callers:
 *     ?Draw@CAtlasedRectsGroup@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180105AD0 (-Draw@CAtlasedRectsGroup@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18008A870 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?IsEmptyDrawing@CAtlasedRectsGroup@@UEBA_NXZ @ 0x1800D3A80 (-IsEmptyDrawing@CAtlasedRectsGroup@@UEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801117F6 (McTemplateU0qq_EventWriteTransfer.c)
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
  unsigned int v12; // eax
  unsigned int v13; // eax

  v8 = 0;
  if ( !CAtlasedRectsGroup::IsEmptyDrawing((CAtlasedRectsGroup *)((char *)this - 144)) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v12 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 24LL))((char *)a2 + 24);
      McTemplateU0qq_EventWriteTransfer(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Start,
        7LL,
        v12);
    }
    v9 = CContent::Draw((CAtlasedRectsGroup *)((char *)this - 48), a2, a3, a4);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0xC6u);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v13 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 24LL))((char *)a2 + 24);
      McTemplateU0qq_EventWriteTransfer(Microsoft_Windows_Dwm_Core_Provider_Context, "3", 7LL, v13);
    }
  }
  return v8;
}
