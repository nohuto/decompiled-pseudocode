/*
 * XREFs of ExpCheckForLookaside @ 0x1405B5018
 * Callers:
 *     ExFreeHeapPool @ 0x1402176E0 (ExFreeHeapPool.c)
 *     ExpFreePoolChecks @ 0x140261188 (ExpFreePoolChecks.c)
 * Callees:
 *     ExpCheckForLookasideList @ 0x1405B5084 (ExpCheckForLookasideList.c)
 *     VfCheckForLookaside @ 0x1409E4528 (VfCheckForLookaside.c)
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
