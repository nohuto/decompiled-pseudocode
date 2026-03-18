/*
 * XREFs of ??_ECCompositionSurfaceInfo@@MEAAPEAXI@Z @ 0x1801F9A20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ??1CCompositionSurfaceInfo@@MEAA@XZ @ 0x180097880 (--1CCompositionSurfaceInfo@@MEAA@XZ.c)
 */

CCompositionSurfaceInfo *__fastcall CCompositionSurfaceInfo::`vector deleting destructor'(
        CCompositionSurfaceInfo *this,
        char a2)
{
  CCompositionSurfaceInfo::~CCompositionSurfaceInfo(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
