/*
 * XREFs of ??_GCD3DDevice@@MEAAPEAXI@Z @ 0x180036FC0
 * Callers:
 *     ??_ECD3DDevice@@OBA@EAAPEAXI@Z @ 0x1800F11C0 (--_ECD3DDevice@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CD3DDevice@@MEAA@XZ @ 0x180037080 (--1CD3DDevice@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CD3DDevice *__fastcall CD3DDevice::`scalar deleting destructor'(CD3DDevice *this, char a2)
{
  unsigned int v4; // r8d

  CD3DDevice::~CD3DDevice(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x8C0, v4);
    else
      operator delete(this);
  }
  return this;
}
