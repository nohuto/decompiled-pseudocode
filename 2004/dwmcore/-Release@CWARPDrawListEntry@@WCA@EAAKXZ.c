/*
 * XREFs of ?Release@CWARPDrawListEntry@@WCA@EAAKXZ @ 0x1800F0A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CWARPDrawListEntry::Release(__int64 a1)
{
  return CStateSettingDrawListEntry::Release((CStateSettingDrawListEntry *)(a1 - 32));
}
