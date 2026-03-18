/*
 * XREFs of KeSynchronizeSecurityDomain @ 0x14032E1A4
 * Callers:
 *     PspCombineSecurityDomains @ 0x140699828 (PspCombineSecurityDomains.c)
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x1402BF8E0 (KeCopyAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402BF930 (KeRemoveProcessorAffinityEx.c)
 *     KiIpiSendPacket @ 0x1402EA750 (KiIpiSendPacket.c)
 *     KeCountSetBitsAffinityEx @ 0x1402EADD0 (KeCountSetBitsAffinityEx.c)
 *     KiSynchronizeSecurityDomainTarget @ 0x140331150 (KiSynchronizeSecurityDomainTarget.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140411300 (memset.c)
 */

__int64 __fastcall KeSynchronizeSecurityDomain(_KPROCESS *a1)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rsi
  int v4; // ebp
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v7; // al
  struct _KPRCB *v8; // r9
  _DWORD *v9; // r8
  int v10; // eax
  bool v11; // zf
  unsigned __int16 v12[88]; // [rsp+30h] [rbp-C8h] BYREF

  memset(v12, 0, 0xA8uLL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KeCopyAffinityEx((__int64)v12, &a1->ActiveProcessors.Count);
  KeRemoveProcessorAffinityEx(v12, CurrentPrcb->Number);
  v4 = KeCountSetBitsAffinityEx(v12);
  if ( a1 == KeGetCurrentThread()->ApcState.Process )
    KiSynchronizeSecurityDomainTarget(0LL, 0LL, 0LL, 0LL);
  if ( v4 )
  {
    KiIpiSendPacket(0, (int)v12, (__int64)KiSynchronizeSecurityDomainTarget, 1LL, 0LL, 0LL);
    while ( CurrentPrcb->PacketBarrier )
      _mm_pause();
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v7 = KeGetCurrentIrql();
      if ( v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
      {
        v8 = KeGetCurrentPrcb();
        v9 = v8->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v11 = (v10 & v9[5]) == 0;
        v9[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(v8);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
