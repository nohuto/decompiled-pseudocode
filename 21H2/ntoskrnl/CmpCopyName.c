/*
 * XREFs of CmpCopyName @ 0x14070A0E0
 * Callers:
 *     CmpCreateChild @ 0x140667AD4 (CmpCreateChild.c)
 *     CmpAddValueKeyNew @ 0x140709FA0 (CmpAddValueKeyNew.c)
 *     CmpCreateHiveRootCell @ 0x14078DBF0 (CmpCreateHiveRootCell.c)
 *     CmRenameKey @ 0x14086CA04 (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x14086E4EC (CmpAddValueKeyTombstone.c)
 *     CmpCreateRootNode @ 0x140A5B0B4 (CmpCreateRootNode.c)
 * Callees:
 *     memmove @ 0x140413F40 (memmove.c)
 */

__int64 __fastcall CmpCopyName(_BYTE *a1, _QWORD *a2)
{
  int v2; // r8d
  __int64 v3; // r9
  _WORD *v5; // rdx

  v2 = *(unsigned __int16 *)a2;
  v3 = 0LL;
  if ( (v2 & 0xFFFFFFFE) == 0 )
    return (unsigned __int16)v2 >> 1;
  while ( 1 )
  {
    v5 = (_WORD *)a2[1];
    if ( v5[v3] > 0xFFu )
      break;
    a1[v3] = v5[v3];
    v3 = (unsigned int)(v3 + 1);
    LOWORD(v2) = *(_WORD *)a2;
    if ( (unsigned int)v3 >= *(unsigned __int16 *)a2 >> 1 )
      return (unsigned __int16)v2 >> 1;
  }
  memmove(a1, v5, (unsigned __int16)v2);
  return *(unsigned __int16 *)a2;
}
