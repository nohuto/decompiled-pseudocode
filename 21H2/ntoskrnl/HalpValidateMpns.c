/*
 * XREFs of HalpValidateMpns @ 0x140866E20
 * Callers:
 *     HalpChannelInitializeStaticConfiguration @ 0x140A65240 (HalpChannelInitializeStaticConfiguration.c)
 * Callees:
 *     <none>
 */

__int64 HalpValidateMpns()
{
  unsigned int v0; // edx
  unsigned int v1; // r10d
  _WORD *v2; // r11
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // esi
  unsigned int v6; // ebx
  _BYTE *v7; // rcx
  __int64 v8; // r8

  v0 = 1;
  v1 = 1;
  if ( (unsigned int)(HalpChannelMemoryRangeCount - 1) > 1 )
  {
    v2 = (char *)HalpChannelMemoryRanges + 16;
    do
    {
      v3 = *(_QWORD *)v2;
      v4 = *((_QWORD *)HalpChannelMemoryRanges + 2 * v1 - 2);
      if ( *(_WORD *)(v4 + 2) == *(_WORD *)(*(_QWORD *)v2 + 2LL) )
      {
        if ( (*(_BYTE *)v4 & 1 | 6) != (*(_BYTE *)v3 & 1 | 6) )
          return 0;
        v5 = *(_DWORD *)(v4 + 24);
        if ( v5 != *(_DWORD *)(v3 + 24)
          || *(_DWORD *)(v4 + 28) != *(_DWORD *)(v3 + 28)
          || *((_WORD *)HalpChannelMemoryRanges + 8 * v1 - 3) != v2[5] )
        {
          return 0;
        }
        if ( (*(_BYTE *)v4 & 2) != 0 )
        {
          v6 = 0;
          v7 = (_BYTE *)(v4 + 32);
          if ( v5 )
          {
            v8 = v3 - v4;
            while ( v7[1] == v7[v8 + 1] && *v7 == v7[v8] )
            {
              ++v6;
              v7 += 2;
              if ( v6 >= v5 )
                goto LABEL_16;
            }
            v0 = 0;
          }
LABEL_16:
          if ( !v0 )
            return v0;
        }
      }
      ++v1;
      v2 += 8;
    }
    while ( v1 < HalpChannelMemoryRangeCount - 1 );
  }
  return v0;
}
