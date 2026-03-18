/*
 * XREFs of KiInitializeDynamicProcessorDpc @ 0x1409B2490
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287E00 (KeAddProcessorAffinityEx.c)
 *     KiIpiSendPacket @ 0x1402EA750 (KiIpiSendPacket.c)
 *     KeSetAffinityProcess @ 0x1403CA8FC (KeSetAffinityProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 *     KiReconfigureNodeSchedulingInformation @ 0x140510A78 (KiReconfigureNodeSchedulingInformation.c)
 *     KeSignalCallDpcSynchronize @ 0x1405182A0 (KeSignalCallDpcSynchronize.c)
 *     KiInitializeProcessor @ 0x1409A1900 (KiInitializeProcessor.c)
 *     KeRestoreMtrrBroadcast @ 0x1409A1B40 (KeRestoreMtrrBroadcast.c)
 *     KiConfigureProcessorBlock @ 0x1409A1D50 (KiConfigureProcessorBlock.c)
 *     KiConfigureSchedulingInformation @ 0x1409A255C (KiConfigureSchedulingInformation.c)
 *     KiUpdateNumberProcessors @ 0x1409B26B4 (KiUpdateNumberProcessors.c)
 */

__int64 __fastcall KiInitializeDynamicProcessorDpc(__int64 a1, _QWORD **a2, volatile signed __int32 *a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  _DWORD *v15; // r9
  int v16; // eax
  bool v17; // zf
  __int64 result; // rax
  _DWORD v19[44]; // [rsp+30h] [rbp-D8h] BYREF

  memset(&v19[2], 0, 0xA0uLL);
  if ( (unsigned int)KeSignalCallDpcSynchronize(a4, v7, v8, v9) )
  {
    KiUpdateNumberProcessors(*((unsigned int *)*a2 + 9));
    KiInitializeProcessor((__int64)*a2);
    KiConfigureProcessorBlock((__int64)*a2);
    KeSetAffinityProcess((__int64)PsInitialSystemProcess, 0, (unsigned __int16 *)KeActiveProcessors);
    v19[0] = 1310721;
    memset(&v19[1], 0, 0xA4uLL);
    KeAddProcessorAffinityEx(v19, *((_DWORD *)*a2 + 9));
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
    }
    KiIpiSendPacket(0, (int)v19, (__int64)KiInitDynamicProcessorIpi, 0LL, 0LL, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    while ( CurrentPrcb->PacketBarrier )
      _mm_pause();
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v13 = KeGetCurrentIrql();
        if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
        {
          v14 = KeGetCurrentPrcb();
          v15 = v14->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v17 = (v16 & v15[5]) == 0;
          v15[5] &= v16;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick((__int64)v14);
        }
      }
    }
    __writecr8(CurrentIrql);
    KeRestoreMtrrBroadcast();
    ((void (__fastcall *)(_QWORD, char *))off_140C006B0[0])(0LL, (char *)*a2 + 36);
    KiConfigureSchedulingInformation((__int64)*a2, 1);
    KiReconfigureNodeSchedulingInformation((*a2)[24], *a2);
    KiBarrierWait = 0;
    *((_BYTE *)a2 + 8) = 1;
  }
  else
  {
    while ( !*((_BYTE *)a2 + 8) )
      _mm_pause();
  }
  result = KiConfigureSchedulingInformation((__int64)KeGetCurrentPrcb(), 1);
  _InterlockedDecrement(a3);
  return result;
}
