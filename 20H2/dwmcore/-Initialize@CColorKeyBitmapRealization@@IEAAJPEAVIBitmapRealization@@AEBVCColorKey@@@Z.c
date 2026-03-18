/*
 * XREFs of ?Initialize@CColorKeyBitmapRealization@@IEAAJPEAVIBitmapRealization@@AEBVCColorKey@@@Z @ 0x18025FE38
 * Callers:
 *     ?Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z @ 0x18025F984 (-Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x180073BD4 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CColorKeyBitmap@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV1@@Z @ 0x180264EF8 (-Create@CColorKeyBitmap@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CColorKeyBitmapRealization::Initialize(
        CColorKeyBitmapRealization *this,
        struct IBitmapRealization *a2,
        const struct CColorKey *a3)
{
  struct CColorKeyBitmap **v3; // rdi
  __int64 v5; // rcx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx

  v3 = (struct CColorKeyBitmap **)((char *)this + 104);
  v5 = *((_QWORD *)this + 13);
  *v3 = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v8 = CColorKeyBitmap::Create(a2, a3, v3);
  v10 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x2Bu, 0LL);
  else
    CD2DBitmapCache::InitializeCache(
      this,
      (struct ID2DBitmapCacheSource *)(((unsigned __int64)*v3 + 16) & -(__int64)(*v3 != 0LL)));
  return v10;
}
