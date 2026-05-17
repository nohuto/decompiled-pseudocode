/*
 * XREFs of _EtwpReleasePrivateBuffers@8 @ 0x4B38192C
 * Callers:
 *     _EtwEventWrite@20 @ 0x4B2E1250 (_EtwEventWrite@20.c)
 *     _EtwpEventWriteFull@44 @ 0x4B2E3CCF (_EtwpEventWriteFull@44.c)
 *     _EtwEventWriteString@24 @ 0x4B380420 (_EtwEventWriteString@24.c)
 * Callees:
 *     <none>
 */

int __fastcall EtwpReleasePrivateBuffers(int a1, int a2)
{
  int result; // eax
  unsigned int v4; // edi
  int v5; // esi
  _DWORD *v6; // edx

  result = a1;
  v4 = 0;
  if ( *(_DWORD *)(a2 + 64) )
  {
    v5 = a2 + 8;
    do
    {
      v6 = *(_DWORD **)(v5 - 8);
      if ( result )
        **(_DWORD **)(v5 - 4) = v6[10] | **(_DWORD **)(v5 - 4) & v6[11];
      _InterlockedDecrement((volatile signed __int32 *)(*(_DWORD *)v5 + 12));
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v6[5] + 4));
      result = a1;
      ++v4;
      v5 += 16;
    }
    while ( v4 < *(_DWORD *)(a2 + 64) );
  }
  return result;
}
