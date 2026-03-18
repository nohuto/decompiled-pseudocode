/*
 * XREFs of _VerifierBRUSHOBJ_pvAllocRbrush@8 @ 0x1FC789
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YIHK@Z @ 0x1FC707 (-VerifierRandomFailure@@YIHK@Z.c)
 */

PVOID __stdcall VerifierBRUSHOBJ_pvAllocRbrush(BRUSHOBJ *pbo, ULONG cj)
{
  if ( VerifierRandomFailure() )
    return 0;
  else
    return BRUSHOBJ_pvAllocRbrush(pbo, cj);
}
