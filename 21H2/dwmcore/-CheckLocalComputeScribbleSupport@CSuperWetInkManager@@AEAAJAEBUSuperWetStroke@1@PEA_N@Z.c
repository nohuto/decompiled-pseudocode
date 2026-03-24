/*
 * XREFs of ?CheckLocalComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z @ 0x180195010
 * Callers:
 *     ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1800C39AC (-ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV-$TMilRect@I.c)
 *     ?TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x180196120 (-TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingCont.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E78C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180152A24 (McTemplateU0q_EventWriteTransfer.c)
 *     ?CheckCommonComputeScribbleSupport@CSuperWetInkManager@@AEAAJPEA_N@Z @ 0x180194E48 (-CheckCommonComputeScribbleSupport@CSuperWetInkManager@@AEAAJPEA_N@Z.c)
 *     ?EnsureLocalSuperWetResources@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEA_N@Z @ 0x180195288 (-EnsureLocalSuperWetResources@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEA_N@Z.c)
 */

__int64 __fastcall CSuperWetInkManager::CheckLocalComputeScribbleSupport(
        CSuperWetInkManager *this,
        const struct CSuperWetInkManager::SuperWetStroke *a2,
        bool *a3)
{
  unsigned int v4; // ebx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  CSuperWetInkManager *v15; // rcx
  int v16; // eax
  int v17; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CSuperWetInkManager *v19; // [rsp+40h] [rbp+8h] BYREF
  __int64 v20; // [rsp+50h] [rbp+18h] BYREF

  v19 = this;
  v4 = 0;
  *a3 = 0;
  v6 = CSuperWetInkManager::CheckCommonComputeScribbleSupport(this, (bool *)&v19);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF5,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\superwetinkmanager.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  if ( !(_BYTE)v19 )
    return 0LL;
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 120LL))(*((_QWORD *)a2 + 1));
  v11 = v9;
  if ( !v9 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
      McTemplateU0q_EventWriteTransfer(v10, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, 10LL);
    return 0LL;
  }
  v12 = *(int *)(*(_QWORD *)(v9 + 8) + 4LL) + 8LL;
  v20 = 0LL;
  if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))(v9 + v12))(
         v9 + v12,
         &GUID_d1f4aa89_764d_40c8_b46d_5c9e9777fb37,
         &v20) < 0
    || (v13 = v11 + *(int *)(*(_QWORD *)(v11 + 8) + 12LL) + 8LL,
        (v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13)) == 0)
    || !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64, char *))(**(_QWORD **)a2 + 8LL))(
          *(_QWORD *)a2,
          v14,
          (char *)a2 + 16)
    || !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 128LL))(*((_QWORD *)a2 + 1)) )
  {
    v17 = 0;
    goto LABEL_15;
  }
  v16 = CSuperWetInkManager::EnsureLocalSuperWetResources(v15, *((struct IMonitorTarget **)a2 + 1), a3);
  v17 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11D,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\superwetinkmanager.cpp",
      (const char *)(unsigned int)v16);
LABEL_15:
    v4 = v17;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v20);
  return v4;
}
