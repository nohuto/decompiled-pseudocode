/*
 * XREFs of IsWhitePixelOptimizationCandidate @ 0x18006FC28
 * Callers:
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x18004AB00 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@.c)
 *     ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x18006ECD8 (--0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z.c)
 * Callees:
 *     ?GetPixelFormatInfo@CDrawListBitmap@@QEBA?AUPixelFormatInfo@@XZ @ 0x18007007C (-GetPixelFormatInfo@CDrawListBitmap@@QEBA-AUPixelFormatInfo@@XZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

char __fastcall IsWhitePixelOptimizationCandidate(__int64 *a1, int a2)
{
  __int64 v4; // rcx
  char v6; // bl
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF

  if ( !CCommonRegistryData::EnableCommonSuperSets )
    return 0;
  v4 = *a1;
  if ( !(v4 ? (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4) : 0) )
    return 0;
  v6 = 1;
  if ( a2 != 1 )
  {
    if ( *(_DWORD *)(CDrawListBitmap::GetPixelFormatInfo(a1, v8) + 8) )
      return 0;
  }
  return v6;
}
