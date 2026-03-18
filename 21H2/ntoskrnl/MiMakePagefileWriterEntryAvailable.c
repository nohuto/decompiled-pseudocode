/*
 * XREFs of MiMakePagefileWriterEntryAvailable @ 0x14025B8B0
 * Callers:
 *     MiWriteComplete @ 0x14028C230 (MiWriteComplete.c)
 *     MiGatherPagefilePages @ 0x14037AFC0 (MiGatherPagefilePages.c)
 *     MiModifiedPageWriter @ 0x1403CFD20 (MiModifiedPageWriter.c)
 *     MiPageFileNoFreeSpace @ 0x14059CCB4 (MiPageFileNoFreeSpace.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiMakePagefileWriterEntryAvailable(_QWORD *a1)
{
  _QWORD *v1; // r8
  _QWORD *result; // rax

  v1 = (_QWORD *)(a1[24] + 928LL);
  if ( !_bittest16((const signed __int16 *)(a1[18] + 204LL), 0xBu) )
  {
    result = *(_QWORD **)(a1[24] + 936LL);
    if ( (_QWORD *)*result == v1 )
    {
      *a1 = v1;
      a1[1] = result;
      *result = a1;
      v1[1] = a1;
      return result;
    }
FatalListEntryError_25:
    __fastfail(3u);
  }
  result = (_QWORD *)*v1;
  if ( *(_QWORD **)(*v1 + 8LL) != v1 )
    goto FatalListEntryError_25;
  *a1 = result;
  a1[1] = v1;
  result[1] = a1;
  *v1 = a1;
  return result;
}
