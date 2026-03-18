/*
 * XREFs of _EngCloseFNTCache@0 @ 0xD742A
 * Callers:
 *     _CloseFNTCache@0 @ 0xD73B0 (_CloseFNTCache@0.c)
 *     _EngFntCacheAllocInternal@12 @ 0xECBCE (_EngFntCacheAllocInternal@12.c)
 * Callees:
 *     bSetFntCacheReg @ 0xDF9A2 (bSetFntCacheReg.c)
 *     _ComputeFileviewCheckSum@8 @ 0xDFA40 (_ComputeFileviewCheckSum@8.c)
 */

void __stdcall EngCloseFNTCache()
{
  char v0; // al
  _DWORD *v1; // edx
  int v2; // edx
  int v3; // eax
  int v4; // ecx

  v0 = dword_274064;
  if ( (dword_274064 & 3) != 0 )
  {
    v1 = (_DWORD *)dword_274068;
    if ( dword_274068 )
    {
      if ( (dword_274064 & 2) == 0 )
        goto LABEL_4;
      if ( *(_DWORD *)dword_274068 && *(_DWORD *)(dword_274068 + 16) )
      {
        *(_DWORD *)(*(_DWORD *)dword_274068 + 20) = *(_DWORD *)(dword_274068 + 4);
        *(_DWORD *)(*v1 + 36) = v1[6] - v1[5];
        v3 = ComputeFileviewCheckSum(*v1 + 4, *(_DWORD *)(*v1 + 24) - 4);
        v1 = (_DWORD *)dword_274068;
        **(_DWORD **)dword_274068 = v3;
        v0 = dword_274064;
      }
      if ( (v0 & 2) != 0 )
      {
        if ( v1[2] != v1[3] )
          bSetFntCacheReg(1, v1[3]);
        v2 = 0;
        v4 = 0;
      }
      else
      {
LABEL_4:
        v2 = v1[3];
        if ( (v2 & 3) == 0 )
        {
LABEL_5:
          vCleanUpFntCacheInternal();
          return;
        }
        v4 = 1;
      }
      bSetFntCacheReg(v4, v2);
      goto LABEL_5;
    }
  }
  dword_274064 = 0;
  gbFntCacheClosed = 1;
}
