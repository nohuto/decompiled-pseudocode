/*
 * XREFs of ?ChangeState@TrackedWorkloadMonitor@@AEAAXW4TrackedWorkloadState@@PEAVRollingStats@@I@Z @ 0x1C006E004
 * Callers:
 *     ?Boost@TrackedWorkloadMonitor@@QEAAXPEAVRollingStats@@@Z @ 0x1C006DFCC (-Boost@TrackedWorkloadMonitor@@QEAAXPEAVRollingStats@@@Z.c)
 *     ?GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z @ 0x1C006E1D8 (-GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z.c)
 * Callees:
 *     ?Update@RollingStats@@IEAAXXZ @ 0x1C006E5A0 (-Update@RollingStats@@IEAAXXZ.c)
 */

__int64 __fastcall TrackedWorkloadMonitor::ChangeState(__int64 a1, int a2, RollingStats *a3, int a4)
{
  unsigned int v7; // r10d
  __int64 v8; // rbx
  __int64 result; // rax

  v7 = (*(_DWORD *)(a1 + 216) + 1) % 5u;
  *(_DWORD *)(a1 + 216) = v7;
  v8 = 5LL * v7;
  *(_DWORD *)(a1 + 8 * v8 + 44) = *(_DWORD *)(a1 + 220);
  *(_BYTE *)(a1 + 8 * v8 + 48) = 1;
  *(_DWORD *)(a1 + 8 * v8 + 16) = a2;
  RollingStats::Update(a3);
  *(_QWORD *)(a1 + 8 * v8 + 24) = *((_QWORD *)a3 + 4);
  RollingStats::Update(a3);
  result = *((_QWORD *)a3 + 5);
  *(_DWORD *)(a1 + 8 * v8 + 40) = a4;
  *(_QWORD *)(a1 + 8 * v8 + 32) = result;
  *(_BYTE *)(a1 + 8 * v8 + 49) = 0;
  return result;
}
