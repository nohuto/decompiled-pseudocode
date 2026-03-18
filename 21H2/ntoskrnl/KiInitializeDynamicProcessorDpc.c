/*
 * XREFs of KiInitializeDynamicProcessorDpc @ 0x140A69470
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     KiIpiSendPacket @ 0x1402F38C4 (KiIpiSendPacket.c)
 *     KeSetAffinityProcess @ 0x1403DAC1C (KeSetAffinityProcess.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KiReconfigureSubNodeSchedulingInformation @ 0x1405692F8 (KiReconfigureSubNodeSchedulingInformation.c)
 *     KeSignalCallDpcSynchronize @ 0x14056F9F0 (KeSignalCallDpcSynchronize.c)
 *     KiConfigureSchedulingInformation @ 0x140A59154 (KiConfigureSchedulingInformation.c)
 *     KiInitializeProcessor @ 0x140A5943C (KiInitializeProcessor.c)
 *     KiConfigureProcessorBlock @ 0x140A59D28 (KiConfigureProcessorBlock.c)
 *     KeRestoreMtrrBroadcast @ 0x140A5A248 (KeRestoreMtrrBroadcast.c)
 *     KiUpdateNumberProcessors @ 0x140A69694 (KiUpdateNumberProcessors.c)
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
  _DWORD v19[68]; // [rsp+30h] [rbp-138h] BYREF

  memset(&v19[2], 0, 0x100uLL);
  if ( (unsigned int)KeSignalCallDpcSynchronize(a4, v7, v8, v9) )
  {
    KiUpdateNumberProcessors(*((unsigned int *)*a2 + 9));
    KiInitializeProcessor((__int64)*a2);
    KiConfigureProcessorBlock((__int64)*a2);
    KeSetAffinityProcess((__int64)PsInitialSystemProcess, 0, (unsigned __int16 *)KeActiveProcessors);
    v19[0] = 2097153;
    memset(&v19[1], 0, 0x104uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)v19, *((_DWORD *)*a2 + 9));
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
    ((void (__fastcall *)(_QWORD, char *))off_140C01D00[0])(0LL, (char *)*a2 + 36);
    KiConfigureSchedulingInformation((__int64)*a2, 1);
    KiReconfigureSubNodeSchedulingInformation((*a2)[24], *a2);
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
