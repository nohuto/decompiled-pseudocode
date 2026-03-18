/*
 * XREFs of PsGetBaseIoPriorityThread @ 0x14020AC30
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x14020A0F0 (IopBuildDeviceIoControlRequest.c)
 *     IopCallDriverReference @ 0x14020A830 (IopCallDriverReference.c)
 *     CcCopyWriteWontFlush @ 0x14020AA30 (CcCopyWriteWontFlush.c)
 *     CcCopyWriteEx @ 0x14020AAE0 (CcCopyWriteEx.c)
 *     KiAbSetMinimumThreadPriority @ 0x140243354 (KiAbSetMinimumThreadPriority.c)
 *     ExpApplyPriorityBoost @ 0x140291140 (ExpApplyPriorityBoost.c)
 *     CcMapAndCopyInToCache @ 0x1402B4EC0 (CcMapAndCopyInToCache.c)
 *     ExpBoostIoAfterAcquire @ 0x14035D250 (ExpBoostIoAfterAcquire.c)
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
