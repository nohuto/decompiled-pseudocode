/*
 * XREFs of ?AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x18000F1A4
 * Callers:
 *     ?SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z @ 0x18000E6BC (-SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x18000D954 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     ?SetProjectedShadowReceivers@CVisual@@QEAAXPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@@Z @ 0x180010A78 (-SetProjectedShadowReceivers@CVisual@@QEAAXPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocat.c)
 *     ??$_Emplace_reallocate@AEBQEAUObserver@CProcessAttributionManager@@@?$vector@PEAUObserver@CProcessAttributionManager@@V?$allocator@PEAUObserver@CProcessAttributionManager@@@std@@@std@@QEAAPEAPEAUObserver@CProcessAttributionManager@@QEAPEAU23@AEBQEAU23@@Z @ 0x18001B868 (--$_Emplace_reallocate@AEBQEAUObserver@CProcessAttributionManager@@@-$vector@PEAUObserver@CProce.c)
 *     ??2@YAPEAX_K@Z @ 0x18006D9A8 (--2@YAPEAX_K@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800AA3B8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::AddProjectedShadowReceiver(CVisual *this, struct CProjectedShadowReceiver *a2)
{
  _QWORD *v4; // rax
  __int64 ProjectedShadowReceivers; // rdi
  char v6; // al
  _QWORD *v7; // rdx
  bool v8; // bp
  struct CProjectedShadowReceiver *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  if ( (**((_DWORD **)this + 28) & 0x20000) == 0 )
  {
    v4 = operator new(0x18uLL);
    if ( v4 )
    {
      *v4 = 0LL;
      v4[1] = 0LL;
      v4[2] = 0LL;
    }
    CVisual::SetProjectedShadowReceivers(this, v4);
  }
  ProjectedShadowReceivers = CVisual::GetProjectedShadowReceivers((__int64)this);
  v6 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 280LL))(this);
  v7 = *(_QWORD **)(ProjectedShadowReceivers + 8);
  v8 = v6 == 0;
  if ( *(_QWORD **)(ProjectedShadowReceivers + 16) == v7 )
  {
    std::vector<CProcessAttributionManager::Observer *>::_Emplace_reallocate<CProcessAttributionManager::Observer * const &>(
      ProjectedShadowReceivers,
      v7,
      &v9);
  }
  else
  {
    *v7 = a2;
    *(_QWORD *)(ProjectedShadowReceivers + 8) += 8LL;
  }
  if ( v8 )
    CVisual::PropagateFlags(this, 5LL);
}
