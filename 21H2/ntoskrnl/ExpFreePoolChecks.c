/*
 * XREFs of ExpFreePoolChecks @ 0x140216974
 * Callers:
 *     ExRemovePoolTag @ 0x1402166FC (ExRemovePoolTag.c)
 *     ExpFreeHeapSpecialPool @ 0x1406423A4 (ExpFreeHeapSpecialPool.c)
 * Callees:
 *     KeCheckForTimer @ 0x14056DBFC (KeCheckForTimer.c)
 *     ExpCheckForResource @ 0x14063D44C (ExpCheckForResource.c)
 *     ExpCheckForLookaside @ 0x14063E4D0 (ExpCheckForLookaside.c)
 *     ExpCheckForWorker @ 0x14063F394 (ExpCheckForWorker.c)
 *     VfPtFreePoolNotification @ 0x140A9D69C (VfPtFreePoolNotification.c)
 */

__int64 __fastcall ExpFreePoolChecks(ULONG_PTR BugCheckParameter3, unsigned int a2, __int64 a3, int a4, __int64 a5)
{
  __int64 result; // rax

  if ( (ExpPoolFlags & 0x207) != 0 )
  {
    if ( (ExpPoolFlags & 0x200) != 0 && !a4 )
      ExpCheckForLookaside(BugCheckParameter3, a3);
    if ( (ExpPoolFlags & 1) != 0 )
      KeCheckForTimer(BugCheckParameter3);
    if ( (ExpPoolFlags & 4) != 0 )
      ExpCheckForResource(BugCheckParameter3, a3);
    if ( (ExpPoolFlags & 2) != 0 )
      ExpCheckForWorker(BugCheckParameter3);
  }
  result = (unsigned int)ExpPoolFlags;
  if ( (ExpPoolFlags & 0x10) != 0 )
    return VfPtFreePoolNotification(BugCheckParameter3, a2, a3, a5);
  return result;
}
