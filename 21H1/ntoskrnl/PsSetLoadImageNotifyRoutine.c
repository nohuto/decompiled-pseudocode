/*
 * XREFs of PsSetLoadImageNotifyRoutine @ 0x140787E50
 * Callers:
 *     EtwpCoverageSamplerStart @ 0x140942988 (EtwpCoverageSamplerStart.c)
 * Callees:
 *     PsSetLoadImageNotifyRoutineEx @ 0x140787EA0 (PsSetLoadImageNotifyRoutineEx.c)
 */

NTSTATUS __stdcall PsSetLoadImageNotifyRoutine(PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine)
{
  return PsSetLoadImageNotifyRoutineEx(NotifyRoutine, 0LL);
}
