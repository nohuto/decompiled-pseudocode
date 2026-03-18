/*
 * XREFs of KeUpdateDpcWatchdogConfiguration @ 0x1405685CC
 * Callers:
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeGenericProcessorCallback @ 0x14035BB4C (KeGenericProcessorCallback.c)
 *     KiCreateDpcLimitsProcessorConfiguration @ 0x1403C1C58 (KiCreateDpcLimitsProcessorConfiguration.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KiValidateDpcWatchdogConfiguration @ 0x140568AB8 (KiValidateDpcWatchdogConfiguration.c)
 *     KiApplyDpcVerificationScaleSettings @ 0x140568CA4 (KiApplyDpcVerificationScaleSettings.c)
 */

__int64 __fastcall KeUpdateDpcWatchdogConfiguration(void *Src, size_t Size)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // r14d
  __int64 v5; // rdx
  int v6; // esi
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  int v9; // r14d
  unsigned int v10; // edi
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // r10
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // rdx
  _DWORD *v15; // r11
  int v16; // eax
  bool v17; // zf
  struct _KTHREAD *v18; // rdi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v21; // edx
  int v22; // r8d
  _OWORD v24[2]; // [rsp+50h] [rbp-9h] BYREF
  __int64 v25; // [rsp+70h] [rbp+17h]
  int v26; // [rsp+78h] [rbp+1Fh]

  memset(v24, 0, sizeof(v24));
  v25 = 0LL;
  v26 = 0;
  CurrentThread = KeGetCurrentThread();
  v3 = Size;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&KiDpcWatchdogConfigurationLock, 0LL);
  v6 = KiValidateDpcWatchdogConfiguration(Src, v3);
  if ( v6 >= 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v5 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v5;
    }
    v9 = (int)KeDpcWatchdogProfileBufferSizeBytes;
    v10 = (unsigned int)KeDpcWatchdogProfileBufferSizeBytes;
    if ( !(_DWORD)KeDpcWatchdogProfileBufferSizeBytes
      && (KeDpcWatchdogProfileSingleDpcThresholdMs || KeDpcWatchdogProfileCumulativeDpcThresholdMs) )
    {
      v10 = 266240;
    }
    LODWORD(KeDpcWatchdogProfileBufferSizeBytes) = v10;
    dword_140D0533C = v10 >> 3;
    KiApplyDpcVerificationScaleSettings(0LL, v5, 2LL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v13 = KeGetCurrentIrql();
        if ( v13 <= v12 && CurrentIrql <= v12 && v13 >= v11 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v15 = CurrentPrcb->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v17 = (v16 & v15[5]) == 0;
          v15[5] &= v16;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    KiCreateDpcLimitsProcessorConfiguration((__int64)v24, v9, v10);
    KeGenericProcessorCallback(
      KeActiveProcessors,
      (void (__fastcall *)(struct _KPRCB *, __int64))KiUpdateProcessorDpcWatchdogConfiguration,
      (__int64)v24,
      2);
    v6 = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KiDpcWatchdogConfigurationLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&KiDpcWatchdogConfigurationLock);
  v18 = KeGetCurrentThread();
  if ( (unsigned __int64)&KiDpcWatchdogConfigurationLock - qword_140C50630 >= 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx((__int64)v18->ApcState.Process);
  _disable();
  p_Process = (__int64)&v18[1].Process;
  v21 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&KiDpcWatchdogConfigurationLock & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v21;
    p_Process += 96LL;
    if ( v21 >= 6 )
      goto LABEL_29;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_29:
    if ( (*((_DWORD *)&v18->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v18, (ULONG_PTR)&KiDpcWatchdogConfigurationLock, SessionId, 0LL);
    _enable();
    goto LABEL_37;
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v22 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  v18->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
  _enable();
  if ( v22 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)v18, (__int64)&KiDpcWatchdogConfigurationLock, v22);
LABEL_37:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v6;
}
