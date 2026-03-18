/*
 * XREFs of ??_ECComputeScribbleRenderer@@UEAAPEAXI@Z @ 0x18019EF70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ??1CComputeScribbleRenderer@@UEAA@XZ @ 0x18019EE80 (--1CComputeScribbleRenderer@@UEAA@XZ.c)
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
