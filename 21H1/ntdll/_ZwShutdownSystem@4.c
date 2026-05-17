/*
 * XREFs of _ZwShutdownSystem@4 @ 0x4B2F44C0
 * Callers:
 *     _RtlpVerifyAndCommitUILanguageSettings@4 @ 0x4B356030 (_RtlpVerifyAndCommitUILanguageSettings@4.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwShutdownSystem(int a1)
{
  return Wow64SystemServiceCall();
}
