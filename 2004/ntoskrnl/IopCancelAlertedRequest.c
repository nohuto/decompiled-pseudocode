/*
 * XREFs of IopCancelAlertedRequest @ 0x14088DF6C
 * Callers:
 *     NtSetInformationFile @ 0x14028FD10 (NtSetInformationFile.c)
 *     IopWaitForSynchronousIo @ 0x14033CE0C (IopWaitForSynchronousIo.c)
 *     IopSynchronousServiceTail @ 0x140675860 (IopSynchronousServiceTail.c)
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 *     NtQueryInformationFile @ 0x1406780E0 (NtQueryInformationFile.c)
 *     IopSynchronousApiServiceTail @ 0x1406E826C (IopSynchronousApiServiceTail.c)
 *     IoSetInformation @ 0x140769B10 (IoSetInformation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeDelayExecutionThread @ 0x1402BC230 (KeDelayExecutionThread.c)
 *     IoCancelIrp @ 0x140347600 (IoCancelIrp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

NTSTATUS __fastcall IopCancelAlertedRequest(_DWORD *Object, PIRP Irp)
{
  unsigned __int8 CurrentIrql; // bl
  BOOLEAN v4; // si
  unsigned __int8 v5; // cl
  struct _KPRCB *v6; // r10
  _DWORD *v7; // r8
  int v8; // eax
  bool v9; // zf
  NTSTATUS result; // eax
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v14; // eax
  LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( Object[1] )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v11 = KeGetCurrentIrql();
        if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v9 = (v14 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v14;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  else
  {
    v4 = IoCancelIrp(Irp);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v5 = KeGetCurrentIrql();
        if ( v5 <= 0xFu && CurrentIrql <= 0xFu && v5 >= 2u )
        {
          v6 = KeGetCurrentPrcb();
          v7 = v6->SchedulerAssist;
          v8 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v9 = (v8 & v7[5]) == 0;
          v7[5] &= v8;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick((__int64)v6);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    if ( v4 )
    {
      Interval.QuadPart = -100000LL;
      while ( !Object[1] )
        result = KeDelayExecutionThread(0, 0, &Interval);
    }
    else
    {
      return KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
    }
  }
  return result;
}
