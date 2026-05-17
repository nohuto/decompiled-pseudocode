/*
 * XREFs of _ZwFreezeTransactions@8 @ 0x4B2F3870
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwFreezeTransactions(int a1, int a2)
{
  return Wow64SystemServiceCall();
}
