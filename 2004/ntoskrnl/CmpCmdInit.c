/*
 * XREFs of CmpCmdInit @ 0x1407820A4
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x140782FEC (CmCompleteRegistryInitialization.c)
 * Callees:
 *     ExGenRandom @ 0x140250640 (ExGenRandom.c)
 *     KiSetTimerEx @ 0x1402C90A0 (KiSetTimerEx.c)
 *     KeInitializeDpc @ 0x1402E3AC0 (KeInitializeDpc.c)
 *     KeInitializeTimerEx @ 0x1402F9130 (KeInitializeTimerEx.c)
 *     PoRegisterCoalescingCallback @ 0x1407825C0 (PoRegisterCoalescingCallback.c)
 *     CmpInitializeLazyWriters @ 0x1407829F8 (CmpInitializeLazyWriters.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpCmdInit(char a1)
{
  int v2; // eax
  PVOID PoolWithTag; // rax
  unsigned __int64 v4; // rsi
  void *v10; // r8
  __int64 v11; // rdx
  __int64 result; // rax

  CmpInitializeLazyWriters();
  CmpForceFlushWorkItem.Parameter = 0LL;
  CmpForceFlushWorkItem.List.Flink = 0LL;
  CmpForceFlushWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpForceFlushWorker;
  KeInitializeDpc(&CmpEnableLazyFlushDpc, (PKDEFERRED_ROUTINE)CmpEnableLazyFlushDpcRoutine, &CmpHoldLazyFlush);
  KeInitializeTimerEx(&CmpEnableLazyFlushTimer, NotificationTimer);
  v2 = CmpEnableLazyFlushBootDelayInterval;
  if ( CmpEnableLazyFlushBootDelayInterval < 60 )
  {
    v2 = 60;
    CmpEnableLazyFlushBootDelayInterval = 60;
  }
  if ( v2 > 600 )
  {
    v2 = 600;
    CmpEnableLazyFlushBootDelayInterval = 600;
  }
  KiSetTimerEx((__int64)&CmpEnableLazyFlushTimer, -10000000LL * v2, 0, 0, (__int64)&CmpEnableLazyFlushDpc);
  _mm_lfence();
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8uLL, 0x58637044u);
  v4 = (unsigned __int64)PoolWithTag;
  if ( PoolWithTag )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    _RAX = 2147483656LL;
    __asm { cpuid }
    v10 = (void *)(v4 ^ ((unsigned __int64)(unsigned int)ExGenRandom(0) << SBYTE1(_RAX)));
  }
  else
  {
    v10 = 0LL;
  }
  KeInitializeDpc(&CmpFreezeThawDpc, (PKDEFERRED_ROUTINE)CmpFreezeThawDpcRoutine, v10);
  KeInitializeTimerEx(&CmpFreezeThawTimer, NotificationTimer);
  CmpFreezeThawWorkItem.Parameter = 0LL;
  CmpFreezeThawWorkItem.List.Flink = 0LL;
  CmpFreezeThawWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpFreezeThawWorker;
  LOBYTE(v11) = 1;
  BYTE1(NlsMbCodePageTag) = CmpMiniNTBoot;
  CmpWorkerDataInitialized = 1;
  CmpWasSetupBoot = a1;
  CmpEnableLazyFlushTimerInitialized = 1;
  result = PoRegisterCoalescingCallback(CmpCoalescingCallback, v11, &CmpCoalescingRegistration, 0LL);
  if ( (int)result >= 0 )
    CmpCoalescingCallbackActive = 1;
  return result;
}
