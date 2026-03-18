/*
 * XREFs of ?SetColorProperty@CColorBrush@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180093A30
 * Callers:
 *     <none>
 * Callees:
 *     ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180095F4C (-ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180096450 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorBrush::SetColorProperty(
        CColorBrush *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  if ( CResource::ModifyProperty(this, a2, a3) )
  {
    CResource::InvalidateAnimationSources(this, *(_DWORD *)a2);
    (*(void (__fastcall **)(CColorBrush *, __int64, CColorBrush *))(*(_QWORD *)this + 72LL))(this, 6LL, this);
  }
  return 0LL;
}
