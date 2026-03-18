/*
 * XREFs of ?bUnloadWorkhorse@PFTOBJ@@QAEHPAVPFF@@PAPAV2@K@Z @ 0xCDA6C
 * Callers:
 *     ?bUnloadEUDCFont@PFTOBJ@@QAEHPAG@Z @ 0xCD9B6 (-bUnloadEUDCFont@PFTOBJ@@QAEHPAG@Z.c)
 *     ?bCleanupPFT@PUBLIC_PFTOBJ@@QAEXW4eCleanupMode@1@PAK@Z @ 0x1D069A (-bCleanupPFT@PUBLIC_PFTOBJ@@QAEXW4eCleanupMode@1@PAK@Z.c)
 *     _PFTOBJ_bUnloadWorkhorseWrap@16 @ 0x1D10B7 (_PFTOBJ_bUnloadWorkhorseWrap@16.c)
 *     _GreRemoveFontMemResourceEx@4 @ 0x1EBC87 (_GreRemoveFontMemResourceEx@4.c)
 *     _GreRemoveFontResourceW@28 @ 0x1EBD13 (_GreRemoveFontResourceW@28.c)
 *     ?bRemoveMergeFont@XDCOBJ@@QAEHU_UNIVERSAL_FONT_ID@@@Z @ 0x211230 (-bRemoveMergeFont@XDCOBJ@@QAEHU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?bAttemptReload@PFFOBJ@@QAEHXZ @ 0x221621 (-bAttemptReload@PFFOBJ@@QAEHXZ.c)
 * Callees:
 *     ?bDeleteLoadRef@PFFOBJ@@QAEHKPAUtagPvtData@@PAH@Z @ 0xCDBEA (-bDeleteLoadRef@PFFOBJ@@QAEHKPAUtagPvtData@@PAH@Z.c)
 *     ?vCleanupFontFile@@YGXPAVPFFCLEANUP@@@Z @ 0xCDEB6 (-vCleanupFontFile@@YGXPAVPFFCLEANUP@@@Z.c)
 *     bKillPFFOBJ @ 0xCE000 (bKillPFFOBJ.c)
 *     prfntKillList @ 0xCE282 (prfntKillList.c)
 *     ?vRemoveHash@PFFOBJ@@QAEXXZ @ 0xCE2F8 (-vRemoveHash@PFFOBJ@@QAEXXZ.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QAEPAVPFF@@PBGKKPAUtagDESIGNVECTOR@@KPAPAPAV2@H@Z @ 0xDDADA (-pPFFGet@PUBLIC_PFTOBJ@@QAEPAVPFF@@PBGKKPAUtagDESIGNVECTOR@@KPAPAPAV2@H@Z.c)
 *     vKillRFONTList @ 0x1D0F5D (vKillRFONTList.c)
 *     ?pPvtDataMatch@PFFOBJ@@QAEPAUtagPvtData@@XZ @ 0x221D76 (-pPvtDataMatch@PFFOBJ@@QAEPAUtagPvtData@@XZ.c)
 */

int __thiscall PFTOBJ::bUnloadWorkhorse(PFTOBJ *this, struct PFF *a2, struct PFF **a3, unsigned int a4)
{
  struct PFF *v4; // edi
  int v5; // ebx
  bool v6; // zf
  struct tagPvtData *v7; // edx
  struct PFF **v9; // ecx
  int v10; // eax
  int v11; // edx
  unsigned int v12; // edx
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  struct PFFCLEANUP *v16; // [esp+0h] [ebp-30h]
  struct PFF **v18; // [esp+14h] [ebp-1Ch] BYREF
  unsigned int v19; // [esp+18h] [ebp-18h]
  _DWORD v20[2]; // [esp+1Ch] [ebp-14h] BYREF
  _BYTE v21[12]; // [esp+24h] [ebp-Ch] BYREF

  v4 = 0;
  v5 = 0;
  if ( !a2 )
    goto LABEL_6;
  v6 = (*((_BYTE *)a2 + 32) & 1) == 0;
  v7 = 0;
  v20[0] = a2;
  if ( v6 )
  {
    if ( *(struct PFT **)this == gpPFTPrivate )
    {
      v7 = PFFOBJ::pPvtDataMatch((PFFOBJ *)v20);
      if ( !v7 )
        goto LABEL_6;
    }
    v18 = 0;
    v5 = 1;
    if ( PFFOBJ::bDeleteLoadRef((PFFOBJ *)v20, a4, v7, (int *)&v18) )
    {
      PFFOBJ::vRemoveHash((PFFOBJ *)v20);
      v9 = a3;
      v10 = *((_DWORD *)a2 + 8);
      v11 = -(*((_DWORD *)a2 + 11) != 0);
      v18 = a3;
      v12 = (unsigned int)a2 & ~v11;
      v20[0] = v10 & 0x200;
      v19 = v12;
      if ( !a3 )
      {
        PUBLIC_PFTOBJ::pPFFGet(
          this,
          *((const unsigned __int16 **)a2 + 3),
          *((_DWORD *)a2 + 4),
          *((_DWORD *)a2 + 5),
          *((struct tagDESIGNVECTOR **)a2 + 6),
          *((_DWORD *)a2 + 7),
          &v18,
          0);
        v9 = v18;
        v12 = v19;
      }
      if ( *v9 == a2 )
        *v9 = (struct PFF *)*((_DWORD *)a2 + 1);
      v13 = *((_DWORD *)a2 + 1);
      if ( v13 )
        *(_DWORD *)(v13 + 8) = *((_DWORD *)a2 + 2);
      v14 = *((_DWORD *)a2 + 2);
      if ( v14 )
        *(_DWORD *)(v14 + 4) = *((_DWORD *)a2 + 1);
      v15 = *(_DWORD *)this;
      if ( !v20[0] )
        ++*(_DWORD *)(v15 + 20);
      --*(_DWORD *)(v15 + 16);
      v4 = (struct PFF *)v12;
    }
    else
    {
      if ( *(struct PFT **)this != gpPFTPrivate || !v18 )
        goto LABEL_6;
      v5 = 0;
    }
  }
  else
  {
    v5 = 1;
    if ( *((_DWORD *)a2 + 9) || *((_DWORD *)a2 + 10) || *((_DWORD *)a2 + 23) || *((_DWORD *)a2 + 11) )
      goto LABEL_6;
    v4 = a2;
  }
  if ( !v4 )
  {
LABEL_6:
    EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", _ghsemPublicPFT);
    GreReleaseSemaphoreInternal(_ghsemPublicPFT);
    return v5;
  }
  v20[0] = v4;
  if ( prfntKillList(v20) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", _ghsemPublicPFT);
    GreReleaseSemaphoreInternal(_ghsemPublicPFT);
    vKillRFONTList((PFFOBJ *)v20);
  }
  else
  {
    memset(v21, 0, sizeof(v21));
    if ( bKillPFFOBJ(v20, v21) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", _ghsemPublicPFT);
      GreReleaseSemaphoreInternal(_ghsemPublicPFT);
      vCleanupFontFile(v16);
    }
    else
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", _ghsemPublicPFT);
      GreReleaseSemaphoreInternal(_ghsemPublicPFT);
    }
  }
  return 1;
}
