/*
 * XREFs of ?SetCallback@WindowReadyState@@QEAAXV?$function@$$A6AX_N@Z@std@@@Z @ 0x1802DC06C
 * Callers:
 *     ?RuntimeClassInitialize@ViewWrapperBase@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z @ 0x1802D0DE0 (-RuntimeClassInitialize@ViewWrapperBase@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z.c)
 * Callees:
 *     ??4?$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x1802DBEC4 (--4-$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowReadyState::SetCallback(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx

  std::function<void (bool)>::operator=(a1 + 40, a2);
  return std::_Func_class<void,bool>::_Tidy(a2, v3);
}
