/*
 * XREFs of KiInitMachineDependent @ 0x1403B189C
 * Callers:
 *     KeInitSystem @ 0x140A4495C (KeInitSystem.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x1402E44A0 (KeRevertToUserGroupAffinityThread.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x1403B1A04 (KiSetSystemAffinityThreadToProcessor.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiInitializeMTRR @ 0x140A45684 (KiInitializeMTRR.c)
 *     KiInitializeCacheErrataSupport @ 0x140A8F56C (KiInitializeCacheErrataSupport.c)
 */

char KiInitMachineDependent()
{
  int v0; // ebp
  char v1; // si
  unsigned int v2; // edi
  __int64 v3; // rcx
  char result; // al
  int v5; // eax
  _GROUP_AFFINITY PreviousAffinity; // [rsp+20h] [rbp-28h] BYREF

  PreviousAffinity = 0LL;
  if ( (KiCacheErrataMonitor & 3) != 0 )
  {
    if ( (KiCacheErrataMonitor & 2) != 0 )
    {
      v5 = 2;
    }
    else if ( MEMORY[0xFFFFF780000002EC] )
    {
      v5 = 1;
    }
    else
    {
      v5 = KiTLBCOverride & 1;
    }
    KiTLBCOverride = v5;
  }
  else
  {
    KiTLBCOverride = 0;
  }
  v0 = 0;
  v1 = 0;
  v2 = 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    while ( 1 )
    {
      if ( v0 )
      {
        KiSetSystemAffinityThreadToProcessor(v2, 0LL);
      }
      else
      {
        KiSetSystemAffinityThreadToProcessor(v2, &PreviousAffinity);
        v0 = 1;
      }
      if ( v2 == (_DWORD)KeNumberProcessors_0 - 1 )
        v1 = 1;
      if ( (KiCacheErrataMonitor & 3) != 0 )
      {
        LOBYTE(v3) = v1;
        result = KiInitializeCacheErrataSupport(v3);
        if ( !result )
          break;
      }
      LOBYTE(v3) = v1;
      KiInitializeMTRR(v3);
      if ( (KeFeatureBits & 0x400000) != 0 )
        __writemsr(0x1A0u, __readmsr(0x1A0u) | 0x8000000);
      if ( ++v2 >= (unsigned int)KeNumberProcessors_0 )
        goto LABEL_12;
    }
  }
  else
  {
LABEL_12:
    if ( KeGetCurrentPrcb()->CpuVendor == 2 )
      KiIa32MiscEnable = __readmsr(0x1A0u);
    if ( v0 )
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    KiUserCodePatchMutex.Owner = 0LL;
    KiUserCodePatchMutex.Contention = 0;
    result = 1;
    KiUserCodePatchMutex.Event.Header.SignalState = 0;
    KiUserCodePatchMutex.Event.Header.WaitListHead.Blink = &KiUserCodePatchMutex.Event.Header.WaitListHead;
    KiUserCodePatchMutex.Event.Header.WaitListHead.Flink = &KiUserCodePatchMutex.Event.Header.WaitListHead;
    KiUserCodePatchMutex.Count = 1;
    LOWORD(KiUserCodePatchMutex.Event.Header.Lock) = 1;
    KiUserCodePatchMutex.Event.Header.Size = 6;
  }
  return result;
}
