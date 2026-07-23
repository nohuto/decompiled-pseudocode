/*
 * XREFs of PopCheckForIdleness @ 0x14026F120
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140251CA4 (PopQueueWorkItem.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402695B0 (KeQueryActiveProcessorCountEx.c)
 *     PopCheckForWork @ 0x14026F4C0 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x14026FD50 (PopGetPolicyWorker.c)
 *     PopDiagTraceIdleCheck @ 0x140270050 (PopDiagTraceIdleCheck.c)
 *     KeEnumerateNextProcessor @ 0x1402CDD00 (KeEnumerateNextProcessor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 PopCheckForIdleness()
{
  signed int ActiveProcessorCount; // r12d
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  int v3; // esi
  __int64 v4; // rbx
  unsigned __int8 v5; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v7; // r8
  int v8; // eax
  bool v9; // zf
  unsigned int v10; // r14d
  unsigned int v11; // esi
  int v12; // r15d
  signed int v13; // edi
  __int64 v14; // rcx
  signed int v15; // eax
  int v17; // [rsp+20h] [rbp-30h] BYREF
  __int64 v18; // [rsp+28h] [rbp-28h]
  __int16 *v19; // [rsp+30h] [rbp-20h] BYREF
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
  v3 = qword_140C23998;
  v4 = MEMORY[0xFFFFF78000000320];
  v18 = MEMORY[0xFFFFF78000000320];
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v5 = KeGetCurrentIrql();
      if ( v5 <= 0xFu && CurrentIrql <= 0xFu && v5 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v7 = CurrentPrcb->SchedulerAssist;
        v8 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v9 = (v8 & v7[5]) == 0;
        v7[5] &= v8;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( byte_140C23995 )
  {
    v10 = v4 - v3;
    if ( (int)v4 - v3 <= 0 )
    {
      byte_140C23995 = 0;
      goto LABEL_36;
    }
    v20 = qword_140CFC848[0];
    v21 = 0;
    v11 = 100;
    v19 = &KeActiveProcessors;
    v12 = 0;
    v13 = 100;
    if ( !(unsigned int)KeEnumerateNextProcessor(&v17, &v19) )
    {
      do
      {
        v15 = 100
            * (*(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v17] + 24) + 652LL) - *(_DWORD *)(KiProcessorBlock[v17] + 32988))
            / v10;
        if ( v15 < v13 )
          v13 = 100
              * (*(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v17] + 24) + 652LL)
               - *(_DWORD *)(KiProcessorBlock[v17] + 32988))
              / v10;
        v12 += v15;
      }
      while ( !(unsigned int)KeEnumerateNextProcessor(&v17, &v19) );
      v4 = v18;
      if ( v13 <= 100 )
      {
        if ( v13 < 0 )
          v13 = 0;
      }
      else
      {
        v13 = 100;
      }
    }
    if ( v12 / ActiveProcessorCount <= 100 )
    {
      v11 = v12 / ActiveProcessorCount;
      if ( v12 / ActiveProcessorCount < 0 )
        v11 = 0;
    }
    dword_140C23964 = v13;
    PopSIdle = v11;
    if ( !PopPlatformAoAc )
    {
      if ( dword_140C2396C )
      {
        dword_140C23968 += PopIdleScanInterval;
        PopDiagTraceIdleCheck(v14, (unsigned int)v13, v11);
        if ( !PopPlatformAoAc
          && PopPreSleepNotificationSeconds + 120 <= (unsigned int)dword_140C2396C
          && dword_140C23968 + PopPreSleepNotificationSeconds >= (unsigned int)dword_140C2396C
          && !PopIsAboutToSleep )
        {
          PopIsAboutToSleep = 1;
          PopQueueWorkItem((__int64)&PopPreSleepNotifyWorkItem, DelayedWorkQueue);
        }
      }
    }
  }
  v20 = qword_140CFC848[0];
  v19 = &KeActiveProcessors;
  qword_140C23998 = v4;
  byte_140C23995 = 1;
  v21 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v17, &v19) )
    *(_DWORD *)(KiProcessorBlock[v17] + 32988) = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v17] + 24) + 652LL);
LABEL_36:
  PopGetPolicyWorker(PopPlatformAoAc != 0 ? 128 : 8);
  return PopCheckForWork();
}
