/*
 * XREFs of ?bFoundExactMatch@MAPPER@@QAEHPAPAU_FONTHASH@@H@Z @ 0x4A170
 * Callers:
 *     ?ppfeGetAMatch@@YGPAVPFE@@AAVXDCOBJ@@PAUtagENUMLOGFONTEXDVW@@PBGKKPAKPAU_POINTL@@3H@Z @ 0x49FBA (-ppfeGetAMatch@@YGPAVPFE@@AAVXDCOBJ@@PAUtagENUMLOGFONTEXDVW@@PBGKKPAKPAU_POINTL@@3H@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z @ 0x4A670 (-bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z.c)
 *     ?flFontType@PFEOBJ@@QAEKXZ @ 0x8487E (-flFontType@PFEOBJ@@QAEKXZ.c)
 *     ?pbktSearch@FHOBJ@@QAEPAU_HASHBUCKET@@PBGPAIPAU_UNIVERSAL_FONT_ID@@H@Z @ 0x89BDC (-pbktSearch@FHOBJ@@QAEPAU_HASHBUCKET@@PBGPAIPAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     _cCapString@12 @ 0x89EC2 (_cCapString@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __thiscall MAPPER::bFoundExactMatch(MAPPER *this, struct _FONTHASH **a2, int a3)
{
  _DWORD *v4; // eax
  struct _FONTHASH *v5; // eax
  unsigned __int16 *v6; // ecx
  unsigned __int16 *v7; // esi
  struct _FONTSUB *v8; // edi
  int v9; // eax
  struct _FONTSUB *v10; // ebx
  int v11; // esi
  struct _FONTSUB *v12; // esi
  unsigned __int16 *v13; // eax
  unsigned __int16 *v14; // ecx
  bool v15; // cf
  unsigned __int16 v16; // dx
  int v17; // eax
  struct _HASHBUCKET *v18; // ebx
  struct _HASHBUCKET *v19; // edi
  unsigned __int16 v20; // bx
  unsigned int v21; // ecx
  unsigned __int16 *v22; // edx
  unsigned __int16 v23; // ax
  int v24; // esi
  unsigned __int16 *v25; // eax
  char *v26; // esi
  unsigned __int16 *v27; // ecx
  unsigned __int16 v28; // dx
  int v29; // esi
  unsigned __int16 v30; // ax
  struct _HASHBUCKET *v31; // esi
  struct _HASHBUCKET *v32; // edi
  MAPPER *v33; // ebx
  struct _HASHBUCKET *v34; // eax
  int v35; // esi
  int v36; // ecx
  int result; // eax
  int *v38; // edi
  _DWORD *v39; // edx
  int v40; // ecx
  int v41; // eax
  int v42; // eax
  int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // eax
  int *v46; // edi
  MAPPER *v47; // edx
  unsigned __int8 v48; // bl
  _DWORD *v49; // ecx
  _DWORD *v50; // ecx
  int v51; // ecx
  bool v52; // zf
  struct _FONTHASH *v53; // eax
  int v54; // eax
  int v55; // eax
  const unsigned __int16 *v56; // esi
  struct _HASHBUCKET *v57; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v60; // eax
  char v61; // al
  const unsigned __int16 *v62; // edi
  int v63; // eax
  struct _HASHBUCKET *v64; // eax
  int v65; // edi
  struct _UNICODE_STRING DestinationString; // [esp+Ch] [ebp-9Ch] BYREF
  UNICODE_STRING SourceString; // [esp+14h] [ebp-94h] BYREF
  int v68; // [esp+1Ch] [ebp-8Ch]
  int v69; // [esp+20h] [ebp-88h]
  int v70; // [esp+24h] [ebp-84h]
  int v71; // [esp+28h] [ebp-80h]
  struct _FONTHASH *v72; // [esp+2Ch] [ebp-7Ch]
  int *v73; // [esp+30h] [ebp-78h]
  MAPPER *v74; // [esp+34h] [ebp-74h]
  struct _FONTHASH **v75; // [esp+38h] [ebp-70h] BYREF
  struct _FONTHASH *v76; // [esp+3Ch] [ebp-6Ch]
  char v77; // [esp+40h] [ebp-68h]
  char v78; // [esp+41h] [ebp-67h]
  char v79; // [esp+42h] [ebp-66h]
  char v80; // [esp+47h] [ebp-61h]
  unsigned __int16 *v81; // [esp+48h] [ebp-60h] BYREF
  char v82; // [esp+4Fh] [ebp-59h] BYREF
  struct _HASHBUCKET *v83; // [esp+50h] [ebp-58h]
  struct _HASHBUCKET *v84; // [esp+54h] [ebp-54h]
  struct _HASHBUCKET *v85; // [esp+58h] [ebp-50h]
  struct _HASHBUCKET *v86; // [esp+5Ch] [ebp-4Ch]
  unsigned __int16 v87[34]; // [esp+60h] [ebp-48h] BYREF

  v82 = 1;
  v4 = (_DWORD *)*((_DWORD *)this + 51);
  v74 = this;
  v73 = 0;
  v71 = 0;
  *v4 &= ~1u;
  v75 = a2;
  v68 = 0;
  v70 = 0;
  v5 = *a2;
  v72 = v5;
  v76 = v5;
  if ( !v5 )
    return 0;
  v6 = (unsigned __int16 *)*((_DWORD *)this + 2);
  v7 = v6;
  v8 = gpfsTable;
  v69 = *((_DWORD *)v5 + 1);
  v84 = 0;
  v9 = *((_DWORD *)this + 1);
  v10 = (struct _FONTSUB *)((char *)gpfsTable + 196 * gcfsTable);
  v81 = v6;
  v86 = 0;
  v85 = 0;
  v80 = *(_BYTE *)(v9 + 23);
  v78 = v80;
  v79 = v80;
  v77 = v80;
  v83 = 0;
  *(_DWORD *)&SourceString.Length = 0;
  SourceString.Buffer = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  for ( DestinationString.Buffer = 0; v7 < v6 + 31; ++v7 )
  {
    if ( !*v7 )
      break;
  }
  v11 = v7 - v6;
  if ( v11 )
  {
    SourceString.Buffer = v6;
    SourceString.Length = 2 * v11;
    SourceString.MaximumLength = 64;
    DestinationString.Buffer = v87;
    DestinationString.MaximumLength = 64;
    RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
  }
  v87[v11] = 0;
  v12 = 0;
  if ( v8 >= v10 )
    goto LABEL_17;
  while ( 1 )
  {
    v13 = (unsigned __int16 *)((char *)v8 + 64);
    v14 = v87;
    while ( 1 )
    {
      v15 = *v14 < *v13;
      if ( *v14 != *v13 )
        break;
      if ( !*v14 )
        goto LABEL_13;
      v16 = v14[1];
      v15 = v16 < v13[1];
      if ( v16 != v13[1] )
        break;
      v14 += 2;
      v13 += 2;
      if ( !v16 )
      {
LABEL_13:
        v17 = 0;
        goto LABEL_14;
      }
    }
    v17 = v15 ? -1 : 1;
LABEL_14:
    if ( v17 )
      goto LABEL_15;
    if ( v8 != gpfsTable )
    {
      if ( (*((_BYTE *)v8 + 129) & 1) != 0 )
      {
        v12 = v8;
      }
      else if ( v80 == *((_BYTE *)v8 + 128) )
      {
        v83 = v8;
      }
      goto LABEL_15;
    }
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    if ( *(_DWORD *)(ThreadWin32Thread + 340) <= 0x400u )
      v60 = *(_DWORD *)(ThreadWin32Thread + 352);
    else
      LOWORD(v60) = 0;
    if ( (v60 & 0x400) != 0 )
      break;
LABEL_15:
    v8 = (struct _FONTSUB *)((char *)v8 + 196);
    if ( v8 >= v10 )
      goto LABEL_16;
  }
  v12 = v8;
LABEL_16:
  v18 = v83;
  if ( v83 )
  {
LABEL_82:
    if ( (*((_BYTE *)v18 + 195) & 1) != 0 )
    {
      v83 = FHOBJ::pbktSearch((FHOBJ *)&v75, v81, 0, 0, 0);
      v84 = v83;
      v57 = FHOBJ::pbktSearch((FHOBJ *)&v75, (const unsigned __int16 *)v18 + 65, 0, 0, 0);
      v31 = v83;
      v32 = v57;
      v85 = v57;
    }
    else
    {
      v32 = FHOBJ::pbktSearch((FHOBJ *)&v75, (const unsigned __int16 *)v18 + 65, 0, 0, 0);
      v31 = 0;
      v61 = *((_BYTE *)v18 + 194);
      v85 = v32;
      v78 = v61;
    }
    goto LABEL_37;
  }
LABEL_17:
  v18 = v12;
  if ( v12 )
    goto LABEL_82;
  v19 = 0;
  if ( v81 )
  {
    v20 = *v81;
    v21 = 0;
    v22 = v81;
    if ( *v81 )
    {
      LOBYTE(v23) = *v81;
      do
      {
        ++v22;
        v21 = (unsigned __int8)v23 + 257 * v21;
        v23 = *v22;
      }
      while ( *v22 );
    }
    v24 = *((_DWORD *)v72 + v21 % *((_DWORD *)v72 + 2) + 7);
    v83 = (struct _HASHBUCKET *)v24;
    if ( v24 )
    {
      v25 = v81;
      do
      {
        v26 = (char *)(v24 + 36);
        v27 = v25;
        if ( v20 == *(_WORD *)v26 )
        {
          v28 = v20;
          v29 = v26 - (char *)v25;
          while ( v28 )
          {
            v30 = v27[1];
            ++v27;
            v28 = v30;
            if ( v30 != *(unsigned __int16 *)((char *)v27 + v29) )
            {
              v25 = v81;
              goto LABEL_29;
            }
          }
          v31 = v83;
          v25 = v81;
          if ( (*((_BYTE *)v83 + 20) & 2) == 0 )
            goto LABEL_34;
          v19 = v83;
        }
        else
        {
LABEL_29:
          v31 = v83;
        }
        v24 = *(_DWORD *)v31;
        v83 = (struct _HASHBUCKET *)v24;
      }
      while ( v24 );
    }
    v31 = v19;
  }
  else
  {
    v31 = 0;
  }
  v83 = v31;
LABEL_34:
  v84 = v31;
  if ( a3 && !v31 )
  {
    v56 = (const unsigned __int16 *)gpfmffTable;
    if ( !gpfmffTable )
      goto LABEL_71;
    v62 = (const unsigned __int16 *)((char *)gpfmffTable + 128 * gcfmffTable);
    cCapString(32);
    if ( v56 >= v62 )
      goto LABEL_71;
    while ( 1 )
    {
      v63 = wcscmp(v87, v56);
      if ( v63 )
        v63 = v63 < 0 ? -1 : 1;
      if ( !v63 )
        break;
      v56 += 64;
      if ( v56 >= v62 )
        goto LABEL_71;
    }
    if ( !v56 )
    {
LABEL_71:
      v31 = v83;
      goto LABEL_36;
    }
    v64 = FHOBJ::pbktSearch((FHOBJ *)&v75, v56 + 32, 0, 0, 0);
    v31 = v83;
    v32 = v64;
    v85 = v64;
    v70 = 1;
  }
  else
  {
LABEL_36:
    v32 = 0;
  }
LABEL_37:
  v33 = v74;
  if ( *((_WORD *)v74 + 6) && v69 == 1 )
  {
    v34 = FHOBJ::pbktSearch((FHOBJ *)&v75, (const unsigned __int16 *)v74 + 6, 0, 0, 0);
    v86 = v34;
  }
  else
  {
    v34 = 0;
  }
  if ( !v31 && !v32 && !v34 )
    return 0;
  **((_DWORD **)v33 + 51) |= 1u;
  *((_DWORD *)v33 + 55) |= 0x40000000u;
  v35 = 0;
  while ( 1 )
  {
    v36 = (int)*(&v84 + v35);
    v76 = (struct _FONTHASH *)v36;
    if ( v36 )
    {
      *((_BYTE *)v33 + 244) = *(&v77 + v35);
      v43 = *((_DWORD *)v33 + 55);
      v44 = (*(_BYTE *)(v36 + 20) & 2) != 0 ? v43 | 0x400000 : v43 & 0xFFBFFFFF;
      v45 = v35 == 2 ? v44 | 0x80000000 : v44 & 0x7FFFFFFF;
      *((_DWORD *)v33 + 55) = v45;
      v46 = *(int **)(v36 + 4);
      v73 = 0;
      if ( v46 )
        break;
    }
LABEL_42:
    if ( ++v35 >= 3 )
    {
      result = 0;
      goto LABEL_44;
    }
  }
  while ( 2 )
  {
    v81 = (unsigned __int16 *)v46[1];
    if ( !MAPPER::bNearMatch(v33, (struct PFEOBJ *)&v81, (MAPPER *)&v82, 0) )
    {
LABEL_61:
      v46 = (int *)*v46;
      if ( !v46 )
        goto LABEL_42;
      continue;
    }
    break;
  }
  v47 = v74;
  v48 = v82;
  v71 = v35;
  v73 = v46;
  v49 = (_DWORD *)*((_DWORD *)v74 + 49);
  v83 = (struct _HASHBUCKET *)*((_DWORD *)v74 + 55);
  v72 = (struct _FONTHASH *)v46[1];
  *v49 = *((_DWORD *)v74 + 44);
  v50 = (_DWORD *)*((_DWORD *)v47 + 50);
  *v50 = *((_DWORD *)v47 + 45);
  v50[1] = *((_DWORD *)v47 + 46);
  v51 = v48;
  v33 = v74;
  v52 = (char)v83 >= 0;
  v53 = v72;
  **((_DWORD **)v47 + 51) = **((_DWORD **)v47 + 51) & 0xFFFFFF | (v51 << 24);
  *((_DWORD *)v33 + 47) = v53;
  if ( v52 )
  {
    v54 = *((_DWORD *)v53 + 12);
    *((_DWORD *)v33 + 55) &= ~0x1000000u;
    *((_DWORD *)v33 + 48) = v54;
  }
  else
  {
    *((_DWORD *)v33 + 55) |= 0x1000000u;
  }
  v55 = *((_DWORD *)v33 + 43);
  if ( v55 )
  {
LABEL_66:
    *((_DWORD *)v33 + 42) = v55;
    goto LABEL_61;
  }
  if ( *((_DWORD *)v76 + 4) && (PFEOBJ::flFontType((PFEOBJ *)&v81) & 1) == 0 )
  {
    *((_DWORD *)v33 + 43) = 1;
    v55 = 1;
    goto LABEL_66;
  }
  result = 1;
  v68 = 1;
LABEL_44:
  v38 = v73;
  if ( v73 )
  {
    if ( v71 == 1 )
    {
      if ( v70 )
        goto LABEL_47;
    }
    else if ( v69 )
    {
LABEL_47:
      v39 = (_DWORD *)*((_DWORD *)v33 + 51);
      v40 = HIBYTE(*v39);
      if ( (_BYTE)v40 != 0xFF
        || (v65 = v38[1], *(_DWORD *)(*(_DWORD *)(v65 + 20) + 40))
        || (*(_BYTE *)(v65 + 8) & 1) != 0 )
      {
        if ( v40 == 255 )
        {
          v42 = 1;
        }
        else
        {
          v41 = 0;
          while ( charsets[v41] != v40 )
          {
            if ( (unsigned int)++v41 >= 0x11 )
              goto LABEL_110;
          }
          v42 = codepages[v41];
        }
      }
      else
      {
LABEL_110:
        v42 = _gbDBCSCodePage != 0 ? 0x4E4 : 0;
      }
      *v39 |= v42 << 8;
      result = v68;
      goto LABEL_53;
    }
    **((_DWORD **)v33 + 51) |= 2u;
    goto LABEL_47;
  }
LABEL_53:
  *((_DWORD *)v33 + 55) &= ~0x400000u;
  return result;
}
