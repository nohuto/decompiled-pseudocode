/*
 * XREFs of ?EnqueueSuperWetScribbleLocally@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEAVCComputeScribble@@@Z @ 0x1801A7478
 * Callers:
 *     ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1800BBB7C (-ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV-$TMilRect@I.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCComputeScribble@@@Z @ 0x1801E4278 (--4-$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCComputeScrib.c)
 */

__int64 __fastcall CSuperWetInkManager::EnqueueSuperWetScribbleLocally(
        CSuperWetInkManager *this,
        struct IMonitorTarget *a2,
        struct CComputeScribble *a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)a2 + 152LL))(a2);
  v5 = v4 + *(int *)(*(_QWORD *)(v4 + 8) + 4LL);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v12);
  v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD **))(v5 + 8))(
         v5 + 8,
         &GUID_d1f4aa89_764d_40c8_b46d_5c9e9777fb37,
         &v12);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD *))(*v12 + 264LL))(v12);
    if ( *(_BYTE *)(v8 + 48) )
      wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>::operator=(v8 + 40, a3);
    else
      *(_BYTE *)(v8 + 49) = 1;
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D4,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
      (const char *)(unsigned int)v6);
  }
  if ( v12 )
  {
    v9 = (__int64)v12 + *(int *)(v12[1] + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v7;
}
