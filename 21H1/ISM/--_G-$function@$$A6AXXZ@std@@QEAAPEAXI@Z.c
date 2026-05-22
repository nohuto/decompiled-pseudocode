/*
 * XREFs of ??_G?$function@$$A6AXXZ@std@@QEAAPEAXI@Z @ 0x180075990
 * Callers:
 *     _lambda_3b64102ac84e73bf6a3808442553243e_::_lambda_invoker_cdecl_ @ 0x180074DD0 (_lambda_3b64102ac84e73bf6a3808442553243e_--_lambda_invoker_cdecl_.c)
 *     ??1?$unique_ptr@V?$function@$$A6AXXZ@std@@U?$default_delete@V?$function@$$A6AXXZ@std@@@2@@std@@QEAA@XZ @ 0x180075798 (--1-$unique_ptr@V-$function@$$A6AXXZ@std@@U-$default_delete@V-$function@$$A6AXXZ@std@@@2@@std@@Q.c)
 *     ?_Destroy@?$_Ref_count_obj@V?$function@$$A6AXXZ@std@@@std@@EEAAXXZ @ 0x180167140 (-_Destroy@-$_Ref_count_obj@V-$function@$$A6AXXZ@std@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180036A04 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall std::function<void (void)>::`scalar deleting destructor'(void *a1, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)a1, a2);
  if ( (v2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x40);
  return a1;
}
