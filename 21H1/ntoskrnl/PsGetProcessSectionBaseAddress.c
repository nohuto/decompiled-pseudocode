/*
 * XREFs of PsGetProcessSectionBaseAddress @ 0x140203270
 * Callers:
 *     EtwpQueryProcessOtherInfo @ 0x1405D8F68 (EtwpQueryProcessOtherInfo.c)
 *     PopEtGetProcessImageInfo @ 0x1406C741C (PopEtGetProcessImageInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSectionBaseAddress(__int64 a1)
{
  return *(_QWORD *)(a1 + 1312);
}
