/*
 * XREFs of ?GetOpacity@CDrawingContext@@QEBAMXZ @ 0x1800E67E8
 * Callers:
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x180175824 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
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
