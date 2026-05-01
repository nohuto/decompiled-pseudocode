/*
 * XREFs of ??$?4PEAUHWND__@@UtagRECT@@$0A@@?$tuple@AEAPEAUHWND__@@AEAUtagRECT@@@std@@QEAAAEAV01@$$QEAV?$tuple@PEAUHWND__@@UtagRECT@@@1@@Z @ 0x18046055C
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$2 @ 0x1800C3150 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800C3150.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::tuple<HWND__ * &,tagRECT &>::operator=<HWND__ *,tagRECT,0>(__int64 a1, __int64 a2)
{
  **(_QWORD **)(a1 + 8) = *(_QWORD *)(a2 + 16);
  *(_OWORD *)*(_QWORD *)a1 = *(_OWORD *)a2;
  return a1;
}
