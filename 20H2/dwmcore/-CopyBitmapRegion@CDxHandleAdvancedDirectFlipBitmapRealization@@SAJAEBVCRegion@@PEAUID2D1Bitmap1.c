/*
 * XREFs of ?CopyBitmapRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@SAJAEBVCRegion@@PEAUID2D1Bitmap1@@1@Z @ 0x180260D24
 * Callers:
 *     ?UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x180261694 (-UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800A6094 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800C07A0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::CopyBitmapRegion(
        FastRegion::Internal::CRgnData **a1,
        struct ID2D1Bitmap1 *a2,
        struct ID2D1Bitmap1 *a3)
{
  int v4; // ebx
  int v6; // r9d
  int v7; // r8d
  __int64 v8; // rcx
  int v9; // edx
  __int64 v10; // rax
  __int64 (__fastcall *v11)(struct ID2D1Bitmap1 *, _DWORD *, struct ID2D1Bitmap1 *, _DWORD *); // rax
  int v12; // eax
  FastRegion::Internal::CRgnData *v13; // rcx
  int v14; // edi
  _DWORD v16[2]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v17[8]; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+40h] [rbp-40h]
  int *v19; // [rsp+48h] [rbp-38h]
  __int64 v20; // [rsp+50h] [rbp-30h]
  int v21; // [rsp+58h] [rbp-28h]
  _DWORD v22[4]; // [rsp+68h] [rbp-18h] BYREF

  v4 = 0;
  FastRegion::Internal::CRgnData::BeginIterator(*a1, (struct FastRegion::CRegion::Iterator *)v17);
  while ( (unsigned __int64)v19 < v18 )
  {
    v6 = *v19;
    v7 = v19[2];
    v8 = 2 * v21;
    v9 = *(_DWORD *)(v20 + 4 * v8);
    LODWORD(v8) = *(_DWORD *)(v20 + 4 * v8 + 4);
    v10 = *(_QWORD *)a3;
    v22[0] = v9;
    v22[1] = v6;
    v22[2] = v8;
    v11 = *(__int64 (__fastcall **)(struct ID2D1Bitmap1 *, _DWORD *, struct ID2D1Bitmap1 *, _DWORD *))(v10 + 64);
    v22[3] = v7;
    v16[0] = v9;
    v16[1] = v6;
    v12 = v11(a3, v16, a2, v22);
    v14 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v13, 0LL, 0, v12, 0x66u, 0LL);
    if ( !v4 || v4 >= 0 && v14 < 0 )
      v4 = v14;
    FastRegion::Internal::CRgnData::StepIterator(v13, (struct FastRegion::CRegion::Iterator *)v17);
  }
  return (unsigned int)v4;
}
