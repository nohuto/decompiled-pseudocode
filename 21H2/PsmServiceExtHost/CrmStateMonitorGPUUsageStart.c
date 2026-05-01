/*
 * XREFs of CrmStateMonitorGPUUsageStart @ 0x1800383EC
 * Callers:
 *     CrmStateMonitorStart @ 0x18002B290 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmRegisterToStateMonitor @ 0x18002AFC8 (CrmRegisterToStateMonitor.c)
 *     CrmStateMonitorStateSizeGet @ 0x18002BE6C (CrmStateMonitorStateSizeGet.c)
 *     memcpy_0 @ 0x180047B22 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorGPUUsageStart(__int64 a1)
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
  result = TpAllocTimer(a1 + 88, CrmStateMonitorGPUUsageTimerCallback, a1, 0LL);
  if ( (int)result >= 0 )
    return CrmRegisterToStateMonitor(a1 + 64, 8);
  return result;
}
