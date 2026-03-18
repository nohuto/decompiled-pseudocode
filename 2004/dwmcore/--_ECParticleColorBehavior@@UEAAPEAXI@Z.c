/*
 * XREFs of ??_ECParticleColorBehavior@@UEAAPEAXI@Z @ 0x18016EF20
 * Callers:
 *     ??_ECParticleColorBehavior@@WGI@EAAPEAXI@Z @ 0x1800EEEC0 (--_ECParticleColorBehavior@@WGI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800A40A8 (--1CResource@@MEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CParticleColorBehavior *__fastcall CParticleColorBehavior::`vector deleting destructor'(
        CParticleColorBehavior *this,
        char a2)
{
  void *v4; // rcx
  void *v5; // rcx

  v4 = (void *)*((_QWORD *)this + 14);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, 24 * ((*((_QWORD *)this + 16) - (_QWORD)v4) / 24LL));
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 10);
  if ( v5 )
  {
    std::_Deallocate<16,0>(v5, 24 * ((*((_QWORD *)this + 12) - (_QWORD)v5) / 24LL));
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
  }
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x88);
    else
      operator delete(this);
  }
  return this;
}
