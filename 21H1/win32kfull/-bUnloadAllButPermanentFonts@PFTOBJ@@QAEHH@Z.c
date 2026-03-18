/*
 * XREFs of ?bUnloadAllButPermanentFonts@PFTOBJ@@QAEHH@Z @ 0xCDD06
 * Callers:
 *     ?bCleanupFontTable@@YGHPAPAVPFT@@@Z @ 0xCD626 (-bCleanupFontTable@@YGHPAPAVPFT@@@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?vCleanupFontFile@@YGXPAVPFFCLEANUP@@@Z @ 0xCDEB6 (-vCleanupFontFile@@YGXPAVPFFCLEANUP@@@Z.c)
 *     bKillPFFOBJ @ 0xCE000 (bKillPFFOBJ.c)
 *     prfntKillList @ 0xCE282 (prfntKillList.c)
 *     ?vRemoveHash@PFFOBJ@@QAEXXZ @ 0xCE2F8 (-vRemoveHash@PFFOBJ@@QAEXXZ.c)
 *     ?vKill@PFFOBJ@@QAEXXZ @ 0xCE698 (-vKill@PFFOBJ@@QAEXXZ.c)
 *     vKillRFONTList @ 0x1D0F5D (vKillRFONTList.c)
 */

int __thiscall PFTOBJ::bUnloadAllButPermanentFonts(PFTOBJ *this, int a2)
{
  int v3; // edi
  int v4; // edx
  unsigned int v5; // eax
  char *v7; // ecx
  int v8; // ebx
  _DWORD *v9; // esi
  char *v10; // eax
  char *v11; // ebx
  _DWORD *v12; // esi
  bool i; // cf
  int v14; // eax
  int v15; // ecx
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  _DWORD *v19; // esi
  struct PFFCLEANUP *v20; // [esp+0h] [ebp-30h]
  _DWORD *v21; // [esp+Ch] [ebp-24h]
  char *v22; // [esp+10h] [ebp-20h]
  int v24; // [esp+18h] [ebp-18h] BYREF
  int v25; // [esp+1Ch] [ebp-14h]
  int v26; // [esp+20h] [ebp-10h]
  _DWORD *v27; // [esp+24h] [ebp-Ch]
  _DWORD v28[2]; // [esp+28h] [ebp-8h] BYREF

  v3 = 0;
  v25 = 0;
  v24 = _ghsemPublicPFT;
  GreAcquireSemaphore(_ghsemPublicPFT);
  v4 = *(_DWORD *)this;
  v5 = *(_DWORD *)(*(_DWORD *)this + 16);
  if ( !v5 )
  {
    v3 = 1;
LABEL_3:
    SEMOBJ::vUnlock((SEMOBJ *)&v24);
    return v3;
  }
  if ( v5 <= 0x40 )
  {
    v10 = (char *)&gFntVict;
    v22 = (char *)&gFntVict;
  }
  else
  {
    v10 = (char *)PALLOCMEM2(24 * v5, 1769367111, 0);
    v22 = v10;
    if ( !v10 )
      goto LABEL_3;
    v4 = *(_DWORD *)this;
    v25 = 1;
  }
  v11 = v10;
  v12 = (_DWORD *)(v4 + 24);
  for ( i = v4 + 24 < (unsigned int)(v4 + 4 * (*(_DWORD *)(v4 + 12) + 6));
        ;
        i = (unsigned int)(v21 + 1) < *(_DWORD *)this + 4 * *(_DWORD *)(*(_DWORD *)this + 12) + 24 )
  {
    v21 = v12;
    if ( !i )
      break;
    v19 = (_DWORD *)*v12;
    if ( v19 )
    {
      do
      {
        v27 = (_DWORD *)v19[1];
        v14 = v19[8] & 0x200;
        v19[9] = 0;
        v28[0] = v19;
        v26 = v14;
        v19[10] = 0;
        PFFOBJ::vKill((PFFOBJ *)v28);
        if ( (_DWORD *)*v21 == v19 )
          *v21 = v19[1];
        v15 = v19[1];
        if ( v15 )
          *(_DWORD *)(v15 + 8) = v19[2];
        v16 = v19[2];
        if ( v16 )
          *(_DWORD *)(v16 + 4) = v19[1];
        *(_DWORD *)v11 = v19;
        PFFOBJ::vRemoveHash((PFFOBJ *)v28);
        v17 = *(_DWORD *)this;
        if ( !v26 )
          ++*(_DWORD *)(v17 + 20);
        --*(_DWORD *)(v17 + 16);
        v18 = prfntKillList(v28);
        *((_DWORD *)v11 + 1) = v18;
        if ( !v18 )
          *((_DWORD *)v11 + 5) = bKillPFFOBJ(v28, v11 + 8);
        v11 += 24;
        v19 = v27;
      }
      while ( v27 );
    }
    v12 = v21 + 1;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v24);
  v7 = v22;
  v8 = (v11 - v22) / 24;
  if ( v8 )
  {
    v9 = v22 + 20;
    do
    {
      if ( *(v9 - 4) )
      {
        v28[0] = *(v9 - 5);
        vKillRFONTList((PFFOBJ *)v28);
      }
      else if ( *v9 )
      {
        vCleanupFontFile(v20);
      }
      v9 += 6;
      --v8;
    }
    while ( v8 );
    v7 = v22;
  }
  if ( v25 )
    Win32FreePool(v7);
  return 1;
}
