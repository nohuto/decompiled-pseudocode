/*
 * XREFs of ?StartTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x180050914
 * Callers:
 *     ?BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x180051EA8 (-BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 * Callees:
 *     ?SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z @ 0x180050B14 (-SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z @ 0x180050B70 (-SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z.c)
 */

void __fastcall XamlLauncherState::StartTrackingCpuUsageOfCriticalProcesses(XamlLauncherState *this)
{
  *((_QWORD *)this + 129) = 0LL;
  XamlLauncherState::SnapshotCpuCyclesUsedByStartMenu(this, (unsigned __int64 *)this + 129);
  *((_QWORD *)this + 130) = 0LL;
  XamlLauncherState::SnapshotCpuCyclesUsedByCortana(this, (unsigned __int64 *)this + 130);
  *((_QWORD *)this + 131) = 0LL;
  XamlLauncherState::SnapshotCpuCyclesUsedBySiHost(this, (unsigned __int64 *)this + 131);
}
