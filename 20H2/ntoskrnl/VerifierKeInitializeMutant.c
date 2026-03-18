/*
 * XREFs of VerifierKeInitializeMutant @ 0x1409DDBE0
 * Callers:
 *     <none>
 * Callees:
 *     ViKeInitializeMutantCommon @ 0x1409DF000 (ViKeInitializeMutantCommon.c)
 *     VfDeadlockAcquireResource @ 0x1409E05D8 (VfDeadlockAcquireResource.c)
 *     VfDeadlockInitializeResource @ 0x1409E11C4 (VfDeadlockInitializeResource.c)
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
