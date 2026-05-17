/*
 * XREFs of _RtlIsElevatedRid@4 @ 0x4B346500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __stdcall RtlIsElevatedRid(_BYTE *a1)
{
  int v1; // ecx
  unsigned __int8 v2; // dl
  int v3; // ecx
  int v4; // eax

  if ( !a1 )
    return 0;
  if ( (a1[4] & 0x30) != 0 )
    return 0;
  v1 = *(_DWORD *)a1;
  v2 = *(_BYTE *)(*(_DWORD *)a1 + 1);
  if ( !v2 || (unsigned int)(*(_DWORD *)(v1 + 8) - 80) <= 0x1F )
    return 0;
  v3 = *(_DWORD *)(v1 + 4 * v2 + 4);
  v4 = 0;
  while ( v3 != dword_4B2980A0[v4] )
  {
    if ( (unsigned int)++v4 >= 19 )
      return 0;
  }
  return 1;
}
