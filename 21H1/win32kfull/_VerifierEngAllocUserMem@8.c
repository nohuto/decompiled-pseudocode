/*
 * XREFs of _VerifierEngAllocUserMem@8 @ 0x1FC8C2
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YIHK@Z @ 0x1FC707 (-VerifierRandomFailure@@YIHK@Z.c)
 */

PVOID __stdcall VerifierEngAllocUserMem(SIZE_T a1, ULONG a2)
{
  if ( VerifierRandomFailure() )
    return 0;
  else
    return EngAllocUserMem(a1, a2);
}
