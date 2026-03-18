/*
 * XREFs of ?HrInit@CSystemMemoryBitmap@@UEAAJPEAVIBitmapSource@@@Z @ 0x180270EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800438FC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800739B4 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z @ 0x1802711EC (-HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z.c)
 */

__int64 __fastcall CSystemMemoryBitmap::HrInit(CSystemMemoryBitmap *this, struct IBitmapSource *a2)
{
  int inited; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  unsigned __int8 PixelFormatSize; // al
  unsigned __int64 v8; // rcx
  int v9; // eax
  int v10; // edx
  __int64 v11; // r8
  int v12; // r9d
  __int64 v13; // rax
  void *v14; // rcx
  unsigned int v16; // [rsp+20h] [rbp-48h]
  _DWORD v17[4]; // [rsp+30h] [rbp-38h] BYREF

  if ( a2 )
  {
    inited = CBitmap::HrInitDataFromIBitmapSource(this, a2, 0LL);
    v6 = inited;
    if ( inited >= 0 )
    {
      PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 30));
      if ( !PixelFormatSize || *((_DWORD *)this + 26) > 0x7FFFFFF8u / PixelFormatSize )
      {
        *((_DWORD *)this + 42) = 0;
        v6 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(PixelFormatSize, 0LL, 0LL, -2147024362, 0x16Au);
        goto LABEL_14;
      }
      v8 = (((*((_DWORD *)this + 26) * (unsigned int)PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
      *((_DWORD *)this + 42) = v8;
      inited = HrMalloc(v8, *((unsigned int *)this + 27), (void **)this + 20);
      v6 = inited;
      if ( inited >= 0 )
      {
        v9 = *((_DWORD *)this + 26);
        v10 = *((_DWORD *)this + 27);
        v11 = *((unsigned int *)this + 42);
        v12 = *((_DWORD *)this + 42);
        v17[0] = 0;
        v17[1] = 0;
        v17[2] = v9;
        v13 = *(_QWORD *)a2;
        v17[3] = v10;
        inited = (*(__int64 (__fastcall **)(struct IBitmapSource *, _DWORD *, __int64, _QWORD, _QWORD))(v13 + 24))(
                   a2,
                   v17,
                   v11,
                   (unsigned int)(v10 * v12),
                   *((_QWORD *)this + 20));
        v6 = inited;
        if ( inited >= 0 )
          return v6;
        v16 = 380;
      }
      else
      {
        v16 = 370;
      }
    }
    else
    {
      v16 = 356;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, inited, v16);
  }
  else
  {
    v6 = -2147024809;
  }
LABEL_14:
  v14 = (void *)*((_QWORD *)this + 20);
  if ( v14 )
  {
    DefaultHeap::Free(v14);
    *((_QWORD *)this + 20) = 0LL;
  }
  return v6;
}
