/*
 * XREFs of ZwPssCaptureVaSpaceBulk @ 0x1403F4AB0
 * Callers:
 *     NtPssCaptureVaSpaceBulk @ 0x140957230 (NtPssCaptureVaSpaceBulk.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwPssCaptureVaSpaceBulk(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
