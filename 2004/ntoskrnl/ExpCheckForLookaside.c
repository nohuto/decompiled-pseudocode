/*
 * XREFs of ExpCheckForLookaside @ 0x1405B14B8
 * Callers:
 *     ExFreeHeapPool @ 0x140289030 (ExFreeHeapPool.c)
 *     ExpFreePoolChecks @ 0x140337DBC (ExpFreePoolChecks.c)
 * Callees:
 *     ExpCheckForLookasideList @ 0x1405B1524 (ExpCheckForLookasideList.c)
 *     VfCheckForLookaside @ 0x1409DE508 (VfCheckForLookaside.c)
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
