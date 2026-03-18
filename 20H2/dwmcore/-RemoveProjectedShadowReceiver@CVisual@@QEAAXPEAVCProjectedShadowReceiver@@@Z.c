/*
 * XREFs of ?RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x18000F118
 * Callers:
 *     ?SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z @ 0x18000E6BC (-SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x18000D954 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800AA3B8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     memmove_0 @ 0x1800EE9D7 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::RemoveProjectedShadowReceiver(CVisual *this, struct CProjectedShadowReceiver *a2)
{
  __int64 ProjectedShadowReceivers; // rdi
  __int64 v4; // r10
  char *v5; // r8
  char *i; // rcx

  if ( (**((_DWORD **)this + 28) & 0x20000) != 0 )
  {
    ProjectedShadowReceivers = CVisual::GetProjectedShadowReceivers((__int64)this);
    v5 = *(char **)(ProjectedShadowReceivers + 8);
    for ( i = *(char **)ProjectedShadowReceivers; i != v5 && *(_QWORD *)i != v4; i += 8 )
      ;
    if ( i != v5 )
    {
      memmove_0(i, i + 8, v5 - (i + 8));
      *(_QWORD *)(ProjectedShadowReceivers + 8) -= 8LL;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)this + 280LL))(this) )
      CVisual::PropagateFlags(this, 5LL);
  }
}
