/*
 * XREFs of VidSchQueryAdapterStatistics @ 0x1C00D2A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchQueryAdapterStatistics(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // r8d
  _BYTE *v4; // rax

  a2[1] = *(_DWORD *)(a1 + 72);
  a2[2] = *(_DWORD *)(a1 + 40);
  if ( *(_BYTE *)(a1 + 2132) )
  {
    v2 = *(_DWORD *)(a1 + 40);
    v3 = 0;
    if ( v2 )
    {
      v4 = (_BYTE *)(a1 + 1792);
      while ( !*v4 )
      {
        ++v3;
        ++v4;
        if ( v3 >= v2 )
          goto LABEL_9;
      }
      a2[3] = 1;
    }
  }
  else
  {
    a2[3] = *(unsigned __int8 *)(a1 + 1792);
  }
LABEL_9:
  a2[4] = *(_DWORD *)(a1 + 2936);
  return 0LL;
}
