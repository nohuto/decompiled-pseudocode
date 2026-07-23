/*
 * XREFs of KiAcquireInterruptConnectLock @ 0x140374890
 * Callers:
 *     KeMaskInterrupt @ 0x140373D10 (KeMaskInterrupt.c)
 *     KiDisconnectInterruptCommon @ 0x140373E7C (KiDisconnectInterruptCommon.c)
 *     KiConnectInterrupt @ 0x14037470C (KiConnectInterrupt.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x140336D80 (KeSetSystemGroupAffinityThread.c)
 */

struct _KPRCB *__fastcall KiAcquireInterruptConnectLock(int a1, unsigned __int8 *a2, _GROUP_AFFINITY *a3)
{
  __int64 v4; // rcx
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *result; // rax
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF

  Affinity = 0LL;
  v4 = KiProcessorBlock[a1];
  Affinity.Group = *(unsigned __int8 *)(v4 + 208);
  Affinity.Mask = *(_QWORD *)(v4 + 200);
  KeSetSystemGroupAffinityThread(&Affinity, a3);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  result = (struct _KPRCB *)(unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    result = KeGetCurrentPrcb();
    *((_DWORD *)result->SchedulerAssist + 5) |= ~((unsigned __int16)(1LL << (CurrentIrql + 1)) - 1) & 0xFFFC;
  }
  *a2 = CurrentIrql;
  return result;
}
