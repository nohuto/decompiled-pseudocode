/*
 * XREFs of ?RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x1801F8238
 * Callers:
 *     ?SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z @ 0x180235B10 (-SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180048C04 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x180194114 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 */

void __fastcall CVisual::RemoveProjectedShadowReceiver(CVisual *this, struct CProjectedShadowReceiver *a2)
{
  __int64 ProjectedShadowReceivers; // rdi
  __int64 v4; // r10
  char *v5; // r8
  char *i; // rcx

  if ( (**((_DWORD **)this + 29) & 0x20000) != 0 )
  {
    ProjectedShadowReceivers = CVisual::GetProjectedShadowReceivers((__int64)this);
    v5 = *(char **)(ProjectedShadowReceivers + 8);
    for ( i = *(char **)ProjectedShadowReceivers; i != v5; i += 8 )
    {
      if ( *(_QWORD *)i == v4 )
      {
        memmove_0(i, i + 8, v5 - (i + 8));
        *(_QWORD *)(ProjectedShadowReceivers + 8) -= 8LL;
        break;
      }
    }
    if ( !(*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)this + 256LL))(this) )
      CVisual::PropagateFlags((__int64)this, 5u);
  }
}
