/*
 * XREFs of ?HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z @ 0x180214B2C
 * Callers:
 *     ?HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x1802465AC (-HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180048D4C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18004EEC0 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x1800E3DCC (memset_0.c)
 */

__int64 __fastcall CSystemMemoryBitmap::HrInit(
        void **this,
        unsigned int a2,
        unsigned int a3,
        const struct PixelFormatInfo *a4)
{
  unsigned __int8 PixelFormatSize; // al
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // edi
  void *v14; // rcx
  int v15; // edx

  PixelFormatSize = GetPixelFormatSize(*(_DWORD *)a4);
  if ( PixelFormatSize && a2 <= 0x7FFFFFF8u / PixelFormatSize )
  {
    v10 = (((a2 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
    v11 = HrMalloc(v10, a3, this + 33);
    v13 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x144u, 0LL);
    }
    else
    {
      v14 = this[33];
      *((_DWORD *)this + 46) = a2;
      *((_DWORD *)this + 47) = a3;
      this[25] = *(void **)a4;
      v15 = *((_DWORD *)a4 + 2);
      *((_DWORD *)this + 68) = v10;
      *((_DWORD *)this + 52) = v15;
      memset_0(v14, 0, a3 * v10);
    }
  }
  else
  {
    v13 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024362, 0x13Eu, 0LL);
  }
  return v13;
}
