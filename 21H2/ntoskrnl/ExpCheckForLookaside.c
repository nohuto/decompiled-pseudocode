/*
 * XREFs of ExpCheckForLookaside @ 0x1405B6A48
 * Callers:
 *     ExpFreePoolChecks @ 0x140297F0C (ExpFreePoolChecks.c)
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 * Callees:
 *     ExpCheckForLookasideList @ 0x1405B6AB4 (ExpCheckForLookasideList.c)
 *     VfCheckForLookaside @ 0x1409E1518 (VfCheckForLookaside.c)
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
