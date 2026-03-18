/*
 * XREFs of ??_ECCompositionPointLight@@UEAAPEAXI@Z @ 0x1801BED00
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCompositionLight@@UEAA@XZ @ 0x180025C94 (--1CCompositionLight@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008C000 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CCompositionPointLight *__fastcall CCompositionPointLight::`vector deleting destructor'(
        CCompositionPointLight *this,
        char a2)
{
  *(_QWORD *)this = &CCompositionPointLight::`vftable'{for `CPropertyChangeResource'};
  *((_QWORD *)this + 9) = &CCompositionEnvironmentLight::`vftable'{for `ISceneNotificationListener'};
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 31));
  *((_QWORD *)this + 31) = 0LL;
  CCompositionLight::~CCompositionLight(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x138);
    else
      operator delete(this);
  }
  return this;
}
