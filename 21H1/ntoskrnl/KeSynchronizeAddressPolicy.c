/*
 * XREFs of KeSynchronizeAddressPolicy @ 0x1402C13BC
 * Callers:
 *     PspDisablePrimaryTokenExchange @ 0x14064C7FC (PspDisablePrimaryTokenExchange.c)
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x1402778F0 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x140277930 (KeCopyAffinityEx.c)
 *     KiSynchronizeAddressPolicyTarget @ 0x140319E70 (KiSynchronizeAddressPolicyTarget.c)
 *     KiIpiSendPacket @ 0x140359100 (KiIpiSendPacket.c)
 *     KeCountSetBitsAffinityEx @ 0x140359670 (KeCountSetBitsAffinityEx.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140408F80 (memset.c)
 */

void *__fastcall KeSynchronizeAddressPolicy(__int64 a1)
{
  void *result; // rax
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbp
  int v5; // ebx
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v7; // al
  struct _KPRCB *v8; // r9
  _DWORD *v9; // r8
  int v10; // eax
  bool v11; // zf
  unsigned __int16 v12[88]; // [rsp+30h] [rbp-C8h] BYREF

  result = memset(v12, 0, 0xA8uLL);
  if ( *(_BYTE *)(a1 + 912) == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    KeCopyAffinityEx((__int64)v12, (unsigned __int16 *)(a1 + 368));
    KeRemoveProcessorAffinityEx(v12, CurrentPrcb->Number);
    v5 = KeCountSetBitsAffinityEx(v12);
    KiSynchronizeAddressPolicyTarget(0LL, 0LL, 0LL, 0LL);
    if ( v5 )
    {
      KiIpiSendPacket(0, (unsigned int)v12, (unsigned int)KiSynchronizeAddressPolicyTarget, 1, 0LL, 0LL);
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
    result = (void *)CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
