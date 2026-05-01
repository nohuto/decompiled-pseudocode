/*
 * XREFs of _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$2_::_1_::catch$141 @ 0x1800C557D
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18008DA74 (_CxxThrowException_0.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x18019F40C (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ??$FailureTrace@AEAY0BE@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0BE@$$CBD$$QEAJ@Z @ 0x1804606DC (--$FailureTrace@AEAY0BE@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0BE@$$CBD$$QEAJ@Z.c)
 */

void __fastcall __noreturn winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop__ResumeCoro_2_::_1_::catch_141(
        wil *a1,
        __int64 a2)
{
  int v3; // eax

  v3 = wil::ResultFromCaughtException(a1);
  *(_QWORD *)(a2 + 2112) = *(_QWORD *)(a2 + 2464) + 860LL;
  *(_DWORD *)(a2 + 192) = v3;
  **(_DWORD **)(a2 + 2112) = *(_DWORD *)(a2 + 192);
  *(_QWORD *)(a2 + 2120) = *(_QWORD *)(a2 + 2464) + 860LL;
  DragDropSimulatorTelemetryProvider::FailureTrace<char const (&)[20],long>(
    "SimulateDrop::catch",
    *(_QWORD *)(a2 + 2120));
  throw;
}
