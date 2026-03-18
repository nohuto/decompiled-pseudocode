/*
 * XREFs of ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x180086524
 * Callers:
 *     ?NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z @ 0x180084DC0 (-NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180048C04 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?DiscardOldestGdiSpriteBitmaps@CWindowNode@@AEAAX_K@Z @ 0x180061610 (-DiscardOldestGdiSpriteBitmaps@CWindowNode@@AEAAX_K@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180062474 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800D18A0 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 */

char __fastcall CWindowNode::ProcessReadyGdiSpriteBitmaps(CWindowNode *this)
{
  bool v1; // zf
  CPtrArrayBase *v3; // rcx
  unsigned __int64 Count; // rdx
  __int64 v5; // r10
  unsigned __int64 v6; // rax
  unsigned int v8; // edx

  v1 = *((_BYTE *)this + 914) == 0;
  v3 = (CWindowNode *)((char *)this + 800);
  if ( v1 )
  {
    Count = CPtrArrayBase::GetCount(v3);
    do
      v6 = Count--;
    while ( v6 && !*(_BYTE *)(CPtrArrayBase::operator[](v5, Count) + 140) );
  }
  else
  {
    Count = CPtrArrayBase::GetCount(v3) - 1;
  }
  if ( Count == -1LL || !Count && *((_BYTE *)this + 919) )
    return 0;
  *((_BYTE *)this + 919) = 1;
  CWindowNode::DiscardOldestGdiSpriteBitmaps(this, Count);
  if ( *((_BYTE *)this + 914) )
  {
    v8 = 8;
  }
  else if ( *((_BYTE *)this + 913) )
  {
    *((_BYTE *)this + 912) = 0;
    v8 = 5;
  }
  else
  {
    v8 = 4;
  }
  CVisual::PropagateFlags((__int64)this, v8);
  return 1;
}
