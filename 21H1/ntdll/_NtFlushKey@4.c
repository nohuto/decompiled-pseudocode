/*
 * XREFs of _NtFlushKey@4 @ 0x4B2F3810
 * Callers:
 *     _RtlApplyRXact@4 @ 0x4B345770 (_RtlApplyRXact@4.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtFlushKey(int a1)
{
  return Wow64SystemServiceCall();
}
