/*
 * XREFs of ??_GCCompositionSpotLight@@UEAAPEAXI@Z @ 0x180017470
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCompositionLight@@UEAA@XZ @ 0x18002D714 (--1CCompositionLight@@UEAA@XZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034D4C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18009B990 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CCompositionSpotLight *__fastcall CCompositionSpotLight::`scalar deleting destructor'(
        CCompositionSpotLight *this,
        char a2)
{
  unsigned int v4; // r8d

  *(_QWORD *)this = &CCompositionSpotLight::`vftable'{for `CPropertyChangeResource'};
  *((_QWORD *)this + 9) = &CCompositionSpotLight::`vftable'{for `ISceneNotificationListener'};
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 31));
  *((_QWORD *)this + 31) = 0LL;
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 256);
  CCompositionLight::~CCompositionLight(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x190, v4);
    else
      operator delete(this);
  }
  return this;
}
