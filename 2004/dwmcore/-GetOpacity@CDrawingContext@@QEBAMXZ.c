/*
 * XREFs of ?GetOpacity@CDrawingContext@@QEBAMXZ @ 0x1800E5E04
 * Callers:
 *     ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBVMILMatrix3x2@@@Z @ 0x18004F084 (-FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV-$span@$$CBUMil.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1801774F4 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CDrawingContext::GetOpacity(CDrawingContext *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 808);
  if ( v1 )
    return *(float *)(*((_QWORD *)this + 406) + 4LL * (unsigned int)(v1 - 1));
  else
    return *(float *)&FLOAT_1_0;
}
