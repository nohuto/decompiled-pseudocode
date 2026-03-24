/*
 * XREFs of ?TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x180196120
 * Callers:
 *     ?TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x180195F44 (-TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180038E0C (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E78C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@$$V@?$vector@USuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAAPEAUSuperWetStroke@CSuperWetInkManager@@QEAU23@@Z @ 0x180194964 (--$_Emplace_reallocate@$$V@-$vector@USuperWetStroke@CSuperWetInkManager@@V-$allocator@USuperWetS.c)
 *     ?CheckLocalComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z @ 0x180195010 (-CheckLocalComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SuperWetInk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180195B2C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SuperWetInk@@@details@wil@@QEAAX_NW4Repor.c)
 *     TryFillRenderState @ 0x180195E14 (TryFillRenderState.c)
 *     ?erase@?$vector@USuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@@2@@Z @ 0x18019646C (-erase@-$vector@USuperWetStroke@CSuperWetInkManager@@V-$allocator@USuperWetStroke@CSuperWetInkMa.c)
 */

__int64 __fastcall CSuperWetInkManager::TryRegisterSuperWetForDrawLocal(
        CSuperWetInkManager *this,
        struct CSuperWetSource *a2,
        struct CDrawingContext *a3,
        unsigned __int8 a4,
        bool *a5)
{
  bool *v5; // r12
  unsigned int v8; // esi
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 i; // rbx
  CSuperWetInkManager *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  int v24; // eax
  int v25; // edi
  __int64 v27; // [rsp+20h] [rbp-50h] BYREF
  struct CSuperWetSource *v28; // [rsp+28h] [rbp-48h]
  __int64 v29; // [rsp+30h] [rbp-40h] BYREF
  _OWORD v30[3]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v31; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v5 = a5;
  v8 = 0;
  *a5 = 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuperWetInk>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SuperWetInk>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3);
  v11 = (__int64 *)*((_QWORD *)a3 + 6);
  v12 = 0LL;
  if ( v11 )
    v12 = *v11;
  wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
    &v27,
    v12);
  v13 = v27;
  if ( !v27 || !TryFillRenderState(a3, a4, (__int64)v30) )
    goto LABEL_22;
  v28 = a2;
  wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
    &v29,
    v13);
  for ( i = *((_QWORD *)this + 1); i != *((_QWORD *)this + 2); i += 80LL )
  {
    if ( *(struct CSuperWetSource **)i == v28 && *(_QWORD *)(i + 8) == v29 )
      break;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v29);
  if ( i == *((_QWORD *)this + 2) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuperWetInk>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_SuperWetInk>::GetImpl'::`2'::impl,
      1u,
      v16);
    v17 = *((_QWORD *)this + 2);
    if ( *((_QWORD *)this + 1) == v17 )
    {
      if ( *((_QWORD *)this + 3) == v17 )
      {
        std::vector<CSuperWetInkManager::SuperWetStroke>::_Emplace_reallocate<>((__int64 *)this + 1, v17);
      }
      else
      {
        *(_DWORD *)(v17 + 73) = 0;
        *(_WORD *)(v17 + 77) = 0;
        *(_BYTE *)(v17 + 79) = 0;
        *(_QWORD *)(v17 + 8) = 0LL;
        *(_QWORD *)v17 = 0LL;
        *(_OWORD *)(v17 + 16) = 0LL;
        *(_OWORD *)(v17 + 32) = 0LL;
        *(_OWORD *)(v17 + 48) = 0LL;
        *(_QWORD *)(v17 + 64) = 0LL;
        *(_BYTE *)(v17 + 72) = 0;
        *((_QWORD *)this + 2) += 80LL;
      }
      v18 = *((_QWORD *)this + 2);
      *(_QWORD *)(v18 - 80) = a2;
      v19 = *(_QWORD *)(v18 - 72);
      *(_QWORD *)(v18 - 72) = v13;
      v20 = v13 + *(int *)(*(_QWORD *)(v13 + 8) + 4LL) + 8LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
      if ( v19 )
      {
        v21 = v19 + *(int *)(*(_QWORD *)(v19 + 8) + 4LL) + 8LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
      i = *((_QWORD *)this + 2) - 80LL;
      goto LABEL_17;
    }
LABEL_22:
    v25 = 0;
    goto LABEL_23;
  }
LABEL_17:
  v22 = v30[1];
  *(_OWORD *)(i + 16) = v30[0];
  v23 = v30[2];
  *(_OWORD *)(i + 32) = v22;
  *(_QWORD *)&v22 = v31;
  *(_OWORD *)(i + 48) = v23;
  *(_QWORD *)(i + 64) = v22;
  v24 = CSuperWetInkManager::CheckLocalComputeScribbleSupport(
          v15,
          (const struct CSuperWetInkManager::SuperWetStroke *)i,
          (bool *)&a5);
  v25 = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x171,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\superwetinkmanager.cpp",
      (const char *)(unsigned int)v24);
LABEL_23:
    v8 = v25;
    goto LABEL_24;
  }
  if ( (_BYTE)a5 )
  {
    *(_BYTE *)(i + 72) = 1;
    *v5 = 1;
  }
  else
  {
    std::vector<CSuperWetInkManager::SuperWetStroke>::erase((char *)this + 8, &a5, i);
  }
LABEL_24:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v27);
  return v8;
}
