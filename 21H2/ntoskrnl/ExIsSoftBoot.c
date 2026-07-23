/*
 * XREFs of ExIsSoftBoot @ 0x14039B5C0
 * Callers:
 *     CmpReorganizeHive @ 0x1406F7F2C (CmpReorganizeHive.c)
 *     PoClearTransitionMarker @ 0x140791984 (PoClearTransitionMarker.c)
 *     PoInitHiberServices @ 0x140792228 (PoInitHiberServices.c)
 *     IoAcquireKsrPersistentMemory @ 0x14089BD20 (IoAcquireKsrPersistentMemory.c)
 *     IoQueryKsrPersistentMemorySize @ 0x14089BF90 (IoQueryKsrPersistentMemorySize.c)
 *     EtwpSavePersistedLoggers @ 0x1409493DC (EtwpSavePersistedLoggers.c)
 *     BapdRecordFirmwareBootStats @ 0x14099A260 (BapdRecordFirmwareBootStats.c)
 * Callees:
 *     <none>
 */

bool ExIsSoftBoot()
{
  return (qword_140C197B8 & 4) != 0;
}
