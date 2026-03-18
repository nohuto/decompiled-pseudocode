/*
 * XREFs of ??_GCComputeScribbleRenderer@@EEAAPEAXI@Z @ 0x1801E42E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     ??1CComputeScribbleRenderer@@EEAA@XZ @ 0x1801E4238 (--1CComputeScribbleRenderer@@EEAA@XZ.c)
 */

CComputeScribbleRenderer *__fastcall CComputeScribbleRenderer::`scalar deleting destructor'(
        CComputeScribbleRenderer *this,
        char a2)
{
  CComputeScribbleRenderer::~CComputeScribbleRenderer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
