/*
 * XREFs of PsSetLoadImageNotifyRoutine @ 0x140790550
 * Callers:
 *     EtwpCoverageSamplerStart @ 0x1409499BC (EtwpCoverageSamplerStart.c)
 * Callees:
 *     PsSetLoadImageNotifyRoutineEx @ 0x1407905A0 (PsSetLoadImageNotifyRoutineEx.c)
 */

NTSTATUS __stdcall PsSetLoadImageNotifyRoutine(PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine)
{
  return PsSetLoadImageNotifyRoutineEx(NotifyRoutine, 0LL);
}
