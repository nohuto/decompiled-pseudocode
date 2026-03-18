/*
 * XREFs of CmpNameSize @ 0x1406E283C
 * Callers:
 *     CmpCreateChild @ 0x14069CFA8 (CmpCreateChild.c)
 *     CmpAddValueKeyNew @ 0x14069E11C (CmpAddValueKeyNew.c)
 *     CmpCreateHiveRootCell @ 0x14077B810 (CmpCreateHiveRootCell.c)
 *     CmRenameKey @ 0x14086934C (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x14086B290 (CmpAddValueKeyTombstone.c)
 *     CmpCreateEmptyKey @ 0x14086CAE4 (CmpCreateEmptyKey.c)
 *     CmpCreateRootNode @ 0x140A59408 (CmpCreateRootNode.c)
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
