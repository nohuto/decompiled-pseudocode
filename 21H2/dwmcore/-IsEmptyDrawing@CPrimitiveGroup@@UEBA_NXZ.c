/*
 * XREFs of ?IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ @ 0x1800C47C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CPrimitiveGroup::IsEmptyDrawing(CPrimitiveGroup *this)
{
  char result; // al

  result = 0;
  if ( !*((_QWORD *)this + 67)
    || *((float *)this + 27) <= *((float *)this + 25)
    || *((float *)this + 28) <= *((float *)this + 26) )
  {
    return 1;
  }
  return result;
}
