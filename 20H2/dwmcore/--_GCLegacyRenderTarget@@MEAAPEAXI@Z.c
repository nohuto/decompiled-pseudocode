/*
 * XREFs of ??_GCLegacyRenderTarget@@MEAAPEAXI@Z @ 0x1800311D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CLegacyRenderTarget@@MEAA@XZ @ 0x1800329C8 (--1CLegacyRenderTarget@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CLegacyRenderTarget *__fastcall CLegacyRenderTarget::`scalar deleting destructor'(CLegacyRenderTarget *this, char a2)
{
  unsigned int v4; // r8d

  CLegacyRenderTarget::~CLegacyRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x48F8, v4);
    else
      operator delete(this);
  }
  return this;
}
