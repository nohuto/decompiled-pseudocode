/*
 * XREFs of _ZwUnloadDriver@4 @ 0x4B2F45E0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwUnloadDriver(int a1)
{
  return Wow64SystemServiceCall();
}
