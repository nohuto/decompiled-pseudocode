/*
 * XREFs of PsGetBaseIoPriorityThread @ 0x14027B270
 * Callers:
 *     ExpApplyPriorityBoost @ 0x1402468E0 (ExpApplyPriorityBoost.c)
 *     IopBuildDeviceIoControlRequest @ 0x140279670 (IopBuildDeviceIoControlRequest.c)
 *     IopCallDriverReference @ 0x14027AD40 (IopCallDriverReference.c)
 *     CcCopyWriteWontFlush @ 0x14027B070 (CcCopyWriteWontFlush.c)
 *     CcCopyWriteEx @ 0x14027B120 (CcCopyWriteEx.c)
 *     CcMapAndCopyInToCache @ 0x14027BC80 (CcMapAndCopyInToCache.c)
 *     ExpBoostIoAfterAcquire @ 0x1402DB614 (ExpBoostIoAfterAcquire.c)
 *     KiAbSetMinimumThreadPriority @ 0x1402DD594 (KiAbSetMinimumThreadPriority.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetBaseIoPriorityThread(__int64 a1)
{
  __int64 result; // rax

  result = (*(_DWORD *)(a1 + 1296) >> 9) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 1124LL) & 0x100000) != 0 )
    return 0LL;
  return result;
}
