/*
 * XREFs of CrmStateMonitorDelayedCsStart @ 0x1800441CC
 * Callers:
 *     CrmStateMonitorStart @ 0x18002B120 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmRegisterToStateMonitor @ 0x18002AE58 (CrmRegisterToStateMonitor.c)
 *     CrmStateMonitorStateSizeGet @ 0x18002BCFC (CrmStateMonitorStateSizeGet.c)
 *     memcpy_0 @ 0x180046502 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorDelayedCsStart(__int64 a1)
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
  *v2 = 0;
  v4 = CrmStateMonitorStateSizeGet(v3);
  memcpy_0(v6, v5, v4);
  result = TpAllocTimer(a1 + 88, CrmStateMonitorDelayedCsTimerCallback, a1, 0LL);
  if ( (int)result >= 0 )
  {
    result = CrmRegisterToStateMonitor(a1 + 64, 8);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
