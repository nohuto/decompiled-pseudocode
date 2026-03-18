/*
 * XREFs of ?EnqueueSuperWetScribbleLocally@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEAVCComputeScribble@@@Z @ 0x180198F94
 * Callers:
 *     ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1800BA114 (-ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV-$TMilRect@I.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800323F0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180151814 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnqueueForCurrentBackbuffer@CComputeScribbleRenderer@@QEAAXPEAVCComputeScribble@@@Z @ 0x1801A3A70 (-EnqueueForCurrentBackbuffer@CComputeScribbleRenderer@@QEAAXPEAVCComputeScribble@@@Z.c)
 */

__int64 __fastcall CSuperWetInkManager::EnqueueSuperWetScribbleLocally(
        CSuperWetInkManager *this,
        struct IMonitorTarget *a2,
        struct CComputeScribble *a3)
{
  __int64 v3; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rax
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CSuperWetInkManager *v14; // [rsp+30h] [rbp+8h] BYREF
  CRenderTargetBitmap *v15; // [rsp+38h] [rbp+10h] BYREF

  v14 = this;
  v3 = *(_QWORD *)a2;
  v14 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct IMonitorTarget *))(v3 + 120))(a2);
  v6 = v5 + *(int *)(*(_QWORD *)(v5 + 8) + 4LL);
  if ( v14 )
  {
    v7 = (__int64)v14 + *(int *)(*((_QWORD *)v14 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, CSuperWetInkManager **))(v6 + 8))(
         v6 + 8,
         &GUID_d1f4aa89_764d_40c8_b46d_5c9e9777fb37,
         &v14);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = *(_QWORD *)v14;
    v15 = 0LL;
    v11 = (*(__int64 (__fastcall **)(CSuperWetInkManager *, CRenderTargetBitmap **))(v10 + 208))(v14, &v15);
    v9 = v11;
    if ( v11 >= 0 )
    {
      CComputeScribbleRenderer::EnqueueForCurrentBackbuffer(v15, a3);
      v9 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D0,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\superwetinkmanager.cpp",
        (const char *)(unsigned int)v11);
    }
    if ( v15 )
      CRenderTargetBitmap::Release(v15);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CD,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\superwetinkmanager.cpp",
      (const char *)(unsigned int)v8);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v14);
  return v9;
}
