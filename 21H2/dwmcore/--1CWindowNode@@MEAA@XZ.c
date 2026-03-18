/*
 * XREFs of ??1CWindowNode@@MEAA@XZ @ 0x180061494
 * Callers:
 *     ??_GCWindowNode@@MEAAPEAXI@Z @ 0x180061450 (--_GCWindowNode@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x180061544 (--$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z.c)
 *     ?DiscardFlipExSurfaces@CWindowNode@@AEAAXXZ @ 0x18006156C (-DiscardFlipExSurfaces@CWindowNode@@AEAAXXZ.c)
 *     ?DiscardGdiSpriteBitmaps@CWindowNode@@AEAAXXZ @ 0x1800615E8 (-DiscardGdiSpriteBitmaps@CWindowNode@@AEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?Clear@CPtrArrayBase@@IEAAXXZ @ 0x1800DE2D4 (-Clear@CPtrArrayBase@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CWindowNode::~CWindowNode(struct CResource **this)
{
  struct CResource *v2; // rcx

  *this = (struct CResource *)&CWindowNode::`vftable';
  CWindowNode::DiscardGdiSpriteBitmaps((CWindowNode *)this);
  CWindowNode::DiscardFlipExSurfaces((CWindowNode *)this);
  CResource::UnRegisterNotifierInternal((CResource *)this, this[102]);
  this[102] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[112]);
  this[112] = 0LL;
  v2 = this[113];
  if ( v2 )
    (**(void (__fastcall ***)(struct CResource *, __int64))v2)(v2, 1LL);
  ReleaseInterface<CProcessAttribution>(this + 93);
  CPtrArrayBase::Clear((CPtrArrayBase *)(this + 101));
  CPtrArrayBase::Clear((CPtrArrayBase *)(this + 100));
  CVisual::~CVisual((CVisual *)this);
}
