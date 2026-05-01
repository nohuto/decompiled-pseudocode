/*
 * XREFs of ?RmpCpuSetManagerCompareScores@@YAHPEAXPEBX1@Z @ 0x18006C010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpCpuSetManagerCompareScores(_DWORD *a1, _QWORD *a2, _DWORD *a3)
{
  unsigned int v4; // eax

  if ( (a2[1] & 0x80000000LL) != 0 && (a3[2] & 0x80000000) != 0 )
    return 0LL;
  if ( (a2[1] & 0x80000000LL) != 0 )
  {
    if ( (a3[2] & 0x80000000) == 0 )
      return 0xFFFFFFFFLL;
  }
  else if ( (a3[2] & 0x80000000) != 0 )
  {
    return 1LL;
  }
  if ( *(_DWORD *)a2 >= *a3 )
  {
    if ( *(_DWORD *)a2 > *a3 )
      goto LABEL_15;
    v4 = a3[2];
    if ( *((_DWORD *)a2 + 2) <= v4 )
    {
      if ( *((_DWORD *)a2 + 2) < v4 )
        return 1LL;
      if ( *((_DWORD *)a2 + 1) < a3[1] )
        goto LABEL_13;
LABEL_15:
      if ( (a1[43] & 2) == 0 )
        return 0xFFFFFFFFLL;
      return 1LL;
    }
    return 0xFFFFFFFFLL;
  }
LABEL_13:
  if ( (a1[43] & 2) != 0 )
    return 0xFFFFFFFFLL;
  return 1LL;
}
