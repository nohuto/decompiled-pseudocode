/*
 * XREFs of ?HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ @ 0x1800B4A20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x18000D954 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     ?GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ @ 0x1800B4A9C (-GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CSpriteVisual::HasNonEmptyContent(CSpriteVisual *this)
{
  __int64 v2; // rcx
  bool result; // al
  int v4; // r10d
  struct CDropShadow *DropShadow; // rax
  _QWORD *ProjectedShadowReceivers; // rax

  v2 = *((_QWORD *)this + 31);
  result = 1;
  if ( !v2 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 208LL))(v2) )
  {
    v4 = **((_DWORD **)this + 28);
    if ( (v4 & 0x20000) == 0
      || (ProjectedShadowReceivers = (_QWORD *)CVisual::GetProjectedShadowReceivers((__int64)this),
          *ProjectedShadowReceivers == ProjectedShadowReceivers[1]) )
    {
      if ( (v4 & 0x10000) == 0 )
        return 0;
      DropShadow = CSpriteVisual::GetDropShadow(this);
      if ( (*(unsigned __int8 (__fastcall **)(struct CDropShadow *))(*(_QWORD *)DropShadow + 208LL))(DropShadow) )
        return 0;
    }
  }
  return result;
}
