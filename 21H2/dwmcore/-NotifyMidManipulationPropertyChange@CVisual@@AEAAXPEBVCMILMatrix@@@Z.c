/*
 * XREFs of ?NotifyMidManipulationPropertyChange@CVisual@@AEAAXPEBVCMILMatrix@@@Z @ 0x1800EF250
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009FA80 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18006D8F4 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1801000AC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x18017CDBC (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 */

void __fastcall CVisual::NotifyMidManipulationPropertyChange(CVisual *this, const struct CMILMatrix *a2)
{
  CComposition *v4; // rbx
  struct CManipulationManager *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *((char *)this + 101) < 0 )
  {
    v4 = (CComposition *)*((_QWORD *)this + 2);
    v5 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
    if ( (int)CComposition::GetManipulationManager(v4, &v5) >= 0 )
      CManipulationManager::NotifyVisualPropertyChange(v5, this, a2);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
  }
}
