/*
 * XREFs of ?HasNonEmptyContent@CWindowNode@@UEAA_NXZ @ 0x1800B79F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x18000A64C (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CWindowNode::HasNonEmptyContent(CWindowNode *this)
{
  __int64 v1; // rax
  char v2; // bl
  __int64 v4; // rcx
  _QWORD *ProjectedShadowReceivers; // rax

  v1 = *((_QWORD *)this + 97);
  v2 = 0;
  if ( (!v1 || !*(_BYTE *)(v1 + 160))
    && (!*((_BYTE *)this + 914) && (*((_QWORD *)this + 90) || *((_DWORD *)this + 188))
     || *((_QWORD *)this + 108)
     || *((_DWORD *)this + 224)) )
  {
    return 1;
  }
  v4 = *((_QWORD *)this + 31);
  if ( v4 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 208LL))(v4) )
      return 1;
  }
  if ( (**((_DWORD **)this + 28) & 0x20000) != 0 )
  {
    ProjectedShadowReceivers = (_QWORD *)CVisual::GetProjectedShadowReceivers((__int64)this);
    if ( *ProjectedShadowReceivers != ProjectedShadowReceivers[1] )
      return 1;
  }
  return v2;
}
