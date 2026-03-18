/*
 * XREFs of PsGetProcessSectionBaseAddress @ 0x14027C630
 * Callers:
 *     EtwpQueryProcessOtherInfo @ 0x14065F268 (EtwpQueryProcessOtherInfo.c)
 *     PopEtGetProcessImageInfo @ 0x1406E7D14 (PopEtGetProcessImageInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSectionBaseAddress(__int64 a1)
{
  return *(_QWORD *)(a1 + 1312);
}
