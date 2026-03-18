/*
 * XREFs of ??4?$ComPtr@VIBitmapRealization@@@WRL@Microsoft@@QEAAAEAV012@PEAVIBitmapRealization@@@Z @ 0x18000A740
 * Callers:
 *     ?Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVCWindowBackgroundTreatment@@PEAVIBitmapRealization@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18000A63C (-Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVCWindowBackgroundTreatment@@PEAVIBitmapRealiz.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800198A8 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IBitmapRealization>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 != a2 )
  {
    if ( a2 )
    {
      v5 = *(int *)(*(_QWORD *)(a2 + 8) + 4LL) + a2 + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      v2 = *a1;
    }
    v7 = v2;
    *a1 = a2;
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v7);
  }
  return a1;
}
