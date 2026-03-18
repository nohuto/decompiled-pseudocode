/*
 * XREFs of ??_ECComputeScribbleFramebuffer@@UEAAPEAXI@Z @ 0x1801A5700
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ??1CComputeScribbleFramebuffer@@UEAA@XZ @ 0x1801A5634 (--1CComputeScribbleFramebuffer@@UEAA@XZ.c)
 */

CComputeScribbleFramebuffer *__fastcall CComputeScribbleFramebuffer::`vector deleting destructor'(
        CComputeScribbleFramebuffer *this,
        char a2)
{
  CComputeScribbleFramebuffer::~CComputeScribbleFramebuffer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
