/*
 * XREFs of ??1?$unique_ptr@V?$function@$$A6AXXZ@std@@U?$default_delete@V?$function@$$A6AXXZ@std@@@2@@std@@QEAA@XZ @ 0x180075128
 * Callers:
 *     __lambda_3b64102ac84e73bf6a3808442553243e_::_lambda_invoker_cdecl__::_1_::dtor$0 @ 0x18007478F (__lambda_3b64102ac84e73bf6a3808442553243e_--_lambda_invoker_cdecl__--_1_--dtor$0.c)
 *     _MPCHolographicInputManager::DeferInvokeHelper_::_1_::dtor$1 @ 0x180075575 (_MPCHolographicInputManager--DeferInvokeHelper_--_1_--dtor$1.c)
 * Callees:
 *     ??_G?$function@$$A6AXXZ@std@@QEAAPEAXI@Z @ 0x1800753E4 (--_G-$function@$$A6AXXZ@std@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall std::unique_ptr<std::function<void (void)>>::~unique_ptr<std::function<void (void)>>(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return std::function<void (void)>::`scalar deleting destructor'(v1);
  return result;
}
