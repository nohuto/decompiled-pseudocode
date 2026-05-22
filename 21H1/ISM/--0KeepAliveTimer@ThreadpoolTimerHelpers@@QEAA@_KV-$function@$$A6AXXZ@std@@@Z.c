/*
 * XREFs of ??0KeepAliveTimer@ThreadpoolTimerHelpers@@QEAA@_KV?$function@$$A6AXXZ@std@@@Z @ 0x1801698F8
 * Callers:
 *     ??0SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@PEAUIHidDevice@123@KKV?$function@$$A6AXXZ@std@@@Z @ 0x180169B54 (--0SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@PEAUIHidDevice@.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180036A04 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@$$QEAV01@@Z @ 0x180156A1C (--0-$function@$$A6AXXZ@std@@QEAA@$$QEAV01@@Z.c)
 *     ?Close@?$HandleT@VThreadpoolTimerTraitsImpl@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@QEAAXXZ @ 0x18015A22C (-Close@-$HandleT@VThreadpoolTimerTraitsImpl@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@M.c)
 */

// Hidden C++ exception states: #wind=3
RTL_SRWLOCK *__fastcall ThreadpoolTimerHelpers::KeepAliveTimer::KeepAliveTimer(RTL_SRWLOCK *pv, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  PTP_TIMER ThreadpoolTimer; // rsi

  pv->Ptr = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::ThreadpoolTimerTraitsImpl>::`vftable';
  pv[1].Ptr = 0LL;
  LOBYTE(pv[2].Ptr) = 0;
  InitializeSRWLock(pv + 3);
  std::function<void (void)>::function<void (void)>((__int64)&pv[4], a3);
  pv[12].Ptr = (PVOID)GetTickCount64();
  pv[13].Ptr = (PVOID)5000;
  ThreadpoolTimer = CreateThreadpoolTimer(
                      (PTP_TIMER_CALLBACK)_lambda_730587c1c62906cad33c140b5ea68fdf_::_lambda_invoker_cdecl_,
                      pv,
                      0LL);
  if ( ThreadpoolTimer != pv[1].Ptr )
  {
    Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::ThreadpoolTimerTraitsImpl>::Close((__int64)pv);
    pv[1].Ptr = ThreadpoolTimer;
  }
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(a3, v5);
  return pv;
}
