/*
 * XREFs of PiDevCfgFindDeviceDriver @ 0x140731708
 * Callers:
 *     PiDevCfgProcessDevice @ 0x14073EAE0 (PiDevCfgProcessDevice.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1408A794C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1408AD31C (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     PiDevCfgCompareDrivers @ 0x14036CAF0 (PiDevCfgCompareDrivers.c)
 *     PnpMultiSzContainsString @ 0x140392990 (PnpMultiSzContainsString.c)
 *     wcschr @ 0x1403D35A0 (wcschr.c)
 *     PiDevCfgMatchDriverConfigurationId @ 0x14050C7CC (PiDevCfgMatchDriverConfigurationId.c)
 *     RtlEqualUnicodeString @ 0x14061FE70 (RtlEqualUnicodeString.c)
 *     _PnpGetObjectProperty @ 0x14063FDAC (_PnpGetObjectProperty.c)
 *     PnpIsNullGuid @ 0x14064AEA0 (PnpIsNullGuid.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x140731594 (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     PiDevCfgQueryDriverNode @ 0x14073BDF8 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgFreeDriverNode @ 0x14073F134 (PiDevCfgFreeDriverNode.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  const wchar_t *v10; // rcx
  const WCHAR *v11; // rsi
  wchar_t *v12; // r13
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int i; // r13d
  __int64 v19; // rax
  const wchar_t *v20; // rdi
  wchar_t *v21; // rbx
  int v22; // eax
  const WCHAR *v23; // r10
  char v24; // bl
  int v25; // edx
  __int64 v26; // r11
  const WCHAR *v27; // rdi
  __int64 v28; // rax
  unsigned int v29; // r15d
  PCWSTR *v30; // rsi
  __int64 v31; // rax
  __int64 *v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rdx
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
  unsigned int v48; // edx
  unsigned int v49; // edi
  unsigned int v50; // r8d
  __int64 v51; // rsi
  _QWORD *v52; // r10
  __int64 v53; // rcx
  int v54; // ecx
  const wchar_t *v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rsi
  __int64 j; // rdi
  __int64 v59; // rcx
  __int64 *v60; // rax
  __int64 v61; // rcx
  __int64 *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // [rsp+60h] [rbp-59h] BYREF
  __int64 v66; // [rsp+68h] [rbp-51h] BYREF
  __int64 *v67; // [rsp+70h] [rbp-49h]
  __int64 v68; // [rsp+78h] [rbp-41h] BYREF
  __int64 *v69; // [rsp+80h] [rbp-39h]
  int v70; // [rsp+88h] [rbp-31h] BYREF
  int v71; // [rsp+8Ch] [rbp-2Dh]
  const wchar_t *v72; // [rsp+90h] [rbp-29h]
  int v73; // [rsp+98h] [rbp-21h]
  unsigned int v74; // [rsp+9Ch] [rbp-1Dh]
  PVOID P; // [rsp+A0h] [rbp-19h]
  int v76; // [rsp+A8h] [rbp-11h]
  __int64 v77; // [rsp+B0h] [rbp-9h]
  wchar_t *Str; // [rsp+B8h] [rbp-1h]
  const WCHAR *v79; // [rsp+C0h] [rbp+7h]
  const wchar_t *v80; // [rsp+C8h] [rbp+Fh]
  SIZE_T NumberOfBytes; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 *v83; // [rsp+130h] [rbp+77h]
  int v84; // [rsp+138h] [rbp+7Fh] BYREF

  v83 = a3;
  v3 = 0;
  v67 = &v66;
  v66 = (__int64)&v66;
  v69 = &v68;
  v68 = (__int64)&v68;
  v71 = 0;
  v4 = a1;
  Str = 0LL;
  ObjectProperty = 0;
  v80 = 0LL;
  v6 = 0;
  v84 = 0;
  v7 = 0LL;
  v70 = 1;
  LODWORD(NumberOfBytes) = 0;
  v65 = 0LL;
  if ( a2 )
  {
    Str = a2;
    v35 = -1LL;
    do
      ++v35;
    while ( a2[v35] );
    v80 = (const wchar_t *)((unsigned __int64)&a2[v35 + 1] & -(__int64)(a2[v35 + 1] != 0));
  }
  v8 = 1;
  LODWORD(v9) = 520;
  if ( PnpSetupInProgress )
    v8 = 3;
  v77 = 520LL;
  v76 = v8;
  P = ExAllocatePoolWithTag(PagedPool, 0x208uLL, 0x63647050u);
  v10 = (const wchar_t *)P;
  if ( !P )
  {
    ObjectProperty = -1073741670;
    goto LABEL_13;
  }
  v74 = 0;
  do
  {
    v11 = *(const WCHAR **)(v4 + 16 * (v3 + 2LL));
    v79 = v11;
    if ( !v11 )
      goto LABEL_7;
    for ( i = 0; ; ++i )
    {
      v73 = i;
      if ( !*v11 )
        break;
      v70 = 1;
      LODWORD(NumberOfBytes) = 0;
      do
      {
        ObjectProperty = PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           (__int64)v11,
                           11LL,
                           -1LL,
                           0LL,
                           (__int64)&DEVPKEY_DeviceId_DriverInfMatches,
                           (__int64)&v70,
                           (__int64)v10,
                           v9,
                           (__int64)&NumberOfBytes,
                           0);
        if ( ObjectProperty != -1073741789 )
        {
          v10 = (const wchar_t *)P;
          goto LABEL_24;
        }
        if ( (unsigned int)NumberOfBytes <= (unsigned int)v9 )
          goto LABEL_30;
        v9 = (unsigned int)NumberOfBytes;
        v77 = (unsigned int)NumberOfBytes;
        if ( P )
          ExFreePoolWithTag(P, 0);
        P = ExAllocatePoolWithTag(PagedPool, v9, 0x63647050u);
        v10 = (const wchar_t *)P;
      }
      while ( P );
      ObjectProperty = -1073741670;
LABEL_24:
      if ( ObjectProperty == -1073741670 )
        break;
      if ( ObjectProperty >= 0 )
      {
        if ( v70 != 8210 )
          goto LABEL_31;
        v20 = v10;
        if ( !*v10 )
          goto LABEL_31;
        while ( 2 )
        {
          v21 = wcschr(v20, 0x5Cu);
          if ( v21 )
          {
            ObjectProperty = DrvDbSplitDeviceIdDriverInfMatch(v20, 0LL, 0LL, (__int64)&v84);
            if ( ObjectProperty < 0 )
              goto LABEL_31;
            v22 = v76;
            v23 = v20;
            *v21 = 0;
            v20 = v21 + 1;
            v24 = v84;
            v25 = v22;
            v72 = v20;
            if ( v3 == 2 )
            {
              if ( (_BYTE)v84 == 3 )
              {
                v25 = v22 | 8;
                goto LABEL_42;
              }
            }
            else
            {
LABEL_42:
              if ( (_BYTE)v84 == 1 || (_BYTE)v84 == 2 || (_BYTE)v84 == 3 )
              {
                ObjectProperty = PiDevCfgQueryDriverNode(v23, v11, v25, (__int64)&v65);
                if ( ObjectProperty < 0 )
                {
                  ObjectProperty = 0;
                }
                else
                {
                  v26 = v65;
                  v27 = *(const WCHAR **)(v65 + 168);
                  if ( v27 )
                  {
                    if ( *v27 )
                    {
                      do
                      {
                        v29 = 0;
                        v30 = (PCWSTR *)(a1 + 32);
                        while ( !*v30 || !PnpMultiSzContainsString(*v30, v27) )
                        {
                          ++v29;
                          v30 += 2;
                          if ( v29 >= 3 )
                            goto LABEL_60;
                        }
                        *(_QWORD *)(v65 + 176) = v27;
LABEL_60:
                        v26 = v65;
                        if ( *(_QWORD *)(v65 + 176) )
                          break;
                        v31 = -1LL;
                        do
                          ++v31;
                        while ( v27[v31] );
                        v27 += v31 + 1;
                      }
                      while ( *v27 );
                      v11 = v79;
                      v3 = v74;
                      i = v73;
                    }
                    if ( *(_QWORD *)(v26 + 176) )
                    {
                      *(_DWORD *)(v26 + 108) |= 0xFFFFu;
                      v26 = v65;
                    }
                  }
                  if ( v24 == 3 )
                  {
                    v36 = v69;
                    if ( (__int64 *)*v69 != &v68 )
                      goto LABEL_76;
                    *(_QWORD *)(v26 + 8) = v69;
                    *(_QWORD *)v26 = &v68;
                    *v36 = v26;
                    v69 = (__int64 *)v26;
                  }
                  else
                  {
                    if ( !Str )
                      goto LABEL_47;
                    if ( PiDevCfgMatchDriverConfigurationId(v26, Str) )
                    {
                      v26 = v65;
LABEL_47:
                      if ( *(_QWORD *)(v26 + 176) )
                        goto LABEL_68;
                      if ( !v7 )
                      {
                        v7 = v26;
                        goto LABEL_50;
                      }
                      if ( (int)PiDevCfgCompareDrivers(v26, v7) >= 0 )
                      {
LABEL_68:
                        v32 = v67;
                        if ( (__int64 *)*v67 != &v66 )
                          goto LABEL_76;
                        *(_QWORD *)v26 = &v66;
                        *(_QWORD *)(v26 + 8) = v32;
                        *v32 = v26;
                        v67 = (__int64 *)v26;
                      }
                      else
                      {
                        v39 = v67;
                        if ( (__int64 *)*v67 != &v66 )
LABEL_76:
                          __fastfail(3u);
                        *(_QWORD *)(v7 + 8) = v67;
                        *(_QWORD *)v7 = &v66;
                        *v39 = v7;
                        v67 = (__int64 *)v7;
                        if ( (*(_DWORD *)(v7 + 184) & 0xC) != 0 )
                        {
                          v40 = *(_DWORD *)(v65 + 184);
                          if ( (v40 & 4) == 0 )
                            *(_DWORD *)(v65 + 184) = v40 | 8;
                        }
                        v7 = v65;
                      }
                    }
                    else
                    {
                      v37 = v67;
                      v38 = (__int64 *)v65;
                      if ( (__int64 *)*v67 != &v66 )
                        goto LABEL_76;
                      *(_QWORD *)(v65 + 8) = v67;
                      *v38 = (__int64)&v66;
                      *v37 = (__int64)v38;
                      v67 = v38;
                    }
                  }
LABEL_50:
                  v20 = v72;
                }
              }
            }
          }
          v28 = -1LL;
          do
            ++v28;
          while ( v20[v28] );
          v20 += v28 + 1;
          if ( !*v20 )
            goto LABEL_31;
          continue;
        }
      }
      if ( ObjectProperty == -1073741790 || ObjectProperty == -1073740697 )
      {
        if ( v6 != -1073741772 )
          v6 = ObjectProperty;
        v71 = v6;
      }
      else if ( ObjectProperty == -1073741772 )
      {
        v71 = -1073741772;
      }
LABEL_30:
      ObjectProperty = 0;
LABEL_31:
      v19 = -1LL;
      do
        ++v19;
      while ( v11[v19] );
      v6 = v71;
      LODWORD(v9) = v77;
      v11 += v19 + 1;
      v10 = (const wchar_t *)P;
      v79 = v11;
    }
    if ( ObjectProperty < 0 )
      goto LABEL_13;
    LODWORD(v9) = v77;
LABEL_7:
    v4 = a1;
    v74 = ++v3;
  }
  while ( v3 < 3 );
  v12 = Str;
  if ( !Str )
    goto LABEL_9;
  if ( v7 )
  {
LABEL_10:
    while ( 1 )
    {
      v13 = (_QWORD *)v66;
      if ( (__int64 *)v66 == &v66 )
        break;
      if ( *(__int64 **)(v66 + 8) != &v66 )
        goto LABEL_76;
      v33 = *(_QWORD *)v66;
      if ( *(_QWORD *)(*(_QWORD *)v66 + 8LL) != v66 )
        goto LABEL_76;
      v66 = *(_QWORD *)v66;
      *(_QWORD *)(v33 + 8) = &v66;
      v65 = (__int64)v13;
      v34 = *(_QWORD **)(v7 + 232);
      if ( *v34 != v7 + 224 )
        goto LABEL_76;
      *v13 = v7 + 224;
      v13[1] = v34;
      *v34 = v13;
      *(_QWORD *)(v7 + 232) = v13;
    }
    while ( 1 )
    {
      v14 = v68;
      if ( (__int64 *)v68 == &v68 )
      {
        *v83 = v7;
        v7 = 0LL;
        goto LABEL_13;
      }
      if ( *(__int64 **)(v68 + 8) != &v68 )
        goto LABEL_76;
      v44 = *(_QWORD *)v68;
      if ( *(_QWORD *)(*(_QWORD *)v68 + 8LL) != v68 )
        goto LABEL_76;
      v68 = *(_QWORD *)v68;
      *(_QWORD *)(v44 + 8) = &v68;
      v65 = v14;
      IsNullGuid = PnpIsNullGuid((void *)(v14 + 188));
      v46 = v65;
      if ( IsNullGuid || *(_QWORD *)(v65 + 176) )
        goto LABEL_133;
      if ( *(_QWORD *)(v65 + 144) )
      {
        v47 = *(_DWORD *)(v7 + 152);
        v48 = 0;
        if ( !v47 )
          goto LABEL_133;
        v49 = *(_DWORD *)(v65 + 152);
        while ( 1 )
        {
          v50 = 0;
          if ( v49 )
          {
            v51 = *(_QWORD *)(v7 + 144);
            while ( 1 )
            {
              v52 = (_QWORD *)(*(_QWORD *)(v65 + 144) + 16LL * v50);
              v53 = *(_QWORD *)(v51 + 16LL * v48) - *v52;
              if ( !v53 )
                v53 = *(_QWORD *)(v51 + 16LL * v48 + 8) - v52[1];
              if ( !v53 )
                break;
              if ( ++v50 >= v49 )
                goto LABEL_132;
            }
            if ( v52 )
              break;
          }
LABEL_132:
          if ( ++v48 >= v47 )
            goto LABEL_133;
        }
      }
      if ( v12 )
      {
        if ( !v80 )
          goto LABEL_133;
        v54 = *v80 - 42;
        if ( *v80 == 42 )
          v54 = v80[1];
        if ( v54 )
        {
          v55 = v80;
          if ( !*v80 )
            goto LABEL_133;
          while ( !PiDevCfgMatchDriverConfigurationId(v46, v55) )
          {
            v56 = -1LL;
            do
              ++v56;
            while ( v55[v56] );
            v46 = v65;
            v55 += v56 + 1;
            if ( !*v55 )
              goto LABEL_133;
          }
          v46 = v65;
        }
        if ( v46 )
          goto LABEL_147;
LABEL_133:
        PiDevCfgFreeDriverNode(v46);
      }
      else
      {
LABEL_147:
        v57 = v7 + 208;
        for ( j = *(_QWORD *)(v7 + 208); ; j = *(_QWORD *)j )
        {
          if ( j == v57 )
            goto LABEL_157;
          v59 = *(_QWORD *)(j + 188) - *(_QWORD *)(v46 + 188);
          if ( !v59 )
            v59 = *(_QWORD *)(j + 196) - *(_QWORD *)(v46 + 196);
          if ( !v59 && RtlEqualUnicodeString((PCUNICODE_STRING)(j + 72), (PCUNICODE_STRING)(v46 + 72), 1u) )
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
          v65 = 0LL;
          goto LABEL_155;
        }
LABEL_165:
        v61 = *(_QWORD *)j;
        if ( *(_QWORD *)(*(_QWORD *)j + 8LL) != j )
          goto LABEL_76;
        v62 = *(__int64 **)(j + 8);
        if ( *v62 != j )
          goto LABEL_76;
        *v62 = v61;
        *(_QWORD *)(v61 + 8) = v62;
        v46 = v65;
LABEL_155:
        if ( j )
        {
          PiDevCfgFreeDriverNode(j);
          v46 = v65;
        }
LABEL_157:
        if ( v46 )
        {
          v60 = *(__int64 **)(v7 + 216);
          if ( *v60 != v57 )
            goto LABEL_76;
          *(_QWORD *)v46 = v57;
          *(_QWORD *)(v46 + 8) = v60;
          *v60 = v46;
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
  if ( (int)PiDevCfgQueryDriverNode(v12, v42 + 1, 4, (__int64)&v65) < 0 )
    goto LABEL_113;
  v7 = v65;
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
    v15 = v66;
    if ( (__int64 *)v66 == &v66 )
      break;
    if ( *(__int64 **)(v66 + 8) != &v66 )
      goto LABEL_76;
    v63 = *(_QWORD *)v66;
    if ( *(_QWORD *)(*(_QWORD *)v66 + 8LL) != v66 )
      goto LABEL_76;
    v66 = *(_QWORD *)v66;
    *(_QWORD *)(v63 + 8) = &v66;
    v65 = v15;
    PiDevCfgFreeDriverNode(v15);
  }
  while ( 1 )
  {
    v16 = v68;
    if ( (__int64 *)v68 == &v68 )
      break;
    if ( *(__int64 **)(v68 + 8) != &v68 )
      goto LABEL_76;
    v64 = *(_QWORD *)v68;
    if ( *(_QWORD *)(*(_QWORD *)v68 + 8LL) != v68 )
      goto LABEL_76;
    v68 = *(_QWORD *)v68;
    *(_QWORD *)(v64 + 8) = &v68;
    v65 = v16;
    PiDevCfgFreeDriverNode(v16);
  }
  if ( v7 )
    PiDevCfgFreeDriverNode(v7);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)ObjectProperty;
}
