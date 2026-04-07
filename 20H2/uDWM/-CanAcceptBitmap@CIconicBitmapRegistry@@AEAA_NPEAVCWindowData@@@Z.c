/*
 * XREFs of ?CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z @ 0x180044D40
 * Callers:
 *     ?InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z @ 0x18000721C (-InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z.c)
 *     ?RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresentationType@@@Z @ 0x180044A98 (-RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresen.c)
 *     ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x180088D38 (-BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z.c)
 * Callees:
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x180055CAC (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 */

char __fastcall CIconicBitmapRegistry::CanAcceptBitmap(CIconicBitmapRegistry *this, struct CWindowData *a2)
{
  char v2; // al
  char v3; // bl

  v2 = *((_BYTE *)a2 + 610);
  v3 = 0;
  if ( (v2 & 4) != 0
    && (*((_QWORD *)a2 + 47)
     || (v2 & 0x10) != 0
     || (unsigned int)(*((_DWORD *)this + 20) + *((_DWORD *)this + 21)) < *((_DWORD *)this + 2)
     || IsWindowTab(a2)) )
  {
    return 1;
  }
  return v3;
}
