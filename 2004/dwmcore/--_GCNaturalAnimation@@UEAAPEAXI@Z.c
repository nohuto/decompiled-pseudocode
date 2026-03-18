/*
 * XREFs of ??_GCNaturalAnimation@@UEAAPEAXI@Z @ 0x18016EDB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ??1CBaseExpression@@UEAA@XZ @ 0x18009B384 (--1CBaseExpression@@UEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D0844 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

CNaturalAnimation *__fastcall CNaturalAnimation::`scalar deleting destructor'(CNaturalAnimation *this, char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &CNaturalAnimation::`vftable';
  v4 = *((_QWORD *)this + 53);
  if ( v4 )
  {
    *((_QWORD *)this + 53) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 52);
  CBaseExpression::~CBaseExpression(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x238);
    else
      operator delete(this);
  }
  return this;
}
