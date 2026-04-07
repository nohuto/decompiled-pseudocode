/*
 * XREFs of ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x1800C01F4
 * Callers:
 *     ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1800BFF80 (-CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180042A6C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x18004E4C4 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z.c)
 *     memcpy_0 @ 0x1800563BA (memcpy_0.c)
 */

__int64 __fastcall CBitmap::CopyPixelsHelper(
        int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int8 *Src,
        unsigned int a7,
        unsigned int a8,
        unsigned __int8 *a9)
{
  __int64 v10; // r12
  __int64 v12; // rdi
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // r9d
  unsigned __int8 PixelFormatSize; // al
  unsigned int v17; // ecx
  __int64 v19; // rbp
  size_t v20; // r14
  unsigned int v23; // [rsp+20h] [rbp-28h]

  v10 = a4;
  v12 = a3;
  v13 = HrCheckBufferSize(a1, a4, a2, a3, a5);
  v14 = v13;
  if ( v13 < 0 )
  {
    v23 = 75;
LABEL_3:
    v15 = v13;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, v23);
    return v14;
  }
  v13 = HrCheckBufferSize(a1, a7, a2, (unsigned int)v12, a8);
  v14 = v13;
  if ( v13 < 0 )
  {
    v23 = 82;
    goto LABEL_3;
  }
  PixelFormatSize = GetPixelFormatSize(a1);
  if ( !PixelFormatSize || a2 > 0x7FFFFFF8u / PixelFormatSize )
  {
    v14 = -2147024362;
    v23 = 84;
    goto LABEL_15;
  }
  v14 = 0;
  v17 = (a2 * PixelFormatSize + 7) >> 3;
  if ( v17 > a7 )
  {
    v14 = -2147024809;
    v23 = 89;
LABEL_15:
    v15 = v14;
    goto LABEL_16;
  }
  if ( (_DWORD)v12 )
  {
    v19 = v12;
    v20 = v17;
    do
    {
      memcpy_0(a9, Src, v20);
      a9 += a7;
      Src += v10;
      --v19;
    }
    while ( v19 );
  }
  return v14;
}
