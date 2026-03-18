/*
 * XREFs of ExIsSoftBoot @ 0x1403A5420
 * Callers:
 *     CmpReorganizeHive @ 0x14063B384 (CmpReorganizeHive.c)
 *     PoClearTransitionMarker @ 0x140783274 (PoClearTransitionMarker.c)
 *     PoInitHiberServices @ 0x140783B18 (PoInitHiberServices.c)
 *     IoAcquireKsrPersistentMemory @ 0x140898AC0 (IoAcquireKsrPersistentMemory.c)
 *     IoQueryKsrPersistentMemorySize @ 0x140898D30 (IoQueryKsrPersistentMemorySize.c)
 *     EtwpSavePersistedLoggers @ 0x140945C80 (EtwpSavePersistedLoggers.c)
 *     BapdRecordFirmwareBootStats @ 0x140997F00 (BapdRecordFirmwareBootStats.c)
 * Callees:
 *     <none>
 */

bool ExIsSoftBoot()
{
  return (qword_140C19598 & 4) != 0;
}
