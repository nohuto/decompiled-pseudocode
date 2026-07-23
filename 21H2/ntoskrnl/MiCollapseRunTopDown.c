/*
 * XREFs of MiCollapseRunTopDown @ 0x14030CDEC
 * Callers:
 *     MiFindContiguousPages @ 0x14030C430 (MiFindContiguousPages.c)
 *     MiFindRebuildCandidate @ 0x14055204C (MiFindRebuildCandidate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCollapseRunTopDown(__int64 a1)
{
  unsigned __int64 v1; // r8
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rax
  char v6; // bl
  __int64 v7; // r11
  __int64 v9; // r10

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 24);
  if ( v1 - 1 > v3 )
  {
    v1 = v3 + 1;
    *(_QWORD *)(a1 + 8) = v3 + 1;
  }
  v4 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 < v5 )
  {
    *(_QWORD *)a1 = v5;
    v4 = v5;
  }
  if ( v4 < v1 )
  {
    v6 = *(_BYTE *)(a1 + 48);
    while ( v6 || *(_QWORD *)(a1 + 40) <= v1 - v4 )
    {
      v7 = *(_QWORD *)(a1 + 32);
      if ( !v7 )
        return 1LL;
      v9 = ~(v7 - 1);
      if ( (((v1 - 1) ^ (v1 - *(_QWORD *)(a1 + 40))) & v9) == 0 )
        return 1LL;
      if ( (v9 & v1) != v1 )
        *(_QWORD *)(a1 + 8) = v9 & v1;
      if ( (v9 & v4) == v4 || (*(_QWORD *)a1 = v9 & (v4 + v7 - 1), (v9 & (v4 + v7 - 1)) != 0) )
      {
        v4 = *(_QWORD *)a1;
        v1 = *(_QWORD *)(a1 + 8);
        if ( *(_QWORD *)a1 < v1 )
          continue;
      }
      return 0LL;
    }
  }
  return 0LL;
}
