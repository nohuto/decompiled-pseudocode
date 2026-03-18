/*
 * XREFs of ?EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x180091618
 * Callers:
 *     ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x18003E6BC (-UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Rec.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18003CAF0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?Initialize@CSecondarySysmemBitmap@@IEAAJXZ @ 0x180091708 (-Initialize@CSecondarySysmemBitmap@@IEAAJXZ.c)
 *     ??0CSecondarySysmemBitmap@@IEAA@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@@Z @ 0x180092E5C (--0CSecondarySysmemBitmap@@IEAA@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18009F68C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BCAF0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapCache::EnsureSysmemBitmap(CD2DBitmapCache *this)
{
  int v1; // ebx
  __int64 (__fastcall ***v3)(_QWORD, _BYTE *); // rcx
  const struct PixelFormatInfo *v4; // rbx
  __int64 v5; // rax
  const struct D2D_SIZE_U *v6; // rdi
  CSecondarySysmemBitmap *v7; // rax
  __int64 v8; // rcx
  CRenderTargetBitmap *v9; // rdi
  int v10; // eax
  __int64 v11; // rcx
  _BYTE v13[8]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v14[16]; // [rsp+38h] [rbp-20h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 5) )
    return (unsigned int)v1;
  *((_QWORD *)this + 5) = 0LL;
  v3 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*((_QWORD *)this + 3)
                                                 + 8LL
                                                 + *(int *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL) + 8LL));
  v4 = (const struct PixelFormatInfo *)(**v3)(v3, v14);
  v5 = (***((__int64 (__fastcall ****)(_QWORD, _BYTE *))this + 3))(*((_QWORD *)this + 3), v13);
  *((_QWORD *)this + 5) = 0LL;
  v6 = (const struct D2D_SIZE_U *)v5;
  v7 = (CSecondarySysmemBitmap *)DefaultHeap::Alloc(0xD0uLL);
  if ( v7 )
    v9 = CSecondarySysmemBitmap::CSecondarySysmemBitmap(v7, v6, v4);
  else
    v9 = 0LL;
  if ( !v9 )
  {
    v1 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x18u, 0LL);
LABEL_13:
    if ( v9 )
      CRenderTargetBitmap::Release(v9);
    goto LABEL_7;
  }
  CMILCOMBase::InternalAddRef(v9);
  v10 = CSecondarySysmemBitmap::Initialize(v9);
  v1 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x1Au, 0LL);
    goto LABEL_13;
  }
  *((_QWORD *)this + 5) = v9;
LABEL_7:
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v1, 0x12Bu, 0LL);
  return (unsigned int)v1;
}
