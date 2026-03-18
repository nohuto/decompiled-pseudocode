/*
 * XREFs of CmpCopyName @ 0x14069818C
 * Callers:
 *     CmpCreateChild @ 0x140696A68 (CmpCreateChild.c)
 *     CmpAddValueKeyNew @ 0x14069804C (CmpAddValueKeyNew.c)
 *     CmpCreateHiveRootCell @ 0x140779400 (CmpCreateHiveRootCell.c)
 *     CmRenameKey @ 0x140867FFC (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x140869F40 (CmpAddValueKeyTombstone.c)
 *     CmpCreateEmptyKey @ 0x14086B794 (CmpCreateEmptyKey.c)
 *     CmpCreateRootNode @ 0x140A5349C (CmpCreateRootNode.c)
 * Callees:
 *     memmove @ 0x140408CC0 (memmove.c)
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
