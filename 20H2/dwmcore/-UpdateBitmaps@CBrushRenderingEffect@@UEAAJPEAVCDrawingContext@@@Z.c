/*
 * XREFs of ?UpdateBitmaps@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z @ 0x180060B50
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordBitmapRealizationInfo@CDrawingContext@@QEAAXPEAVIBitmapRealization@@@Z @ 0x180060C64 (-RecordBitmapRealizationInfo@CDrawingContext@@QEAAXPEAVIBitmapRealization@@@Z.c)
 *     ?GetCurrentRealization@CDrawListBitmap@@IEBAJPEAPEAVIBitmapRealization@@@Z @ 0x180060D78 (-GetCurrentRealization@CDrawListBitmap@@IEBAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?EnsureDeviceResource@CDrawListBitmap@@QEBAJPEBVCDrawingContext@@@Z @ 0x180061030 (-EnsureDeviceResource@CDrawListBitmap@@QEBAJPEBVCDrawingContext@@@Z.c)
 *     ?RecordBitmapResourceInfo@CDrawingContext@@QEAAXPEAVIBitmapResource@@@Z @ 0x180063500 (-RecordBitmapResourceInfo@CDrawingContext@@QEAAXPEAVIBitmapResource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingEffect::UpdateBitmaps(CBrushRenderingEffect *this, struct CDrawingContext *a2)
{
  unsigned int v2; // edi
  __int64 v3; // rbp
  unsigned int v6; // r15d
  char *i; // rbx
  struct IBitmapResource *v8; // rdx
  char *v9; // rcx
  int v10; // eax
  unsigned int v11; // ecx
  struct IBitmapRealization *v13; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 0LL;
  v6 = *(_DWORD *)(*((_QWORD *)this + 2) + 60LL);
  if ( v6 )
  {
    for ( i = (char *)this + 24; ; i += 48 )
    {
      if ( *(_QWORD *)i || *((_QWORD *)i + 1) )
      {
        v8 = *(struct IBitmapResource **)i;
        *((_OWORD *)i + 1) = *(_OWORD *)((char *)a2 + 56);
        *((_QWORD *)i + 4) = *((_QWORD *)a2 + 9);
        if ( v8 )
          CDrawingContext::RecordBitmapResourceInfo(a2, v8);
        v13 = 0LL;
        if ( (int)CDrawListBitmap::GetCurrentRealization((CDrawListBitmap *)i, &v13) >= 0 )
          CDrawingContext::RecordBitmapRealizationInfo(a2, v13);
        if ( v13 )
        {
          v9 = (char *)v13 + *(int *)(*((_QWORD *)v13 + 1) + 4LL) + 8;
          (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 16LL))(v9);
        }
        v10 = CDrawListBitmap::EnsureDeviceResource((CBrushRenderingEffect *)((char *)this + 48 * v3 + 24), a2);
        v2 = v10;
        if ( v10 < 0 )
          break;
      }
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= v6 )
        return v2;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xE3u, 0LL);
  }
  return v2;
}
