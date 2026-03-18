/*
 * XREFs of ?HasNonEmptyContent@CVisual@@UEAA_NXZ @ 0x1800C9650
 * Callers:
 *     ?HasNonEmptyContent@CCursorVisual@@UEAA_NXZ @ 0x180211C60 (-HasNonEmptyContent@CCursorVisual@@UEAA_NXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x180194114 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 */

bool __fastcall CVisual::HasNonEmptyContent(CVisual *this)
{
  __int64 v2; // rcx
  bool result; // al
  _QWORD *ProjectedShadowReceivers; // rax

  v2 = *((_QWORD *)this + 32);
  result = 1;
  if ( !v2 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 192LL))(v2) )
  {
    if ( (**((_DWORD **)this + 29) & 0x20000) == 0 )
      return 0;
    ProjectedShadowReceivers = (_QWORD *)CVisual::GetProjectedShadowReceivers(this);
    if ( *ProjectedShadowReceivers == ProjectedShadowReceivers[1] )
      return 0;
  }
  return result;
}
