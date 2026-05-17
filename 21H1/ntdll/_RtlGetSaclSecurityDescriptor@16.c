/*
 * XREFs of _RtlGetSaclSecurityDescriptor@16 @ 0x4B2EC050
 * Callers:
 *     _RtlReplaceSidInSd@16 @ 0x4B346EC0 (_RtlReplaceSidInSd@16.c)
 * Callees:
 *     <none>
 */

int __stdcall RtlGetSaclSecurityDescriptor(int a1, bool *a2, int *a3, bool *a4)
{
  __int16 v4; // dx
  __int16 v5; // ax
  int v6; // ecx

  if ( *(_BYTE *)a1 != 1 )
    return -1073741736;
  v4 = *(_WORD *)(a1 + 2) & 0x10;
  *a2 = v4 != 0;
  if ( v4 )
  {
    v5 = *(_WORD *)(a1 + 2);
    if ( (v5 & 0x10) != 0 )
    {
      v6 = *(_DWORD *)(a1 + 12);
      if ( v5 < 0 )
        v6 = v6 != 0 ? v6 + a1 : 0;
    }
    else
    {
      v6 = 0;
    }
    *a3 = v6;
    *a4 = (*(_BYTE *)(a1 + 2) & 0x20) != 0;
  }
  return 0;
}
