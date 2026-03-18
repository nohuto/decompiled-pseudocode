/*
 * XREFs of ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x18007C61C
 * Callers:
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x18007C838 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x18007CDE0 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x18007D530 (-Release@CVisual@@UEAAKXZ.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x1800DBD48 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1801B183C (-DirtyForVisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 * Callees:
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18006FEEC (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C1234 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1802279CC (-QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 */

void __fastcall CVisual::NotifyMidManipulationUpdate(__int64 a1, unsigned int a2, __int64 a3)
{
  CComposition *v5; // rbx
  struct CManipulationManager *v6; // [rsp+40h] [rbp+18h] BYREF

  if ( (*(_BYTE *)(a3 + 94) & 1) != 0 )
  {
    v5 = *(CComposition **)(a1 + 16);
    v6 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v6);
    if ( (int)CComposition::GetManipulationManager(v5, &v6) >= 0 )
      CManipulationManager::QueueMidManipulationUpdate(v6, a2, a3);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v6);
  }
}
