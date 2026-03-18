/*
 * XREFs of ??_ECComputeScribbleRenderer@@UEAAPEAXI@Z @ 0x1801A0D60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ??1CComputeScribbleRenderer@@UEAA@XZ @ 0x1801A0C70 (--1CComputeScribbleRenderer@@UEAA@XZ.c)
 */

CComputeScribbleRenderer *__fastcall CComputeScribbleRenderer::`vector deleting destructor'(
        CComputeScribbleRenderer *this,
        char a2)
{
  CComputeScribbleRenderer::~CComputeScribbleRenderer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
