/*
 * XREFs of ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1801A8160
 * Callers:
 *     ?Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C2FEC (-Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180014EBC (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@VCBrushRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800DC290 (-reset@-$com_ptr_t@VCBrushRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180111C2C (McTemplateU0q_EventWriteTransfer.c)
 *     ?DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ @ 0x1801A73B8 (-DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ.c)
 *     ?RegisterStrokeOnHost@CSuperWetInkManager@@AEAAJPEAUVailSuperWetStroke@1@PEA_N@Z @ 0x1801A7E40 (-RegisterStrokeOnHost@CSuperWetInkManager@@AEAAJPEAUVailSuperWetStroke@1@PEA_N@Z.c)
 *     ?TryLookupVailDataForSource@CSuperWetInkManager@@AEAAPEAUVailSuperWetStroke@1@PEAVCSuperWetSource@@@Z @ 0x1801A8814 (-TryLookupVailDataForSource@CSuperWetInkManager@@AEAAPEAUVailSuperWetStroke@1@PEAVCSuperWetSourc.c)
 *     ?UpdateRenderStateClip@CSuperWetInkManager@@CA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAUD2D_RECT_U@@@Z @ 0x1801A8E30 (-UpdateRenderStateClip@CSuperWetInkManager@@CA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoi.c)
 */

__int64 __fastcall CSuperWetInkManager::ScheduleScribblesForRenderTarget(
        struct ID3D12Device *this,
        __int64 a2,
        __int64 a3,
        _BYTE *a4)
{
  unsigned int v5; // ebp
  struct CSuperWetSource *lpVtbl; // rdx
  __int64 v9; // rcx
  struct CSuperWetInkManager::VailSuperWetStroke *v10; // r14
  __int64 v11; // r9
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rdi
  int (__fastcall *v17)(__int64, _QWORD, char *, __int64 *); // rbx
  __int64 v18; // rsi
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, _QWORD, __int64); // rdi
  unsigned int v21; // eax
  int v22; // eax
  int v23; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  bool v25; // [rsp+60h] [rbp+8h] BYREF
  __int64 v26; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0;
  lpVtbl = (struct CSuperWetSource *)this[1].lpVtbl;
  *a4 = 0;
  if ( !lpVtbl )
    return 0LL;
  v10 = CSuperWetInkManager::TryLookupVailDataForSource((CSuperWetInkManager *)this, lpVtbl);
  if ( *((_QWORD *)v10 + 1) != v11 )
    return 0LL;
  if ( *(_QWORD *)(*(_QWORD *)v9 + 496LL) - *((_QWORD *)v10 + 13) >= 0xAuLL )
  {
    CSuperWetInkManager::DeactivateCurrentSource((struct CSuperWetSource **)this);
    return 0LL;
  }
  if ( !*((_BYTE *)v10 + 112) )
  {
    v13 = CSuperWetInkManager::RegisterStrokeOnHost(this, v10, &v25);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x37C,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
        (const char *)(unsigned int)v13);
      return v14;
    }
    if ( !v25 )
      return 0LL;
  }
  if ( !(unsigned __int8)CSuperWetInkManager::UpdateRenderStateClip((char *)v10 + 88, a3, 0LL, (char *)v10 + 60) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
      McTemplateU0q_EventWriteTransfer(v15, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, 17LL);
    return 0LL;
  }
  v26 = 0LL;
  v16 = *(_QWORD *)v10;
  v17 = *(int (__fastcall **)(__int64, _QWORD, char *, __int64 *))(**(_QWORD **)v10 + 296LL);
  wil::com_ptr_t<CBrushRenderingGraph,wil::err_returncode_policy>::reset(&v26);
  if ( v17(v16, *((_QWORD *)v10 + 2), (char *)v10 + 32, &v26) >= 0 )
  {
    v18 = *(_QWORD *)v10;
    v19 = v26;
    v20 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(**(_QWORD **)v10 + 304LL);
    v21 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v10 + 1) + 8LL))(*((_QWORD *)v10 + 1));
    v22 = v20(v18, v21, v19);
    v23 = v22;
    if ( v22 >= 0 )
    {
      *a4 = 1;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A0,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
        (const char *)(unsigned int)v22);
      v5 = v23;
    }
  }
  else
  {
    CSuperWetInkManager::DeactivateCurrentSource((struct CSuperWetSource **)this);
  }
  wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>(&v26);
  return v5;
}
