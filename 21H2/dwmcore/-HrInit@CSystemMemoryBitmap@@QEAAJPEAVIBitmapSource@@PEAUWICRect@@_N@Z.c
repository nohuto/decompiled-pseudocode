/*
 * XREFs of ?HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z @ 0x180270D4C
 * Callers:
 *     ?RotateShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@W4DXGI_MODE_ROTATION@@@Z @ 0x18026A4F8 (-RotateShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@W4DXGI_MODE.c)
 *     ?ScaleShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@I@Z @ 0x18026A7DC (-ScaleShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@I@Z.c)
 *     ?HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z @ 0x1802A72E8 (-HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800438FC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800739B4 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z @ 0x1802711EC (-HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z.c)
 */

__int64 __fastcall CSystemMemoryBitmap::HrInit(CSystemMemoryBitmap *this, struct IBitmapSource *a2, struct WICRect *a3)
{
  int inited; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  unsigned __int8 PixelFormatSize; // al
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // r9d
  __int64 v12; // r8
  __int64 v13; // rax
  void *v14; // rcx
  unsigned int v16; // [rsp+20h] [rbp-38h]
  _DWORD v17[4]; // [rsp+30h] [rbp-28h] BYREF

  if ( a2 )
  {
    inited = CBitmap::HrInitDataFromIBitmapSource(this, a2, 0LL);
    v7 = inited;
    if ( inited >= 0 )
    {
      PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 30));
      if ( !PixelFormatSize || *((_DWORD *)this + 26) > 0x7FFFFFF8u / PixelFormatSize )
      {
        *((_DWORD *)this + 42) = 0;
        v7 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(PixelFormatSize, 0LL, 0LL, -2147024362, 0x1E8u);
        goto LABEL_14;
      }
      v9 = (((*((_DWORD *)this + 26) * (unsigned int)PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
      *((_DWORD *)this + 42) = v9;
      inited = HrMalloc(v9, *((unsigned int *)this + 27), (void **)this + 20);
      v7 = inited;
      if ( inited >= 0 )
      {
        v10 = *((_DWORD *)this + 26);
        v11 = *((_DWORD *)this + 27);
        v12 = *((unsigned int *)this + 42);
        v17[0] = 0;
        v17[1] = 0;
        v17[2] = v10;
        v13 = *(_QWORD *)a2;
        v17[3] = v11;
        inited = (*(__int64 (__fastcall **)(struct IBitmapSource *, _DWORD *, __int64, _QWORD, _QWORD))(v13 + 24))(
                   a2,
                   v17,
                   v12,
                   (unsigned int)(v12 * v11),
                   *((_QWORD *)this + 20));
        v7 = inited;
        if ( inited >= 0 )
          return v7;
        v16 = 515;
      }
      else
      {
        v16 = 496;
      }
    }
    else
    {
      v16 = 481;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, inited, v16);
  }
  else
  {
    v7 = -2147024809;
  }
LABEL_14:
  v14 = (void *)*((_QWORD *)this + 20);
  if ( v14 )
  {
    DefaultHeap::Free(v14);
    *((_QWORD *)this + 20) = 0LL;
  }
  return v7;
}
