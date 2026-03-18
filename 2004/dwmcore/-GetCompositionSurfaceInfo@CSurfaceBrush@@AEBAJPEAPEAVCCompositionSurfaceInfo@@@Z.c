/*
 * XREFs of ?GetCompositionSurfaceInfo@CSurfaceBrush@@AEBAJPEAPEAVCCompositionSurfaceInfo@@@Z @ 0x180057B28
 * Callers:
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180055708 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800374A0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompositionSurfaceInfo@@@Z @ 0x180057BB8 (--4-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompo.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::GetCompositionSurfaceInfo(CSurfaceBrush *this, struct CCompositionSurfaceInfo **a2)
{
  struct CCompositionSurfaceInfo *v2; // rbx
  __int64 v4; // rcx
  unsigned int v5; // edi
  struct CCompositionSurfaceInfo *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v4 = *((_QWORD *)this + 12);
  v5 = 0;
  v8 = 0LL;
  if ( v4 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 56LL))(v4, 40LL) )
  {
    wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::operator=(
      &v8,
      *(_QWORD *)(*((_QWORD *)this + 12) + 96LL));
    v2 = v8;
  }
  else
  {
    v5 = -2003304309;
  }
  v8 = 0LL;
  *a2 = v2;
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v8);
  return v5;
}
