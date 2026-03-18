/*
 * XREFs of ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18007B660
 * Callers:
 *     ?ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETBRUSH@@@Z @ 0x1800C2E28 (-ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETBRUSH@@@Z.c)
 *     ?SetSuperWetInkSource@?$CSuperWetInkVisualGeneratedT@VCSuperWetInkVisual@@VCVisual@@@@QEAAJPEAVCSynchronousSuperWetInk@@@Z @ 0x18017784C (-SetSuperWetInkSource@-$CSuperWetInkVisualGeneratedT@VCSuperWetInkVisual@@VCVisual@@@@QEAAJPEAVC.c)
 *     ??0CParticleEmitterVisual@@QEAA@PEAVCComposition@@@Z @ 0x1801E1E30 (--0CParticleEmitterVisual@@QEAA@PEAVCComposition@@@Z.c)
 *     ?SetContent@CParticleEmitterVisual@@MEAAJPEAVCContent@@@Z @ 0x1801E4B40 (-SetContent@CParticleEmitterVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?OnRootChanged@CSceneVisual@@QEAAJXZ @ 0x1801EFF88 (-OnRootChanged@CSceneVisual@@QEAAJXZ.c)
 *     ?EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z @ 0x1801F01B0 (-EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z.c)
 *     ?SetContent@CSpriteVisual@@MEAAJPEAVCContent@@@Z @ 0x1801F1A70 (-SetContent@CSpriteVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?Initialize@CTextVisual@@MEAAJXZ @ 0x1801F4C70 (-Initialize@CTextVisual@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x180045CA0 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007B22C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x18007B4B8 (-UpdateBackdropBlurFlag@CVisual@@AEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18007CF48 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008C000 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetContent(struct CResource **this, struct CContent *a2)
{
  unsigned int v2; // edi
  int v5; // eax
  __int64 v6; // rcx
  struct CResource *v7; // rcx
  char v8; // al

  v2 = 0;
  if ( a2 != this[31] )
  {
    CVisual::ClearContentTreeDataCaches((CVisual *)this);
    v5 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x20Au, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[31]);
      v7 = *this;
      this[31] = a2;
      v8 = (*((__int64 (__fastcall **)(struct CResource **))v7 + 45))(this);
      *((_BYTE *)this + 92) &= ~1u;
      *((_BYTE *)this + 92) |= v8 & 1;
      CVisual::UpdateBackdropBlurFlag(this);
      CVisual::PropagateFlags(this, 21LL);
    }
  }
  return v2;
}
