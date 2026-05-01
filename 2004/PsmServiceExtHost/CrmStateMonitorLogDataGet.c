/*
 * XREFs of CrmStateMonitorLogDataGet @ 0x18002BC40
 * Callers:
 *     CrmStateMonitorGPUUsageTimerCallback @ 0x18002B570 (CrmStateMonitorGPUUsageTimerCallback.c)
 *     CrmStateMonitorStateSet @ 0x18002B6B4 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorCPUUsageTimerCallback @ 0x18002B790 (CrmStateMonitorCPUUsageTimerCallback.c)
 *     CrmStateMonitorSystemDiskUsageTimerCallback @ 0x18002B900 (CrmStateMonitorSystemDiskUsageTimerCallback.c)
 *     CrmLogStateMonitorRundown @ 0x18003B650 (CrmLogStateMonitorRundown.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x18002BCFC (CrmStateMonitorStateSizeGet.c)
 *     memcpy_0 @ 0x180046502 (memcpy_0.c)
 */

const void *__fastcall CrmStateMonitorLogDataGet(const void **a1, __int64 a2, const void *a3)
{
  __int64 v6; // rdx
  unsigned int v7; // ebp
  const void *v8; // rdx
  BOOL v9; // ecx
  const void *result; // rax

  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_OWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  v7 = CrmStateMonitorStateSizeGet(*(unsigned int *)a1);
  memcpy_0((void *)(v6 + 16), a1[5], v7);
  v8 = a3;
  if ( !a3 )
    v8 = a1[5];
  memcpy_0((void *)a2, v8, v7);
  v9 = 1;
  if ( *(_DWORD *)a1 == 5 && a3 )
    v9 = *(_DWORD *)a2 == 20 * (*(_DWORD *)a2 / 0x14u);
  *(_QWORD *)(a2 + 40) = a1[6];
  result = (const void *)MEMORY[0x7FFE0008];
  *(_QWORD *)(a2 + 32) = MEMORY[0x7FFE0008];
  if ( v9 )
    a1[6] = result;
  else
    *(_DWORD *)(a2 + 48) = 1;
  return result;
}
