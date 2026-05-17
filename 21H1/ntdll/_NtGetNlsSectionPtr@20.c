/*
 * XREFs of _NtGetNlsSectionPtr@20 @ 0x4B2F3910
 * Callers:
 *     _RtlpGetNormalization@8 @ 0x4B375A88 (_RtlpGetNormalization@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtGetNlsSectionPtr(int a1, int a2, int a3, int a4, int a5)
{
  return Wow64SystemServiceCall();
}
