/*
 * XREFs of IsWhitePixelOptimizationCandidate @ 0x18003F8B4
 * Callers:
 *     ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x18003FED8 (--0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z.c)
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x180053340 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@.c)
 * Callees:
 *     ?GetPixelFormatInfo@CDrawListBitmap@@QEBA?AUPixelFormatInfo@@XZ @ 0x18003F3C0 (-GetPixelFormatInfo@CDrawListBitmap@@QEBA-AUPixelFormatInfo@@XZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

char __fastcall IsWhitePixelOptimizationCandidate(CDrawListBitmap *a1, int a2)
{
  __int64 v4; // rcx
  char v6; // bl
  _DWORD v8[4]; // [rsp+20h] [rbp-28h] BYREF

  if ( !CCommonRegistryData::EnableCommonSuperSets )
    return 0;
  v4 = *(_QWORD *)a1;
  if ( !(v4 ? (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4) : 0) )
    return 0;
  v6 = 1;
  if ( a2 != 1 )
  {
    if ( CDrawListBitmap::GetPixelFormatInfo(a1, v8)[2] )
      return 0;
  }
  return v6;
}
