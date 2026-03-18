/*
 * XREFs of ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006EEB4
 * Callers:
 *     ?Draw@CPrimitiveGroup@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800EC400 (-Draw@CPrimitiveGroup@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18002FC70 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800502F0 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005B1B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006EC40 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?EtwLogCurrentState@CDrawingContext@@QEBAXXZ @ 0x18006EFC8 (-EtwLogCurrentState@CDrawingContext@@QEBAXXZ.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800AC350 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x180155E28 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0ffff_EventWriteTransfer @ 0x180192700 (McTemplateU0ffff_EventWriteTransfer.c)
 *     McTemplateU0ppffff_EventWriteTransfer @ 0x1801E76D8 (McTemplateU0ppffff_EventWriteTransfer.c)
 *     McTemplateU0pq_EventWriteTransfer @ 0x1801E7794 (McTemplateU0pq_EventWriteTransfer.c)
 */

__int64 __fastcall CPrimitiveGroup::Draw(
        CPrimitiveGroup *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  unsigned int CurrentVisual; // esi
  int v9; // edx
  int v10; // eax
  __int64 v11; // rcx
  __int64 i; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // r8d
  int v17; // r9d
  __int128 v18; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v19[64]; // [rsp+50h] [rbp-A8h] BYREF
  int v20; // [rsp+90h] [rbp-68h]
  struct IBitmapRealization *v21[2]; // [rsp+A0h] [rbp-58h] BYREF

  if ( g_LockAndReadPrimitiveGroupBitmaps )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this - 130); i = (unsigned int)(i + 1) )
    {
      v14 = *((_QWORD *)this - 68);
      v21[0] = 0LL;
      if ( (int)CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
                  (CCompositionSurfaceBitmap *)(*(_QWORD *)(v14 + 8 * i) + 64LL),
                  v21) >= 0 )
      {
        *(_QWORD *)&v18 = 0LL;
        if ( (*(int (__fastcall **)(struct IBitmapRealization *, char *, __int128 *))(*(_QWORD *)v21[0] + 48LL))(
               v21[0],
               (char *)a2 + 56,
               &v18) >= 0 )
        {
          v15 = *(int *)(*(_QWORD *)(v18 + 8) + 16LL) + v18 + 8;
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 24LL))(
            v15,
            ((unsigned __int64)a2 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64));
        }
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v18);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v21);
    }
  }
  if ( *((_QWORD *)this - 26) )
  {
    CurrentVisual = (unsigned int)CDrawingContext::GetCurrentVisual((struct CDrawingContext *)((char *)a2 + 24));
    CDrawingContext::EtwLogCurrentState(a2);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
      McTemplateU0ppffff_EventWriteTransfer(
        (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
        v9,
        CurrentVisual,
        (_DWORD)this - 720,
        *((_DWORD *)this - 155),
        *((_DWORD *)this - 154),
        *((_DWORD *)this - 153),
        *((_DWORD *)this - 152));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qq_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Start,
        18LL,
        *((unsigned int *)a2 + 1486));
    v20 = 0;
    CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 408), (struct CMILMatrix *)v19);
    if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT) )
    {
      *(_OWORD *)v21 = 0LL;
      v18 = *(_OWORD *)((char *)this - 620);
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v19, (__int64)&v18, (float *)v21);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0ffff_EventWriteTransfer(
          (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
          (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT,
          v16,
          v17,
          (char)v21[1],
          SBYTE4(v21[1]));
    }
    v10 = CContent::Draw((CPrimitiveGroup *)((char *)this - 632), a2, a3, a4);
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x67u, 0LL);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      McTemplateU0pq_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_PRIMITIVE_GROUP_SELF_OCCLUSION_INFO,
        (char *)this - 720,
        0xFFFFFFFFLL);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0qq_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_ETWGUID_DRAWEVENT_Stop,
          18LL,
          *((unsigned int *)a2 + 1486));
    }
  }
  return 0LL;
}
