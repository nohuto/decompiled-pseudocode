/*
 * XREFs of ??1CInteractionProcessor@@QEAA@XZ @ 0x1800DC548
 * Callers:
 *     ??1CInteraction@@MEAA@XZ @ 0x1800DBED4 (--1CInteraction@@MEAA@XZ.c)
 *     ??_GCInteractionRoot@@UEAAPEAXI@Z @ 0x180230CB0 (--_GCInteractionRoot@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180070A30 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C4C64 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1InteractionConfigurationGroup@@QEAA@XZ @ 0x1800DC5CC (--1InteractionConfigurationGroup@@QEAA@XZ.c)
 */

void __fastcall CInteractionProcessor::~CInteractionProcessor(CInteractionProcessor *this)
{
  InteractionConfigurationGroup::~InteractionConfigurationGroup((CInteractionProcessor *)((char *)this + 648));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 568);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 60);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 408);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 40);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 248);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 20);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 88);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this);
}
