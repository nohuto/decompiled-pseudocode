/*
 * XREFs of RtlCheckForOrphanedCriticalSections @ 0x18007D560
 * Callers:
 *     <none>
 * Callees:
 *     RtlCheckHeldCriticalSections @ 0x18007D590 (RtlCheckHeldCriticalSections.c)
 */

void __cdecl RtlCheckForOrphanedCriticalSections(HANDLE ThreadHandle)
{
  RtlCheckHeldCriticalSections(ThreadHandle);
}
