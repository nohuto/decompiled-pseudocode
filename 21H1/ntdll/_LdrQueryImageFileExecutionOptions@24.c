/*
 * XREFs of _LdrQueryImageFileExecutionOptions@24 @ 0x4B2E96C0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlQueryImageFileExecutionOptions@28 @ 0x4B2E9700 (_RtlQueryImageFileExecutionOptions@28.c)
 */

int __stdcall LdrQueryImageFileExecutionOptions(int a1, int a2, int a3, void *a4, int a5, int a6)
{
  if ( LdrpIsSecureProcess )
    return -1073741772;
  else
    return RtlQueryImageFileExecutionOptions(a1, a2, a3, a4, a5, a6, 0);
}
