/*
 * XREFs of CmpNameSize @ 0x1406C22BC
 * Callers:
 *     CmpCreateChild @ 0x140696A68 (CmpCreateChild.c)
 *     CmpAddValueKeyNew @ 0x14069804C (CmpAddValueKeyNew.c)
 *     CmpCreateHiveRootCell @ 0x140779400 (CmpCreateHiveRootCell.c)
 *     CmRenameKey @ 0x140867FFC (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x140869F40 (CmpAddValueKeyTombstone.c)
 *     CmpCreateEmptyKey @ 0x14086B794 (CmpCreateEmptyKey.c)
 *     CmpCreateRootNode @ 0x140A5349C (CmpCreateRootNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpNameSize(unsigned __int16 *a1)
{
  unsigned __int16 v1; // dx
  __int64 v2; // r8
  unsigned int v3; // r9d

  v1 = *a1;
  v2 = 0LL;
  v3 = *a1 >> 1;
  if ( v3 )
  {
    while ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * v2) <= 0xFFu )
    {
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= v3 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v1 >>= 1;
  }
  return v1;
}
