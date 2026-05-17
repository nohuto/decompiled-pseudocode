/*
 * XREFs of _NtOpenThreadToken@16 @ 0x4B2F2BC0
 * Callers:
 *     _RtlpTpRevertCapture@8 @ 0x4B2B1FBA (_RtlpTpRevertCapture@8.c)
 *     _RtlAdjustPrivilege@16 @ 0x4B2E6D40 (_RtlAdjustPrivilege@16.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtOpenThreadToken(int a1, int a2, int a3, int a4)
{
  return Wow64SystemServiceCall();
}
