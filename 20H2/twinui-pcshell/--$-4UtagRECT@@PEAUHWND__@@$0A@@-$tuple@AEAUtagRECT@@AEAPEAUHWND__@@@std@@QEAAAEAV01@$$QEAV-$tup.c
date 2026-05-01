/*
 * XREFs of ??$?4UtagRECT@@PEAUHWND__@@$0A@@?$tuple@AEAUtagRECT@@AEAPEAUHWND__@@@std@@QEAAAEAV01@$$QEAV?$tuple@UtagRECT@@PEAUHWND__@@@1@@Z @ 0x18046057C
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$2 @ 0x1800C3150 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800C3150.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::tuple<tagRECT &,HWND__ * &>::operator=<tagRECT,HWND__ *,0>(__int64 a1, __int64 a2)
{
  *(_OWORD *)*(_QWORD *)(a1 + 8) = *(_OWORD *)(a2 + 8);
  **(_QWORD **)a1 = *(_QWORD *)a2;
  return a1;
}
