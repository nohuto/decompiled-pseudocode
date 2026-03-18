/*
 * XREFs of ??_ECSpatialRemarshaler@@UEAAPEAXI@Z @ 0x1801F0670
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x18007E868 (--1CResource@@MEAA@XZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CSpatialRemarshaler *__fastcall CSpatialRemarshaler::`vector deleting destructor'(CSpatialRemarshaler *this, char a2)
{
  *((_QWORD *)this + 8) = &CSpatialRemarshaler::`vftable'{for `ISceneNotificationListener'};
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x48);
    else
      operator delete(this);
  }
  return this;
}
