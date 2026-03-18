/*
 * XREFs of pProcessDfbSurfaces2 @ 0x1C001A970
 * Callers:
 *     bDynamicProcessAllDriverRealizations @ 0x1C001A100 (bDynamicProcessAllDriverRealizations.c)
 *     pProcessDfbSurfaces @ 0x1C0143E20 (pProcessDfbSurfaces.c)
 * Callees:
 *     pProcessDfbSurfacesInternal @ 0x1C001AA60 (pProcessDfbSurfacesInternal.c)
 *     bDfbSurfacesMigrated @ 0x1C001E520 (bDfbSurfacesMigrated.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C003D898 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall pProcessDfbSurfaces2(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  HSEMAPHORE v17[3]; // [rsp+20h] [rbp-18h] BYREF

  v17[0] = ghsemDwmState;
  EngAcquireSemaphore(ghsemDwmState);
  v9 = 0LL;
  if ( a3 )
  {
    if ( !(qword_1C024EF58 ? qword_1C024EF58(v8) : 0) )
      goto LABEL_11;
  }
  if ( (*(_DWORD *)(a1 + 116) & 1) == 0 )
    goto LABEL_10;
  v11 = *(_QWORD *)(a1 + 48);
  if ( (*(_DWORD *)(v11 + 2128) & 0x10000) != 0 && a5 && (*(_DWORD *)(a5 + 2128) & 0x10000) != 0 )
  {
    if ( (*(_DWORD *)(v11 + 40) & 0x20000) != 0 && (*(_DWORD *)(a5 + 40) & 0x20000) != 0 )
    {
      if ( qword_1C024F1E0 )
        v14 = qword_1C024F1E0(v8);
      else
        v14 = -1073741637;
      if ( v14 >= 0 )
      {
        if ( qword_1C024F1E8 )
        {
          v15 = qword_1C024F1E8(a1 + 24, a5);
LABEL_31:
          LODWORD(v9) = v15;
          goto LABEL_32;
        }
        goto LABEL_32;
      }
      goto LABEL_11;
    }
    bDfbSurfacesMigrated(a5, a1);
LABEL_10:
    v9 = pProcessDfbSurfacesInternal((struct SURFACE *)a1);
    goto LABEL_11;
  }
  if ( (*(_DWORD *)(v11 + 40) & 0x20000) != 0 )
    goto LABEL_10;
  v12 = *(_QWORD *)(v11 + 24);
  if ( (*(_DWORD *)(v12 + 40) & 0x20000) == 0 )
    goto LABEL_10;
  if ( a4 )
  {
    v9 = 1LL;
  }
  else
  {
    if ( qword_1C024F1D0 )
      v16 = qword_1C024F1D0(v12);
    else
      v16 = -1073741637;
    if ( v16 >= 0 )
    {
      if ( qword_1C024F1D8 )
      {
        v15 = qword_1C024F1D8(*(_QWORD *)(a1 + 144));
        goto LABEL_31;
      }
LABEL_32:
      v9 = (int)v9;
    }
  }
LABEL_11:
  SEMOBJ::vUnlock((SEMOBJ *)v17);
  return v9;
}
