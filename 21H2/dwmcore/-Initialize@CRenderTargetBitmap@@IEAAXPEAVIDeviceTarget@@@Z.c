/*
 * XREFs of ?Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTarget@@@Z @ 0x180040FE4
 * Callers:
 *     ?Create@CScratchRenderTargetBitmap@@KAJPEAVIDeviceTarget@@PEAPEAV1@@Z @ 0x18003DFE4 (-Create@CScratchRenderTargetBitmap@@KAJPEAVIDeviceTarget@@PEAPEAV1@@Z.c)
 *     ?CreateSingleAdapter@CRenderTargetBitmap@@SAJPEAVIDeviceTarget@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180040F4C (-CreateSingleAdapter@CRenderTargetBitmap@@SAJPEAVIDeviceTarget@@PEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?Create@CRenderTargetBitmap@@SAJPEAVIDeviceTarget@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180042E8C (-Create@CRenderTargetBitmap@@SAJPEAVIDeviceTarget@@PEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x18026695C (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapResource@@@Z @ 0x1800410A8 (--4-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapResourc.c)
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x1800688C4 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetBitmap::Initialize(CRenderTargetBitmap *this, struct IDeviceTarget *a2)
{
  char *v2; // rbx
  __int64 v5; // rcx
  char *v6; // rcx
  struct ID2DBitmapCacheSource *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)this + 136;
  wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::operator=((char *)this + 136);
  v5 = *(int *)(*(_QWORD *)(*(_QWORD *)v2 + 8LL) + 8LL) + *(_QWORD *)v2 + 8LL;
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 40LL))(
    v5,
    (char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16);
  v7 = 0LL;
  if ( *((_BYTE *)this + 144)
    || (v6 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 4LL) + 8,
        (**(int (__fastcall ***)(char *, GUID *, struct ID2DBitmapCacheSource **))v6)(
          v6,
          &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3,
          &v7) < 0) )
  {
    *((_BYTE *)this + 144) = 1;
  }
  else
  {
    CD2DBitmapCache::InitializeCache(this, v7);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v7);
}
