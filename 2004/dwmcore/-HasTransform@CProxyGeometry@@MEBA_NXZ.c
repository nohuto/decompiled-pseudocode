/*
 * XREFs of ?HasTransform@CProxyGeometry@@MEBA_NXZ @ 0x180170920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CProxyGeometry::HasTransform(CProxyGeometry *this)
{
  char result; // al

  result = 0;
  if ( *((_QWORD *)this + 9) || *((_QWORD *)this + 18) )
    return 1;
  return result;
}
