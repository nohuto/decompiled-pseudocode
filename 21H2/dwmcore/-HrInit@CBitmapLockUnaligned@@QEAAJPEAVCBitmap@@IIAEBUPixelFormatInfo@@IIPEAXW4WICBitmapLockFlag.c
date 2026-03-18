/*
 * XREFs of ?HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@II@Z @ 0x180271E1C
 * Callers:
 *     ?HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180271410 (-HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitm.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800438FC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x18006F31C (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800739B4 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?ReadUnalignedScanline@@YAXPEAEPEBEII@Z @ 0x18027205C (-ReadUnalignedScanline@@YAXPEAEPEBEII@Z.c)
 */

__int64 __fastcall CBitmapLockUnaligned::HrInit(
        CBitmapLockUnaligned *this,
        struct CBitmap *a2,
        unsigned int a3,
        unsigned int a4,
        const struct PixelFormatInfo *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned __int8 *a8,
        enum WICBitmapLockFlags a9,
        unsigned int a10,
        unsigned int a11)
{
  CBitmapLock *v11; // rbp
  const unsigned __int8 *v12; // r13
  __int64 v13; // r14
  unsigned __int8 PixelFormatSize; // al
  __int64 v15; // rcx
  unsigned int v16; // r8d
  unsigned __int8 *v17; // rsi
  __int64 v18; // r15
  unsigned int v19; // edi
  int v20; // eax
  __int64 v21; // rcx
  int v22; // ebx
  unsigned int v23; // r12d
  unsigned __int8 *v24; // rbx
  unsigned int v25; // r14d
  unsigned int v26; // esi
  int v27; // eax
  __int64 v28; // rcx
  unsigned int v34; // [rsp+F0h] [rbp+38h]

  v11 = this;
  v12 = a8;
  *((_DWORD *)this + 38) = a6;
  *((_DWORD *)this + 39) = a7;
  *((_DWORD *)this + 32) = a9;
  *((_DWORD *)this + 41) = a10;
  *((_DWORD *)this + 40) = a11;
  *((_QWORD *)this + 18) = v12;
  v13 = a4;
  PixelFormatSize = GetPixelFormatSize(*(_DWORD *)a5);
  v17 = 0LL;
  if ( PixelFormatSize && v16 <= 0x7FFFFFF8u / PixelFormatSize )
  {
    a8 = 0LL;
    v18 = (unsigned int)v13;
    v19 = (((v16 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
    v20 = HrMalloc(v19, (unsigned int)v13, (void **)&a8);
    v22 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, v20, 0x9Fu);
    v17 = a8;
  }
  else
  {
    v22 = -2147024362;
    v19 = 0;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, -2147024362, 0x95u);
    v18 = v13;
  }
  a8 = v17;
  v23 = v13 * v19;
  v34 = v13 * v19;
  if ( v22 < 0 )
    goto LABEL_15;
  if ( (a9 & 1) != 0 )
  {
    v24 = v17;
    if ( (_DWORD)v13 )
    {
      v25 = a10;
      v26 = a11;
      do
      {
        ReadUnalignedScanline(v24, v12, v26, v25);
        v12 += a6;
        v24 += v19;
        --v18;
      }
      while ( v18 );
      v17 = a8;
      v11 = this;
      LODWORD(v13) = a4;
      v23 = v34;
    }
  }
  v27 = CBitmapLock::HrInit(
          v11,
          (struct IBitmapUnlock *)(((unsigned __int64)a2 + 40) & -(__int64)(a2 != 0LL)),
          a3,
          v13,
          a5,
          v19,
          v23,
          v17,
          a9,
          0,
          0LL);
  v22 = v27;
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0LL, v27, 0xCCu);
LABEL_15:
    DefaultHeap::Free(v17);
  }
  return (unsigned int)v22;
}
