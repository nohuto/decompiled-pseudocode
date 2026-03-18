/*
 * XREFs of _EngUnmapFontFile@4 @ 0x1E91A8
 * Callers:
 *     <none>
 * Callees:
 *     _vUnmapFile@8 @ 0xD6388 (_vUnmapFile@8.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

void __stdcall EngUnmapFontFile(ULONG_PTR iFile)
{
  int v1; // eax
  int v2; // eax
  _DWORD v3[12]; // [esp+10h] [ebp-30h] BYREF

  memset(v3, 0, sizeof(v3));
  GreAcquireFastMutex(_ghfmMemory);
  v1 = *(_DWORD *)(iFile + 56);
  if ( v1 )
  {
    v2 = v1 - 1;
    *(_DWORD *)(iFile + 56) = v2;
    if ( !v2 )
    {
      if ( *(_DWORD *)(iFile + 48) )
      {
        qmemcpy(v3, (const void *)iFile, sizeof(v3));
        *(_DWORD *)(iFile + 8) = 0;
        if ( !*(_DWORD *)(iFile + 12) )
          *(_DWORD *)(iFile + 20) = 0;
      }
    }
  }
  GreReleaseFastMutex(_ghfmMemory);
  if ( v3[2] )
    vUnmapFile((int)v3);
}
