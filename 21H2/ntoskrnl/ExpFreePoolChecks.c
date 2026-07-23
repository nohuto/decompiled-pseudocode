/*
 * XREFs of ExpFreePoolChecks @ 0x14021898C
 * Callers:
 *     ExRemovePoolTag @ 0x1402187A8 (ExRemovePoolTag.c)
 *     ExpFreeHeapSpecialPool @ 0x1405BA310 (ExpFreeHeapSpecialPool.c)
 * Callees:
 *     KeCheckForTimer @ 0x140515D3C (KeCheckForTimer.c)
 *     ExpCheckForResource @ 0x1405B5854 (ExpCheckForResource.c)
 *     ExpCheckForLookaside @ 0x1405B6C78 (ExpCheckForLookaside.c)
 *     ExpCheckForWorker @ 0x1405B71F4 (ExpCheckForWorker.c)
 *     VfFreePoolNotification @ 0x1409E1074 (VfFreePoolNotification.c)
 */

__int64 __fastcall ExpFreePoolChecks(ULONG_PTR BugCheckParameter3, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( (ExpPoolFlags & 0x207) != 0 )
  {
    if ( (ExpPoolFlags & 0x200) != 0 && !a3 )
      ExpCheckForLookaside();
    if ( (ExpPoolFlags & 1) != 0 )
      KeCheckForTimer(BugCheckParameter3);
    if ( (ExpPoolFlags & 4) != 0 )
      ExpCheckForResource(BugCheckParameter3, a2);
    if ( (ExpPoolFlags & 2) != 0 )
      ExpCheckForWorker(BugCheckParameter3);
  }
  result = (unsigned int)ExpPoolFlags;
  if ( (ExpPoolFlags & 0x10) != 0 )
    return VfFreePoolNotification(BugCheckParameter3, a2);
  return result;
}
