/*
 * XREFs of ??$tie@UtagRECT@@PEAUHWND__@@@std@@YA?AV?$tuple@AEAUtagRECT@@AEAPEAUHWND__@@@0@AEAUtagRECT@@AEAPEAUHWND__@@@Z @ 0x18043E0C0
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$2 @ 0x1800AE890 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800AE890.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::tie<tagRECT,HWND__ *>(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax

  *a1 = a3;
  result = a1;
  a1[1] = a2;
  return result;
}
