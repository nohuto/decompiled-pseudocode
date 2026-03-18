/*
 * XREFs of ??_ECRectangleEdgeSpawner@EmitterShapes@@UEAAPEAXI@Z @ 0x1801DFEA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 */

EmitterShapes::CRectangleEdgeSpawner *__fastcall EmitterShapes::CRectangleEdgeSpawner::`vector deleting destructor'(
        EmitterShapes::CRectangleEdgeSpawner *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
