/*
 * XREFs of ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x1800C6668
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18000B8E4 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180056C40 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?GetNextRunningEffect@CCommonRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x1800C6330 (-GetNextRunningEffect@CCommonRenderingEffect@@UEAA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returnc.c)
 * Callees:
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x1800AD0B8 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?GetPixelFormatInfo@CDrawListBitmap@@QEBA?AUPixelFormatInfo@@XZ @ 0x1800C67E8 (-GetPixelFormatInfo@CDrawListBitmap@@QEBA-AUPixelFormatInfo@@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x1800D5AB0 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     ??0SamplerMode@@QEAA@XZ @ 0x1800FAE80 (--0SamplerMode@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCommonRenderingEffect::CCommonRenderingEffect(
        __int64 a1,
        __int64 *a2,
        _WORD *a3,
        __int64 *a4,
        __int64 a5)
{
  char v5; // bl
  CDrawListBitmap *v8; // rsi
  __int64 v9; // rbp
  __int64 v11; // r14
  SamplerMode *v12; // rsi
  _WORD *v13; // rcx
  char v14; // cl
  char v15; // dl
  char v16; // al
  __int64 result; // rax
  _WORD *v18; // [rsp+20h] [rbp-58h] BYREF

  v5 = 0;
  v18 = a3;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &CCommonRenderingEffect::`vftable';
  v8 = (CDrawListBitmap *)(a1 + 16);
  v9 = 2LL;
  v11 = 2LL;
  do
  {
    CDrawListBitmap::CDrawListBitmap(v8);
    v8 = (CDrawListBitmap *)((char *)v8 + 24);
    --v11;
  }
  while ( v11 );
  v12 = (SamplerMode *)(a1 + 64);
  do
  {
    SamplerMode::SamplerMode(v12);
    v12 = (SamplerMode *)((char *)v12 + 3);
    --v9;
  }
  while ( v9 );
  CDrawListBitmap::operator=((__int64 *)(a1 + 16), a2);
  CDrawListBitmap::operator=((__int64 *)(a1 + 40), a4);
  v13 = v18;
  *(_WORD *)(a1 + 64) = *v18;
  *(_BYTE *)(a1 + 66) = *((_BYTE *)v13 + 2);
  *(_WORD *)(a1 + 67) = *(_WORD *)a5;
  *(_BYTE *)(a1 + 69) = *(_BYTE *)(a5 + 2);
  v14 = !a2[1]
     || CCommonRegistryData::EnableCommonSuperSets
     && *a2
     && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 24LL))(*a2)
     && !*(_DWORD *)(CDrawListBitmap::GetPixelFormatInfo(a2, &v18) + 8);
  *(_BYTE *)(a1 + 70) = v14;
  if ( !a4[1] )
    goto LABEL_15;
  v15 = v14;
  if ( CCommonRegistryData::EnableCommonSuperSets )
  {
    if ( !*a4 )
    {
LABEL_16:
      v15 = v14;
      goto LABEL_17;
    }
    v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a4 + 24LL))(*a4);
    v14 = *(_BYTE *)(a1 + 70);
    v15 = v14;
    if ( v16 )
    {
LABEL_15:
      v5 = 1;
      goto LABEL_16;
    }
  }
LABEL_17:
  result = a1;
  *(_BYTE *)(a1 + 70) = v5 & v15;
  return result;
}
