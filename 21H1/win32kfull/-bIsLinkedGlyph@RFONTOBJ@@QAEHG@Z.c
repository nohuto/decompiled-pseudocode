/*
 * XREFs of ?bIsLinkedGlyph@RFONTOBJ@@QAEHG@Z @ 0xC1064
 * Callers:
 *     _GreGetGlyphOutlineInternal@32 @ 0x85B86 (_GreGetGlyphOutlineInternal@32.c)
 *     ?bGetWidthTable@RFONTOBJ@@QAEHAAVXDCOBJ@@KPAGK1@Z @ 0x86D0C (-bGetWidthTable@RFONTOBJ@@QAEHAAVXDCOBJ@@KPAGK1@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QAEXPBGIPAKKH@Z @ 0x877DE (-vXlatGlyphArray@RFONTOBJ@@QAEXPBGIPAKKH@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@PBG2KPAHH@Z @ 0xC0F30 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@PBG2KPAHH@Z.c)
 * Callees:
 *     ?pql@PFEOBJ@@QAEPAU_QUICKLOOKUP@@XZ @ 0x1F8EB8 (-pql@PFEOBJ@@QAEPAU_QUICKLOOKUP@@XZ.c)
 */

int __thiscall RFONTOBJ::bIsLinkedGlyph(RFONTOBJ *this, unsigned __int16 a2)
{
  unsigned __int16 v3; // bx
  int v4; // eax
  int v5; // esi
  BOOL v6; // edx
  struct _LIST_ENTRY *v7; // ecx
  struct _LIST_ENTRY *v8; // ecx
  int v9; // edi
  int v10; // eax
  struct _LIST_ENTRY *Flink; // ecx
  struct _LIST_ENTRY *v12; // eax
  int v14; // esi
  BOOL v15; // ecx
  unsigned int v16; // edx
  int v17; // ebx
  int v18; // edi
  struct _QUICKLOOKUP *v19; // eax
  int v20; // ecx
  int v21; // ebx
  int v22; // edi
  struct _QUICKLOOKUP *v23; // eax
  int v24; // ecx
  int v25; // ebx
  BOOL v26; // [esp+Ch] [ebp-18h]
  unsigned __int16 v27; // [esp+10h] [ebp-14h]
  struct _LIST_ENTRY *v28; // [esp+14h] [ebp-10h]
  int v30; // [esp+18h] [ebp-Ch]
  struct PFE **v31; // [esp+1Ch] [ebp-8h] BYREF
  int v32; // [esp+20h] [ebp-4h]

  GreAcquireSemaphore(ghsemEUDC1);
  v3 = a2;
  v32 = 0;
  if ( a2 >= 0xE000u && a2 <= 0xF8FFu
    || (gappfeSysEUDC || dword_27569C)
    && a2 >= gqlEUDC
    && a2 <= (unsigned __int16)word_273FFA
    && ((0x80000000 >> (a2 & 0x1F)) & *(_DWORD *)(dword_273FFC + 4 * (a2 >> 5))) != 0 )
  {
    v32 = 1;
    goto LABEL_5;
  }
  if ( !bFinallyInitializeFontAssocDefault )
  {
LABEL_5:
    if ( gbSystemDBCSFontEnabled
      && (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)this + 80) + 8) & 0x10) != 0
      && (v31 = gappfeSystemDBCS, *((_DWORD *)PFEOBJ::pql((PFEOBJ *)&v31) + 1))
      && a2 >= *(_WORD *)PFEOBJ::pql((PFEOBJ *)&v31)
      && a2 <= *((_WORD *)PFEOBJ::pql((PFEOBJ *)&v31) + 1)
      && (v21 = *(unsigned __int16 *)PFEOBJ::pql((PFEOBJ *)&v31),
          v22 = (a2 - *(unsigned __int16 *)PFEOBJ::pql((PFEOBJ *)&v31)) / 32,
          v23 = PFEOBJ::pql((PFEOBJ *)&v31),
          v24 = v21,
          v3 = a2,
          ((0x80000000 >> ((a2 - v24) % 32)) & *(_DWORD *)(*((_DWORD *)v23 + 1) + 4 * v22)) != 0) )
    {
      v4 = 1;
      v32 = 1;
    }
    else
    {
      v4 = v32;
    }
    if ( v4 )
      goto LABEL_14;
    goto LABEL_8;
  }
  v14 = *(_DWORD *)(*(_DWORD *)this + 784);
  v15 = v14 != 0;
  v16 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 80) + 20) + 45) >> 4;
  if ( v16 >= 7 || !*(&FontAssocDefaultTable + 164 * v16) )
    v16 = 6;
  if ( v14 )
  {
    v15 = 1;
    if ( !dword_26CDFC[164 * v16] )
      v15 = dword_26CDF8[164 * v16] == 0 && v14 != 0;
  }
  v31 = (struct PFE **)dword_26CDF8[164 * v16 + v15];
  if ( v31 )
  {
    if ( *((_DWORD *)PFEOBJ::pql((PFEOBJ *)&v31) + 1) )
    {
      if ( a2 >= *(_WORD *)PFEOBJ::pql((PFEOBJ *)&v31) && a2 <= *((_WORD *)PFEOBJ::pql((PFEOBJ *)&v31) + 1) )
      {
        v17 = *(unsigned __int16 *)PFEOBJ::pql((PFEOBJ *)&v31);
        v18 = (a2 - *(unsigned __int16 *)PFEOBJ::pql((PFEOBJ *)&v31)) / 32;
        v19 = PFEOBJ::pql((PFEOBJ *)&v31);
        v20 = v17;
        v3 = a2;
        if ( ((0x80000000 >> ((a2 - v20) % 32)) & *(_DWORD *)(*((_DWORD *)v19 + 1) + 4 * v18)) != 0 )
        {
LABEL_34:
          v32 = 1;
          goto LABEL_14;
        }
      }
    }
  }
LABEL_8:
  v5 = *(_DWORD *)(*(_DWORD *)this + 80);
  v6 = *(_DWORD *)(*(_DWORD *)this + 784) != 0;
  v26 = v6;
  v7 = *(struct _LIST_ENTRY **)(v5 + 76);
  if ( v7 )
    v8 = v7 + 1;
  else
    v8 = &NullListHead;
  v9 = v3;
  v30 = v3;
  while ( 1 )
  {
    v10 = *(_DWORD *)(v5 + 76);
    Flink = v8->Flink;
    v28 = Flink;
    v12 = v10 ? (struct _LIST_ENTRY *)(v10 + 8) : &NullListHead;
    if ( Flink == v12 )
      break;
    v31 = (struct PFE **)*((_DWORD *)&Flink[3].Flink + (*((_DWORD *)&Flink[3].Flink + v6) != 0 && v6));
    if ( *((_DWORD *)PFEOBJ::pql((PFEOBJ *)&v31) + 1)
      && v3 >= *(_WORD *)PFEOBJ::pql((PFEOBJ *)&v31)
      && v3 <= *((_WORD *)PFEOBJ::pql((PFEOBJ *)&v31) + 1) )
    {
      v27 = *(_WORD *)PFEOBJ::pql((PFEOBJ *)&v31);
      v25 = (v9 - *(unsigned __int16 *)PFEOBJ::pql((PFEOBJ *)&v31)) / 32;
      if ( ((0x80000000 >> ((v30 - v27) % 32)) & *(_DWORD *)(*((_DWORD *)PFEOBJ::pql((PFEOBJ *)&v31) + 1) + 4 * v25)) != 0 )
        goto LABEL_34;
      v3 = a2;
      v9 = v30;
    }
    v8 = v28;
    v6 = v26;
  }
LABEL_14:
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  return v32;
}
