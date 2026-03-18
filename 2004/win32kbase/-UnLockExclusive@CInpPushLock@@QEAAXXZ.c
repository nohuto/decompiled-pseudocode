/*
 * XREFs of ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0026560
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C0006400 (RIMRegisterForInputWithCallbacks.c)
 *     _lambda_b66951ac27806062125d6fbb1253c213_::_lambda_invoker_cdecl_ @ 0x1C00D1180 (_lambda_b66951ac27806062125d6fbb1253c213_--_lambda_invoker_cdecl_.c)
 *     _lambda_c729c1bd722f8cc31026c40a6b618e40_::_lambda_invoker_cdecl_ @ 0x1C00D11F0 (_lambda_c729c1bd722f8cc31026c40a6b618e40_--_lambda_invoker_cdecl_.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D16E0 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1A80 (-LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1F20 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C0157990 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0157FF0 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0158350 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     rimInputApc @ 0x1C0175DE0 (rimInputApc.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01BD8AC (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     <none>
 */

void __fastcall CInpPushLock::UnLockExclusive(CInpPushLock *this)
{
  *((_QWORD *)this + 1) = 0LL;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
