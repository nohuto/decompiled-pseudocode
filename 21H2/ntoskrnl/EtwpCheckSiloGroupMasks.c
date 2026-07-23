/*
 * XREFs of EtwpCheckSiloGroupMasks @ 0x1405AA8A4
 * Callers:
 *     EtwpUpdateGroupMasks @ 0x1407972F0 (EtwpUpdateGroupMasks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCheckSiloGroupMasks(char *a1)
{
  unsigned int v1; // edx
  signed __int64 v2; // r8

  v1 = 0;
  v2 = (char *)&EtwpSiloAllowedGroupMask - a1;
  while ( (~*(_DWORD *)&a1[v2] & *(_DWORD *)a1) == 0 )
  {
    ++v1;
    a1 += 4;
    if ( v1 >= 8 )
      return 0LL;
  }
  return 3221225569LL;
}
