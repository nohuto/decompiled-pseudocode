/*
 * XREFs of VerifierKeInitializeMutant @ 0x1409D7B60
 * Callers:
 *     <none>
 * Callees:
 *     ViKeInitializeMutantCommon @ 0x1409D8F80 (ViKeInitializeMutantCommon.c)
 *     VfDeadlockAcquireResource @ 0x1409DA558 (VfDeadlockAcquireResource.c)
 *     VfDeadlockInitializeResource @ 0x1409DB144 (VfDeadlockInitializeResource.c)
 */

__int64 __fastcall VerifierKeInitializeMutant(int a1, char a2)
{
  __int64 result; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  ViKeInitializeMutantCommon();
  result = VfDeadlockInitializeResource(a1);
  if ( a2 )
    return VfDeadlockAcquireResource(a1, retaddr);
  return result;
}
