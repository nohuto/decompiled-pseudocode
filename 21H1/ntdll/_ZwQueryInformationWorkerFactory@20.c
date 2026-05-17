/*
 * XREFs of _ZwQueryInformationWorkerFactory@20 @ 0x4B2F3E70
 * Callers:
 *     _TpQueryPoolStackInformation@8 @ 0x4B383B90 (_TpQueryPoolStackInformation@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwQueryInformationWorkerFactory(int a1, int a2, int a3, int a4, int a5)
{
  return Wow64SystemServiceCall();
}
