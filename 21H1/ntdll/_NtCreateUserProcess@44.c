/*
 * XREFs of _NtCreateUserProcess@44 @ 0x4B2F3600
 * Callers:
 *     _RtlpCreateUserProcess@24 @ 0x4B342119 (_RtlpCreateUserProcess@24.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtCreateUserProcess(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  return Wow64SystemServiceCall();
}
