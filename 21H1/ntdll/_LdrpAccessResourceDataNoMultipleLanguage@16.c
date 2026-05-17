/*
 * XREFs of _LdrpAccessResourceDataNoMultipleLanguage@16 @ 0x4B2BD9F0
 * Callers:
 *     _LdrpFindMessageInAlternateModule@20 @ 0x4B2B86EA (_LdrpFindMessageInAlternateModule@20.c)
 *     _LdrpGetRcConfig@16 @ 0x4B2B8818 (_LdrpGetRcConfig@16.c)
 *     _LdrpSearchResourceSection_U@20 @ 0x4B2BC6A0 (_LdrpSearchResourceSection_U@20.c)
 *     _LdrpAccessResourceData@16 @ 0x4B2BD414 (_LdrpAccessResourceData@16.c)
 *     _RtlpFileIsWin32WithRCManifest@4 @ 0x4B353DB4 (_RtlpFileIsWin32WithRCManifest@4.c)
 * Callees:
 *     _RtlpImageDirectoryEntryToData64@24 @ 0x4B2A7346 (_RtlpImageDirectoryEntryToData64@24.c)
 *     _RtlAddressInSectionTable@12 @ 0x4B2B95F0 (_RtlAddressInSectionTable@12.c)
 *     _RtlSectionTableFromVirtualAddress@12 @ 0x4B2B9E97 (_RtlSectionTableFromVirtualAddress@12.c)
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _LdrpGetFileSizeFromLoadAsDataTable@4 @ 0x4B2BE66C (_LdrpGetFileSizeFromLoadAsDataTable@4.c)
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 */

int __fastcall LdrpAccessResourceDataNoMultipleLanguage(int a1, unsigned int *a2, unsigned int *a3, _DWORD *a4)
{
  int v4; // ebx
  unsigned int v5; // eax
  unsigned int v6; // edi
  int v7; // esi
  int v8; // eax
  __int16 v9; // ax
  unsigned int v10; // edi
  _DWORD *v11; // edx
  unsigned int v12; // eax
  unsigned int i; // ecx
  unsigned int v14; // ebx
  int FileSizeFromLoadAsDataTable; // ecx
  int v16; // eax
  unsigned int v17; // edx
  int v18; // eax
  __int16 v19; // ax
  unsigned int v20; // esi
  _DWORD *v21; // edx
  unsigned int v22; // ebx
  unsigned int j; // ecx
  unsigned int v24; // edi
  unsigned int v25; // eax
  unsigned int v26; // esi
  unsigned int v27; // esi
  __int16 v29; // dx
  unsigned __int16 *v30; // edi
  char *v31; // eax
  char *v32; // esi
  int v33; // eax
  char v34[12]; // [esp+14h] [ebp-94h] BYREF
  int v35; // [esp+20h] [ebp-88h]
  unsigned int v36; // [esp+34h] [ebp-74h]
  _DWORD *v37; // [esp+38h] [ebp-70h]
  unsigned int v38; // [esp+3Ch] [ebp-6Ch]
  unsigned __int16 *v39; // [esp+40h] [ebp-68h]
  int v40; // [esp+44h] [ebp-64h]
  _DWORD v41[3]; // [esp+48h] [ebp-60h] BYREF
  unsigned int v42; // [esp+54h] [ebp-54h]
  int v43; // [esp+58h] [ebp-50h]
  unsigned int v44; // [esp+5Ch] [ebp-4Ch]
  unsigned int v45; // [esp+60h] [ebp-48h]
  int v46; // [esp+64h] [ebp-44h]
  int v47; // [esp+68h] [ebp-40h] BYREF
  int v48; // [esp+6Ch] [ebp-3Ch] BYREF
  int v49; // [esp+70h] [ebp-38h] BYREF
  unsigned int v50; // [esp+74h] [ebp-34h]
  unsigned int *v51; // [esp+78h] [ebp-30h]
  int v52; // [esp+7Ch] [ebp-2Ch]
  int v53; // [esp+80h] [ebp-28h]
  unsigned int v54; // [esp+84h] [ebp-24h] BYREF
  int VirtualMemory; // [esp+88h] [ebp-20h]
  char v56; // [esp+8Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+90h] [ebp-18h]

  v51 = a2;
  v4 = a1;
  v52 = a1;
  ms_exc.registration.TryLevel = 0;
  v56 = 1;
  v5 = a1;
  v50 = a1;
  v49 = 0;
  v6 = 0;
  v54 = 0;
  v7 = a1 & 3;
  if ( (a1 & 3) != 0 )
  {
    v56 = (a1 & 1) == 0;
    v5 = a1 & 0xFFFFFFFC;
    v50 = a1 & 0xFFFFFFFC;
  }
  v8 = RtlImageNtHeaderEx(1, v5, 0, 0, &v49);
  if ( !v49 )
    goto LABEL_17;
  v9 = *(_WORD *)(v49 + 24);
  if ( v9 != 267 )
  {
    if ( v9 != 523 )
      goto LABEL_67;
    v8 = RtlpImageDirectoryEntryToData64(v50, v56, 2u, v41, v49, &v54);
    v6 = v54;
LABEL_17:
    if ( v8 >= 0 )
      goto LABEL_18;
    goto LABEL_67;
  }
  if ( *(_DWORD *)(v49 + 116) <= 2u )
    goto LABEL_67;
  v10 = *(_DWORD *)(v49 + 136);
  v42 = v10;
  if ( !v10 )
    goto LABEL_67;
  v41[0] = *(_DWORD *)(v49 + 140);
  if ( !v56 && v10 >= *(_DWORD *)(v49 + 84) )
  {
    v11 = (_DWORD *)(*(unsigned __int16 *)(v49 + 20) + v49 + 24);
    v12 = *(unsigned __int16 *)(v49 + 6);
    v44 = v12;
    for ( i = 0; ; ++i )
    {
      v41[1] = i;
      v41[2] = v11;
      if ( i >= v12 )
        break;
      v14 = v11[3];
      if ( v10 >= v14 )
      {
        if ( v10 < v14 + v11[4] )
        {
          if ( v11 )
          {
            v6 = v50 + v42 + v11[5] - v14;
            goto LABEL_15;
          }
          break;
        }
        v12 = v44;
      }
      v11 += 10;
    }
    v6 = 0;
LABEL_15:
    v54 = v6;
    v4 = v52;
    if ( v6 )
    {
      v8 = 0;
      goto LABEL_17;
    }
LABEL_67:
    v6 = 0;
    goto LABEL_60;
  }
  v6 = v50 + v10;
LABEL_60:
  v54 = v6;
LABEL_18:
  v38 = v6;
  if ( !v6 )
    goto LABEL_69;
  VirtualMemory = 0;
  v49 = 0;
  v53 = 0;
  v47 = 0;
  v54 = v4 & 0xFFFFFFFC;
  RtlImageNtHeaderEx(1, v4 & 0xFFFFFFFC, 0, 0, &v47);
  if ( !v47 )
  {
    v16 = -1073741701;
    VirtualMemory = -1073741701;
    FileSizeFromLoadAsDataTable = v49;
    goto LABEL_26;
  }
  if ( (v4 & 1) == 0 )
  {
    v29 = *(_WORD *)(v47 + 24);
    if ( v29 != 267 && v29 != 523 )
    {
      FileSizeFromLoadAsDataTable = 0;
      v53 = 0;
      v16 = -1073741701;
      VirtualMemory = -1073741701;
      goto LABEL_26;
    }
    FileSizeFromLoadAsDataTable = *(_DWORD *)(v47 + 80);
    goto LABEL_24;
  }
  FileSizeFromLoadAsDataTable = LdrpGetFileSizeFromLoadAsDataTable(v4);
  v49 = FileSizeFromLoadAsDataTable;
  v53 = FileSizeFromLoadAsDataTable;
  if ( !FileSizeFromLoadAsDataTable )
  {
    VirtualMemory = NtQueryVirtualMemory(-1, v54, 3, v34, 28, 0);
    if ( VirtualMemory < 0 )
    {
      v16 = -1073741793;
      VirtualMemory = -1073741793;
      FileSizeFromLoadAsDataTable = v49;
      goto LABEL_26;
    }
    FileSizeFromLoadAsDataTable = v35;
LABEL_24:
    v53 = FileSizeFromLoadAsDataTable;
  }
  v16 = VirtualMemory;
LABEL_26:
  v46 = FileSizeFromLoadAsDataTable;
  v43 = v16;
  if ( v16 == -1073741701 )
    return -1073741701;
  v17 = v4 & 0xFFFFFFFC;
  v45 = v4 & 0xFFFFFFFC;
  if ( (unsigned int)v51 <= (v4 & 0xFFFFFFFC)
    || FileSizeFromLoadAsDataTable && (unsigned int)v51 >= FileSizeFromLoadAsDataTable + v17 )
  {
    return -1073741701;
  }
  v18 = 0;
  v40 = 0;
  if ( v7 )
  {
    if ( (v4 & 1) != 0 )
    {
      v18 = 1;
      v40 = 1;
    }
    v4 = v54;
    v52 = v54;
  }
  if ( v18 == 1 )
  {
    v48 = 0;
    RtlImageNtHeaderEx(1, v4, 0, 0, &v48);
    v39 = (unsigned __int16 *)v48;
    if ( v48 )
    {
      v19 = *(_WORD *)(v48 + 24);
      if ( v19 == 267 )
      {
        v20 = *(_DWORD *)(v48 + 136);
        goto LABEL_38;
      }
      if ( v19 == 523 )
      {
        v20 = *(_DWORD *)(v48 + 152);
LABEL_38:
        if ( v20 )
        {
          v44 = v4 + v20 - v6;
          v21 = (_DWORD *)(*(unsigned __int16 *)(v48 + 20) + v48 + 24);
          v22 = *(unsigned __int16 *)(v48 + 6);
          for ( j = 0; ; ++j )
          {
            v36 = j;
            v37 = v21;
            if ( j >= v22 )
              break;
            v24 = v21[3];
            if ( v20 >= v24 && v20 < v24 + v21[4] )
            {
              if ( !v21 )
                break;
              v25 = *v51;
              if ( *v51 <= v21[2] )
              {
                v4 = v52;
                FileSizeFromLoadAsDataTable = v46;
                v17 = v45;
                v26 = v44;
                goto LABEL_46;
              }
              v41[0] = v21[3];
              v30 = v39;
              v31 = RtlSectionTableFromVirtualAddress(v39, v25);
              v32 = v31;
              if ( v31 )
              {
                v4 = v52;
                v33 = RtlAddressInSectionTable((int)v30, v52, *((_DWORD *)v31 + 3));
                v26 = v38 + *((_DWORD *)v32 + 3) - v41[0] - v33 + v44;
                FileSizeFromLoadAsDataTable = v46;
                v17 = v45;
                goto LABEL_46;
              }
              break;
            }
            v21 += 10;
          }
        }
      }
    }
LABEL_69:
    ms_exc.registration.TryLevel = -2;
    return -1073741687;
  }
  v26 = 0;
LABEL_46:
  if ( a3 )
  {
    v27 = *v51 - v26 + v4;
    *a3 = v27;
    if ( v27 <= v17 || FileSizeFromLoadAsDataTable && v27 >= v17 + FileSizeFromLoadAsDataTable )
    {
      *a3 = 0;
      return -1073741701;
    }
  }
  if ( a4 )
    *a4 = v51[1];
  ms_exc.registration.TryLevel = -2;
  return v43;
}
