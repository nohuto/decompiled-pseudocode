/*
 * XREFs of ExpFreePoolChecks @ 0x140337DBC
 * Callers:
 *     ExRemovePoolTag @ 0x140337BD8 (ExRemovePoolTag.c)
 *     ExpFreeHeapSpecialPool @ 0x1405B4B50 (ExpFreeHeapSpecialPool.c)
 * Callees:
 *     KeCheckForTimer @ 0x14051068C (KeCheckForTimer.c)
 *     ExpCheckForResource @ 0x1405B00C4 (ExpCheckForResource.c)
 *     ExpCheckForLookaside @ 0x1405B14B8 (ExpCheckForLookaside.c)
 *     ExpCheckForWorker @ 0x1405B1A34 (ExpCheckForWorker.c)
 *     VfFreePoolNotification @ 0x1409DD064 (VfFreePoolNotification.c)
 */

__int64 __fastcall ExpFreePoolChecks(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (ExpPoolFlags & 0x207) != 0 )
  {
    if ( (ExpPoolFlags & 0x200) != 0 && !(_DWORD)a3 )
      ExpCheckForLookaside(BugCheckParameter3, a2, a3);
    if ( (ExpPoolFlags & 1) != 0 )
      KeCheckForTimer(BugCheckParameter3);
    if ( (ExpPoolFlags & 4) != 0 )
      ExpCheckForResource(BugCheckParameter3, a2, a3);
    if ( (ExpPoolFlags & 2) != 0 )
      ExpCheckForWorker(BugCheckParameter3);
  }
  result = (unsigned int)ExpPoolFlags;
  if ( (ExpPoolFlags & 0x10) != 0 )
    return VfFreePoolNotification(BugCheckParameter3, a2, a3);
  return result;
}
