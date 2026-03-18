/*
 * XREFs of ?InitializeMiniWinInfo@@YGXQAUtagWND@@PAUtagMINIWINDOWINFO@@@Z @ 0x2B2EE
 * Callers:
 *     _CreateSprite@16 @ 0x1F5C2 (_CreateSprite@16.c)
 *     _HintSpriteShape@16 @ 0x23F60 (_HintSpriteShape@16.c)
 *     _UpdateSprite@48 @ 0x2B1AA (_UpdateSprite@48.c)
 *     _UserGetMiniWinInfo@12 @ 0x1539A0 (_UserGetMiniWinInfo@12.c)
 * Callees:
 *     _ScaleDPIRect@32 @ 0x155FE (_ScaleDPIRect@32.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

void __fastcall InitializeMiniWinInfo(float *a1, int a2)
{
  float *v3; // edx
  _DWORD *v4; // esi
  _DWORD *v5; // esi
  const void *v6; // esi
  PKTHREAD CurrentThread; // esi
  _DWORD *ThreadWin32Thread; // eax
  int *v9; // eax
  int v10; // eax
  int v11; // edi
  int *v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  unsigned __int16 ScaledLogPixels; // si
  PKTHREAD v17; // [esp+Ch] [ebp-Ch]
  PKTHREAD v18; // [esp+Ch] [ebp-Ch]

  v3 = a1;
  v4 = (_DWORD *)(*((_DWORD *)a1 + 5) + 52);
  *(_DWORD *)a2 = *v4++;
  *(_DWORD *)(a2 + 4) = *v4++;
  *(_DWORD *)(a2 + 8) = *v4;
  *(_DWORD *)(a2 + 12) = v4[1];
  v5 = (_DWORD *)(*((_DWORD *)a1 + 5) + 68);
  *(_DWORD *)(a2 + 16) = *v5++;
  *(_DWORD *)(a2 + 20) = *v5++;
  *(_DWORD *)(a2 + 24) = *v5;
  *(_DWORD *)(a2 + 28) = v5[1];
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(*((_DWORD *)a1 + 5) + 20);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(*((_DWORD *)a1 + 5) + 16);
  *(_DWORD *)(a2 + 40) = *(_DWORD *)(*((_DWORD *)a1 + 5) + 144);
  *(_DWORD *)(a2 + 44) = (*(unsigned __int8 *)(*((_DWORD *)a1 + 5) + 8) >> 6) & 1;
  *(_DWORD *)(a2 + 48) = ***(_DWORD ***)(*((_DWORD *)a1 + 3) + 4);
  v6 = (const void *)*((_DWORD *)a1 + 30);
  if ( v6 )
  {
    qmemcpy((void *)(a2 + 52), v6, 0x40u);
  }
  else
  {
    memset((void *)(a2 + 52), 0, 0x40u);
    v3 = a1;
  }
  *(float *)(a2 + 116) = v3[31];
  *(float *)(a2 + 120) = v3[32];
  *(float *)(a2 + 124) = v3[33];
  *(float *)(a2 + 128) = v3[34];
  CurrentThread = KeGetCurrentThread();
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (_DWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      if ( *ThreadWin32Thread )
      {
        v17 = KeGetCurrentThread();
        if ( IsThreadCrossSessionAttached() || (v9 = (int *)PsGetThreadWin32Thread(v17)) == 0 )
          v10 = 0;
        else
          v10 = *v9;
        if ( *(_DWORD *)(v10 + 248) )
        {
          v18 = KeGetCurrentThread();
          v11 = 0;
          if ( !IsThreadCrossSessionAttached() )
          {
            v12 = (int *)PsGetThreadWin32Thread(v18);
            if ( v12 )
              v11 = *v12;
          }
          if ( (*(_BYTE *)(**(_DWORD **)(*(_DWORD *)(v11 + 248) + 4) + 32) & 1) != 0 )
          {
            v13 = *((_DWORD *)a1 + 5);
            v14 = *(_DWORD *)(v13 + 184);
            if ( (v14 & 0xF) == 0 && (v14 & 0x40000000) != 0 )
            {
              v15 = *(unsigned __int16 *)(v13 + 180);
              if ( (_WORD)v15 != 96 )
              {
                ScaledLogPixels = GreGetScaledLogPixels(v15);
                ScaleDPIRect((_DWORD *)a2, (int *)a2, ScaledLogPixels, 0x60u, 0, 0, 0, 0);
                ScaleDPIRect((_DWORD *)(a2 + 16), (int *)(a2 + 16), ScaledLogPixels, 0x60u, 0, 0, 0, 0);
              }
            }
          }
        }
      }
    }
  }
}
