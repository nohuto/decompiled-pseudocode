/*
 * XREFs of vAccNotifyDeleteSurfaceWrap @ 0x1C00F8310
 * Callers:
 *     <none>
 * Callees:
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C000E204 (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0098F74 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C00A111C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00A47D0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bStockSurface@SURFACE@@QEAAHXZ @ 0x1C029A624 (-bStockSurface@SURFACE@@QEAAHXZ.c)
 */

void __fastcall vAccNotifyDeleteSurfaceWrap(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // ecx
  int v4; // eax
  __int128 v5; // [rsp+20h] [rbp-50h] BYREF
  __int64 v6; // [rsp+30h] [rbp-40h]
  int v7; // [rsp+38h] [rbp-38h]
  __int64 v8; // [rsp+40h] [rbp-30h] BYREF
  int v9; // [rsp+48h] [rbp-28h]
  int v10; // [rsp+4Ch] [rbp-24h]
  __int16 v11; // [rsp+50h] [rbp-20h]
  __int64 v12; // [rsp+58h] [rbp-18h]
  __int64 v13; // [rsp+60h] [rbp-10h]

  if ( gpBmpDev || gpRedirDev )
  {
    v2 = *(_QWORD *)(a1 + 48);
    if ( v2 )
    {
      v9 = 0;
      v10 = 0;
      v13 = 0LL;
      v12 = 0LL;
      v8 = 0LL;
      v3 = *(_DWORD *)(v2 + 40);
      v11 = 256;
      v5 = 0LL;
      v7 = 1;
      if ( (v3 & 1) != 0 )
      {
        *(_QWORD *)&v5 = *(_QWORD *)(v2 + 48);
        v6 = v2;
        GreAcquireSemaphore(v5);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v5, 11LL);
        v3 = *(_DWORD *)(v2 + 40);
      }
      if ( (v3 & 0x20000000) == 0 && (*(_DWORD *)(v2 + 2128) & 0x8000) == 0 )
      {
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v5);
        return;
      }
      if ( (v3 & 0x20000) == 0
        && (*(_DWORD *)(v2 + 2128) & 0x8000) != 0
        && (*(_DWORD *)(a1 + 112) & 0x400000) != 0
        && *(_QWORD *)(a1 + 24) )
      {
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v5);
        if ( v8 )
          DLODCOBJ::vUnlock((DLODCOBJ *)&v8);
        return;
      }
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v5);
      if ( v8 )
        DLODCOBJ::vUnlock((DLODCOBJ *)&v8);
    }
    else
    {
      if ( (struct SURFACE *)a1 == SURFACE::pdibDefault )
        return;
      if ( (unsigned int)SURFACE::bStockSurface((SURFACE *)a1) )
        return;
      v4 = *(_DWORD *)(a1 + 112);
      if ( (v4 & 0x40000) != 0 || (v4 & 0x4000000) == 0 )
        return;
    }
    vAccNotify((struct _SURFOBJ *)(a1 + 24), 8u, 0LL);
  }
}
