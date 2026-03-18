/*
 * XREFs of PopCheckForIdleness @ 0x14035C8C0
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x1402771F0 (KeEnumerateNextProcessor.c)
 *     PopQueueWorkItem @ 0x140322ED4 (PopQueueWorkItem.c)
 *     KeQueryActiveProcessorCountEx @ 0x140328380 (KeQueryActiveProcessorCountEx.c)
 *     PopDiagTraceIdleCheck @ 0x14035C494 (PopDiagTraceIdleCheck.c)
 *     PopCheckForWork @ 0x14035CBB4 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x14035D440 (PopGetPolicyWorker.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 PopCheckForIdleness()
{
  signed int ActiveProcessorCount; // r12d
  unsigned __int8 CurrentIrql; // di
  int v2; // esi
  __int64 v3; // rbx
  unsigned int v4; // r14d
  int v5; // edi
  int v6; // r15d
  signed int v7; // esi
  __int64 v8; // rcx
  signed int v9; // eax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf
  int v17; // [rsp+20h] [rbp-30h] BYREF
  __int64 v18; // [rsp+28h] [rbp-28h]
  unsigned __int16 *v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h]
  __int16 v21; // [rsp+40h] [rbp-10h]
  int v22; // [rsp+42h] [rbp-Eh]
  __int16 v23; // [rsp+46h] [rbp-Ah]

  v22 = 0;
  v23 = 0;
  v17 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v2 = qword_140C23378;
  v3 = MEMORY[0xFFFFF78000000320];
  v18 = MEMORY[0xFFFFF78000000320];
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v12 = KeGetCurrentIrql();
      if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v16 = (v15 & v14[5]) == 0;
        v14[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( dword_140C2334C )
  {
    if ( byte_140C23375 )
    {
      v4 = v3 - v2;
      if ( (int)v3 - v2 <= 0 )
      {
        byte_140C23375 = 0;
        goto LABEL_23;
      }
      v20 = qword_140CFC838[0];
      v5 = 100;
      v21 = 0;
      v19 = (unsigned __int16 *)KeActiveProcessors;
      v6 = 0;
      v7 = 100;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v17, &v19) )
      {
        v9 = 100
           * (*(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v17] + 24) + 652LL) - *(_DWORD *)(KiProcessorBlock[v17] + 32988))
           / v4;
        if ( v9 < v7 )
          v7 = 100
             * (*(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v17] + 24) + 652LL) - *(_DWORD *)(KiProcessorBlock[v17] + 32988))
             / v4;
        v6 += v9;
      }
      if ( v7 > 100 )
      {
        v7 = 100;
      }
      else if ( v7 < 0 )
      {
        v7 = 0;
      }
      if ( v6 / ActiveProcessorCount <= 100 )
      {
        v5 = v6 / ActiveProcessorCount;
        if ( v6 / ActiveProcessorCount < 0 )
          v5 = 0;
      }
      dword_140C23348 += PopIdleScanInterval;
      dword_140C23344 = v7;
      PopSIdle = v5;
      PopDiagTraceIdleCheck(v8, v7, v5);
      v3 = v18;
      if ( !PopPlatformAoAc
        && PopPreSleepNotificationSeconds + 120 <= (unsigned int)dword_140C2334C
        && dword_140C23348 + PopPreSleepNotificationSeconds >= (unsigned int)dword_140C2334C
        && !PopIsAboutToSleep )
      {
        PopIsAboutToSleep = 1;
        PopQueueWorkItem((__int64)&PopPreSleepNotifyWorkItem, DelayedWorkQueue);
      }
    }
    v20 = qword_140CFC838[0];
    v19 = (unsigned __int16 *)KeActiveProcessors;
    qword_140C23378 = v3;
    byte_140C23375 = 1;
    v21 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v17, &v19) )
      *(_DWORD *)(KiProcessorBlock[v17] + 32988) = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v17] + 24) + 652LL);
  }
LABEL_23:
  PopGetPolicyWorker(PopPlatformAoAc != 0 ? 128 : 8);
  return PopCheckForWork();
}
