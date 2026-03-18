/*
 * XREFs of ?HrInit@CClientMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@IPEAXIPEAUIUnknown@@@Z @ 0x18009093C
 * Callers:
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x180090868 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x180092768 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z.c)
 *     ?IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z @ 0x180093A70 (-IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CClientMemoryBitmap::HrInit(
        CClientMemoryBitmap *this,
        unsigned int a2,
        int a3,
        const struct PixelFormatInfo *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        struct IUnknown *a8)
{
  __int64 v12; // rcx
  unsigned int v13; // r8d
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  unsigned int v18; // [rsp+20h] [rbp-28h]

  if ( !IsValidPixelFormatInfo(a4) || !a2 || !v13 || !a6 || !a7 )
  {
    v18 = 31;
    goto LABEL_15;
  }
  if ( v13 >= 0x7FFFFFFF / a7 )
  {
    v18 = 36;
LABEL_15:
    v16 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024809, v18, 0LL);
    return v16;
  }
  v14 = HrCheckBufferSize((enum DXGI_FORMAT)*(_DWORD *)a4, a7, a2, v13, a5);
  v16 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x2Du, 0LL);
  }
  else
  {
    *((_QWORD *)this + 34) = a8;
    if ( a8 )
      ((void (__fastcall *)(struct IUnknown *))a8->lpVtbl->AddRef)(a8);
    *((_DWORD *)this + 44) = a2;
    *((_DWORD *)this + 45) = a3;
    *((_QWORD *)this + 24) = *(_QWORD *)a4;
    *((_DWORD *)this + 50) = *((_DWORD *)a4 + 2);
    *((_QWORD *)this + 32) = a6;
    *((_DWORD *)this + 66) = a7;
  }
  return v16;
}
