/*
 * XREFs of GreDwmCreatedBitmapRemotingOutput @ 0x1C015876C
 * Callers:
 *     NtGdiDwmCreatedBitmapRemotingOutput @ 0x1C0158750 (NtGdiDwmCreatedBitmapRemotingOutput.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008513C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00C3338 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     DrvModeChangeCompleteNotify @ 0x1C0158828 (DrvModeChangeCompleteNotify.c)
 */

void GreDwmCreatedBitmapRemotingOutput()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  char v4; // [rsp+30h] [rbp+8h] BYREF

  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v4, ghsemDynamicModeChange);
  GreAcquireSemaphoreSharedInternal(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
  if ( (unsigned int)UserIsCurrentProcessDwm() && (unsigned int)UserIsRemoteConnection(v1, v0, v2, v3) )
    DrvModeChangeCompleteNotify();
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v4);
}
