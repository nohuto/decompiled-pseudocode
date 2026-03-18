/*
 * XREFs of ?UpdateBitmaps@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801A6650
 * Callers:
 *     ?Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1801A6480 (-Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureDeviceResource@CDrawListBitmap@@QEBAJPEBVCDrawingContext@@@Z @ 0x18004A720 (-EnsureDeviceResource@CDrawListBitmap@@QEBAJPEBVCDrawingContext@@@Z.c)
 *     ?RecordContentInfo@CDrawListBitmap@@QEBAXPEAVCDrawingContext@@@Z @ 0x180071A70 (-RecordContentInfo@CDrawListBitmap@@QEBAXPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CWARPDrawListEntry::UpdateBitmaps(CWARPDrawListEntry *this, struct CDrawingContext *a2)
{
  unsigned int v2; // ebx
  CDrawListBitmap *v3; // rdi
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx

  v2 = 0;
  v3 = (CWARPDrawListEntry *)((char *)this + 240);
  if ( *((_OWORD *)this + 15) == 0LL
    || (CDrawListBitmap::RecordContentInfo(v3, a2), v6 = CDrawListBitmap::EnsureDeviceResource(v3, a2), v2 = v6, v6 >= 0) )
  {
    if ( *((_QWORD *)this + 43) || *((_QWORD *)this + 44) )
    {
      CDrawListBitmap::RecordContentInfo((CWARPDrawListEntry *)((char *)this + 344), a2);
      v8 = CDrawListBitmap::EnsureDeviceResource((CWARPDrawListEntry *)((char *)this + 344), a2);
      v2 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x188u, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x182u, 0LL);
  }
  return v2;
}
