/*
 * XREFs of _LdrInitializeThunk@8 @ 0x4B2E62C0
 * Callers:
 *     <none>
 * Callees:
 *     _LdrpInitialize@8 @ 0x4B2E62EF (_LdrpInitialize@8.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _ZwContinue@8 @ 0x4B2F2DB0 (_ZwContinue@8.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 */

int __stdcall LdrInitializeThunk(int a1, int a2)
{
  int v2; // eax

  LdrpInitialize(a1, a2);
  if ( !LdrDelegatedLdrInitializeThunk )
  {
    v2 = ZwContinue(a1, 1);
    RtlRaiseStatus(v2);
  }
  return LdrDelegatedLdrInitializeThunk(LdrDelegatedLdrInitializeThunk, a1, LdrpDelegatedNtdllBase);
}
