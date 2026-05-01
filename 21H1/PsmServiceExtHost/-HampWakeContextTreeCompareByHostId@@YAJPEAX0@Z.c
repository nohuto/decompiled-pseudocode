/*
 * XREFs of ?HampWakeContextTreeCompareByHostId@@YAJPEAX0@Z @ 0x180035580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HampWakeContextTreeCompareByHostId(_DWORD *a1, _QWORD *a2)
{
  unsigned __int64 v2; // rax
  unsigned int v4; // eax

  v2 = a2[21];
  if ( *(_QWORD *)a1 < v2 )
    return 0xFFFFFFFFLL;
  if ( *(_QWORD *)a1 > v2 )
    return 1LL;
  v4 = *((_DWORD *)a2 + 44);
  if ( a1[2] < v4 )
    return 0xFFFFFFFFLL;
  return a1[2] > v4;
}
