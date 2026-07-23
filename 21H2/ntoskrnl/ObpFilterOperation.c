/*
 * XREFs of ObpFilterOperation @ 0x14021474C
 * Callers:
 *     ObCompleteObjectDuplication @ 0x1405E36D0 (ObCompleteObjectDuplication.c)
 *     ObDuplicateObject @ 0x1406E4910 (ObDuplicateObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall ObpFilterOperation(__int64 a1)
{
  return (*(_BYTE *)(a1 + 66) & 0x40) != 0 && *(_QWORD *)(a1 + 200) != a1 + 200;
}
