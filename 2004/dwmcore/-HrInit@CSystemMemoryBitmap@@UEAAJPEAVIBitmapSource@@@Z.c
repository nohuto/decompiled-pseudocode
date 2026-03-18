/*
 * XREFs of ?HrInit@CSystemMemoryBitmap@@UEAAJPEAVIBitmapSource@@@Z @ 0x180216C40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800927B4 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800AAF50 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z @ 0x180216FEC (-HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z.c)
 */

__int64 __fastcall CSystemMemoryBitmap::HrInit(CSystemMemoryBitmap *this, struct IBitmapSource *a2)
{
  int inited; // eax
  __int64 v5; // rcx
  int v6; // ebx
  unsigned __int8 PixelFormatSize; // al
  unsigned int v8; // r8d
  unsigned __int64 v9; // rcx
  int v10; // edx
  int v11; // eax
  __int64 v12; // r8
  int v13; // r9d
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  void *v17; // rcx
  unsigned int v19; // [rsp+20h] [rbp-48h]
  _DWORD v20[4]; // [rsp+30h] [rbp-38h] BYREF

  if ( !a2 )
  {
    v6 = -2147024809;
    goto LABEL_17;
  }
  inited = CBitmap::HrInitDataFromIBitmapSource(this, a2, 0LL);
  v6 = inited;
  if ( inited >= 0 )
  {
    PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 48));
    if ( PixelFormatSize && v8 <= 0x7FFFFFF8u / PixelFormatSize )
    {
      v6 = 0;
      v9 = (((v8 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
    }
    else
    {
      v6 = -2147024362;
      v9 = 0LL;
    }
    *((_DWORD *)this + 66) = v9;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v6, 0x16Au, 0LL);
      goto LABEL_18;
    }
    inited = HrMalloc(v9, *((unsigned int *)this + 45), (void **)this + 32);
    v6 = inited;
    if ( inited < 0 )
    {
      v19 = 370;
      goto LABEL_12;
    }
    v10 = *((_DWORD *)this + 45);
    v11 = *((_DWORD *)this + 44);
    v12 = *((unsigned int *)this + 66);
    v13 = *((_DWORD *)this + 66);
    v20[0] = 0;
    v20[1] = 0;
    v20[2] = v11;
    v14 = *(_QWORD *)a2;
    v20[3] = v10;
    v15 = (*(__int64 (__fastcall **)(struct IBitmapSource *, _DWORD *, __int64, _QWORD, _QWORD))(v14 + 24))(
            a2,
            v20,
            v12,
            (unsigned int)(v10 * v13),
            *((_QWORD *)this + 32));
    v6 = v15;
    if ( v15 >= 0 )
      return (unsigned int)v6;
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x17Cu, 0LL);
LABEL_17:
    if ( v6 >= 0 )
      return (unsigned int)v6;
    goto LABEL_18;
  }
  v19 = 356;
LABEL_12:
  MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, inited, v19, 0LL);
LABEL_18:
  v17 = (void *)*((_QWORD *)this + 32);
  if ( v17 )
  {
    operator delete(v17);
    *((_QWORD *)this + 32) = 0LL;
  }
  return (unsigned int)v6;
}
