/*
 * XREFs of _RtlCheckForOrphanedCriticalSections@4 @ 0x4B2E84F0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlCheckHeldCriticalSections@8 @ 0x4B2E8510 (_RtlCheckHeldCriticalSections@8.c)
 */

void __cdecl RtlCheckForOrphanedCriticalSections(HANDLE ThreadHandle)
{
  RtlCheckHeldCriticalSections(ThreadHandle);
}
