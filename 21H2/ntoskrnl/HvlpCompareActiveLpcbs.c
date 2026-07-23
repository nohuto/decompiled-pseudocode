/*
 * XREFs of HvlpCompareActiveLpcbs @ 0x1404F29A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlpCompareActiveLpcbs(_BYTE *a1, _BYTE *a2)
{
  char v2; // al
  bool v3; // cf
  int v5; // eax
  unsigned int v6; // r8d
  unsigned int v7; // ecx

  v2 = a1[112];
  if ( v2 != a2[112] )
  {
    v3 = v2 != 0;
    return v3 ? -1 : 1;
  }
  v5 = *((_DWORD *)a1 + 12);
  if ( v5 != *((_DWORD *)a2 + 12) )
  {
    v3 = v5 != 0;
    return v3 ? -1 : 1;
  }
  v6 = *((_DWORD *)a1 + 1);
  v7 = *((_DWORD *)a2 + 1);
  if ( v6 >= v7 )
    return v6 > v7;
  else
    return 0xFFFFFFFFLL;
}
