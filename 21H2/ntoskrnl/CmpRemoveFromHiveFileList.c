/*
 * XREFs of CmpRemoveFromHiveFileList @ 0x1408735AC
 * Callers:
 *     CmpCompleteUnloadKey @ 0x1405E0268 (CmpCompleteUnloadKey.c)
 * Callees:
 *     ZwDeleteValueKey @ 0x1403FC060 (ZwDeleteValueKey.c)
 */

NTSTATUS __fastcall CmpRemoveFromHiveFileList(__int64 a1)
{
  return ZwDeleteValueKey(CmpHiveFileListHandle, (PUNICODE_STRING)(a1 + 1848));
}
