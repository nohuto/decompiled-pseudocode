/*
 * XREFs of _GreGetDIBitsInternal@36 @ 0x4B3C0
 * Callers:
 *     _NtGdiGetDIBitsInternal@36 @ 0x48D46 (_NtGdiGetDIBitsInternal@36.c)
 *     _GreExtGetObjectW@12 @ 0x4B144 (_GreExtGetObjectW@12.c)
 *     ?ProcessAlphaBitmap@@YGPAUHBITMAP__@@PAU1@@Z @ 0x77B00 (-ProcessAlphaBitmap@@YGPAUHBITMAP__@@PAU1@@Z.c)
 *     ?xxxBMPtoDIB@@YGPAUtagBITMAPINFOHEADER@@PAUHBITMAP__@@PAUHPALETTE__@@PAK@Z @ 0x182097 (-xxxBMPtoDIB@@YGPAUtagBITMAPINFOHEADER@@PAUHBITMAP__@@PAUHPALETTE__@@PAK@Z.c)
 *     ?GreIcmQueryBrushBitmap@@YGHPAUHDC__@@PAUHBRUSH__@@PAUtagBITMAPINFO@@PAXPAK4PAH@Z @ 0x21B8CC (-GreIcmQueryBrushBitmap@@YGHPAUHDC__@@PAUHBRUSH__@@PAUtagBITMAPINFO@@PAXPAK4PAH@Z.c)
 * Callees:
 *     ?GreGetDIBitsInternalWorker@@YGHKAAVDCOBJ@@AAVPDEVOBJ@@AAVSURFREF@@AAVXEPALOBJ@@PAUHDC__@@PAUHBITMAP__@@IIPAEPAUtagBITMAPINFO@@III@Z @ 0x4B706 (-GreGetDIBitsInternalWorker@@YGHKAAVDCOBJ@@AAVPDEVOBJ@@AAVSURFREF@@AAVXEPALOBJ@@PAUHDC__@@PAUHBI.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall GreGetDIBitsInternal(
        HDC a1,
        struct XEPALOBJ *a2,
        HDC a3,
        HBITMAP a4,
        int a5,
        _WORD *a6,
        unsigned __int8 *a7,
        struct tagBITMAPINFO *a8,
        unsigned int a9)
{
  int DIBitsInternalWorker; // edi
  int v10; // esi
  int v11; // edx
  int v12; // esi
  int v13; // esi
  size_t v14; // eax
  unsigned int v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  int v19; // eax
  unsigned int *v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // esi
  int v24; // ecx
  unsigned int v26; // [esp+0h] [ebp-48h]
  unsigned int v27; // [esp+4h] [ebp-44h]
  int v28; // [esp+Ch] [ebp-3Ch] BYREF
  unsigned int v29; // [esp+10h] [ebp-38h]
  struct XEPALOBJ *v30; // [esp+14h] [ebp-34h]
  HDC v31; // [esp+18h] [ebp-30h]
  int v32; // [esp+1Ch] [ebp-2Ch] BYREF
  unsigned int v33; // [esp+20h] [ebp-28h] BYREF
  int v34; // [esp+24h] [ebp-24h]
  BOOL v35; // [esp+28h] [ebp-20h]
  _BYTE v36[4]; // [esp+2Ch] [ebp-1Ch] BYREF
  _DWORD v37[3]; // [esp+30h] [ebp-18h] BYREF
  _DWORD v38[3]; // [esp+3Ch] [ebp-Ch] BYREF

  v30 = a2;
  v31 = a1;
  if ( !a6 || (unsigned int)a7 > 2 || a9 < 0xC )
  {
    EngSetLastError(0x57u);
    return 0;
  }
  DIBitsInternalWorker = 0;
  v29 = a4 != 0 ? a5 : 0;
  v38[1] = 0;
  v35 = 1;
  v38[2] = 0;
  XDCOBJ::vLock((XDCOBJ *)v38, a1);
  if ( !v38[0]
    || (v10 = *(_DWORD *)(*(_DWORD *)(v38[0] + 36) + 24),
        XDCOBJ::vUnlockFast((XDCOBJ *)v38),
        v12 = v10 & 0x8000,
        v35 = v12 == 0,
        !v12) )
  {
    GreAcquireSemaphoreSharedInternal(_ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
  }
  LOBYTE(v11) = 5;
  v13 = HmgShareLockCheck(v30, v11);
  v28 = v13;
  if ( v13 )
  {
    v14 = *(_DWORD *)a6;
    v34 = *(_DWORD *)a6;
    if ( !v29 )
    {
      if ( v14 == 12 )
      {
        if ( !a6[5] )
        {
          a6[2] = *(_WORD *)(v13 + 32);
          a6[3] = *(_WORD *)(v13 + 36);
          a6[4] = 1;
          v15 = LOWORD(gaulConvert[*(_DWORD *)(v13 + 60)]);
          a6[5] = v15;
          if ( v15 >= 0x10 )
            a6[5] = 24;
          DIBitsInternalWorker = 1;
          goto LABEL_42;
        }
      }
      else
      {
        if ( a9 < 0x28 )
        {
LABEL_42:
          if ( v13 )
            DEC_SHARE_REF_CNT(v13);
          goto LABEL_44;
        }
        if ( !a6[7] )
        {
          if ( v14 > 0x28 )
            memset(a6, 0, v14);
          *(_DWORD *)a6 = 40;
          v16 = *(_DWORD *)(v13 + 32);
          *((_DWORD *)a6 + 1) = v16;
          v17 = *(_DWORD *)(v13 + 36);
          a6[6] = 1;
          *((_DWORD *)a6 + 2) = v17;
          *((_DWORD *)a6 + 4) = 0;
          v18 = LOWORD(gaulConvert[*(_DWORD *)(v13 + 60)]);
          v34 = v18;
          a6[7] = v18;
          if ( v18 == 16 || v18 == 32 )
            *((_DWORD *)a6 + 4) = 3;
          v19 = v16 * (unsigned __int16)v34;
          *((_DWORD *)a6 + 6) = 0;
          *((_DWORD *)a6 + 7) = 0;
          *((_DWORD *)a6 + 5) = v17 * (((v19 + 31) >> 3) & 0xFFFFFFFC);
          v20 = (&gacPalEntries)[*(_DWORD *)(v13 + 60)];
          *((_DWORD *)a6 + 9) = v20;
          *((_DWORD *)a6 + 8) = v20;
          DIBitsInternalWorker = 1;
          goto LABEL_42;
        }
      }
    }
    if ( v14 >= 0x28 && ((v21 = *((_DWORD *)a6 + 4), v21 == 4) || v21 == 5) )
    {
      EngSetLastError(0x57u);
    }
    else
    {
      memset(v37, 0, sizeof(v37));
      XDCOBJ::vLock((XDCOBJ *)v37, v31);
      if ( v37[0] )
      {
        v33 = *(_DWORD *)(v37[0] + 36);
        v32 = *(_DWORD *)(v37[0] + 60);
        if ( (*(_DWORD *)(v33 + 24) & 0x8000) != 0 )
        {
          DIBitsInternalWorker = GreGetDIBitsInternalWorker(
                                   (unsigned int)&v33,
                                   (struct DCOBJ *)&v28,
                                   (struct PDEVOBJ *)&v32,
                                   (struct SURFREF *)v31,
                                   v30,
                                   a3,
                                   a4,
                                   v29,
                                   (unsigned int)a6,
                                   a7,
                                   a8,
                                   a9,
                                   v26,
                                   v27);
        }
        else
        {
          NEEDGRELOCK::vLock((NEEDGRELOCK *)v36, (struct XDCOBJ *)v37);
          if ( v28 )
            v22 = v28 + 16;
          else
            v22 = 0;
          v23 = 0;
          if ( v22 )
          {
            v24 = *(_DWORD *)(v22 + 56);
            if ( (v24 & 0x80004000) != 0 && (v24 & 0x200) == 0 )
            {
              v23 = v22 - 16;
              GreLockDisplayDevice(*(_DWORD *)(v22 - 16 + 28));
            }
          }
          DIBitsInternalWorker = GreGetDIBitsInternalWorker(
                                   (unsigned int)&v33,
                                   (struct DCOBJ *)&v28,
                                   (struct PDEVOBJ *)&v32,
                                   (struct SURFREF *)v31,
                                   v30,
                                   a3,
                                   a4,
                                   v29,
                                   (unsigned int)a6,
                                   a7,
                                   a8,
                                   a9,
                                   v26,
                                   v27);
          if ( v23 )
            GreUnlockDisplayDevice(*(_DWORD *)(v23 + 28));
          NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v36);
        }
        if ( v37[0] )
          XDCOBJ::vUnlockFast((XDCOBJ *)v37);
      }
    }
    v13 = v28;
    goto LABEL_42;
  }
LABEL_44:
  if ( v35 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
  }
  return DIBitsInternalWorker;
}
