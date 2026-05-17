/*
 * XREFs of _RtlDosSearchPath_Ustr@36 @ 0x4B2C5170
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpDosPathNameToRelativeNtPathName@28 @ 0x4B2C5860 (_RtlpDosPathNameToRelativeNtPathName@28.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _RtlGetFullPathName_UstrEx@32 @ 0x4B2C9650 (_RtlGetFullPathName_UstrEx@32.c)
 *     _RtlDosApplyFileIsolationRedirection_Ustr@36 @ 0x4B2C9830 (_RtlDosApplyFileIsolationRedirection_Ustr@36.c)
 *     _RtlUnicodeStringCbCopyStringN@12 @ 0x4B2DDCAF (_RtlUnicodeStringCbCopyStringN@12.c)
 *     _RtlUnicodeStringCat@8 @ 0x4B2DDD16 (_RtlUnicodeStringCat@8.c)
 *     _RtlDoesFileExists_UstrEx@8 @ 0x4B2E318E (_RtlDoesFileExists_UstrEx@8.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwQueryAttributesFile@8 @ 0x4B2F2D50 (_ZwQueryAttributesFile@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __stdcall RtlDosSearchPath_Ustr(
        int a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        int a5,
        unsigned __int16 *a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9)
{
  unsigned __int16 *v9; // edi
  unsigned __int16 *v10; // esi
  unsigned int v11; // ecx
  unsigned __int16 *v12; // eax
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // eax
  int v17; // esi
  volatile signed __int32 *v18; // eax
  unsigned int v19; // ecx
  wchar_t *StringRoutine; // ecx
  int v21; // edi
  int v22; // eax
  int AttributesFile; // eax
  volatile signed __int32 *v24; // ebx
  int v25; // esi
  int v26; // esi
  unsigned int v28; // eax
  unsigned int v29; // edx
  unsigned int v30; // eax
  int v31; // ecx
  unsigned __int16 *v32; // ecx
  unsigned int v33; // eax
  unsigned __int16 v34; // si
  unsigned int v35; // esi
  char *v36; // ecx
  char *v37; // edx
  char *v38; // eax
  char *v39; // edi
  unsigned int v40; // eax
  int v41; // ecx
  int v42; // edx
  int v43; // eax
  unsigned __int16 *v44; // ebx
  unsigned __int16 *v45; // ecx
  unsigned __int16 *v46; // eax
  unsigned __int16 *i; // esi
  unsigned __int16 *v48; // eax
  int v49; // ecx
  unsigned int v50; // edx
  int v51; // edx
  unsigned __int16 v52; // cx
  int v53; // ebx
  int FullPathName_Ustr; // eax
  int v55; // eax
  int v56; // edx
  int v57; // edx
  int v58; // edx
  int v59; // edx
  int v60; // eax
  unsigned int v61; // eax
  unsigned int v62; // ebx
  unsigned int v63; // eax
  int v64; // ecx
  UNICODE_STRING UnicodeString; // [esp+10h] [ebp-2F8h] BYREF
  unsigned __int16 *v66; // [esp+18h] [ebp-2F0h]
  int v67; // [esp+1Ch] [ebp-2ECh]
  unsigned __int16 *v68; // [esp+20h] [ebp-2E8h]
  unsigned __int16 *v69; // [esp+24h] [ebp-2E4h]
  unsigned int v70; // [esp+28h] [ebp-2E0h]
  _DWORD *v71; // [esp+2Ch] [ebp-2DCh]
  int v72; // [esp+30h] [ebp-2D8h]
  int v73; // [esp+34h] [ebp-2D4h]
  int v74; // [esp+38h] [ebp-2D0h] BYREF
  _DWORD *v75; // [esp+3Ch] [ebp-2CCh]
  _DWORD *v76; // [esp+40h] [ebp-2C8h]
  unsigned __int16 *v77; // [esp+44h] [ebp-2C4h] BYREF
  int v78; // [esp+48h] [ebp-2C0h]
  unsigned int v79; // [esp+4Ch] [ebp-2BCh] BYREF
  unsigned __int16 *v80; // [esp+50h] [ebp-2B8h]
  int v81; // [esp+54h] [ebp-2B4h] BYREF
  _DWORD v82[3]; // [esp+58h] [ebp-2B0h] BYREF
  volatile signed __int32 *v83; // [esp+64h] [ebp-2A4h]
  _DWORD v84[3]; // [esp+68h] [ebp-2A0h] BYREF
  volatile signed __int32 *v85; // [esp+74h] [ebp-294h]
  _DWORD v86[6]; // [esp+78h] [ebp-290h] BYREF
  _DWORD v87[6]; // [esp+90h] [ebp-278h] BYREF
  char v88[40]; // [esp+A8h] [ebp-260h] BYREF
  char v89[40]; // [esp+D0h] [ebp-238h] BYREF
  _BYTE v90[524]; // [esp+F8h] [ebp-210h] BYREF

  v66 = a4;
  v73 = a5;
  v71 = a9;
  v69 = a2;
  v68 = a6;
  v76 = a7;
  v75 = a8;
  v70 = 0;
  v72 = 0;
  *(_DWORD *)&UnicodeString.Length = 34078720;
  UnicodeString.Buffer = (wchar_t *)v90;
  v9 = a3;
  v77 = a3;
  if ( a7 )
    *a7 = 0;
  v10 = v66;
  if ( v71 )
  {
    *v71 = 0;
    v10 = v66;
  }
  if ( a8 )
    *a8 = 0;
  if ( a6 )
  {
    *(_DWORD *)a6 = 0;
    *((_DWORD *)a6 + 1) = 0;
  }
  if ( (a1 & 0xFFFFFFF8) != 0 || !a2 || !a3 || v73 && a6 && !a7 )
    return -1073741811;
  v11 = *a3;
  v12 = (unsigned __int16 *)*((_DWORD *)a3 + 1);
  if ( v11 >= 2 && ((v13 = *v12, v13 == 92) || v13 == 47) )
  {
    if ( v11 >= 4 && ((v56 = v12[1], v56 == 92) || v56 == 47) )
    {
      if ( v11 >= 6 && ((v57 = v12[2], v57 == 46) || v57 == 63) )
      {
        if ( v11 >= 8 && ((v58 = v12[3], v58 == 92) || v58 == 47) )
          v15 = 6;
        else
          v15 = v11 != 6 ? 1 : 7;
      }
      else
      {
        v15 = 1;
      }
    }
    else
    {
      v15 = 4;
    }
  }
  else if ( v11 >= 4 && *v12 && v12[1] == 58 )
  {
    if ( v11 >= 6 && ((v14 = v12[2], v14 == 92) || v14 == 47) )
      v15 = 2;
    else
      v15 = 3;
  }
  else
  {
    v15 = 5;
  }
  v74 = v15;
  if ( (a1 & 2) != 0 )
  {
    if ( v15 != 5 )
    {
LABEL_26:
      if ( (int)RtlpDosPathNameToRelativeNtPathName(0, &v79, 0, 0, v82) < 0 )
      {
LABEL_34:
        if ( v10 && *v10 )
        {
          if ( (a1 & 4) == 0 )
          {
            v61 = *a3;
            if ( (_WORD)v61 )
            {
              v62 = *((_DWORD *)a3 + 1);
              v63 = v62 + 2 * (v61 >> 1);
              while ( v63 > v62 )
              {
                v64 = *(unsigned __int16 *)(v63 - 2);
                v63 -= 2;
                if ( v64 == 92 || v64 == 47 )
                  break;
                if ( v64 == 46 )
                  goto LABEL_47;
              }
            }
          }
          v19 = *v10 + *a3 + 2;
          if ( v19 > 0xFFFE )
          {
            v26 = -1073741562;
            goto LABEL_48;
          }
          if ( v19 > UnicodeString.MaximumLength )
          {
            UnicodeString.MaximumLength = *v10 + *a3 + 2;
            StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine((unsigned __int16)v19);
            UnicodeString.Buffer = StringRoutine;
            if ( !StringRoutine )
              return -1073741801;
          }
          else
          {
            StringRoutine = UnicodeString.Buffer;
          }
          memcpy(StringRoutine, *((const void **)a3 + 1), *a3);
          memcpy(&UnicodeString.Buffer[*a3 >> 1], *((const void **)v10 + 1), *v10);
          UnicodeString.Buffer[(*a3 + (unsigned int)*v10) >> 1] = 0;
          UnicodeString.Length = *a3 + *v10;
          if ( (int)RtlpDosPathNameToRelativeNtPathName(0, &v77, 0, 0, v84) >= 0 )
          {
            v21 = v78;
            if ( LOWORD(v84[0]) )
            {
              v77 = (unsigned __int16 *)v84[0];
              v78 = v84[1];
              v22 = v84[2];
            }
            else
            {
              v22 = 0;
            }
            v87[1] = v22;
            v87[2] = &v77;
            v87[0] = 24;
            v87[3] = 64;
            v87[4] = 0;
            v87[5] = 0;
            AttributesFile = ZwQueryAttributesFile(v87, v89);
            v24 = v85;
            v25 = AttributesFile;
            if ( v85 && !_InterlockedExchangeAdd(v85, 0xFFFFFFFF) )
            {
              NtClose(*((HANDLE *)v24 + 1));
              RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v24);
            }
            RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v21);
            if ( v25 >= 0 || v25 == -1073741757 || v25 == -1073741790 )
            {
              FullPathName_Ustr = RtlGetFullPathName_UstrEx(&UnicodeString, v73, v68, v76, v75, 0, &v74, v71);
LABEL_109:
              v26 = FullPathName_Ustr;
              if ( FullPathName_Ustr >= 0 )
                v26 = 0;
              goto LABEL_48;
            }
          }
        }
        goto LABEL_47;
      }
      v69 = v80;
      if ( LOWORD(v82[0]) )
      {
        v79 = v82[0];
        v80 = (unsigned __int16 *)v82[1];
        v16 = v82[2];
      }
      else
      {
        v16 = 0;
      }
      v86[1] = v16;
      v86[2] = &v79;
      v86[0] = 24;
      v86[3] = 64;
      v86[4] = 0;
      v86[5] = 0;
      v17 = ZwQueryAttributesFile(v86, v88);
      v18 = v83;
      if ( v83 && !_InterlockedExchangeAdd(v83, 0xFFFFFFFF) )
      {
        NtClose(*((HANDLE *)v18 + 1));
        RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v83);
      }
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v69);
      if ( v17 < 0 && v17 != -1073741757 && v17 != -1073741790 )
      {
        v10 = v66;
        goto LABEL_34;
      }
      v26 = RtlGetFullPathName_UstrEx(a3, v73, a6, v76, v75, 0, &v74, v71);
      if ( v26 < 0 )
        goto LABEL_48;
LABEL_53:
      v26 = 0;
      goto LABEL_48;
    }
    if ( v11 >= 4 && *v12 == 46 )
    {
      v59 = v12[1];
      if ( v59 == 92 || v59 == 47 || v59 == 46 && v11 >= 6 && ((v60 = v12[2], v60 == 92) || v60 == 47) )
      {
        v74 = 0;
        goto LABEL_26;
      }
    }
  }
  else if ( v15 != 5 )
  {
    goto LABEL_26;
  }
  if ( (a1 & 1) != 0 )
  {
    v81 = 0;
    v55 = RtlDosApplyFileIsolationRedirection_Ustr(1, a3, v10, v73, a6, &v81, 0, v75, v71);
    v26 = v55;
    if ( v55 >= 0 )
    {
      if ( v76 )
        *v76 = v81;
      goto LABEL_53;
    }
    if ( v55 != -1072365560 )
      goto LABEL_48;
    v10 = v66;
  }
  if ( v10 )
  {
    v28 = *a3;
    v72 = *v10;
    if ( (_WORD)v28 )
    {
      v29 = *((_DWORD *)a3 + 1);
      v30 = v29 + 2 * (v28 >> 1);
      if ( v30 > v29 )
      {
        while ( 1 )
        {
          v31 = *(unsigned __int16 *)(v30 - 2);
          v30 -= 2;
          if ( v31 == 46 )
            break;
          if ( v31 == 92 || v31 == 47 || v30 <= v29 )
            goto LABEL_66;
        }
        v66 = 0;
        v72 = 0;
      }
    }
  }
LABEL_66:
  v32 = v69;
  v33 = *v69;
  v34 = v33;
  v79 = v33;
  if ( (_WORD)v33 )
  {
    v35 = *((_DWORD *)v69 + 1);
    v36 = (char *)(v35 + 2 * (v33 >> 1));
    v37 = v36;
    if ( (unsigned int)v36 > v35 )
    {
      v38 = v36 - 2;
      v39 = v36;
      do
      {
        if ( *(_WORD *)v38 == 59 )
        {
          v67 = (unsigned __int16)((v39 - v37 + 2) >> 1);
          v52 = v67 - 1;
          if ( (_WORD)v67 != 1 )
          {
            v53 = *((unsigned __int16 *)v39 - 1);
            if ( v53 != 92 && v53 != 47 )
              v52 = v67;
          }
          if ( v52 > v70 )
            v70 = v52;
          v39 = v38;
        }
        v37 -= 2;
        v38 -= 2;
      }
      while ( (unsigned int)v37 > v35 );
      v67 = (int)v39;
      v9 = v77;
      v36 = (char *)v67;
    }
    LOWORD(v40) = (v36 - v37) >> 1;
    if ( (_WORD)v40 )
    {
      v41 = *((unsigned __int16 *)v36 - 1);
      if ( v41 != 92 && v41 != 47 )
        LOWORD(v40) = v40 + 1;
    }
    v40 = (unsigned __int16)v40;
    if ( (unsigned __int16)v40 <= v70 )
      v40 = v70;
    v32 = v69;
    v34 = v79;
    v70 = 2 * v40;
  }
  v42 = (unsigned __int16)v72;
  v43 = (unsigned __int16)v72 + *v9;
  v67 = (unsigned __int16)v72;
  v44 = v68;
  v79 = v70 + 2 + v43;
  if ( v79 > 0xFFFE )
  {
    v26 = -1073741562;
    goto LABEL_48;
  }
  v45 = (unsigned __int16 *)*((_DWORD *)v32 + 1);
  v68 = v45;
  v46 = &v45[v34 >> 1];
  v77 = v46;
  if ( v45 < v46 )
  {
    while ( 1 )
    {
      for ( i = v45; i != v46; ++i )
      {
        if ( *i == 59 )
          break;
      }
      v48 = (unsigned __int16 *)(((_WORD)i - (_WORD)v45) & 0xFFFE);
      v69 = v48;
      v72 = (unsigned __int16)v48;
      if ( (_WORD)v48 )
      {
        v49 = *(i - 1);
        if ( v49 != 92 && v49 != 47 )
          v69 = ++v48;
      }
      v50 = (unsigned __int16)v48 + *v9 + v42;
      if ( UnicodeString.MaximumLength < v50 + 2 )
      {
        if ( (_BYTE *)UnicodeString.Buffer != v90 || v50 > 0xFFFC )
          break;
        UnicodeString.MaximumLength = v79;
        UnicodeString.Buffer = (wchar_t *)NtdllpAllocateStringRoutine((unsigned __int16)v79);
        if ( !UnicodeString.Buffer )
          return -1073741801;
      }
      UnicodeString.Length = 0;
      RtlUnicodeStringCbCopyStringN((unsigned __int16)v72);
      if ( (_WORD)v69 && (_WORD)v72 != (_WORD)v69 )
      {
        UnicodeString.Buffer[UnicodeString.Length >> 1] = 92;
        UnicodeString.Length += 2;
      }
      RtlUnicodeStringCat(&UnicodeString, v9);
      if ( v66 )
        RtlUnicodeStringCat(&UnicodeString, v66);
      if ( (unsigned int)UnicodeString.Length + 2 > UnicodeString.MaximumLength )
        break;
      v51 = UnicodeString.Length >> 1;
      UnicodeString.Buffer[v51] = 0;
      LOBYTE(v51) = 0;
      if ( (unsigned __int8)RtlDoesFileExists_UstrEx(&UnicodeString, v51) )
      {
        FullPathName_Ustr = RtlGetFullPathName_UstrEx(&UnicodeString, v73, v44, v76, v75, 0, &v74, v71);
        goto LABEL_109;
      }
      v46 = v77;
      if ( i == v77 )
      {
        v45 = i;
        v68 = i;
      }
      else
      {
        v45 = i + 1;
        v68 = i + 1;
      }
      if ( v45 >= v77 )
        goto LABEL_47;
      v42 = v67;
    }
    v26 = -1073741595;
    goto LABEL_48;
  }
LABEL_47:
  v26 = -1073741809;
LABEL_48:
  if ( UnicodeString.Buffer )
  {
    if ( (_BYTE *)UnicodeString.Buffer != v90 )
      RtlFreeAnsiString(&UnicodeString);
  }
  return v26;
}
