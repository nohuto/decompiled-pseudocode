/*
 * XREFs of _lambda_da7ad41009fba3d1d8d39f3832cc85a2_::operator() @ 0x1802A1964
 * Callers:
 *     wil::details::ScopeExitFn__lambda_da7ad41009fba3d1d8d39f3832cc85a2___::_ScopeExitFn__lambda_da7ad41009fba3d1d8d39f3832cc85a2___ @ 0x1802A0A90 (wil--details--ScopeExitFn__lambda_da7ad41009fba3d1d8d39f3832cc85a2___--_ScopeExitFn__lambda_da7a.c)
 * Callees:
 *     ?CloseServerWindow@ViewManagerBridge@@UEAAJI@Z @ 0x1802BD3B0 (-CloseServerWindow@ViewManagerBridge@@UEAAJI@Z.c)
 *     ?CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z @ 0x1802BD430 (-CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z.c)
 */

int __fastcall lambda_da7ad41009fba3d1d8d39f3832cc85a2_::operator()(__int64 a1)
{
  _QWORD *v2; // rax
  unsigned int v3; // edx

  ViewManagerBridge::CloseViewForScenario(
    *(_QWORD *)(*(_QWORD *)a1 + 496LL),
    *(unsigned int *)(**(_QWORD **)(a1 + 8) + 16LL * *(_QWORD *)(a1 + 16) + 8),
    *(_QWORD *)(**(_QWORD **)(a1 + 8) + 16LL * *(_QWORD *)(a1 + 16)),
    2LL);
  v2 = *(_QWORD **)(a1 + 8);
  v3 = *(_DWORD *)(*v2 + 16LL * *(_QWORD *)(a1 + 16) + 12);
  if ( v3 )
    LODWORD(v2) = ViewManagerBridge::CloseServerWindow(*(ViewManagerBridge **)(*(_QWORD *)a1 + 496LL), v3);
  return (int)v2;
}
