/*
 * XREFs of PsGetProcessSectionBaseAddress @ 0x14023DB80
 * Callers:
 *     PopEtGetProcessImageInfo @ 0x140630190 (PopEtGetProcessImageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x140632CF8 (EtwpQueryProcessOtherInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSectionBaseAddress(__int64 a1)
{
  return *(_QWORD *)(a1 + 1312);
}
