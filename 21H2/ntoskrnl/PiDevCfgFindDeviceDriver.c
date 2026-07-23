/*
 * XREFs of PiDevCfgFindDeviceDriver @ 0x14073BEC8
 * Callers:
 *     PiDevCfgProcessDevice @ 0x140739F50 (PiDevCfgProcessDevice.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1408A507C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1408AAA4C (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     PiDevCfgCompareDrivers @ 0x14036D2D0 (PiDevCfgCompareDrivers.c)
 *     PnpMultiSzContainsString @ 0x140392F50 (PnpMultiSzContainsString.c)
 *     wcschr @ 0x1403D4080 (wcschr.c)
 *     PiDevCfgMatchDriverConfigurationId @ 0x14050E53C (PiDevCfgMatchDriverConfigurationId.c)
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 *     PnpIsNullGuid @ 0x1406FEAA0 (PnpIsNullGuid.c)
 *     PiDevCfgFreeDriverNode @ 0x14073A5A4 (PiDevCfgFreeDriverNode.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x14073BD54 (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     PiDevCfgQueryDriverNode @ 0x14073C9B4 (PiDevCfgQueryDriverNode.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgFindDeviceDriver(__int64 a1, wchar_t *a2, __int64 *a3)
{
  unsigned int v3; // r15d
  __int64 v4; // rsi
  int ObjectProperty; // r14d
  int v6; // edi
  __int64 v7; // r12
  int v8; // eax
  SIZE_T v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  const wchar_t *v12; // rcx
  const WCHAR *v13; // rsi
  wchar_t *v14; // r13
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int i; // r13d
  __int64 v21; // rax
  const wchar_t *v22; // rdi
  wchar_t *v23; // rbx
  unsigned int v24; // eax
  const WCHAR *v25; // r10
  char v26; // bl
  __int64 v27; // r11
  const WCHAR *v28; // rdi
  __int64 v29; // rax
  unsigned int v30; // r15d
  PCWSTR *v31; // rsi
  __int64 v32; // rax
  __int64 *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 *v36; // rax
  __int64 *v37; // rcx
  __int64 *v38; // rax
  __int64 *v39; // rax
  int v40; // eax
  wchar_t *v41; // rax
  wchar_t *v42; // rbx
  wchar_t *v43; // rax
  __int64 v44; // rax
  bool IsNullGuid; // al
  __int64 v46; // rbx
  unsigned int v47; // r11d
  unsigned int v48; // edi
  __int64 v49; // rsi
  _QWORD *v50; // r10
  __int64 v51; // rcx
  int v52; // ecx
  const wchar_t *v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rsi
  __int64 j; // rdi
  __int64 v57; // rcx
  __int64 *v58; // rax
  __int64 v59; // rcx
  __int64 *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // [rsp+60h] [rbp-59h] BYREF
  __int64 v64; // [rsp+68h] [rbp-51h] BYREF
  __int64 *v65; // [rsp+70h] [rbp-49h]
  __int64 v66; // [rsp+78h] [rbp-41h] BYREF
  __int64 *v67; // [rsp+80h] [rbp-39h]
  int v68; // [rsp+88h] [rbp-31h] BYREF
  int v69; // [rsp+8Ch] [rbp-2Dh]
  const wchar_t *v70; // [rsp+90h] [rbp-29h]
  int v71; // [rsp+98h] [rbp-21h]
  unsigned int v72; // [rsp+9Ch] [rbp-1Dh]
  PVOID P; // [rsp+A0h] [rbp-19h]
  int v74; // [rsp+A8h] [rbp-11h]
  __int64 v75; // [rsp+B0h] [rbp-9h]
  wchar_t *Str; // [rsp+B8h] [rbp-1h]
  const WCHAR *v77; // [rsp+C0h] [rbp+7h]
  const wchar_t *v78; // [rsp+C8h] [rbp+Fh]
  SIZE_T NumberOfBytes; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 *v81; // [rsp+130h] [rbp+77h]
  int v82; // [rsp+138h] [rbp+7Fh] BYREF

  v81 = a3;
  v3 = 0;
  v65 = &v64;
  v64 = (__int64)&v64;
  v67 = &v66;
  v66 = (__int64)&v66;
  v69 = 0;
  v4 = a1;
  Str = 0LL;
  ObjectProperty = 0;
  v78 = 0LL;
  v6 = 0;
  v82 = 0;
  v7 = 0LL;
  v68 = 1;
  LODWORD(NumberOfBytes) = 0;
  v63 = 0LL;
  if ( a2 )
  {
    Str = a2;
    v35 = -1LL;
    do
      ++v35;
    while ( a2[v35] );
    v78 = (const wchar_t *)((unsigned __int64)&a2[v35 + 1] & -(__int64)(a2[v35 + 1] != 0));
  }
  v8 = 1;
  LODWORD(v9) = 520;
  if ( PnpSetupInProgress )
    v8 = 3;
  v75 = 520LL;
  v74 = v8;
  P = ExAllocatePoolWithTag(PagedPool, 0x208uLL, 0x63647050u);
  v12 = (const wchar_t *)P;
  if ( !P )
  {
    ObjectProperty = -1073741670;
    goto LABEL_13;
  }
  v72 = 0;
  do
  {
    v13 = *(const WCHAR **)(v4 + 16 * (v3 + 2LL));
    v77 = v13;
    if ( !v13 )
      goto LABEL_7;
    for ( i = 0; ; ++i )
    {
      v71 = i;
      if ( !*v13 )
        break;
      v68 = 1;
      LODWORD(NumberOfBytes) = 0;
      do
      {
        ObjectProperty = PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           (__int64)v13,
                           11LL,
                           -1LL,
                           0LL,
                           (__int64)&DEVPKEY_DeviceId_DriverInfMatches,
                           (__int64)&v68,
                           (__int64)v12,
                           v9,
                           (__int64)&NumberOfBytes,
                           0);
        if ( ObjectProperty != -1073741789 )
        {
          v12 = (const wchar_t *)P;
          goto LABEL_24;
        }
        if ( (unsigned int)NumberOfBytes <= (unsigned int)v9 )
          goto LABEL_30;
        v9 = (unsigned int)NumberOfBytes;
        v75 = (unsigned int)NumberOfBytes;
        if ( P )
          ExFreePoolWithTag(P, 0);
        P = ExAllocatePoolWithTag(PagedPool, v9, 0x63647050u);
        v12 = (const wchar_t *)P;
      }
      while ( P );
      ObjectProperty = -1073741670;
LABEL_24:
      if ( ObjectProperty == -1073741670 )
        break;
      if ( ObjectProperty >= 0 )
      {
        if ( v68 != 8210 )
          goto LABEL_31;
        v22 = v12;
        if ( !*v12 )
          goto LABEL_31;
        while ( 2 )
        {
          v23 = wcschr(v22, 0x5Cu);
          if ( v23 )
          {
            ObjectProperty = DrvDbSplitDeviceIdDriverInfMatch(v22, 0LL, 0LL, (__int64)&v82);
            if ( ObjectProperty < 0 )
              goto LABEL_31;
            v24 = v74;
            v25 = v22;
            *v23 = 0;
            v22 = v23 + 1;
            v26 = v82;
            v10 = v24;
            v70 = v22;
            if ( v3 == 2 )
            {
              if ( (_BYTE)v82 == 3 )
              {
                v10 = v24 | 8;
                goto LABEL_42;
              }
            }
            else
            {
LABEL_42:
              if ( (_BYTE)v82 == 1 || (_BYTE)v82 == 2 || (_BYTE)v82 == 3 )
              {
                ObjectProperty = PiDevCfgQueryDriverNode(v25, v13, v10, (__int64)&v63);
                if ( ObjectProperty < 0 )
                {
                  ObjectProperty = 0;
                }
                else
                {
                  v27 = v63;
                  v28 = *(const WCHAR **)(v63 + 168);
                  if ( v28 )
                  {
                    if ( *v28 )
                    {
                      do
                      {
                        v30 = 0;
                        v31 = (PCWSTR *)(a1 + 32);
                        while ( !*v31 || !PnpMultiSzContainsString(*v31, v28) )
                        {
                          ++v30;
                          v31 += 2;
                          if ( v30 >= 3 )
                            goto LABEL_60;
                        }
                        *(_QWORD *)(v63 + 176) = v28;
LABEL_60:
                        v27 = v63;
                        if ( *(_QWORD *)(v63 + 176) )
                          break;
                        v32 = -1LL;
                        do
                          ++v32;
                        while ( v28[v32] );
                        v28 += v32 + 1;
                      }
                      while ( *v28 );
                      v13 = v77;
                      v3 = v72;
                      i = v71;
                    }
                    if ( *(_QWORD *)(v27 + 176) )
                    {
                      *(_DWORD *)(v27 + 108) |= 0xFFFFu;
                      v27 = v63;
                    }
                  }
                  if ( v26 == 3 )
                  {
                    v36 = v67;
                    if ( (__int64 *)*v67 != &v66 )
                      goto LABEL_76;
                    *(_QWORD *)(v27 + 8) = v67;
                    *(_QWORD *)v27 = &v66;
                    *v36 = v27;
                    v67 = (__int64 *)v27;
                  }
                  else
                  {
                    if ( !Str )
                      goto LABEL_47;
                    if ( PiDevCfgMatchDriverConfigurationId(v27, Str) )
                    {
                      v27 = v63;
LABEL_47:
                      if ( *(_QWORD *)(v27 + 176) )
                        goto LABEL_68;
                      if ( !v7 )
                      {
                        v7 = v27;
                        goto LABEL_50;
                      }
                      if ( (int)PiDevCfgCompareDrivers(v27, v7) >= 0 )
                      {
LABEL_68:
                        v33 = v65;
                        if ( (__int64 *)*v65 != &v64 )
                          goto LABEL_76;
                        *(_QWORD *)v27 = &v64;
                        *(_QWORD *)(v27 + 8) = v33;
                        *v33 = v27;
                        v65 = (__int64 *)v27;
                      }
                      else
                      {
                        v39 = v65;
                        if ( (__int64 *)*v65 != &v64 )
LABEL_76:
                          __fastfail(3u);
                        *(_QWORD *)(v7 + 8) = v65;
                        *(_QWORD *)v7 = &v64;
                        *v39 = v7;
                        v65 = (__int64 *)v7;
                        if ( (*(_DWORD *)(v7 + 184) & 0xC) != 0 )
                        {
                          v40 = *(_DWORD *)(v63 + 184);
                          if ( (v40 & 4) == 0 )
                            *(_DWORD *)(v63 + 184) = v40 | 8;
                        }
                        v7 = v63;
                      }
                    }
                    else
                    {
                      v37 = v65;
                      v38 = (__int64 *)v63;
                      if ( (__int64 *)*v65 != &v64 )
                        goto LABEL_76;
                      *(_QWORD *)(v63 + 8) = v65;
                      v10 = (__int64)&v64;
                      *v38 = (__int64)&v64;
                      *v37 = (__int64)v38;
                      v65 = v38;
                    }
                  }
LABEL_50:
                  v22 = v70;
                }
              }
            }
          }
          v29 = -1LL;
          do
            ++v29;
          while ( v22[v29] );
          v22 += v29 + 1;
          if ( !*v22 )
            goto LABEL_31;
          continue;
        }
      }
      if ( ObjectProperty == -1073741790 || ObjectProperty == -1073740697 )
      {
        if ( v6 != -1073741772 )
          v6 = ObjectProperty;
        v69 = v6;
      }
      else if ( ObjectProperty == -1073741772 )
      {
        v69 = -1073741772;
      }
LABEL_30:
      ObjectProperty = 0;
LABEL_31:
      v21 = -1LL;
      do
        ++v21;
      while ( v13[v21] );
      v6 = v69;
      LODWORD(v9) = v75;
      v13 += v21 + 1;
      v12 = (const wchar_t *)P;
      v77 = v13;
    }
    if ( ObjectProperty < 0 )
      goto LABEL_13;
    LODWORD(v9) = v75;
LABEL_7:
    v4 = a1;
    v72 = ++v3;
  }
  while ( v3 < 3 );
  v14 = Str;
  if ( !Str )
    goto LABEL_9;
  if ( v7 )
  {
LABEL_10:
    while ( 1 )
    {
      v15 = (_QWORD *)v64;
      if ( (__int64 *)v64 == &v64 )
        break;
      if ( *(__int64 **)(v64 + 8) != &v64 )
        goto LABEL_76;
      v34 = *(_QWORD *)v64;
      if ( *(_QWORD *)(*(_QWORD *)v64 + 8LL) != v64 )
        goto LABEL_76;
      v64 = *(_QWORD *)v64;
      *(_QWORD *)(v34 + 8) = &v64;
      v63 = (__int64)v15;
      v10 = *(_QWORD *)(v7 + 232);
      if ( *(_QWORD *)v10 != v7 + 224 )
        goto LABEL_76;
      *v15 = v7 + 224;
      v15[1] = v10;
      *(_QWORD *)v10 = v15;
      *(_QWORD *)(v7 + 232) = v15;
    }
    while ( 1 )
    {
      v16 = v66;
      if ( (__int64 *)v66 == &v66 )
      {
        *v81 = v7;
        v7 = 0LL;
        goto LABEL_13;
      }
      if ( *(__int64 **)(v66 + 8) != &v66 )
        goto LABEL_76;
      v44 = *(_QWORD *)v66;
      if ( *(_QWORD *)(*(_QWORD *)v66 + 8LL) != v66 )
        goto LABEL_76;
      v66 = *(_QWORD *)v66;
      *(_QWORD *)(v44 + 8) = &v66;
      v63 = v16;
      IsNullGuid = PnpIsNullGuid((void *)(v16 + 188));
      v46 = v63;
      if ( IsNullGuid || *(_QWORD *)(v63 + 176) )
        goto LABEL_133;
      if ( *(_QWORD *)(v63 + 144) )
      {
        v47 = *(_DWORD *)(v7 + 152);
        v10 = 0LL;
        if ( !v47 )
          goto LABEL_133;
        v48 = *(_DWORD *)(v63 + 152);
        while ( 1 )
        {
          v11 = 0LL;
          if ( v48 )
          {
            v49 = *(_QWORD *)(v7 + 144);
            while ( 1 )
            {
              v50 = (_QWORD *)(*(_QWORD *)(v63 + 144) + 16LL * (unsigned int)v11);
              v51 = *(_QWORD *)(v49 + 16LL * (unsigned int)v10) - *v50;
              if ( !v51 )
                v51 = *(_QWORD *)(v49 + 16LL * (unsigned int)v10 + 8) - v50[1];
              if ( !v51 )
                break;
              v11 = (unsigned int)(v11 + 1);
              if ( (unsigned int)v11 >= v48 )
                goto LABEL_132;
            }
            if ( v50 )
              break;
          }
LABEL_132:
          v10 = (unsigned int)(v10 + 1);
          if ( (unsigned int)v10 >= v47 )
            goto LABEL_133;
        }
      }
      if ( v14 )
      {
        v10 = (__int64)v78;
        if ( !v78 )
          goto LABEL_133;
        v52 = *v78 - 42;
        if ( *v78 == 42 )
          v52 = v78[1];
        if ( v52 )
        {
          v53 = v78;
          if ( !*v78 )
            goto LABEL_133;
          while ( !PiDevCfgMatchDriverConfigurationId(v46, v53) )
          {
            v54 = -1LL;
            do
              ++v54;
            while ( v53[v54] );
            v46 = v63;
            v53 += v54 + 1;
            if ( !*v53 )
              goto LABEL_133;
          }
          v46 = v63;
        }
        if ( v46 )
          goto LABEL_147;
LABEL_133:
        PiDevCfgFreeDriverNode(v46, v10, v11);
      }
      else
      {
LABEL_147:
        v55 = v7 + 208;
        for ( j = *(_QWORD *)(v7 + 208); ; j = *(_QWORD *)j )
        {
          if ( j == v55 )
            goto LABEL_157;
          v57 = *(_QWORD *)(j + 188) - *(_QWORD *)(v46 + 188);
          if ( !v57 )
            v57 = *(_QWORD *)(j + 196) - *(_QWORD *)(v46 + 196);
          if ( !v57 && RtlEqualUnicodeString((PCUNICODE_STRING)(j + 72), (PCUNICODE_STRING)(v46 + 72), 1u) )
            break;
        }
        if ( *(_QWORD *)(j + 144) )
        {
          if ( !*(_QWORD *)(v46 + 144) )
            goto LABEL_154;
        }
        else if ( *(_QWORD *)(v46 + 144) )
        {
          goto LABEL_165;
        }
        if ( (int)PiDevCfgCompareDrivers(v46, j) >= 0 )
        {
LABEL_154:
          j = v46;
          v46 = 0LL;
          v63 = 0LL;
          goto LABEL_155;
        }
LABEL_165:
        v59 = *(_QWORD *)j;
        if ( *(_QWORD *)(*(_QWORD *)j + 8LL) != j )
          goto LABEL_76;
        v60 = *(__int64 **)(j + 8);
        if ( *v60 != j )
          goto LABEL_76;
        *v60 = v59;
        *(_QWORD *)(v59 + 8) = v60;
        v46 = v63;
LABEL_155:
        if ( j )
        {
          PiDevCfgFreeDriverNode(j, v10, v11);
          v46 = v63;
        }
LABEL_157:
        if ( v46 )
        {
          v58 = *(__int64 **)(v7 + 216);
          if ( *v58 != v55 )
            goto LABEL_76;
          *(_QWORD *)v46 = v55;
          *(_QWORD *)(v46 + 8) = v58;
          *v58 = v46;
          *(_QWORD *)(v7 + 216) = v46;
        }
      }
    }
  }
  v41 = wcschr(Str, 0x3Au);
  v42 = v41;
  if ( !v41 || (*v41 = 0, (v43 = wcschr(v41 + 1, 0x2Cu)) == 0LL) )
  {
    ObjectProperty = -1073741773;
    goto LABEL_13;
  }
  *v43 = 0;
  if ( (int)PiDevCfgQueryDriverNode(v14, v42 + 1, 4, (__int64)&v63) < 0 )
    goto LABEL_113;
  v7 = v63;
LABEL_9:
  if ( v7 )
    goto LABEL_10;
LABEL_113:
  if ( !v6 || v6 == -1073741772 )
    ObjectProperty = -1073740656;
  else
    ObjectProperty = v6;
LABEL_13:
  while ( 1 )
  {
    v17 = v64;
    if ( (__int64 *)v64 == &v64 )
      break;
    if ( *(__int64 **)(v64 + 8) != &v64 )
      goto LABEL_76;
    v61 = *(_QWORD *)v64;
    if ( *(_QWORD *)(*(_QWORD *)v64 + 8LL) != v64 )
      goto LABEL_76;
    v64 = *(_QWORD *)v64;
    *(_QWORD *)(v61 + 8) = &v64;
    v63 = v17;
    PiDevCfgFreeDriverNode(v17, (__int64)&v64, v11);
  }
  while ( 1 )
  {
    v18 = v66;
    if ( (__int64 *)v66 == &v66 )
      break;
    if ( *(__int64 **)(v66 + 8) != &v66 )
      goto LABEL_76;
    v62 = *(_QWORD *)v66;
    if ( *(_QWORD *)(*(_QWORD *)v66 + 8LL) != v66 )
      goto LABEL_76;
    v66 = *(_QWORD *)v66;
    *(_QWORD *)(v62 + 8) = &v66;
    v63 = v18;
    PiDevCfgFreeDriverNode(v18, (__int64)&v66, v11);
  }
  if ( v7 )
    PiDevCfgFreeDriverNode(v7, v10, v11);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)ObjectProperty;
}
