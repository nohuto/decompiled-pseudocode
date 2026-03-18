/*
 * XREFs of PsSetLoadImageNotifyRoutine @ 0x140782430
 * Callers:
 *     EtwpCoverageSamplerStart @ 0x140943BFC (EtwpCoverageSamplerStart.c)
 * Callees:
 *     PsSetLoadImageNotifyRoutineEx @ 0x140782480 (PsSetLoadImageNotifyRoutineEx.c)
 */

NTSTATUS __stdcall PsSetLoadImageNotifyRoutine(PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine)
{
  return PsSetLoadImageNotifyRoutineEx(NotifyRoutine, 0LL);
}
