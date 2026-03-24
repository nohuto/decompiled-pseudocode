/*
 * XREFs of CmpRemoveFromHiveFileList @ 0x14087344C
 * Callers:
 *     CmpCompleteUnloadKey @ 0x14071CB34 (CmpCompleteUnloadKey.c)
 * Callees:
 *     ZwDeleteValueKey @ 0x1403FBE80 (ZwDeleteValueKey.c)
 */

NTSTATUS __fastcall CmpRemoveFromHiveFileList(__int64 a1)
{
  return ZwDeleteValueKey(CmpHiveFileListHandle, (PUNICODE_STRING)(a1 + 1848));
}
