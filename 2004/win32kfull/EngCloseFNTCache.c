/*
 * XREFs of EngCloseFNTCache @ 0x1C00097F0
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C0009720 (xxxLW_LoadFonts.c)
 *     EngFntCacheAllocInternal @ 0x1C0289ABC (EngFntCacheAllocInternal.c)
 * Callees:
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C0009838 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 *     ComputeFileviewCheckSum @ 0x1C0009FD0 (ComputeFileviewCheckSum.c)
 *     bSetFntCacheReg @ 0x1C000A0E4 (bSetFntCacheReg.c)
 */

void EngCloseFNTCache()
{
  char v0; // al
  _DWORD *v1; // rdx
  __int64 v2; // rdx
  int v3; // eax
  unsigned int v4; // eax
  __int64 v5; // rcx

  v0 = dword_1C033ABC0;
  if ( (dword_1C033ABC0 & 3) != 0 )
  {
    v1 = (_DWORD *)qword_1C033ABC8;
    if ( qword_1C033ABC8 )
    {
      if ( (dword_1C033ABC0 & 2) == 0 )
        goto LABEL_4;
      if ( *(_QWORD *)qword_1C033ABC8 && *(_DWORD *)(qword_1C033ABC8 + 20) )
      {
        *(_DWORD *)(*(_QWORD *)qword_1C033ABC8 + 20LL) = *(_DWORD *)(qword_1C033ABC8 + 8);
        *(_DWORD *)(*(_QWORD *)v1 + 36LL) = v1[8] - v1[6];
        v3 = ComputeFileviewCheckSum(*(_QWORD *)v1 + 4LL, (unsigned int)(*(_DWORD *)(*(_QWORD *)v1 + 24LL) - 4));
        v1 = (_DWORD *)qword_1C033ABC8;
        **(_DWORD **)qword_1C033ABC8 = v3;
        v0 = dword_1C033ABC0;
      }
      if ( (v0 & 2) != 0 )
      {
        v4 = v1[4];
        if ( v1[3] != v4 )
          bSetFntCacheReg(1LL, v4);
        v2 = 0LL;
        v5 = 0LL;
      }
      else
      {
LABEL_4:
        v2 = (unsigned int)v1[4];
        if ( (v2 & 3) == 0 )
        {
LABEL_5:
          vCleanUpFntCacheInternal();
          return;
        }
        v5 = 1LL;
      }
      bSetFntCacheReg(v5, v2);
      goto LABEL_5;
    }
  }
  dword_1C033ABC0 = 0;
  gbFntCacheClosed = 1;
}
