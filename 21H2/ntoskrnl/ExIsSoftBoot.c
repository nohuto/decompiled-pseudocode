/*
 * XREFs of ExIsSoftBoot @ 0x14039B470
 * Callers:
 *     CmpReorganizeHive @ 0x140720AB8 (CmpReorganizeHive.c)
 *     PoClearTransitionMarker @ 0x1407903D4 (PoClearTransitionMarker.c)
 *     PoInitHiberServices @ 0x140790C78 (PoInitHiberServices.c)
 *     IoAcquireKsrPersistentMemory @ 0x14089BBC0 (IoAcquireKsrPersistentMemory.c)
 *     IoQueryKsrPersistentMemorySize @ 0x14089BE30 (IoQueryKsrPersistentMemorySize.c)
 *     EtwpSavePersistedLoggers @ 0x14094920C (EtwpSavePersistedLoggers.c)
 *     BapdRecordFirmwareBootStats @ 0x140999260 (BapdRecordFirmwareBootStats.c)
 * Callees:
 *     <none>
 */

bool ExIsSoftBoot()
{
  return (qword_140C19858 & 4) != 0;
}
