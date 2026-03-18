/*
 * XREFs of _NtGdiFlushUserBatch@0 @ 0x5EB74
 * Callers:
 *     <none>
 * Callees:
 *     ?NtGdiFlushUserBatchInternal@@YGXPAX@Z @ 0x5EBA0 (-NtGdiFlushUserBatchInternal@@YGXPAX@Z.c)
 */

void __stdcall NtGdiFlushUserBatch()
{
  if ( GreStackExpansionRequired(0x2000) )
    KeExpandKernelStackAndCalloutEx(NtGdiFlushUserBatchInternal, 0, 0x2000u, 1u, 0);
  else
    NtGdiFlushUserBatchInternal(0);
}
