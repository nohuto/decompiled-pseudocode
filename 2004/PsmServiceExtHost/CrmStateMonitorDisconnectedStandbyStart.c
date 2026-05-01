/*
 * XREFs of CrmStateMonitorDisconnectedStandbyStart @ 0x180044498
 * Callers:
 *     CrmStateMonitorStart @ 0x18002B120 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmRegisterToStateMonitor @ 0x18002AE58 (CrmRegisterToStateMonitor.c)
 *     CrmStateMonitorStateSizeGet @ 0x18002BCFC (CrmStateMonitorStateSizeGet.c)
 *     memcpy_0 @ 0x180046502 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorDisconnectedStandbyStart(__int64 a1)
{
  unsigned int v2; // eax
  const void *v3; // rdx
  void *v4; // r9
  __int64 result; // rax

  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 40) = a1 + 56;
  v2 = CrmStateMonitorStateSizeGet(*(_DWORD *)a1);
  memcpy_0(v4, v3, v2);
  result = CrmRegisterToStateMonitor(a1 + 64, 8);
  if ( (int)result >= 0 )
    return CrmRegisterToStateMonitor(a1 + 88, 30);
  return result;
}
