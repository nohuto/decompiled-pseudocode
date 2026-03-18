/*
 * XREFs of PsGetBaseIoPriorityThread @ 0x140222220
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x140220620 (IopBuildDeviceIoControlRequest.c)
 *     IopCallDriverReference @ 0x140221CF0 (IopCallDriverReference.c)
 *     CcCopyWriteWontFlush @ 0x140222020 (CcCopyWriteWontFlush.c)
 *     CcCopyWriteEx @ 0x1402220D0 (CcCopyWriteEx.c)
 *     CcMapAndCopyInToCache @ 0x140222C30 (CcMapAndCopyInToCache.c)
 *     ExpBoostIoAfterAcquire @ 0x140279C0C (ExpBoostIoAfterAcquire.c)
 *     ExpApplyPriorityBoost @ 0x1402830C0 (ExpApplyPriorityBoost.c)
 *     KiAbSetMinimumThreadPriority @ 0x14032A364 (KiAbSetMinimumThreadPriority.c)
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
