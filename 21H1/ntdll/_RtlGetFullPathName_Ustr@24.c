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
        unsigned int a2,
        wchar_t *a3,
        _DWORD *a4,
        _BYTE *a5,
        int *a6)
{
  wchar_t *v7; // ebx
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
  HANDLE *v21; // ecx
  unsigned int j; // esi
  unsigned int v23; // eax
  unsigned int k; // ecx
  unsigned int v25; // ecx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  unsigned int v29; // esi
  unsigned int v30; // edi
  int v31; // eax
  unsigned int v32; // esi
  unsigned int m; // eax
  int v35; // esi
  int v36; // esi
  int v37; // eax
  int v38; // eax
  HANDLE *v39; // eax
  _CURDIR *v40; // edx
  int v41; // eax
  wchar_t v42; // ax
  wchar_t v43; // ax
  HANDLE *v44; // eax
  _CURDIR *p_CurrentDirectory; // ebx
  unsigned __int16 v46; // si
  unsigned __int16 v47; // ax
  int v48; // ecx
  unsigned int v49; // ebx
  unsigned int v50; // edi
  int v51; // ecx
  int v52; // eax
  WCHAR v53; // si
  NTSTATUS v54; // eax
  unsigned int v55; // eax
  unsigned __int16 Length; // cx
  unsigned int v57; // eax
  HANDLE *v58; // eax
  _CURDIR *v59; // ebx
  int v60; // eax
  size_t v61; // [esp-4h] [ebp-94h]
  _UNICODE_STRING DestinationString; // [esp+10h] [ebp-80h] BYREF
  unsigned int v63; // [esp+18h] [ebp-78h]
  int v64; // [esp+1Ch] [ebp-74h]
  unsigned int v65; // [esp+20h] [ebp-70h]
  unsigned int v66; // [esp+24h] [ebp-6Ch]
  int *v67; // [esp+28h] [ebp-68h]
  unsigned int v68; // [esp+2Ch] [ebp-64h]
  unsigned int Size; // [esp+30h] [ebp-60h]
  int Size_4; // [esp+34h] [ebp-5Ch]
  unsigned int v71; // [esp+38h] [ebp-58h]
  unsigned int v72; // [esp+3Ch] [ebp-54h]
  PVOID BaseAddress; // [esp+40h] [ebp-50h]
  int v74; // [esp+44h] [ebp-4Ch]
  unsigned __int16 *v75; // [esp+48h] [ebp-48h]
  _BYTE *v76; // [esp+4Ch] [ebp-44h]
  int v77; // [esp+50h] [ebp-40h] BYREF
  const wchar_t *Buffer; // [esp+54h] [ebp-3Ch]
  unsigned int v79; // [esp+58h] [ebp-38h]
  bool v80; // [esp+5Fh] [ebp-31h]
  _UNICODE_STRING Value; // [esp+60h] [ebp-30h] BYREF
  char v82; // [esp+6Bh] [ebp-25h]
  WCHAR SourceString; // [esp+6Ch] [ebp-24h] BYREF
  _BYTE v84[6]; // [esp+6Eh] [ebp-22h]
  CPPEH_RECORD ms_exc; // [esp+78h] [ebp-18h]

  Size = a2;
  v75 = a1;
  v7 = a3;
  v68 = (unsigned int)a4;
  v76 = a5;
  v67 = a6;
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *a5 = 0;
  if ( a2 > 0xFFFF )
    Size = 0xFFFF;
  *a6 = 0;
  a6[1] = 0;
  v66 = *a1;
  v8 = v66 >> 1;
  v65 = v66 >> 1;
  if ( !(v66 >> 1) )
    return 0;
  v9 = (_WORD *)*((_DWORD *)a1 + 1);
  if ( !*v9 )
    return 0;
  v10 = v66 >> 1;
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
  v80 = v13 != 92 && v13 != 47;
  v72 = Size >> 1;
  v63 = Size >> 1;
  LODWORD(v61) = Size;
  memset(a3, 0, v61);
  Value.Length = 0;
  Value.MaximumLength = 2 * (Size >> 1);
  Value.Buffer = a3;
  IsDosDeviceName_Ustr = RtlpIsDosDeviceName_Ustr(a1);
  if ( IsDosDeviceName_Ustr )
  {
    v49 = HIWORD(IsDosDeviceName_Ustr);
    IsDosDeviceName_Ustr = (unsigned __int16)IsDosDeviceName_Ustr;
    v68 = (unsigned __int16)IsDosDeviceName_Ustr;
    if ( !v76 || !v49 )
      goto LABEL_124;
    if ( (int)RtlpCheckDeviceName(v76) >= 0 && !*v76 )
    {
      IsDosDeviceName_Ustr = v68;
LABEL_124:
      v50 = IsDosDeviceName_Ustr + 8;
      if ( IsDosDeviceName_Ustr + 8 >= (unsigned __int16)(2 * v72) )
        return IsDosDeviceName_Ustr + 10 <= 0xFFFF ? IsDosDeviceName_Ustr + 10 : 0;
      RtlUnicodeStringCopy(&Value, &RtlpSlashSlashDot);
      RtlUnicodeStringCbCatStringN(v68);
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
  *v67 = v20;
  v77 = 0;
  Buffer = 0;
  v76 = 0;
  v21 = 0;
  BaseAddress = 0;
  v82 = 0;
  j = 0;
  v74 = 0;
  ms_exc.registration.TryLevel = 0;
  if ( v20 != 2 )
  {
    switch ( v20 )
    {
      case 1:
        v51 = 0;
        v64 = 0;
        for ( j = 2; ; ++j )
        {
          Size_4 = j;
          if ( j >= v8 )
            break;
          v52 = *(unsigned __int16 *)(*((_DWORD *)v15 + 1) + 2 * j);
          if ( v52 == 92 || v52 == 47 )
          {
            v64 = ++v51;
            if ( v51 == 2 )
              break;
          }
        }
        v79 = j;
        Buffer = (const wchar_t *)*((_DWORD *)v15 + 1);
        LOWORD(v77) = 2 * j;
        HIWORD(v77) = v15[1];
        v74 = j;
        goto LABEL_99;
      case 3:
        v44 = RtlpReferenceCurrentDirectory(0);
        BaseAddress = v44;
        v82 = 1;
        if ( v44 )
          p_CurrentDirectory = (_CURDIR *)(v44 + 3);
        else
          p_CurrentDirectory = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
        v46 = NLS_UPCASE(*p_CurrentDirectory->DosPath.Buffer);
        v47 = NLS_UPCASE(**((_WORD **)v75 + 1));
        HIWORD(v79) = v47;
        if ( v46 == v47 )
        {
          v77 = *(_DWORD *)&p_CurrentDirectory->DosPath.Length;
          Buffer = p_CurrentDirectory->DosPath.Buffer;
          RtlUnicodeStringCopy(&Value, &v77);
          v7 = Value.Buffer;
        }
        else
        {
          LOWORD(v48) = v47;
          RtlpCheckRelativeDrive(v48);
          SourceString = 61;
          v53 = HIWORD(v79);
          *(_WORD *)v84 = HIWORD(v79);
          *(_DWORD *)&v84[2] = 58;
          RtlInitUnicodeString(&DestinationString, &SourceString);
          v54 = RtlQueryEnvironmentVariable_U(0, &DestinationString, &Value);
          if ( v54 >= 0 )
          {
            Length = Value.Length;
            v57 = Value.Length >> 1;
            Size_4 = v57;
            if ( v57 <= 3 || v57 >= v72 )
            {
              v7 = Value.Buffer;
            }
            else
            {
              v7 = Value.Buffer;
              Value.Buffer[v57] = 92;
              Value.Length = Length + 2;
            }
            LOWORD(v77) = Value.Length;
          }
          else
          {
            if ( v54 == -1073741789 )
            {
              v55 = Value.Length + 2;
              v76 = (_BYTE *)v55;
              if ( v55 > 0xFFFF )
              {
                v32 = 0;
                v76 = 0;
                v7 = Value.Buffer;
                v30 = v72;
                goto LABEL_60;
              }
            }
            else
            {
              Value.Length = 0;
              SourceString = v53;
              *(_DWORD *)v84 = 6029370;
              *(_WORD *)&v84[4] = 0;
              RtlUnicodeStringCopyString(&Value, &SourceString);
              LOWORD(v55) = 8;
            }
            LOWORD(v77) = v55;
            v7 = Value.Buffer;
          }
        }
        v79 = 3;
        j = 2;
        v74 = 2;
        v15 = v75;
        goto LABEL_27;
      case 4:
        v58 = RtlpReferenceCurrentDirectory(1);
        BaseAddress = v58;
        v82 = 1;
        if ( v58 )
        {
          v59 = (_CURDIR *)(v58 + 3);
        }
        else
        {
          v59 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          j = v74;
        }
        v60 = RtlpComputeBackupIndex(v59);
        v79 = v60;
        v77 = *(_DWORD *)&v59->DosPath.Length;
        Buffer = v59->DosPath.Buffer;
        if ( v60 == 3 )
          LOWORD(v77) = 4;
        else
          LOWORD(v77) = 2 * v60;
        goto LABEL_99;
      case 5:
        v39 = RtlpReferenceCurrentDirectory(0);
        BaseAddress = v39;
        v82 = 1;
        if ( v39 )
        {
          v40 = (_CURDIR *)(v39 + 3);
          v67[1] = (int)v39[5];
        }
        else
        {
          v40 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          j = v74;
        }
        v77 = *(_DWORD *)&v40->DosPath.Length;
        Buffer = v40->DosPath.Buffer;
        v79 = RtlpComputeBackupIndex(v40);
LABEL_99:
        RtlUnicodeStringCopy(&Value, &v77);
        v7 = Value.Buffer;
        v15 = v75;
        goto LABEL_27;
      case 6:
      case 7:
        v79 = 4;
        j = 4;
        v74 = 4;
        if ( v8 < 4 )
        {
          j = v8;
          v74 = v8;
        }
        v77 = RtlpSlashSlashDot;
        Buffer = L"\\\\.\\";
        RtlUnicodeStringCopy(&Value, &v77);
        v15 = v75;
        v7 = Value.Buffer;
        if ( Value.Length >= 6u )
          Value.Buffer[2] = *(_WORD *)(*((_DWORD *)v75 + 1) + 4);
        if ( *v67 == 7 )
          v80 = 0;
        goto LABEL_27;
      default:
        v32 = 0;
        v76 = 0;
        v30 = v72;
        goto LABEL_61;
    }
  }
  v79 = 3;
LABEL_27:
  v66 += (unsigned __int16)v77 - 2 * j;
  v23 = v66 + 2;
  v67 = (int *)(v66 + 2);
  if ( v66 + 2 <= Size )
    goto LABEL_28;
  if ( v8 > 1 )
  {
LABEL_75:
    v32 = v23;
    if ( v23 > 0xFFFF )
      v32 = 0;
    v30 = v72;
    goto LABEL_59;
  }
  if ( **((_WORD **)v15 + 1) != 46 )
  {
    v23 = (unsigned int)v67;
    goto LABEL_75;
  }
  if ( v8 != 1 )
  {
    v32 = v66 <= 0xFFFF ? v66 : 0;
    v30 = v72;
    goto LABEL_59;
  }
  if ( (_WORD)v77 == 8 )
  {
    if ( Size <= 8 )
    {
      v32 = 10;
      v30 = v72;
      goto LABEL_59;
    }
  }
  else
  {
    v15 = v75;
    if ( Size < (unsigned __int16)v77 )
    {
      v32 = (unsigned __int16)v77;
      v30 = v72;
      goto LABEL_59;
    }
    Size_4 = Value.Length >> 1;
    if ( Size_4 && v7[(Value.Length >> 1) - 1] == 92 )
      Value.Length -= 2;
  }
LABEL_28:
  for ( k = 0; ; ++k )
  {
    Size_4 = k;
    if ( k >= Value.Length >> 1 )
      break;
    if ( v7[k] == 47 )
      v7[k] = 92;
  }
  v25 = Value.Length >> 1;
  v71 = v25;
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
        v71 = v25;
      }
      goto LABEL_43;
    }
    v66 = j + 1;
    if ( j + 1 != v8 )
    {
      v38 = *((_DWORD *)v15 + 1);
      Size = *(unsigned __int16 *)(v38 + 2 * j + 2);
      v8 = v65;
      if ( Size == 92 || (_WORD)Size == 47 )
      {
        j = v66;
        v74 = v66;
      }
      else if ( (_WORD)Size == 46
             && ((v15 = v75, j + 2 == v65) || (v41 = *(unsigned __int16 *)(v38 + 2 * j + 4), v41 == 92) || v41 == 47) )
      {
        while ( v25 >= v79 )
        {
          v42 = v7[v25];
          v7[v25] = 0;
          v15 = v75;
          if ( v42 == 92 )
          {
            while ( v25 >= v79 )
            {
              v43 = v7[v25];
              v7[v25] = 0;
              v8 = v65;
              if ( v43 == 92 )
              {
                if ( v25 < v79 )
                  goto LABEL_186;
                goto LABEL_113;
              }
              v71 = --v25;
            }
            break;
          }
          v71 = --v25;
        }
LABEL_186:
        v71 = ++v25;
LABEL_113:
        v74 = ++j;
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
              v71 = --v25;
            break;
          }
          v7[v25++] = v28;
          v71 = v25;
          v74 = ++j;
        }
        v74 = --j;
      }
    }
LABEL_43:
    v74 = ++j;
  }
  v29 = v79;
  if ( v80 && v25 > v79 && v7[v25 - 1] == 92 )
    v71 = --v25;
  v30 = v72;
  if ( v25 >= v72 )
    goto LABEL_53;
  while ( 1 )
  {
    v7[v25] = 0;
LABEL_53:
    if ( !v25 )
      break;
    v71 = --v25;
    v31 = v7[v25];
    if ( v31 != 32 && v31 != 46 )
    {
      v71 = ++v25;
      break;
    }
  }
  Value.Length = 2 * v25;
  if ( v68 )
  {
    for ( m = v25; ; --m )
    {
      Size_4 = m;
      if ( !m || v7[m - 1] == 92 )
        break;
    }
    if ( m >= v25 || m < v29 )
      *(_DWORD *)v68 = 0;
    else
      *(_DWORD *)v68 = &v7[m];
  }
  v32 = (unsigned __int16)(2 * v25);
LABEL_59:
  v76 = (_BYTE *)v32;
LABEL_60:
  v21 = (HANDLE *)BaseAddress;
LABEL_61:
  ms_exc.registration.TryLevel = -2;
  if ( v82 )
  {
    if ( v21 )
    {
      if ( !_InterlockedExchangeAdd((volatile signed __int32 *)v21, 0xFFFFFFFF) )
      {
        NtClose(v21[1]);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
        v7 = Value.Buffer;
        v32 = (unsigned int)v76;
      }
    }
    else
    {
      RtlLeaveCriticalSection(&FastPebLock);
    }
  }
  if ( v32 >= 2 * v30 && v30 )
    *v7 = 0;
  return v32;
}
