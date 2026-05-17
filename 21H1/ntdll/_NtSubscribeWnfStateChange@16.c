/*
 * XREFs of _NtSubscribeWnfStateChange@16 @ 0x4B2F4520
 * Callers:
 *     _RtlpAddWnfUserSubToNameSub@8 @ 0x4B2B0767 (_RtlpAddWnfUserSubToNameSub@8.c)
 *     _RtlpRemoveUserSubFromNameSub@12 @ 0x4B2DEAEC (_RtlpRemoveUserSubFromNameSub@12.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtSubscribeWnfStateChange(int a1, int a2, int a3, int a4)
{
  return Wow64SystemServiceCall();
}
