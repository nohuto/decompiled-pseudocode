/*
 * XREFs of MiCompareActiveCrcEntries @ 0x140368248
 * Callers:
 *     MiProcessCrcList @ 0x140726FD0 (MiProcessCrcList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCompareActiveCrcEntries(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  unsigned int v4; // ecx
  unsigned __int64 v5; // rax

  if ( *a1 >= *a2 )
  {
    if ( *a1 > *a2 )
      return 1LL;
    v2 = a1[3];
    if ( v2 > a2[3] )
      return 1LL;
    if ( v2 >= a2[3] )
    {
      v3 = a1[4];
      if ( v3 >= 0x100 )
        v4 = *(_DWORD *)(v3 + 40) & 0x1F;
      else
        v4 = a1[4];
      v5 = a2[4];
      if ( v5 >= 0x100 )
        LODWORD(v5) = *(_DWORD *)(v5 + 40) & 0x1F;
      if ( v4 <= (unsigned int)v5 )
      {
        if ( v4 >= (unsigned int)v5 )
          return 0LL;
        return 0xFFFFFFFFLL;
      }
      return 1LL;
    }
  }
  return 0xFFFFFFFFLL;
}
