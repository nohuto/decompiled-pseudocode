/*
 * XREFs of ?CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z @ 0x14088A800
 * Callers:
 *     ?WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x1405C2558 (-WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x1405C3068 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 * Callees:
 *     ExUuidCreate @ 0x140657460 (ExUuidCreate.c)
 */

NTSTATUS __fastcall SC_ENV::CreateGuid(struct _GUID *a1)
{
  return ExUuidCreate(a1);
}
