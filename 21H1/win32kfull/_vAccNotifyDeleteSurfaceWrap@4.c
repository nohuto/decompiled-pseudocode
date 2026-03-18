/*
 * XREFs of _vAccNotifyDeleteSurfaceWrap@4 @ 0x9A326
 * Callers:
 *     <none>
 * Callees:
 *     ?vAccNotify@@YGXPAU_SURFOBJ@@KPAX@Z @ 0x213E8 (-vAccNotify@@YGXPAU_SURFOBJ@@KPAX@Z.c)
 *     ?vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z @ 0x219D2 (-vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ??1DEVLOCKOBJ@@QAE@XZ @ 0x5A936 (--1DEVLOCKOBJ@@QAE@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?bStockSurface@SURFACE@@QAEHXZ @ 0x1FAAA9 (-bStockSurface@SURFACE@@QAEHXZ.c)
 */

void __stdcall vAccNotifyDeleteSurfaceWrap(SURFACE *a1)
{
  int v1; // esi
  int v2; // eax
  int v3; // eax
  unsigned int v4; // [esp+0h] [ebp-40h]
  void *v5; // [esp+4h] [ebp-3Ch]
  int v6; // [esp+Ch] [ebp-34h] BYREF
  _BYTE v7[20]; // [esp+10h] [ebp-30h] BYREF
  _DWORD v8[3]; // [esp+24h] [ebp-1Ch] BYREF
  __int16 v9; // [esp+30h] [ebp-10h]

  if ( gpBmpDev || gpRedirDev )
  {
    v1 = *((_DWORD *)a1 + 7);
    v6 = v1;
    if ( v1 )
    {
      memset(v8, 0, sizeof(v8));
      v9 = 256;
      DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v7, (struct PDEVOBJ *)&v6);
      v2 = *(_DWORD *)(v1 + 24);
      if ( (v2 & 0x20000000) == 0 && (*(_DWORD *)(v1 + 1416) & 0x8000) == 0 )
      {
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v7);
        return;
      }
      if ( ((unsigned int)&loc_20000 & v2) == 0
        && (*(_DWORD *)(v1 + 1416) & 0x8000) != 0
        && (*((_DWORD *)a1 + 18) & 0x400000) != 0
        && *((_DWORD *)a1 + 4) )
      {
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v7);
        if ( v8[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v8);
        return;
      }
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v7);
      if ( v8[0] )
        DLODCOBJ::vUnlock((DLODCOBJ *)v8);
    }
    else
    {
      if ( a1 == SURFACE::pdibDefault )
        return;
      if ( SURFACE::bStockSurface(a1) )
        return;
      v3 = *((_DWORD *)a1 + 18);
      if ( (v3 & 0x40000) != 0 || (v3 & 0x4000000) == 0 )
        return;
    }
    vAccNotify(8, (int)a1 + 16, 0, v4, v5);
  }
}
