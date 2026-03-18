/*
 * XREFs of ??_GCBrushRenderingGraph@@EEAAPEAXI@Z @ 0x180055C80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ??1CBrushRenderingGraph@@EEAA@XZ @ 0x180056D64 (--1CBrushRenderingGraph@@EEAA@XZ.c)
 */

CBrushRenderingGraph *__fastcall CBrushRenderingGraph::`scalar deleting destructor'(
        CBrushRenderingGraph *this,
        char a2)
{
  CBrushRenderingGraph::~CBrushRenderingGraph(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
