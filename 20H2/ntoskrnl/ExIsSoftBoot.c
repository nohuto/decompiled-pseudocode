/*
 * XREFs of ExIsSoftBoot @ 0x1403A7820
 * Callers:
 *     CmpReorganizeHive @ 0x1405DE58C (CmpReorganizeHive.c)
 *     PoClearTransitionMarker @ 0x140790C64 (PoClearTransitionMarker.c)
 *     PoInitHiberServices @ 0x140791508 (PoInitHiberServices.c)
 *     IoAcquireKsrPersistentMemory @ 0x14089E5F0 (IoAcquireKsrPersistentMemory.c)
 *     IoQueryKsrPersistentMemorySize @ 0x14089E860 (IoQueryKsrPersistentMemorySize.c)
 *     EtwpSavePersistedLoggers @ 0x14094BA40 (EtwpSavePersistedLoggers.c)
 *     BapdRecordFirmwareBootStats @ 0x14099DF40 (BapdRecordFirmwareBootStats.c)
 * Callees:
 *     <none>
 */

bool ExIsSoftBoot()
{
  return (qword_140C19698 & 4) != 0;
}
