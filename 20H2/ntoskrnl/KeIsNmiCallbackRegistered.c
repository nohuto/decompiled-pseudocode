/*
 * XREFs of KeIsNmiCallbackRegistered @ 0x140512700
 * Callers:
 *     MmRemoveImportOptimizationForDriverVerifier @ 0x140542A2C (MmRemoveImportOptimizationForDriverVerifier.c)
 *     MmRemoveImportOptimizationWorker @ 0x140542D10 (MmRemoveImportOptimizationWorker.c)
 * Callees:
 *     KiEnumerateNmiSxCallback @ 0x140380604 (KiEnumerateNmiSxCallback.c)
 */

__int64 KeIsNmiCallbackRegistered()
{
  unsigned int v1; // ebx
  unsigned __int8 CurrentIrql; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v3; // [rsp+38h] [rbp+10h] BYREF
  PVOID *v4; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( !KiNmiCallbackListHead )
    return 0LL;
  v1 = 0;
  v4 = 0LL;
  while ( (unsigned int)KiEnumerateNmiSxCallback(&v4, &CurrentIrql, &v3) )
  {
    if ( (v3 < (unsigned __int64)PsNtosImageBase || v3 >= PsNtosImageEnd)
      && (v3 < (unsigned __int64)PsHalImageBase || v3 >= PsHalImageEnd) )
    {
      v1 = 1;
    }
  }
  return v1;
}
