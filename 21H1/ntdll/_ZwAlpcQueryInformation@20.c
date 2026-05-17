/*
 * XREFs of _ZwAlpcQueryInformation@20 @ 0x4B2F3210
 * Callers:
 *     _TpWaitForAlpcCompletion@4 @ 0x4B383490 (_TpWaitForAlpcCompletion@4.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwAlpcQueryInformation(int a1, int a2, int a3, int a4, int a5)
{
  return Wow64SystemServiceCall();
}
