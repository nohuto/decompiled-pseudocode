/*
 * XREFs of VerifierBRUSHOBJ_pvAllocRbrush @ 0x1C029D420
 * Callers:
 *     <none>
 * Callees:
 *     BRUSHOBJ_pvAllocRbrush @ 0x1C026CC00 (BRUSHOBJ_pvAllocRbrush.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C029D38C (-VerifierRandomFailure@@YAHK@Z.c)
 */

PVOID __fastcall VerifierBRUSHOBJ_pvAllocRbrush(BRUSHOBJ *pbo, ULONG cj)
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return BRUSHOBJ_pvAllocRbrush(pbo, cj);
}
