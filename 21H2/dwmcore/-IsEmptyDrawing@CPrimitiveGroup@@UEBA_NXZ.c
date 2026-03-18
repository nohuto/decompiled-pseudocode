/*
 * XREFs of ?IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ @ 0x1800B3470
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

char __fastcall CPrimitiveGroup::IsEmptyDrawing(CPrimitiveGroup *this)
{
  char v1; // dl

  if ( !*((_QWORD *)this + 62)
    || (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((char *)this + 108) )
  {
    return 1;
  }
  return v1;
}
