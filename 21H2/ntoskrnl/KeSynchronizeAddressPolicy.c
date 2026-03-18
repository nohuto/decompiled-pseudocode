/*
 * XREFs of KeSynchronizeAddressPolicy @ 0x14024AC78
 * Callers:
 *     PspDisablePrimaryTokenExchange @ 0x140702AF8 (PspDisablePrimaryTokenExchange.c)
 * Callees:
 *     KiSynchronizeAddressPolicyTarget @ 0x14024AE10 (KiSynchronizeAddressPolicyTarget.c)
 *     KiIpiSendPacket @ 0x1402F38C4 (KiIpiSendPacket.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402F4410 (KeRemoveProcessorAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x1402FFAC0 (KeCountSetBitsAffinityEx.c)
 *     KiCopyAffinityEx @ 0x140300030 (KiCopyAffinityEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
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
  _DWORD v12[68]; // [rsp+30h] [rbp-138h] BYREF

  result = memset(&v12[2], 0, 0x100uLL);
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
    v12[0] = 2097153;
    memset(&v12[1], 0, 0x104uLL);
    KiCopyAffinityEx(v12, 32LL, a1 + 368);
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
