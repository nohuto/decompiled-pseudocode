/*
 * XREFs of MiMakePagefileWriterEntryAvailable @ 0x14035D854
 * Callers:
 *     MiGatherPagefilePages @ 0x1402F2788 (MiGatherPagefilePages.c)
 *     MiWriteComplete @ 0x1402F79F0 (MiWriteComplete.c)
 *     MiModifiedPageWriter @ 0x1403BC140 (MiModifiedPageWriter.c)
 *     MiPageFileNoFreeSpace @ 0x14053E764 (MiPageFileNoFreeSpace.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiMakePagefileWriterEntryAvailable(_QWORD *a1)
{
  _QWORD *v1; // r8
  _QWORD *result; // rax

  v1 = (_QWORD *)(a1[24] + 904LL);
  if ( (*(_WORD *)(a1[18] + 204LL) & 0x800) == 0 )
  {
    result = *(_QWORD **)(a1[24] + 912LL);
    if ( (_QWORD *)*result == v1 )
    {
      *a1 = v1;
      a1[1] = result;
      *result = a1;
      v1[1] = a1;
      return result;
    }
FatalListEntryError_34:
    __fastfail(3u);
  }
  result = (_QWORD *)*v1;
  if ( *(_QWORD **)(*v1 + 8LL) != v1 )
    goto FatalListEntryError_34;
  *a1 = result;
  a1[1] = v1;
  result[1] = a1;
  *v1 = a1;
  return result;
}
