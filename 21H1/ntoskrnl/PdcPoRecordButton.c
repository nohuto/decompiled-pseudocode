/*
 * XREFs of PdcPoRecordButton @ 0x1408EB310
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1403F0DDC (PopBsdHandleRequest.c)
 */

void PdcPoRecordButton()
{
  __int64 v0; // rbx

  v0 = MEMORY[0xFFFFF78000000014];
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  *(_QWORD *)&PopBsdPowerTransition = v0;
  PopBsdHandleRequest(1);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
