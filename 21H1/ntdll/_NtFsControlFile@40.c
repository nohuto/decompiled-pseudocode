/*
 * XREFs of _NtFsControlFile@40 @ 0x4B2F2D10
 * Callers:
 *     _RtlpReferenceCurrentDirectory@4 @ 0x4B2A7C45 (_RtlpReferenceCurrentDirectory@4.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtFsControlFile(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  return Wow64SystemServiceCall();
}
