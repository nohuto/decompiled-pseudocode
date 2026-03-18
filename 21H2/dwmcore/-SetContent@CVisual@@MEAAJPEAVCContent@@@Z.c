/*
 * XREFs of ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x1800471B0
 * Callers:
 *     ?EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z @ 0x180041F7C (-EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z.c)
 *     ?ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETBRUSH@@@Z @ 0x180044710 (-ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETBRUSH@@@Z.c)
 *     ?SetSuperWetInkSource@?$CSuperWetInkVisualGeneratedT@VCSuperWetInkVisual@@VCVisual@@@@QEAAJPEAVCSynchronousSuperWetInk@@@Z @ 0x1801A5854 (-SetSuperWetInkSource@-$CSuperWetInkVisualGeneratedT@VCSuperWetInkVisual@@VCVisual@@@@QEAAJPEAVC.c)
 *     ?OnRootChanged@CSceneVisual@@QEAAJXZ @ 0x180202608 (-OnRootChanged@CSceneVisual@@QEAAJXZ.c)
 *     ??0CParticleEmitterVisual@@QEAA@PEAVCComposition@@@Z @ 0x18022D114 (--0CParticleEmitterVisual@@QEAA@PEAVCComposition@@@Z.c)
 *     ?SetContent@CParticleEmitterVisual@@MEAAJPEAVCContent@@@Z @ 0x18022FD30 (-SetContent@CParticleEmitterVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?SetContent@CSpriteVisual@@MEAAJPEAVCContent@@@Z @ 0x18023FD20 (-SetContent@CSpriteVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?Initialize@CTextVisual@@MEAAJXZ @ 0x1802428E0 (-Initialize@CTextVisual@@MEAAJXZ.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180046EF0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180048C04 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18008C294 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?UpdateContentFlags@CVisual@@AEAAXXZ @ 0x18008C488 (-UpdateContentFlags@CVisual@@AEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RegisterSuperWetInkVisual@CSuperWetInkManager@@QEAAXPEAVCVisual@@@Z @ 0x1801A7EE8 (-RegisterSuperWetInkVisual@CSuperWetInkManager@@QEAAXPEAVCVisual@@@Z.c)
 *     ?UnregisterSuperWetInkVisual@CSuperWetInkManager@@QEAAXPEAVCVisual@@@Z @ 0x1801A8DEC (-UnregisterSuperWetInkVisual@CSuperWetInkManager@@QEAAXPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CVisual::SetContent(struct CResource **this, struct CContent *a2)
{
  unsigned int v2; // esi
  struct CResource *v5; // rcx
  int v6; // eax
  unsigned int v7; // ecx

  v2 = 0;
  if ( a2 != this[32] )
  {
    CVisual::ClearContentTreeDataCaches((CVisual *)this);
    v5 = this[32];
    if ( v5 && (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v5 + 56LL))(v5, 181LL) )
      CSuperWetInkManager::UnregisterSuperWetInkVisual(
        *((CSuperWetInkManager **)g_pComposition + 32),
        (struct CVisual *)this);
    v6 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x1FEu, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[32]);
      this[32] = a2;
      if ( a2 && (*(unsigned __int8 (__fastcall **)(struct CContent *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 181LL) )
        CSuperWetInkManager::RegisterSuperWetInkVisual(
          *((CSuperWetInkManager **)g_pComposition + 32),
          (struct CVisual *)this);
      CVisual::UpdateContentFlags((CVisual *)this);
      CVisual::PropagateFlags(this, 21LL);
    }
  }
  return v2;
}
