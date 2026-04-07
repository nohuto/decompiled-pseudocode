/*
 * XREFs of ?GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z @ 0x18003A950
 * Callers:
 *     ?GetSize@CCompressedSourceBitmap@@WBI@EAAJPEAI0@Z @ 0x1800562F0 (-GetSize@CCompressedSourceBitmap@@WBI@EAAJPEAI0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x180050B8C (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     ?EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ @ 0x180050EB0 (-EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ.c)
 */

__int64 __fastcall CCompressedSourceBitmap::GetSize(CCompressedSourceBitmap *this, unsigned int *a2, unsigned int *a3)
{
  bool v6; // zf
  unsigned int v7; // ebx
  int v9; // eax
  char *v10; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 42) && *((_DWORD *)this + 43)
    || (v9 = CCompressedSourceBitmap::EnsureWICBitmapFrame((CCompressedSourceBitmap *)((char *)this - 16)),
        v7 = v9,
        v9 >= 0) )
  {
    v6 = *((_BYTE *)this + 144) == 0;
    v10 = (char *)this + 96;
    if ( !v6 )
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
    if ( a2 && a3 )
    {
      *a2 = *((_DWORD *)this + 42);
      *a3 = *((_DWORD *)this + 43);
      if ( this != (CCompressedSourceBitmap *)-96LL && *((_BYTE *)this + 144) )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
      return 0;
    }
    else
    {
      CGuard<CMTALock>::~CGuard<CMTALock>(&v10);
      v7 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x74u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x70u);
  }
  return v7;
}
