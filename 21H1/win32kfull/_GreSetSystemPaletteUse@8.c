/*
 * XREFs of _GreSetSystemPaletteUse@8 @ 0x21E4BA
 * Callers:
 *     _GreRealizeDefaultPalette@8 @ 0x12656 (_GreRealizeDefaultPalette@8.c)
 *     _NtGdiSetSystemPaletteUse@8 @ 0x214432 (_NtGdiSetSystemPaletteUse@8.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     ?vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z @ 0x219D2 (-vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 */

unsigned int __fastcall GreSetSystemPaletteUse(HDC a1, int a2)
{
  int v2; // edi
  unsigned int v3; // ebx
  unsigned int v4; // esi
  _DWORD *v5; // eax
  int v6; // esi
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  unsigned int v10; // edi
  unsigned int i; // ebx
  int v12; // edx
  int v13; // ebx
  int v14; // esi
  int v15; // edx
  signed __int32 v16; // ecx
  _DWORD *v17; // edx
  int v18; // ecx
  unsigned int v19; // ecx
  unsigned int j; // ecx
  void (__stdcall *v21)(_DWORD, _DWORD **, _DWORD, _DWORD, _DWORD); // edx
  char v23; // [esp+Fh] [ebp-59h] BYREF
  _DWORD *v24; // [esp+10h] [ebp-58h] BYREF
  _DWORD *v25; // [esp+14h] [ebp-54h] BYREF
  int v26; // [esp+18h] [ebp-50h]
  unsigned int v27; // [esp+1Ch] [ebp-4Ch]
  int v28; // [esp+20h] [ebp-48h] BYREF
  int v29; // [esp+24h] [ebp-44h] BYREF
  int v30; // [esp+28h] [ebp-40h] BYREF
  _DWORD v31[3]; // [esp+2Ch] [ebp-3Ch] BYREF
  _BYTE v32[20]; // [esp+38h] [ebp-30h] BYREF
  _DWORD v33[3]; // [esp+4Ch] [ebp-1Ch] BYREF
  char v34; // [esp+58h] [ebp-10h]
  char v35; // [esp+59h] [ebp-Fh]

  v2 = a2;
  v3 = 1;
  if ( a2 != 1 && a2 != 2 && a2 != 3 )
    v2 = 1;
  v26 = 0;
  v4 = 0;
  memset(v31, 0, sizeof(v31));
  XDCOBJ::vLock((XDCOBJ *)v31, a1);
  if ( v31[0] )
  {
    v25 = *(_DWORD **)(v31[0] + 36);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v23);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v30, (struct PDEVOBJ *)&v25);
    v29 = v25[10];
    GreAcquireSemaphore(v29);
    v35 = 1;
    memset(v33, 0, sizeof(v33));
    v34 = 0;
    DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v32, (struct PDEVOBJ *)&v25);
    v24 = (_DWORD *)v25[278];
    if ( (v25[364] & 0x100) == 0 )
    {
LABEL_41:
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v32);
      if ( v33[0] )
        DLODCOBJ::vUnlock((DLODCOBJ *)v33);
      SEMOBJ::vUnlock((SEMOBJ *)&v29);
      NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v30);
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
      GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
      if ( v31[0] )
        XDCOBJ::vUnlockFast((XDCOBJ *)v31);
      return v4;
    }
    v28 = _ghsemPalette;
    GreAcquireSemaphore(_ghsemPalette);
    v5 = v24;
    v6 = v24[4];
    v7 = v6;
    v8 = v6 & 0x1000;
    if ( (v6 & 0x1000) != 0 )
      v4 = 2;
    else
      v4 = (v6 & 0x10000 | 0x8000u) >> 15;
    v9 = v7 & 0x10000;
    v27 = v4;
    if ( v2 == 1 )
    {
      if ( v8 || v9 )
      {
        v10 = v24[11] >> 1;
        if ( v10 > 0xA )
          v10 = 10;
        v26 = 0;
        if ( v10 )
        {
          for ( i = v26; i < v10; ++i )
          {
            v26 = *(_DWORD *)(*((_DWORD *)ppalDefault + 19) + 4 * i);
            v12 = v5[19];
            HIBYTE(v26) = 48;
            *(_DWORD *)(v12 + 4 * i) = v26;
            v5 = v24;
          }
        }
        if ( v10 )
        {
          v13 = 4 * v5[5];
          v14 = 80;
          while ( 1 )
          {
            v14 -= 4;
            v13 -= 4;
            v26 = *(_DWORD *)(v14 + *((_DWORD *)ppalDefault + 19));
            v15 = v5[19];
            HIBYTE(v26) = 48;
            *(_DWORD *)(v13 + v15) = v26;
            if ( !--v10 )
              break;
            v5 = v24;
          }
          v4 = v27;
        }
        *(_DWORD *)(*(_DWORD *)(v31[0] + 1020) + 184) |= 0xFu;
        v24[4] &= 0xFFFEEFFF;
        v16 = _InterlockedIncrement((volatile signed __int32 *)ulXlatePalUnique);
        v24[6] = v16;
        v17 = (_DWORD *)v24[20];
        if ( v17 != v24 )
          v17[6] = v16;
        v26 = 1;
      }
      goto LABEL_36;
    }
    if ( v2 == 2 )
    {
      v18 = v24[5];
      if ( !v18 )
      {
        v4 = 0;
LABEL_36:
        SEMOBJ::vUnlock((SEMOBJ *)&v28);
        if ( v26 && (v25[6] & 0x400) == 0 )
        {
          v21 = (void (__stdcall *)(_DWORD, _DWORD **, _DWORD, _DWORD, _DWORD))v25[273];
          if ( v21 )
            v21(*(_DWORD *)(v25[4] + 1108), &v24, 0, 0, v24[5]);
          else
            v4 = 0;
        }
        goto LABEL_41;
      }
      if ( (unsigned int)(v18 - 1) > 1 )
      {
        do
        {
          *(_BYTE *)(v5[19] + 4 * v3++ + 3) = 0;
          v5 = v24;
        }
        while ( v3 < v24[5] - 1 );
      }
      v19 = v5[4] & 0xFFFEEFFF | 0x1000;
    }
    else
    {
      for ( j = 0; j < v24[5]; v5 = v24 )
        *(_BYTE *)(v5[19] + 4 * j++ + 3) = 0;
      v19 = v5[4] & 0xFFFEEFFF | 0x10000;
    }
    v5[4] = v19;
    goto LABEL_36;
  }
  return v4;
}
