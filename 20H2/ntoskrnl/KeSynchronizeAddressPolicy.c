/*
 * XREFs of KeSynchronizeAddressPolicy @ 0x140320DA4
 * Callers:
 *     PspDisablePrimaryTokenExchange @ 0x1406933A0 (PspDisablePrimaryTokenExchange.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x1402BF8E0 (KeCopyAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402BF930 (KeRemoveProcessorAffinityEx.c)
 *     KiIpiSendPacket @ 0x1402EA750 (KiIpiSendPacket.c)
 *     KeCountSetBitsAffinityEx @ 0x1402EADD0 (KeCountSetBitsAffinityEx.c)
 *     KiSynchronizeAddressPolicyTarget @ 0x140320F20 (KiSynchronizeAddressPolicyTarget.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140411300 (memset.c)
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
      KiIpiSendPacket(0, (int)v12, (__int64)KiSynchronizeAddressPolicyTarget, 1LL, 0LL, 0LL);
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
