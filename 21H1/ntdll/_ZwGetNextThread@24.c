/*
 * XREFs of _ZwGetNextThread@24 @ 0x4B2F3900
 * Callers:
 *     _PsspCaptureThreadInformation@16 @ 0x4B388568 (_PsspCaptureThreadInformation@16.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwGetNextThread(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return Wow64SystemServiceCall();
}
