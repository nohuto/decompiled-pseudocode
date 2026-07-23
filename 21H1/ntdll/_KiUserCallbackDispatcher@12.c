/*
 * XREFs of _KiUserCallbackDispatcher@12 @ 0x4B2F4E00
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _ZwCallbackReturn@12 @ 0x4B2F29B0 (_ZwCallbackReturn@12.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 */

// positive sp value has been detected, the output may be wrong!
int __stdcall KiUserCallbackDispatcher(int a1, int a2, int a3)
{
  NTSTATUS v4; // eax
  NTSTATUS v5; // eax
  int v6; // [esp-4h] [ebp-4h]

  if ( !LdrDelegatedKiUserCallbackDispatcher )
  {
    v4 = (*((int (**)(void))NtCurrentPeb()->KernelCallbackTable + v6))();
    v5 = ZwCallbackReturn(0, 0, v4);
    RtlRaiseStatus(v5);
  }
  return ((int (__stdcall *)(int, int, int))LdrDelegatedKiUserCallbackDispatcher)(a1, a2, a3);
}
