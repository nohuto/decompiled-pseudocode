/*
 * XREFs of MiFindZeroCloneBlock @ 0x14055A8A4
 * Callers:
 *     MiBuildForkPte @ 0x1405584FC (MiBuildForkPte.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiFindZeroCloneBlock(__int64 a1, int a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r9

  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 32);
  if ( v2 > v3 )
    return 0LL;
  while ( *(_QWORD *)(v2 + 16) >> 59 != a2 || *(_QWORD *)(v2 + 24) == -1LL )
  {
    v2 += 32LL;
    if ( v2 > v3 )
      return 0LL;
  }
  return v2;
}
