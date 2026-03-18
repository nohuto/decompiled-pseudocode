/*
 * XREFs of ??_GCBrushRenderingGraph@@EEAAPEAXI@Z @ 0x1800B7030
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ??1CBrushRenderingGraph@@EEAA@XZ @ 0x1800B7A04 (--1CBrushRenderingGraph@@EEAA@XZ.c)
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
