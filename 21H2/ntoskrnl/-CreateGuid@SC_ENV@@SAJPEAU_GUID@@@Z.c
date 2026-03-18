/*
 * XREFs of ?CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z @ 0x140930370
 * Callers:
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x1406503B0 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     ?WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x140651D6C (-WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     ExUuidCreate @ 0x140681B30 (ExUuidCreate.c)
 */

NTSTATUS __fastcall SC_ENV::CreateGuid(struct _GUID *a1)
{
  return ExUuidCreate(a1);
}
