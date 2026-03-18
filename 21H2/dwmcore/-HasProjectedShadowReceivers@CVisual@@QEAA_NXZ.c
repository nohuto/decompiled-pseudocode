/*
 * XREFs of ?HasProjectedShadowReceivers@CVisual@@QEAA_NXZ @ 0x1800CBC68
 * Callers:
 *     ?HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ @ 0x1800CBBD0 (-HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ.c)
 * Callees:
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x180194114 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 */

bool __fastcall CVisual::HasProjectedShadowReceivers(CVisual *this)
{
  bool result; // al
  _QWORD *ProjectedShadowReceivers; // rax

  result = 0;
  if ( (**((_DWORD **)this + 29) & 0x20000) != 0 )
  {
    ProjectedShadowReceivers = (_QWORD *)CVisual::GetProjectedShadowReceivers(this);
    if ( *ProjectedShadowReceivers != ProjectedShadowReceivers[1] )
      return 1;
  }
  return result;
}
