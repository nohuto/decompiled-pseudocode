/*
 * XREFs of bDeleteAllFlEntry @ 0xCD72E
 * Callers:
 *     _GreEnableEUDC@4 @ 0xEBCF6 (_GreEnableEUDC@4.c)
 * Callees:
 *     bUnloadEudcFont @ 0xCD8F6 (bUnloadEudcFont.c)
 *     ?vUnlinkAllEudcFromRFONTList@@YGXHH@Z @ 0xCE6D4 (-vUnlinkAllEudcFromRFONTList@@YGXHH@Z.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0xCE766 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     vLinkEudcPFEs @ 0xDC1CC (vLinkEudcPFEs.c)
 */

int bDeleteAllFlEntry()
{
  struct PFE *v0; // ebx
  int v1; // esi
  _UNKNOWN ***v2; // edx
  int v3; // ecx
  _DWORD *v4; // eax
  _DWORD *v5; // edx
  _DWORD *v6; // edi
  _DWORD *v7; // edx
  bool v8; // zf
  _DWORD *v9; // esi
  _DWORD *v10; // esi
  int v11; // edx
  int v12; // ecx
  _DWORD *v13; // edx
  _DWORD *v14; // esi
  _DWORD *v15; // eax
  _DWORD *v16; // edi
  _DWORD *v17; // ecx
  int v19; // [esp+0h] [ebp-30h]
  int v20; // [esp+4h] [ebp-2Ch]
  struct PFE *v21; // [esp+Ch] [ebp-24h] BYREF
  int v22; // [esp+10h] [ebp-20h]
  _DWORD *v23; // [esp+14h] [ebp-1Ch] BYREF
  _DWORD **v24; // [esp+18h] [ebp-18h]
  int v25; // [esp+1Ch] [ebp-14h]
  _UNKNOWN **v26; // [esp+20h] [ebp-10h]
  _DWORD *v27; // [esp+24h] [ebp-Ch]
  _DWORD *v28; // [esp+28h] [ebp-8h]
  int v29; // [esp+2Ch] [ebp-4h]

  v0 = 0;
  v24 = &v23;
  v1 = 0;
  v21 = 0;
  v22 = 0;
  v23 = &v23;
  GreAcquireSemaphore(ghsemEUDC1);
  if ( gcEUDCCount > 0 )
  {
    EngSetLastError(0xA7u);
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    return 0;
  }
  else
  {
    vUnlinkAllEudcRFONTsAndPFEs();
    vUnlinkAllEudcFromRFONTList(v19, v20);
    if ( gappfeSysEUDC || dword_27569C )
    {
      v1 = dword_27569C;
      v0 = gappfeSysEUDC;
      gappfeSysEUDC = 0;
      dword_27569C = 0;
      ++dword_2785AC;
      v21 = v0;
      v22 = v1;
      Dst = 0;
    }
    v2 = (_UNKNOWN ***)off_266348;
    if ( off_266348 != (_UNKNOWN *)&off_266348 )
    {
      v3 = dword_274364;
      v25 = dword_274364;
      do
      {
        v29 = 0;
        v4 = v2;
        v26 = *v2;
        v5 = v2 + 2;
        v6 = (_DWORD *)*v5;
        v27 = v5;
        if ( v6 == v5 )
          goto LABEL_15;
        do
        {
          v7 = v6;
          v6 = (_DWORD *)*v6;
          v8 = v7[2] == 0;
          v28 = (_DWORD *)v7[2];
          v1 = v22;
          if ( v8 && (dword_27436C & 2) != 0 || v28 == (_DWORD *)1 && (dword_27436C & 8) != 0 )
          {
            if ( (_DWORD *)v6[1] != v7 )
              goto LABEL_32;
            v9 = (_DWORD *)v7[1];
            v28 = v9;
            if ( (_DWORD *)*v9 != v7 )
              goto LABEL_32;
            *v9 = v6;
            v6[1] = v9;
            v28 = v24;
            v0 = v21;
            if ( *v24 != &v23 )
              goto LABEL_32;
            *v7 = &v23;
            v10 = v28;
            v7[1] = v28;
            *v10 = v7;
            v1 = v22;
            v24 = (_DWORD **)v7;
            v11 = v29;
          }
          else
          {
            v11 = ++v29;
          }
        }
        while ( v6 != v27 );
        if ( v11 )
        {
          if ( v4[21] != v11 )
          {
            ++v4[22];
            v4[21] = v11;
          }
        }
        else
        {
LABEL_15:
          v12 = *v4;
          if ( *(_DWORD **)(*v4 + 4) != v4 || (v13 = (_DWORD *)v4[1], (_DWORD *)*v13 != v4) )
LABEL_32:
            __fastfail(3u);
          *v13 = v12;
          *(_DWORD *)(v12 + 4) = v13;
          Win32FreePool(v4);
          v3 = --dword_274364;
        }
        v2 = (_UNKNOWN ***)v26;
      }
      while ( v26 != &off_266348 );
      if ( v25 != v3 )
        ++dword_274368;
      if ( v3 )
        vLinkEudcPFEs(0);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    if ( v0 || v1 )
      bUnloadEudcFont(&v21);
    v14 = v23;
    while ( v14 != &v23 )
    {
      v15 = (_DWORD *)*v14;
      v16 = v14;
      v14 = v15;
      if ( (_DWORD *)v15[1] != v16 )
        goto LABEL_32;
      v17 = (_DWORD *)v16[1];
      if ( (_DWORD *)*v17 != v16 )
        goto LABEL_32;
      *v17 = v15;
      v15[1] = v17;
      bUnloadEudcFont(v16 + 6);
      Win32FreePool(v16);
    }
    return 1;
  }
}
