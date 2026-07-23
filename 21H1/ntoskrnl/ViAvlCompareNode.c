/*
 * XREFs of ViAvlCompareNode @ 0x140379AE0
 * Callers:
 *     ViAvlCompareNodeUseSessionId @ 0x140379A90 (ViAvlCompareNodeUseSessionId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViAvlCompareNode(_RTL_AVL_TABLE *a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r10

  v3 = *a2;
  v4 = *a3;
  if ( *a2 < *a3 )
  {
    return v4 < v3 + a2[1] ? 2u : 0;
  }
  else if ( *a2 == *a3 )
  {
    return 2;
  }
  else
  {
    return (unsigned int)((v3 < v4 + a3[1]) + 1);
  }
}
