/*
 * XREFs of pProcessDfbSurfaces2 @ 0x1C00BF5D0
 * Callers:
 *     bDynamicProcessAllDriverRealizations @ 0x1C00BF0A0 (bDynamicProcessAllDriverRealizations.c)
 *     pProcessDfbSurfaces @ 0x1C01462C0 (pProcessDfbSurfaces.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0027A20 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00820E8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     pProcessDfbSurfacesInternal @ 0x1C00BF6C0 (pProcessDfbSurfacesInternal.c)
 *     bDfbSurfacesMigrated @ 0x1C00C1830 (bDfbSurfacesMigrated.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall pProcessDfbSurfaces2(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r8d
  __int64 v11; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  HSEMAPHORE v19[3]; // [rsp+20h] [rbp-18h] BYREF

  v19[0] = ghsemDwmState;
  EngAcquireSemaphore(ghsemDwmState);
  v11 = 0LL;
  if ( a3 )
  {
    if ( !(qword_1C0250F58 ? qword_1C0250F58(v9) : 0) )
      goto LABEL_11;
  }
  if ( (*(_DWORD *)(a1 + 116) & 1) == 0 )
    goto LABEL_10;
  v13 = *(_QWORD *)(a1 + 48);
  if ( (*(_DWORD *)(v13 + 2128) & 0x10000) != 0 && a5 && (*(_DWORD *)(a5 + 2128) & 0x10000) != 0 )
  {
    v8 = 0x20000LL;
    if ( (*(_DWORD *)(v13 + 40) & 0x20000) != 0 && (*(_DWORD *)(a5 + 40) & 0x20000) != 0 )
    {
      if ( qword_1C02511E0 )
        v16 = qword_1C02511E0(v9);
      else
        v16 = -1073741637;
      if ( v16 >= 0 )
      {
        if ( qword_1C02511E8 )
        {
          v17 = qword_1C02511E8(a1 + 24, a5);
LABEL_31:
          LODWORD(v11) = v17;
          goto LABEL_32;
        }
        goto LABEL_32;
      }
      goto LABEL_11;
    }
    bDfbSurfacesMigrated(a5, a1);
LABEL_10:
    v11 = pProcessDfbSurfacesInternal((struct SURFACE *)a1);
    goto LABEL_11;
  }
  v8 = 0x20000LL;
  if ( (*(_DWORD *)(v13 + 40) & 0x20000) != 0 )
    goto LABEL_10;
  v14 = *(_QWORD *)(v13 + 24);
  if ( (*(_DWORD *)(v14 + 40) & 0x20000) == 0 )
    goto LABEL_10;
  if ( a4 )
  {
    v11 = 1LL;
  }
  else
  {
    if ( qword_1C02511D0 )
      v18 = qword_1C02511D0(v14);
    else
      v18 = -1073741637;
    if ( v18 >= 0 )
    {
      if ( qword_1C02511D8 )
      {
        v17 = qword_1C02511D8(*(_QWORD *)(a1 + 144));
        goto LABEL_31;
      }
LABEL_32:
      v11 = (int)v11;
    }
  }
LABEL_11:
  SEMOBJ::vUnlock((SEMOBJ *)v19, v8, v10);
  return v11;
}
