/*
 * XREFs of _ZwAlpcImpersonateClientOfPort@12 @ 0x4B2F31E0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwAlpcImpersonateClientOfPort(int a1, int a2, int a3)
{
  return Wow64SystemServiceCall();
}
