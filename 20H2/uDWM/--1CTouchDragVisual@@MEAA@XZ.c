/*
 * XREFs of ??1CTouchDragVisual@@MEAA@XZ @ 0x1800A38D4
 * Callers:
 *     ??_GCTouchDragVisual@@MEAAPEAXI@Z @ 0x1800A39B0 (--_GCTouchDragVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800270B8 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x1800A42A0 (-Stop@CTouchDragVisual@@UEAAXXZ.c)
 */

void __fastcall CTouchDragVisual::~CTouchDragVisual(CBaseObject **this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  *this = (CBaseObject *)&CTouchDragVisual::`vftable';
  CTouchDragVisual::Stop((CTouchDragVisual *)this);
  v2 = this[48];
  if ( v2 )
  {
    CBaseObject::Release(v2);
    this[48] = 0LL;
  }
  v3 = this[53];
  if ( v3 )
  {
    CBaseObject::Release(v3);
    this[53] = 0LL;
  }
  v4 = this[54];
  if ( v4 )
  {
    CBaseObject::Release(v4);
    this[54] = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 44);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 40);
  *this = (CBaseObject *)&CTouchVisual::`vftable';
  CRenderDataVisual::~CRenderDataVisual(this);
}
