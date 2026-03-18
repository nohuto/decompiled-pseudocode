/*
 * XREFs of ExpCheckForLookaside @ 0x1405B0D98
 * Callers:
 *     ExFreeHeapPool @ 0x14024C790 (ExFreeHeapPool.c)
 *     ExpFreePoolChecks @ 0x1402FAD8C (ExpFreePoolChecks.c)
 * Callees:
 *     ExpCheckForLookasideList @ 0x1405B0E04 (ExpCheckForLookasideList.c)
 *     VfCheckForLookaside @ 0x1409DE4A8 (VfCheckForLookaside.c)
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
