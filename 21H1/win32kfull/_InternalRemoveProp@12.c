/*
 * XREFs of _InternalRemoveProp@12 @ 0xB50F2
 * Callers:
 *     ?SetRedirectionBitmap@@YGHPAUtagWND@@QAUHBITMAP__@@H@Z @ 0x20C0E (-SetRedirectionBitmap@@YGHPAUtagWND@@QAUHBITMAP__@@H@Z.c)
 *     _xxxInheritWindowMonitor@12 @ 0x26E0E (_xxxInheritWindowMonitor@12.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     ?DetachInputQueueFromWindow@@YGXPAUtagWND@@PAVIInputQueue@@@Z @ 0xA9AA0 (-DetachInputQueueFromWindow@@YGXPAUtagWND@@PAVIInputQueue@@@Z.c)
 *     ?_AttachWindowCompositionTarget@@YGJPAUtagWND@@HPAUCompositionObject@@@Z @ 0xB2A44 (-_AttachWindowCompositionTarget@@YGJPAUtagWND@@HPAUCompositionObject@@@Z.c)
 *     ?AttachInputQueueToWindow@@YGJPAUtagWND@@PAVIInputQueue@@@Z @ 0xB3874 (-AttachInputQueueToWindow@@YGJPAUtagWND@@PAVIInputQueue@@@Z.c)
 *     __SetTargetingWindowValue@8 @ 0xB3A30 (__SetTargetingWindowValue@8.c)
 *     ?SetProp@CWindowProp@@QAEHPAUtagWND@@@Z @ 0xB4F1C (-SetProp@CWindowProp@@QAEHPAUtagWND@@@Z.c)
 *     ?_DetachWindowCompositionTarget@@YGHPAUtagWND@@H@Z @ 0xB522A (-_DetachWindowCompositionTarget@@YGHPAUtagWND@@H@Z.c)
 *     ?_GhostWindow@@YGHPAUtagWND@@@Z @ 0xC1FAA (-_GhostWindow@@YGHPAUtagWND@@@Z.c)
 *     _xxxRegisterGhostWindow@8 @ 0xC20E8 (_xxxRegisterGhostWindow@8.c)
 *     ??$RemoveProp@VCSwapChainProp@@@CWindowProp@@SGHPAUtagWND@@PAPAVCSwapChainProp@@@Z @ 0xC2DFC (--$RemoveProp@VCSwapChainProp@@@CWindowProp@@SGHPAUtagWND@@PAPAVCSwapChainProp@@@Z.c)
 *     _xxxFlashWindow@12 @ 0xCA4EE (_xxxFlashWindow@12.c)
 *     _NtUserShutdownBlockReasonCreate@12 @ 0xD33A8 (_NtUserShutdownBlockReasonCreate@12.c)
 *     _NtUserShutdownReasonDestroy@4 @ 0xD3EBE (_NtUserShutdownReasonDestroy@4.c)
 *     __SetTouchWindowFlags@8 @ 0x14A05E (__SetTouchWindowFlags@8.c)
 *     _UserAssociateHwnd@8 @ 0x154249 (_UserAssociateHwnd@8.c)
 *     ?DDEImpDecRefInitWorker@@YGXPAUHWND__@@@Z @ 0x15EDF2 (-DDEImpDecRefInitWorker@@YGXPAUHWND__@@@Z.c)
 *     _xxxDestroyCorrespondingGhostWindow@4 @ 0x170530 (_xxxDestroyCorrespondingGhostWindow@4.c)
 *     _xxxHandleDestroyGhostWindow@4 @ 0x170727 (_xxxHandleDestroyGhostWindow@4.c)
 *     _xxxRegisterSiblingFrostWindow@8 @ 0x1708E7 (_xxxRegisterSiblingFrostWindow@8.c)
 *     ?UnlinkConv@@YGPAUtagDDECONV@@PAU1@@Z @ 0x17ECA6 (-UnlinkConv@@YGPAUtagDDECONV@@PAU1@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QAEXXZ @ 0x19C226 (-RemoveAndDeleteProp@CWindowProp@@QAEXXZ.c)
 *     _SetDisplayAffinity@8 @ 0x1A5988 (_SetDisplayAffinity@8.c)
 * Callees:
 *     <none>
 */

int __fastcall InternalRemoveProp(int a1, __int16 a2, int a3)
{
  int v3; // esi

  v3 = *(_DWORD *)(a1 + 80);
  if ( a2 == word_273898 )
    *(_DWORD *)(*(_DWORD *)(a1 + 20) + 200) = 0;
  return RealInternalRemoveProp(v3, a2, a3);
}
