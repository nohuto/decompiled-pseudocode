/*
 * XREFs of ?IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z @ 0x180057FA8
 * Callers:
 *     ?GetRootTransform@CVisual@@QEBAXPEAVCMILMatrix@@@Z @ 0x180057E14 (-GetRootTransform@CVisual@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800748A0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x180176864 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x1800A2DD8 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800BD6F8 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVisual::IsSimple3DRootOrHasEffects(CVisual *this, const struct CVisual *a2)
{
  int v2; // r15d
  char v4; // bl
  bool v5; // si
  int Count; // r14d
  bool v7; // bp
  char v8; // al
  struct CEffect *EffectInternal; // rax

  v2 = *((_DWORD *)this + 25);
  v4 = 1;
  v5 = a2 && *((_DWORD *)a2 + 25) == 1;
  Count = CPtrArrayBase::GetCount((CVisual *)((char *)this + 72));
  v7 = 0;
  if ( (**((_DWORD **)this + 28) & 0x400000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal(this);
    if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
           EffectInternal,
           59LL) )
    {
      v7 = 1;
    }
  }
  v8 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 232LL))(this);
  if ( v2 != 1 )
  {
    if ( !v5 )
      return 0;
    if ( Count )
      return v4;
  }
  if ( !v5 || !v7 && !v8 )
    return 0;
  return v4;
}
