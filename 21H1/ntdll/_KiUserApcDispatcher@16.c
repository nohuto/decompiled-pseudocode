/*
 * XREFs of _KiUserApcDispatcher@16 @ 0x4B2F4D10
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _ZwContinue@8 @ 0x4B2F2DB0 (_ZwContinue@8.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 */

// positive sp value has been detected, the output may be wrong!
int __stdcall KiUserApcDispatcher(int a1, int a2, int a3, int a4)
{
  NTSTATUS v5; // eax
  void (*v6)(void); // [esp-4h] [ebp-4h]

  if ( !LdrDelegatedKiUserApcDispatcher )
  {
    STACK[0x2DC] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
    STACK[0x2E0] = (unsigned int)KiUserApcExceptionHandler;
    v6();
    v5 = ZwContinue((PCONTEXT)&a4, a3 & 1);
    RtlRaiseStatus(v5);
  }
  return ((int (__stdcall *)(int, int, int, int))LdrDelegatedKiUserApcDispatcher)(a1, a2, a3, a4);
}
