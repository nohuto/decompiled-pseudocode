/*
 * XREFs of ?AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z @ 0x1802A23FC
 * Callers:
 *     ?AddDirtyRegion@CGDISubSectionBitmapRealization@@$0PPPPPPPM@A@EAAXAEBVCRegion@@@Z @ 0x18010B4D0 (-AddDirtyRegion@CGDISubSectionBitmapRealization@@$0PPPPPPPM@A@EAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x180081FE4 (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180082054 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180083EF4 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x1800D68B8 (-AddDirtyRegion@CBitmapRealization@@UEAAXAEBVCRegion@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?Offset@CRgnData@Internal@FastRegion@@QEAA_NHH@Z @ 0x180190F38 (-Offset@CRgnData@Internal@FastRegion@@QEAA_NHH@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CGDISubSectionBitmapRealization::AddDirtyRegion(CGDISubSectionBitmapRealization *this, int **a2)
{
  int v3; // eax
  int v4; // eax
  FastRegion::Internal::CRgnData *v5; // [rsp+20h] [rbp-59h] BYREF
  int v6; // [rsp+28h] [rbp-51h] BYREF
  void *v7[10]; // [rsp+70h] [rbp-9h] BYREF
  const void *retaddr; // [rsp+D8h] [rbp+5Fh]

  v6 = 0;
  v5 = (FastRegion::Internal::CRgnData *)&v6;
  v3 = FastRegion::CRegion::Copy((int **)&v5, a2);
  if ( v3 < 0 )
    ModuleFailFastForHRESULT(v3, retaddr);
  CRegion::CRegion((CRegion *)v7, (CGDISubSectionBitmapRealization *)((char *)this - 96));
  v4 = FastRegion::CRegion::Intersect(&v5, (const struct FastRegion::Internal::CRgnData **)v7);
  if ( v4 < 0 )
    ModuleFailFastForHRESULT(v4, retaddr);
  if ( *(_DWORD *)v5 )
  {
    FastRegion::Internal::CRgnData::Offset(v5, -*((_DWORD *)this - 24), -*((_DWORD *)this - 23));
    if ( *(_DWORD *)v5 )
      CBitmapRealization::AddDirtyRegion(
        (CGDISubSectionBitmapRealization *)((char *)this - 144),
        (const struct CRegion *)&v5);
  }
  FastRegion::CRegion::FreeMemory(v7);
  FastRegion::CRegion::FreeMemory((void **)&v5);
}
