/*
 * XREFs of ?HasNonEmptyContent@CWindowNode@@UEAA_NXZ @ 0x180062330
 * Callers:
 *     ?SetSpriteBitmap@CWindowNode@@AEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x180062144 (-SetSpriteBitmap@CWindowNode@@AEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 *     ?SetFlipExSurface@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x1802446E8 (-SetFlipExSurface@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x180194114 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 */

char __fastcall CWindowNode::HasNonEmptyContent(CWindowNode *this)
{
  __int64 v1; // rax
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *ProjectedShadowReceivers; // rax

  v1 = *((_QWORD *)this + 102);
  v3 = 1;
  if ( v1 && *(_BYTE *)(v1 + 168)
    || (*((_BYTE *)this + 914)
     || ((v4 = *((_QWORD *)this + 100), (v4 & 2) != 0)
       ? (v5 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCuLL))
       : (v5 = *((_QWORD *)this + 100) & 1LL),
         !v5))
    && ((v7 = *((_QWORD *)this + 101), (v7 & 2) != 0)
      ? (v8 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCuLL))
      : (v8 = *((_QWORD *)this + 101) & 1LL),
        !v8) )
  {
    v9 = *((_QWORD *)this + 32);
    if ( !v9 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 192LL))(v9) )
    {
      if ( (**((_DWORD **)this + 29) & 0x20000) == 0 )
        return 0;
      ProjectedShadowReceivers = (_QWORD *)CVisual::GetProjectedShadowReceivers(this);
      if ( *ProjectedShadowReceivers == ProjectedShadowReceivers[1] )
        return 0;
    }
  }
  return v3;
}
