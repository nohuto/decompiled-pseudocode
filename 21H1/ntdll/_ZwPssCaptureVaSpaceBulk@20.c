/*
 * XREFs of _ZwPssCaptureVaSpaceBulk@20 @ 0x4B2F3D40
 * Callers:
 *     PsspQueryVmBulkMode @ 0x4B387BC0 (PsspQueryVmBulkMode.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwPssCaptureVaSpaceBulk(int a1, int a2, int a3, int a4, int a5)
{
  return Wow64SystemServiceCall();
}
