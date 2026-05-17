/*
 * XREFs of _RtlGetFullPathName_Ustr@24 @ 0x4B2C8CA0
 * Callers:
 *     _RtlSetCurrentDirectory_U@4 @ 0x4B2A79F0 (_RtlSetCurrentDirectory_U@4.c)
 *     _RtlpDosPathNameToRelativeNtPathName@28 @ 0x4B2C5860 (_RtlpDosPathNameToRelativeNtPathName@28.c)
 *     _RtlGetFullPathName_UstrEx@32 @ 0x4B2C9650 (_RtlGetFullPathName_UstrEx@32.c)
 *     _RtlGetFullPathName_UEx@20 @ 0x4B2D22F0 (_RtlGetFullPathName_UEx@20.c)
 *     _LdrpGetFullPath@8 @ 0x4B2D2394 (_LdrpGetFullPath@8.c)
 * Callees:
 *     _RtlpReferenceCurrentDirectory@4 @ 0x4B2A7C45 (_RtlpReferenceCurrentDirectory@4.c)
 *     _RtlpComputeBackupIndex@4 @ 0x4B2A95AD (_RtlpComputeBackupIndex@4.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _NLS_UPCASE@4 @ 0x4B2BFDC8 (_NLS_UPCASE@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlGetFullPathName_Ustr@24 @ 0x4B2C8CA0 (_RtlGetFullPathName_Ustr@24.c)
 *     _RtlpIsDosDeviceName_Ustr@4 @ 0x4B2C9330 (_RtlpIsDosDeviceName_Ustr@4.c)
 *     _RtlQueryEnvironmentVariable_U@12 @ 0x4B2DB100 (_RtlQueryEnvironmentVariable_U@12.c)
 *     _RtlUnicodeStringCopy@8 @ 0x4B2DDBF1 (_RtlUnicodeStringCopy@8.c)
 *     _RtlUnicodeStringCbCatStringN@12 @ 0x4B2F249F (_RtlUnicodeStringCbCatStringN@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlUnicodeStringCopyString@8 @ 0x4B32D540 (_RtlUnicodeStringCopyString@8.c)
 *     _RtlpCheckDeviceName@12 @ 0x4B32D58D (_RtlpCheckDeviceName@12.c)
 *     _RtlpCheckRelativeDrive@4 @ 0x4B32D619 (_RtlpCheckRelativeDrive@4.c)
 */

unsigned int __fastcall RtlGetFullPathName_Ustr(
        unsigned __int16 *a1,
        size_t a2,
        _WORD *a3,
        _DWORD *a4,
        _BYTE *a5,
        int *a6)
{
  _WORD *v7; // ebx
  unsigned int v8; // edi
  _WORD *v9; // eax
  unsigned int v10; // ecx
  _WORD *v11; // eax
  _WORD *i; // edx
  int v13; // eax
  unsigned int IsDosDeviceName_Ustr; // eax
  unsigned __int16 *v15; // edx
  unsigned __int16 *v16; // eax
  unsigned int v17; // ecx
  int v18; // esi
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  unsigned int j; // esi
  unsigned int v23; // eax
  unsigned int k; // ecx
  unsigned int v25; // ecx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  unsigned int v29; // esi
  size_t v30; // edi
  int v31; // eax
  unsigned int v32; // esi
  unsigned int m; // eax
  int v35; // esi
  int v36; // esi
  int v37; // eax
  int v38; // eax
  _CURDIR *v39; // eax
  _CURDIR *v40; // edx
  int v41; // eax
  __int16 v42; // ax
  __int16 v43; // ax
  _CURDIR *v44; // eax
  _CURDIR *p_CurrentDirectory; // ebx
  unsigned __int16 v46; // si
  unsigned __int16 v47; // ax
  int v48; // ecx
  unsigned int v49; // ebx
  unsigned int v50; // edi
  int v51; // ecx
  int v52; // eax
  WCHAR v53; // si
  int v54; // eax
  unsigned int v55; // eax
  __int16 v56; // cx
  unsigned int v57; // eax
  _CURDIR *v58; // eax
  _CURDIR *v59; // ebx
  int v60; // eax
  UNICODE_STRING DestinationString; // [esp+10h] [ebp-80h] BYREF
  size_t v62; // [esp+18h] [ebp-78h]
  int v63; // [esp+1Ch] [ebp-74h]
  unsigned int v64; // [esp+20h] [ebp-70h]
  unsigned int v65; // [esp+24h] [ebp-6Ch]
  int *v66; // [esp+28h] [ebp-68h]
  unsigned int v67; // [esp+2Ch] [ebp-64h]
  size_t Size; // [esp+30h] [ebp-60h]
  int v69; // [esp+34h] [ebp-5Ch]
  unsigned int v70; // [esp+38h] [ebp-58h]
  size_t v71; // [esp+3Ch] [ebp-54h]
  _CURDIR *v72; // [esp+40h] [ebp-50h]
  int v73; // [esp+44h] [ebp-4Ch]
  unsigned __int16 *v74; // [esp+48h] [ebp-48h]
  _BYTE *v75; // [esp+4Ch] [ebp-44h]
  int v76; // [esp+50h] [ebp-40h] BYREF
  const wchar_t *Buffer; // [esp+54h] [ebp-3Ch]
  unsigned int v78; // [esp+58h] [ebp-38h]
  bool v79; // [esp+5Fh] [ebp-31h]
  _WORD v80[2]; // [esp+60h] [ebp-30h] BYREF
  _WORD *v81; // [esp+64h] [ebp-2Ch]
  char v82; // [esp+6Bh] [ebp-25h]
  WCHAR SourceString; // [esp+6Ch] [ebp-24h] BYREF
  _BYTE v84[6]; // [esp+6Eh] [ebp-22h]
  CPPEH_RECORD ms_exc; // [esp+78h] [ebp-18h]

  Size = a2;
  v74 = a1;
  v7 = a3;
  v67 = (unsigned int)a4;
  v75 = a5;
  v66 = a6;
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *a5 = 0;
  if ( a2 > 0xFFFF )
    Size = 0xFFFF;
  *a6 = 0;
  a6[1] = 0;
  v65 = *a1;
  v8 = v65 >> 1;
  v64 = v65 >> 1;
  if ( !(v65 >> 1) )
    return 0;
  v9 = (_WORD *)*((_DWORD *)a1 + 1);
  if ( !*v9 )
    return 0;
  v10 = v65 >> 1;
  v11 = &v9[v8];
  for ( i = v11 - 1; ; --i )
  {
    if ( !v10 )
      return 0;
    if ( *i != 32 )
      break;
    --v10;
  }
  v13 = (unsigned __int16)*(v11 - 1);
  v79 = v13 != 92 && v13 != 47;
  v71 = Size >> 1;
  v62 = Size >> 1;
  memset(a3, 0, Size);
  v80[0] = 0;
  v80[1] = 2 * (Size >> 1);
  v81 = a3;
  IsDosDeviceName_Ustr = RtlpIsDosDeviceName_Ustr(a1);
  if ( IsDosDeviceName_Ustr )
  {
    v49 = HIWORD(IsDosDeviceName_Ustr);
    IsDosDeviceName_Ustr = (unsigned __int16)IsDosDeviceName_Ustr;
    v67 = (unsigned __int16)IsDosDeviceName_Ustr;
    if ( !v75 || !v49 )
      goto LABEL_124;
    if ( (int)RtlpCheckDeviceName(v75) >= 0 && !*v75 )
    {
      IsDosDeviceName_Ustr = v67;
LABEL_124:
      v50 = IsDosDeviceName_Ustr + 8;
      if ( IsDosDeviceName_Ustr + 8 >= (unsigned __int16)(2 * v71) )
        return IsDosDeviceName_Ustr + 10 <= 0xFFFF ? IsDosDeviceName_Ustr + 10 : 0;
      RtlUnicodeStringCopy(v80, &RtlpSlashSlashDot);
      RtlUnicodeStringCbCatStringN(v67);
      return v50;
    }
    return 0;
  }
  v15 = a1;
  v16 = (unsigned __int16 *)*((_DWORD *)a1 + 1);
  v17 = *a1;
  if ( v17 >= 2 && ((v18 = *v16, v18 == 92) || v18 == 47) )
  {
    if ( v17 >= 4 && ((v35 = v16[1], v35 == 92) || v35 == 47) )
    {
      if ( v17 >= 6 && ((v36 = v16[2], v36 == 46) || v36 == 63) )
      {
        if ( v17 >= 8 && ((v37 = v16[3], v37 == 92) || v37 == 47) )
          v20 = 6;
        else
          v20 = v17 != 6 ? 1 : 7;
      }
      else
      {
        v20 = 1;
      }
    }
    else
    {
      v20 = 4;
    }
  }
  else if ( v17 >= 4 && *v16 && v16[1] == 58 )
  {
    if ( v17 >= 6 && ((v19 = v16[2], v19 == 92) || v19 == 47) )
      v20 = 2;
    else
      v20 = 3;
  }
  else
  {
    v20 = 5;
  }
  *v66 = v20;
  v76 = 0;
  Buffer = 0;
  v75 = 0;
  v21 = 0;
  v72 = 0;
  v82 = 0;
  j = 0;
  v73 = 0;
  ms_exc.registration.TryLevel = 0;
  if ( v20 != 2 )
  {
    switch ( v20 )
    {
      case 1:
        v51 = 0;
        v63 = 0;
        for ( j = 2; ; ++j )
        {
          v69 = j;
          if ( j >= v8 )
            break;
          v52 = *(unsigned __int16 *)(*((_DWORD *)v15 + 1) + 2 * j);
          if ( v52 == 92 || v52 == 47 )
          {
            v63 = ++v51;
            if ( v51 == 2 )
              break;
          }
        }
        v78 = j;
        Buffer = (const wchar_t *)*((_DWORD *)v15 + 1);
        LOWORD(v76) = 2 * j;
        HIWORD(v76) = v15[1];
        v73 = j;
        goto LABEL_99;
      case 3:
        v44 = (_CURDIR *)RtlpReferenceCurrentDirectory(0);
        v72 = v44;
        v82 = 1;
        if ( v44 )
          p_CurrentDirectory = v44 + 1;
        else
          p_CurrentDirectory = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
        v46 = NLS_UPCASE(*p_CurrentDirectory->DosPath.Buffer);
        v47 = NLS_UPCASE(**((_WORD **)v74 + 1));
        HIWORD(v78) = v47;
        if ( v46 == v47 )
        {
          v76 = *(_DWORD *)&p_CurrentDirectory->DosPath.Length;
          Buffer = p_CurrentDirectory->DosPath.Buffer;
          RtlUnicodeStringCopy(v80, &v76);
          v7 = v81;
        }
        else
        {
          LOWORD(v48) = v47;
          RtlpCheckRelativeDrive(v48);
          SourceString = 61;
          v53 = HIWORD(v78);
          *(_WORD *)v84 = HIWORD(v78);
          *(_DWORD *)&v84[2] = 58;
          RtlInitUnicodeString(&DestinationString, &SourceString);
          v54 = RtlQueryEnvironmentVariable_U(0, &DestinationString, v80);
          if ( v54 >= 0 )
          {
            v56 = v80[0];
            v57 = v80[0] >> 1;
            v69 = v57;
            if ( v57 <= 3 || v57 >= v71 )
            {
              v7 = v81;
            }
            else
            {
              v7 = v81;
              v81[v57] = 92;
              v80[0] = v56 + 2;
            }
            LOWORD(v76) = v80[0];
          }
          else
          {
            if ( v54 == -1073741789 )
            {
              v55 = v80[0] + 2;
              v75 = (_BYTE *)v55;
              if ( v55 > 0xFFFF )
              {
                v32 = 0;
                v75 = 0;
                v7 = v81;
                v30 = v71;
                goto LABEL_60;
              }
            }
            else
            {
              v80[0] = 0;
              SourceString = v53;
              *(_DWORD *)v84 = 6029370;
              *(_WORD *)&v84[4] = 0;
              RtlUnicodeStringCopyString(v80, &SourceString);
              LOWORD(v55) = 8;
            }
            LOWORD(v76) = v55;
            v7 = v81;
          }
        }
        v78 = 3;
        j = 2;
        v73 = 2;
        v15 = v74;
        goto LABEL_27;
      case 4:
        v58 = (_CURDIR *)RtlpReferenceCurrentDirectory(1);
        v72 = v58;
        v82 = 1;
        if ( v58 )
        {
          v59 = v58 + 1;
        }
        else
        {
          v59 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          j = v73;
        }
        v60 = RtlpComputeBackupIndex(v59);
        v78 = v60;
        v76 = *(_DWORD *)&v59->DosPath.Length;
        Buffer = v59->DosPath.Buffer;
        if ( v60 == 3 )
          LOWORD(v76) = 4;
        else
          LOWORD(v76) = 2 * v60;
        goto LABEL_99;
      case 5:
        v39 = (_CURDIR *)RtlpReferenceCurrentDirectory(0);
        v72 = v39;
        v82 = 1;
        if ( v39 )
        {
          v40 = v39 + 1;
          v66[1] = (int)v39[1].Handle;
        }
        else
        {
          v40 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          j = v73;
        }
        v76 = *(_DWORD *)&v40->DosPath.Length;
        Buffer = v40->DosPath.Buffer;
        v78 = RtlpComputeBackupIndex(v40);
LABEL_99:
        RtlUnicodeStringCopy(v80, &v76);
        v7 = v81;
        v15 = v74;
        goto LABEL_27;
      case 6:
      case 7:
        v78 = 4;
        j = 4;
        v73 = 4;
        if ( v8 < 4 )
        {
          j = v8;
          v73 = v8;
        }
        v76 = RtlpSlashSlashDot;
        Buffer = L"\\\\.\\";
        RtlUnicodeStringCopy(v80, &v76);
        v15 = v74;
        v7 = v81;
        if ( v80[0] >= 6u )
          v81[2] = *(_WORD *)(*((_DWORD *)v74 + 1) + 4);
        if ( *v66 == 7 )
          v79 = 0;
        goto LABEL_27;
      default:
        v32 = 0;
        v75 = 0;
        v30 = v71;
        goto LABEL_61;
    }
  }
  v78 = 3;
LABEL_27:
  v65 += (unsigned __int16)v76 - 2 * j;
  v23 = v65 + 2;
  v66 = (int *)(v65 + 2);
  if ( v65 + 2 <= Size )
    goto LABEL_28;
  if ( v8 > 1 )
  {
LABEL_75:
    v32 = v23;
    if ( v23 > 0xFFFF )
      v32 = 0;
    v30 = v71;
    goto LABEL_59;
  }
  if ( **((_WORD **)v15 + 1) != 46 )
  {
    v23 = (unsigned int)v66;
    goto LABEL_75;
  }
  if ( v8 != 1 )
  {
    v32 = v65 <= 0xFFFF ? v65 : 0;
    v30 = v71;
    goto LABEL_59;
  }
  if ( (_WORD)v76 == 8 )
  {
    if ( Size <= 8 )
    {
      v32 = 10;
      v30 = v71;
      goto LABEL_59;
    }
  }
  else
  {
    v15 = v74;
    if ( Size < (unsigned __int16)v76 )
    {
      v32 = (unsigned __int16)v76;
      v30 = v71;
      goto LABEL_59;
    }
    v69 = v80[0] >> 1;
    if ( v69 && v7[(v80[0] >> 1) - 1] == 92 )
      v80[0] -= 2;
  }
LABEL_28:
  for ( k = 0; ; ++k )
  {
    v69 = k;
    if ( k >= v80[0] >> 1 )
      break;
    if ( v7[k] == 47 )
      v7[k] = 92;
  }
  v25 = v80[0] >> 1;
  v70 = v25;
  while ( j < v8 )
  {
    v26 = *(unsigned __int16 *)(*((_DWORD *)v15 + 1) + 2 * j);
    if ( v26 == 92 )
      goto LABEL_44;
    v27 = v26 - 46;
    if ( v27 )
    {
      if ( v27 != 1 )
        goto LABEL_35;
LABEL_44:
      if ( !v25 || v7[v25 - 1] != 92 )
      {
        v7[v25++] = 92;
        v70 = v25;
      }
      goto LABEL_43;
    }
    v65 = j + 1;
    if ( j + 1 != v8 )
    {
      v38 = *((_DWORD *)v15 + 1);
      Size = *(unsigned __int16 *)(v38 + 2 * j + 2);
      v8 = v64;
      if ( Size == 92 || (_WORD)Size == 47 )
      {
        j = v65;
        v73 = v65;
      }
      else if ( (_WORD)Size == 46
             && ((v15 = v74, j + 2 == v64) || (v41 = *(unsigned __int16 *)(v38 + 2 * j + 4), v41 == 92) || v41 == 47) )
      {
        while ( v25 >= v78 )
        {
          v42 = v7[v25];
          v7[v25] = 0;
          v15 = v74;
          if ( v42 == 92 )
          {
            while ( v25 >= v78 )
            {
              v43 = v7[v25];
              v7[v25] = 0;
              v8 = v64;
              if ( v43 == 92 )
              {
                if ( v25 < v78 )
                  goto LABEL_186;
                goto LABEL_113;
              }
              v70 = --v25;
            }
            break;
          }
          v70 = --v25;
        }
LABEL_186:
        v70 = ++v25;
LABEL_113:
        v73 = ++j;
      }
      else
      {
LABEL_35:
        while ( j < v8 )
        {
          v28 = *(unsigned __int16 *)(*((_DWORD *)v15 + 1) + 2 * j);
          if ( v28 == 92 || v28 == 47 )
          {
            if ( j < v8 && v25 >= 2 && v7[v25 - 1] == 46 && v7[v25 - 2] != 46 )
              v70 = --v25;
            break;
          }
          v7[v25++] = v28;
          v70 = v25;
          v73 = ++j;
        }
        v73 = --j;
      }
    }
LABEL_43:
    v73 = ++j;
  }
  v29 = v78;
  if ( v79 && v25 > v78 && v7[v25 - 1] == 92 )
    v70 = --v25;
  v30 = v71;
  if ( v25 >= v71 )
    goto LABEL_53;
  while ( 1 )
  {
    v7[v25] = 0;
LABEL_53:
    if ( !v25 )
      break;
    v70 = --v25;
    v31 = (unsigned __int16)v7[v25];
    if ( v31 != 32 && v31 != 46 )
    {
      v70 = ++v25;
      break;
    }
  }
  v80[0] = 2 * v25;
  if ( v67 )
  {
    for ( m = v25; ; --m )
    {
      v69 = m;
      if ( !m || v7[m - 1] == 92 )
        break;
    }
    if ( m >= v25 || m < v29 )
      *(_DWORD *)v67 = 0;
    else
      *(_DWORD *)v67 = &v7[m];
  }
  v32 = (unsigned __int16)(2 * v25);
LABEL_59:
  v75 = (_BYTE *)v32;
LABEL_60:
  v21 = (int)v72;
LABEL_61:
  ms_exc.registration.TryLevel = -2;
  if ( v82 )
  {
    if ( v21 )
    {
      if ( !_InterlockedExchangeAdd((volatile signed __int32 *)v21, 0xFFFFFFFF) )
      {
        NtClose(*(HANDLE *)(v21 + 4));
        RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v72);
        v7 = v81;
        v32 = (unsigned int)v75;
      }
    }
    else
    {
      RtlLeaveCriticalSection((int)&FastPebLock);
    }
  }
  if ( v32 >= 2 * v30 && v30 )
    *v7 = 0;
  return v32;
}
