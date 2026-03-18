/*
 * XREFs of ExIsSoftBoot @ 0x140397F50
 * Callers:
 *     CmpReorganizeHive @ 0x140688F04 (CmpReorganizeHive.c)
 *     PoClearTransitionMarker @ 0x14077A86C (PoClearTransitionMarker.c)
 *     PoInitHiberServices @ 0x14077B118 (PoInitHiberServices.c)
 *     IoAcquireKsrPersistentMemory @ 0x1408977A0 (IoAcquireKsrPersistentMemory.c)
 *     IoQueryKsrPersistentMemorySize @ 0x140897A10 (IoQueryKsrPersistentMemorySize.c)
 *     EtwpSavePersistedLoggers @ 0x140944A10 (EtwpSavePersistedLoggers.c)
 *     BapdRecordFirmwareBootStats @ 0x1409948D0 (BapdRecordFirmwareBootStats.c)
 * Callees:
 *     <none>
 */

bool ExIsSoftBoot()
{
  return (qword_140C19738 & 4) != 0;
}
