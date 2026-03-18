/*
 * XREFs of ?bComputeQuickLookup@@YGHPAU_QUICKLOOKUP@@PAVPFE@@H@Z @ 0x1F826B
 * Callers:
 *     ?vInitializeFontAssocStatus@@YGXXZ @ 0xD67C2 (-vInitializeFontAssocStatus@@YGXXZ.c)
 *     bAddAllFlEntry @ 0xDBBB8 (bAddAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x1F7AA9 (GreEudcLoadLinkW.c)
 *     ?pql@PFEOBJ@@QAEPAU_QUICKLOOKUP@@XZ @ 0x1F8EB8 (-pql@PFEOBJ@@QAEPAU_QUICKLOOKUP@@XZ.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?vFreepfdg@PFEOBJ@@QAEXXZ @ 0x8404C (-vFreepfdg@PFEOBJ@@QAEXXZ.c)
 *     ?pfdg@PFEOBJ@@QAEPAU_FD_GLYPHSET@@XZ @ 0x857A0 (-pfdg@PFEOBJ@@QAEPAU_FD_GLYPHSET@@XZ.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?pql@PFEOBJ@@QAEPAU_QUICKLOOKUP@@XZ @ 0x1F8EB8 (-pql@PFEOBJ@@QAEPAU_QUICKLOOKUP@@XZ.c)
 */

ULONG __userpurge bComputeQuickLookup@<eax>(
        int *a1@<edx>,
        struct _QUICKLOOKUP *a2@<ecx>,
        struct _QUICKLOOKUP *a3,
        struct PFE *a4,
        int a5)
{
  ULONG v5; // edi
  struct _QUICKLOOKUP *v6; // ebx
  struct _FD_GLYPHSET *v7; // eax
  struct _FD_GLYPHSET *v8; // esi
  ULONG v9; // edx
  int v10; // ebx
  int v11; // edi
  int wcLow; // eax
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // dx
  void *v15; // eax
  unsigned __int16 v16; // ax
  int v17; // edx
  int v18; // eax
  unsigned int v19; // edx
  int v20; // ecx
  int *v22; // [esp+10h] [ebp-28h] BYREF
  int v23; // [esp+14h] [ebp-24h]
  int cGlyphs; // [esp+18h] [ebp-20h]
  int v25; // [esp+1Ch] [ebp-1Ch]
  ULONG cRuns; // [esp+20h] [ebp-18h]
  int v27; // [esp+24h] [ebp-14h]
  struct _FD_GLYPHSET *v28; // [esp+28h] [ebp-10h]
  int v29; // [esp+2Ch] [ebp-Ch]
  int v30; // [esp+30h] [ebp-8h]
  unsigned int v31; // [esp+34h] [ebp-4h]

  v5 = 0;
  cGlyphs = 0xFFFF;
  v23 = 0;
  v6 = a2;
  v25 = (int)a2;
  v22 = a1;
  if ( a1 )
  {
    if ( !a2 )
    {
      v6 = PFEOBJ::pql((PFEOBJ *)&v22);
      v25 = (int)v6;
    }
    if ( !a3 && *((_DWORD *)v6 + 1) )
      return 1;
    v7 = PFEOBJ::pfdg((void ***)&v22);
    v8 = v7;
    v28 = v7;
    if ( v7 )
    {
      v9 = 0;
      cRuns = v7->cRuns;
      if ( cRuns )
      {
        v10 = v23;
        v11 = 0xFFFF;
        do
        {
          wcLow = v8->awcrun[v9].wcLow;
          v27 = wcLow;
          if ( (unsigned __int16)v11 > (unsigned __int16)wcLow )
            v11 = (unsigned __int16)wcLow;
          cGlyphs = v8->awcrun[v9].cGlyphs;
          if ( (unsigned __int16)v10 < (unsigned __int16)cGlyphs + (unsigned int)(unsigned __int16)wcLow )
            v10 = (unsigned __int16)(cGlyphs + v27 - 1);
          ++v9;
        }
        while ( v9 < cRuns );
        v23 = v10;
        v6 = (struct _QUICKLOOKUP *)v25;
        cGlyphs = v11;
        v5 = 0;
      }
      v13 = cGlyphs;
      v14 = v23;
      *(_WORD *)v6 = cGlyphs;
      *((_WORD *)v6 + 1) = v14;
      v29 = 32;
      if ( a3 )
      {
        v15 = (void *)*((_DWORD *)v6 + 1);
        if ( v15 )
          memset(v15, 0, 0x2000u);
        else
          *((_DWORD *)v6 + 1) = PALLOCMEM2(0x2000u, 1802400071, 1);
        v16 = 0;
      }
      else
      {
        *((_DWORD *)v6 + 1) = PALLOCMEM2(4 * ((v14 - v13 + 32) / 32), 1802400071, 1);
        v16 = cGlyphs;
      }
      if ( !*((_DWORD *)v6 + 1) )
      {
        PFEOBJ::vFreepfdg(&v22);
        return v5;
      }
      if ( v8->cRuns )
      {
        v17 = v16;
        v23 = v16;
        do
        {
          v18 = v8->awcrun[v5].wcLow;
          cGlyphs = (v18 - v17) / v29;
          v30 = v8->awcrun[v5].cGlyphs;
          v25 = (v18 - v17) % v29;
          v19 = (v18 - v23 - 1 + v30) / 32;
          v27 = *((_DWORD *)v6 + 1);
          v31 = v19;
          cRuns = *(_DWORD *)(v27 + 4 * cGlyphs);
          if ( cGlyphs == v19 )
          {
            *(_DWORD *)(v27 + 4 * cGlyphs) = cRuns | ((unsigned int)(-1 << (32 - v30)) >> v25);
          }
          else
          {
            v20 = cGlyphs;
            *(_DWORD *)(v27 + 4 * cGlyphs) = cRuns | (0xFFFFFFFF >> v25);
            while ( ++v20 < v19 )
              *(_DWORD *)(*((_DWORD *)v6 + 1) + 4 * v20) = -1;
            *(_DWORD *)(*((_DWORD *)v6 + 1) + 4 * v31) |= -1 << (31
                                                               - (v28->awcrun[v5].cGlyphs
                                                                - v23
                                                                - 1
                                                                + v28->awcrun[v5].wcLow)
                                                               % 32);
            v8 = v28;
          }
          v17 = v23;
          ++v5;
        }
        while ( v5 < v8->cRuns );
      }
      PFEOBJ::vFreepfdg(&v22);
      return 1;
    }
  }
  return v5;
}
