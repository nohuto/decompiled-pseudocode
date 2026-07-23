/*
 * XREFs of ExpCheckForLookaside @ 0x1405B6C78
 * Callers:
 *     ExpFreePoolChecks @ 0x14021898C (ExpFreePoolChecks.c)
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 * Callees:
 *     ExpCheckForLookasideList @ 0x1405B6CE4 (ExpCheckForLookasideList.c)
 *     VfCheckForLookaside @ 0x1409E2518 (VfCheckForLookaside.c)
 */

__int64 __fastcall ExpCheckForLookaside(ULONG_PTR a1, ULONG_PTR a2)
{
  __int64 result; // rax

  if ( (MmVerifierData & 0x800) == 0 || (result = VfCheckForLookaside(a1, a2), !(_DWORD)result) )
  {
    ExpCheckForLookasideList(a1, a2, &ExNPagedLookasideListHead, &ExNPagedLookasideLock);
    return ExpCheckForLookasideList(a1, a2, &ExPagedLookasideListHead, &ExPagedLookasideLock);
  }
  return result;
}
