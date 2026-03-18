/*
 * XREFs of ZwPssCaptureVaSpaceBulk @ 0x1403FA910
 * Callers:
 *     NtPssCaptureVaSpaceBulk @ 0x14095E6C0 (NtPssCaptureVaSpaceBulk.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwPssCaptureVaSpaceBulk(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
