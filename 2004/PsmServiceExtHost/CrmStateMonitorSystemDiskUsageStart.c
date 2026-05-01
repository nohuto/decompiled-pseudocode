/*
 * XREFs of CrmStateMonitorSystemDiskUsageStart @ 0x180043658
 * Callers:
 *     CrmStateMonitorStart @ 0x18002B120 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmRegisterToStateMonitor @ 0x18002AE58 (CrmRegisterToStateMonitor.c)
 *     CrmStateMonitorStateSizeGet @ 0x18002BCFC (CrmStateMonitorStateSizeGet.c)
 *     CrmStateMonitorSystemDiskUsageIndexGet @ 0x1800436E0 (CrmStateMonitorSystemDiskUsageIndexGet.c)
 *     memcpy_0 @ 0x180046502 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorSystemDiskUsageStart(__int64 a1)
{
  _DWORD *v2; // rdx
  int v3; // ecx
  unsigned int v4; // eax
  const void *v5; // rdx
  void *v6; // r9
  __int64 result; // rax

  v2 = (_DWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 40) = a1 + 56;
  v3 = *(_DWORD *)a1;
  *v2 = 100;
  v4 = CrmStateMonitorStateSizeGet(v3);
  memcpy_0(v6, v5, v4);
  result = CrmStateMonitorSystemDiskUsageIndexGet(a1 + 96);
  if ( (_DWORD)result == -1073283071 )
    return 0LL;
  if ( (int)result >= 0 )
  {
    result = TpAllocTimer(a1 + 88, CrmStateMonitorSystemDiskUsageTimerCallback, a1, 0LL);
    if ( (int)result >= 0 )
      return CrmRegisterToStateMonitor(a1 + 64, 8);
  }
  return result;
}
