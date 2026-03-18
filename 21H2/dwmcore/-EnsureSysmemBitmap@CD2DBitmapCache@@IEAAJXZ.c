/*
 * XREFs of ?EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x18006D09C
 * Callers:
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z @ 0x1800686F0 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z.c)
 * Callees:
 *     ??0CSecondarySysmemBitmap@@IEAA@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@@Z @ 0x18006CD44 (--0CSecondarySysmemBitmap@@IEAA@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@@Z.c)
 *     ?Initialize@CSecondarySysmemBitmap@@IEAAJXZ @ 0x18006CE5C (-Initialize@CSecondarySysmemBitmap@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VID2DBitmapCacheSource@@@@IEAAKXZ @ 0x1800EB140 (-InternalRelease@-$CMILRefCountBaseT@VID2DBitmapCacheSource@@@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapCache::EnsureSysmemBitmap(CD2DBitmapCache *this)
{
  unsigned int v1; // ebx
  __int64 (__fastcall ***v3)(_QWORD, _BYTE *); // rcx
  const struct PixelFormatInfo *v4; // rbx
  __int64 v5; // rax
  const struct D2D_SIZE_U *v6; // rdi
  CSecondarySysmemBitmap *v7; // rax
  unsigned int v8; // ecx
  CSecondarySysmemBitmap *v9; // rax
  enum DXGI_FORMAT *v10; // rdi
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v14; // ecx
  int v15; // edi
  _BYTE v16[8]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v17[16]; // [rsp+38h] [rbp-20h] BYREF

  v1 = 0;
  if ( !*((_QWORD *)this + 5) )
  {
    *((_QWORD *)this + 5) = 0LL;
    v3 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*((_QWORD *)this + 3)
                                                   + 8LL
                                                   + *(int *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL) + 8LL));
    v4 = (const struct PixelFormatInfo *)(**v3)(v3, v17);
    v5 = (***((__int64 (__fastcall ****)(_QWORD, _BYTE *))this + 3))(*((_QWORD *)this + 3), v16);
    *((_QWORD *)this + 5) = 0LL;
    v6 = (const struct D2D_SIZE_U *)v5;
    v7 = (CSecondarySysmemBitmap *)DefaultHeap::Alloc(0xC8uLL);
    if ( v7 && (v9 = CSecondarySysmemBitmap::CSecondarySysmemBitmap(v7, v6, v4), (v10 = (enum DXGI_FORMAT *)v9) != 0LL) )
    {
      CMILRefCountImpl::AddReference((CSecondarySysmemBitmap *)((char *)v9 + 16));
      v11 = CSecondarySysmemBitmap::Initialize(v10);
      v1 = v11;
      if ( v11 >= 0 )
      {
        *((_QWORD *)this + 5) = v10;
        return v1;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1Au, 0LL);
      CMILRefCountBaseT<ID2DBitmapCacheSource>::InternalRelease(v10);
      v15 = v1;
    }
    else
    {
      v1 = -2147024882;
      v15 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x18u, 0LL);
    }
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v15, 0x12Bu, 0LL);
  }
  return v1;
}
