/*
 * XREFs of ?IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z @ 0x18004C0DC
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004B660 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180090300 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18004D434 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180062474 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CVisual::IsPreserve3DRoot(CVisual *this, const struct CVisual *a2)
{
  int v2; // ebp
  char v4; // bl
  bool v5; // si
  bool v6; // al
  struct CEffect *EffectInternal; // rax

  v2 = *((_DWORD *)this + 27);
  v4 = 1;
  v5 = a2 && *((_DWORD *)a2 + 27) == 1;
  v6 = 1;
  if ( !(*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 216LL))(this) )
  {
    if ( (**((_DWORD **)this + 29) & 0x400000) == 0
      || (EffectInternal = CVisual::GetEffectInternal(this),
          !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
             EffectInternal,
             59LL)) )
    {
      v6 = 0;
    }
  }
  if ( v2 != 1 )
    return 0;
  if ( v5 ? !v6 : (unsigned int)CPtrArrayBase::GetCount((CVisual *)((char *)this + 80)) == 0 )
    return 0;
  return v4;
}
