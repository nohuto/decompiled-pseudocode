/*
 * XREFs of PiDevCfgFindDeviceDriver @ 0x14072DE0C
 * Callers:
 *     PiDevCfgProcessDevice @ 0x14072E460 (PiDevCfgProcessDevice.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1408A1E1C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1408A77EC (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     PiDevCfgCompareDrivers @ 0x14036AB10 (PiDevCfgCompareDrivers.c)
 *     PnpMultiSzContainsString @ 0x1403904D0 (PnpMultiSzContainsString.c)
 *     wcschr @ 0x1403D0910 (wcschr.c)
 *     PiDevCfgMatchDriverConfigurationId @ 0x140508E9C (PiDevCfgMatchDriverConfigurationId.c)
 *     _PnpGetObjectProperty @ 0x1405DB4CC (_PnpGetObjectProperty.c)
 *     PnpIsNullGuid @ 0x140648C04 (PnpIsNullGuid.c)
 *     RtlEqualUnicodeString @ 0x140681E80 (RtlEqualUnicodeString.c)
 *     PiDevCfgQueryDriverNode @ 0x14072D37C (PiDevCfgQueryDriverNode.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x14072E2EC (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     PiDevCfgFreeDriverNode @ 0x14072EAB4 (PiDevCfgFreeDriverNode.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
  unsigned int i; // r13d
  __int64 v19; // rax
  const wchar_t *v20; // rdi
  wchar_t *v21; // rbx
  char v22; // al
  const WCHAR *v23; // r10
  char v24; // bl
  char v25; // dl
  unsigned int v26; // ecx
  int v27; // r8d
  __int64 v28; // r11
  const WCHAR *v29; // rdi
  __int64 v30; // rax
  unsigned int v31; // r15d
  PCWSTR *v32; // rsi
  __int64 v33; // rax
  __int64 *v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rdx
  __int64 v37; // rax
  __int64 *v38; // rax
  __int64 *v39; // rcx
  __int64 *v40; // rax
  __int64 *v41; // rax
  int v42; // eax
  wchar_t *v43; // rax
  wchar_t *v44; // rbx
  wchar_t *v45; // rax
  __int64 v46; // rax
  bool IsNullGuid; // al
  __int64 v48; // rbx
  unsigned int v49; // r11d
  unsigned int v50; // edx
  unsigned int v51; // edi
  unsigned int v52; // r8d
  __int64 v53; // rsi
  _QWORD *v54; // r10
  __int64 v55; // rcx
  int v56; // ecx
  const wchar_t *v57; // rdi
  __int64 v58; // rax
  __int64 v59; // rsi
  __int64 j; // rdi
  __int64 v61; // rcx
  __int64 *v62; // rax
  __int64 v63; // rcx
  __int64 *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // [rsp+60h] [rbp-59h] BYREF
  __int64 v68; // [rsp+68h] [rbp-51h] BYREF
  __int64 *v69; // [rsp+70h] [rbp-49h]
  __int64 v70; // [rsp+78h] [rbp-41h] BYREF
  __int64 *v71; // [rsp+80h] [rbp-39h]
  int v72; // [rsp+88h] [rbp-31h] BYREF
  int v73; // [rsp+8Ch] [rbp-2Dh]
  const wchar_t *v74; // [rsp+90h] [rbp-29h]
  unsigned int v75; // [rsp+98h] [rbp-21h]
  unsigned int v76; // [rsp+9Ch] [rbp-1Dh]
  PVOID P; // [rsp+A0h] [rbp-19h]
  int v78; // [rsp+A8h] [rbp-11h]
  __int64 v79; // [rsp+B0h] [rbp-9h]
  wchar_t *Str; // [rsp+B8h] [rbp-1h]
  const WCHAR *v81; // [rsp+C0h] [rbp+7h]
  const wchar_t *v82; // [rsp+C8h] [rbp+Fh]
  SIZE_T NumberOfBytes; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 *v85; // [rsp+130h] [rbp+77h]
  int v86; // [rsp+138h] [rbp+7Fh]

  v85 = a3;
  v3 = 0;
  v69 = &v68;
  v68 = (__int64)&v68;
  v71 = &v70;
  v70 = (__int64)&v70;
  v73 = 0;
  v4 = a1;
  Str = 0LL;
  ObjectProperty = 0;
  v82 = 0LL;
  v6 = 0;
  v86 = 0;
  v7 = 0LL;
  v72 = 1;
  LODWORD(NumberOfBytes) = 0;
  v67 = 0LL;
  if ( a2 )
  {
    Str = a2;
    v37 = -1LL;
    do
      ++v37;
    while ( a2[v37] );
    v82 = (const wchar_t *)((unsigned __int64)&a2[v37 + 1] & -(__int64)(a2[v37 + 1] != 0));
  }
  v8 = 1;
  LODWORD(v9) = 520;
  if ( PnpSetupInProgress )
    v8 = 3;
  v79 = 520LL;
  v78 = v8;
  P = ExAllocatePoolWithTag(PagedPool, 0x208uLL, 0x63647050u);
  v10 = (const wchar_t *)P;
  if ( !P )
  {
    ObjectProperty = -1073741670;
    goto LABEL_13;
  }
  v76 = 0;
  do
  {
    v11 = *(const WCHAR **)(v4 + 16 * (v3 + 2LL));
    v81 = v11;
    if ( !v11 )
      goto LABEL_7;
    for ( i = 0; ; ++i )
    {
      v75 = i;
      if ( !*v11 )
        break;
      v72 = 1;
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
                           (__int64)&v72,
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
        v79 = (unsigned int)NumberOfBytes;
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
        if ( v72 != 8210 )
          goto LABEL_31;
        v20 = v10;
        if ( !*v10 )
          goto LABEL_31;
        while ( 2 )
        {
          v21 = wcschr(v20, 0x5Cu);
          if ( v21 )
          {
            ObjectProperty = DrvDbSplitDeviceIdDriverInfMatch(v20, 0LL, 0LL);
            if ( ObjectProperty < 0 )
              goto LABEL_31;
            v22 = v78;
            v23 = v20;
            *v21 = 0;
            v20 = v21 + 1;
            v24 = v86;
            v25 = v22;
            v74 = v20;
            if ( v3 == 2 )
            {
              if ( (_BYTE)v86 == 3 )
              {
                v25 = v22 | 8;
                goto LABEL_42;
              }
            }
            else
            {
LABEL_42:
              switch ( (_BYTE)v86 )
              {
                case 1:
                  v26 = i;
                  goto LABEL_44;
                case 2:
                  v27 = 4096;
                  v26 = i + (HIWORD(v86) << 8);
                  goto LABEL_45;
                case 3:
                  v26 = 0;
LABEL_44:
                  v27 = 0;
LABEL_45:
                  if ( v26 >= 0x1000 )
                    v26 = 4095;
                  if ( (_BYTE)v86 != 3 )
                    v27 += v26 + (v3 << 13);
                  ObjectProperty = PiDevCfgQueryDriverNode(v23, v11, v27, BYTE1(v86) << 16, v25, &v67);
                  if ( ObjectProperty < 0 )
                  {
                    ObjectProperty = 0;
                  }
                  else
                  {
                    v28 = v67;
                    v29 = *(const WCHAR **)(v67 + 168);
                    if ( v29 )
                    {
                      if ( *v29 )
                      {
                        do
                        {
                          v31 = 0;
                          v32 = (PCWSTR *)(a1 + 32);
                          while ( !*v32 || !PnpMultiSzContainsString(*v32, v29) )
                          {
                            ++v31;
                            v32 += 2;
                            if ( v31 >= 3 )
                              goto LABEL_66;
                          }
                          *(_QWORD *)(v67 + 176) = v29;
LABEL_66:
                          v28 = v67;
                          if ( *(_QWORD *)(v67 + 176) )
                            break;
                          v33 = -1LL;
                          do
                            ++v33;
                          while ( v29[v33] );
                          v29 += v33 + 1;
                        }
                        while ( *v29 );
                        v11 = v81;
                        v3 = v76;
                        i = v75;
                      }
                      if ( *(_QWORD *)(v28 + 176) )
                      {
                        *(_DWORD *)(v28 + 108) |= 0xFFFFu;
                        v28 = v67;
                      }
                    }
                    if ( v24 == 3 )
                    {
                      v38 = v71;
                      if ( (__int64 *)*v71 != &v70 )
                        goto LABEL_82;
                      *(_QWORD *)(v28 + 8) = v71;
                      *(_QWORD *)v28 = &v70;
                      *v38 = v28;
                      v71 = (__int64 *)v28;
                    }
                    else
                    {
                      if ( !Str )
                        goto LABEL_53;
                      if ( PiDevCfgMatchDriverConfigurationId(v28, Str) )
                      {
                        v28 = v67;
LABEL_53:
                        if ( *(_QWORD *)(v28 + 176) )
                          goto LABEL_74;
                        if ( !v7 )
                        {
                          v7 = v28;
                          goto LABEL_56;
                        }
                        if ( (int)PiDevCfgCompareDrivers(v28, v7) >= 0 )
                        {
LABEL_74:
                          v34 = v69;
                          if ( (__int64 *)*v69 != &v68 )
                            goto LABEL_82;
                          *(_QWORD *)v28 = &v68;
                          *(_QWORD *)(v28 + 8) = v34;
                          *v34 = v28;
                          v69 = (__int64 *)v28;
                        }
                        else
                        {
                          v41 = v69;
                          if ( (__int64 *)*v69 != &v68 )
LABEL_82:
                            __fastfail(3u);
                          *(_QWORD *)(v7 + 8) = v69;
                          *(_QWORD *)v7 = &v68;
                          *v41 = v7;
                          v69 = (__int64 *)v7;
                          if ( (*(_DWORD *)(v7 + 184) & 0xC) != 0 )
                          {
                            v42 = *(_DWORD *)(v67 + 184);
                            if ( (v42 & 4) == 0 )
                              *(_DWORD *)(v67 + 184) = v42 | 8;
                          }
                          v7 = v67;
                        }
                      }
                      else
                      {
                        v39 = v69;
                        v40 = (__int64 *)v67;
                        if ( (__int64 *)*v69 != &v68 )
                          goto LABEL_82;
                        *(_QWORD *)(v67 + 8) = v69;
                        *v40 = (__int64)&v68;
                        *v39 = (__int64)v40;
                        v69 = v40;
                      }
                    }
LABEL_56:
                    v20 = v74;
                  }
                  break;
              }
            }
          }
          v30 = -1LL;
          do
            ++v30;
          while ( v20[v30] );
          v20 += v30 + 1;
          if ( !*v20 )
            goto LABEL_31;
          continue;
        }
      }
      if ( ObjectProperty == -1073741790 || ObjectProperty == -1073740697 )
      {
        if ( v6 != -1073741772 )
          v6 = ObjectProperty;
        v73 = v6;
      }
      else if ( ObjectProperty == -1073741772 )
      {
        v73 = -1073741772;
      }
LABEL_30:
      ObjectProperty = 0;
LABEL_31:
      v19 = -1LL;
      do
        ++v19;
      while ( v11[v19] );
      v6 = v73;
      LODWORD(v9) = v79;
      v11 += v19 + 1;
      v10 = (const wchar_t *)P;
      v81 = v11;
    }
    if ( ObjectProperty < 0 )
      goto LABEL_13;
    LODWORD(v9) = v79;
LABEL_7:
    v4 = a1;
    v76 = ++v3;
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
      v13 = (_QWORD *)v68;
      if ( (__int64 *)v68 == &v68 )
        break;
      if ( *(__int64 **)(v68 + 8) != &v68 )
        goto LABEL_82;
      v35 = *(_QWORD *)v68;
      if ( *(_QWORD *)(*(_QWORD *)v68 + 8LL) != v68 )
        goto LABEL_82;
      v68 = *(_QWORD *)v68;
      *(_QWORD *)(v35 + 8) = &v68;
      v67 = (__int64)v13;
      v36 = *(_QWORD **)(v7 + 232);
      if ( *v36 != v7 + 224 )
        goto LABEL_82;
      *v13 = v7 + 224;
      v13[1] = v36;
      *v36 = v13;
      *(_QWORD *)(v7 + 232) = v13;
    }
    while ( 1 )
    {
      v14 = v70;
      if ( (__int64 *)v70 == &v70 )
      {
        *v85 = v7;
        v7 = 0LL;
        goto LABEL_13;
      }
      if ( *(__int64 **)(v70 + 8) != &v70 )
        goto LABEL_82;
      v46 = *(_QWORD *)v70;
      if ( *(_QWORD *)(*(_QWORD *)v70 + 8LL) != v70 )
        goto LABEL_82;
      v70 = *(_QWORD *)v70;
      *(_QWORD *)(v46 + 8) = &v70;
      v67 = v14;
      IsNullGuid = PnpIsNullGuid((void *)(v14 + 188));
      v48 = v67;
      if ( IsNullGuid || *(_QWORD *)(v67 + 176) )
        goto LABEL_139;
      if ( *(_QWORD *)(v67 + 144) )
      {
        v49 = *(_DWORD *)(v7 + 152);
        v50 = 0;
        if ( !v49 )
          goto LABEL_139;
        v51 = *(_DWORD *)(v67 + 152);
        while ( 1 )
        {
          v52 = 0;
          if ( v51 )
          {
            v53 = *(_QWORD *)(v7 + 144);
            while ( 1 )
            {
              v54 = (_QWORD *)(*(_QWORD *)(v67 + 144) + 16LL * v52);
              v55 = *(_QWORD *)(v53 + 16LL * v50) - *v54;
              if ( !v55 )
                v55 = *(_QWORD *)(v53 + 16LL * v50 + 8) - v54[1];
              if ( !v55 )
                break;
              if ( ++v52 >= v51 )
                goto LABEL_138;
            }
            if ( v54 )
              break;
          }
LABEL_138:
          if ( ++v50 >= v49 )
            goto LABEL_139;
        }
      }
      if ( v12 )
      {
        if ( !v82 )
          goto LABEL_139;
        v56 = *v82 - 42;
        if ( *v82 == 42 )
          v56 = v82[1];
        if ( v56 )
        {
          v57 = v82;
          if ( !*v82 )
            goto LABEL_139;
          while ( !PiDevCfgMatchDriverConfigurationId(v48, v57) )
          {
            v58 = -1LL;
            do
              ++v58;
            while ( v57[v58] );
            v48 = v67;
            v57 += v58 + 1;
            if ( !*v57 )
              goto LABEL_139;
          }
          v48 = v67;
        }
        if ( v48 )
          goto LABEL_153;
LABEL_139:
        PiDevCfgFreeDriverNode(v48);
      }
      else
      {
LABEL_153:
        v59 = v7 + 208;
        for ( j = *(_QWORD *)(v7 + 208); ; j = *(_QWORD *)j )
        {
          if ( j == v59 )
            goto LABEL_163;
          v61 = *(_QWORD *)(j + 188) - *(_QWORD *)(v48 + 188);
          if ( !v61 )
            v61 = *(_QWORD *)(j + 196) - *(_QWORD *)(v48 + 196);
          if ( !v61 && RtlEqualUnicodeString((PCUNICODE_STRING)(j + 72), (PCUNICODE_STRING)(v48 + 72), 1u) )
            break;
        }
        if ( *(_QWORD *)(j + 144) )
        {
          if ( !*(_QWORD *)(v48 + 144) )
            goto LABEL_160;
        }
        else if ( *(_QWORD *)(v48 + 144) )
        {
          goto LABEL_171;
        }
        if ( (int)PiDevCfgCompareDrivers(v48, j) >= 0 )
        {
LABEL_160:
          j = v48;
          v48 = 0LL;
          v67 = 0LL;
          goto LABEL_161;
        }
LABEL_171:
        v63 = *(_QWORD *)j;
        if ( *(_QWORD *)(*(_QWORD *)j + 8LL) != j )
          goto LABEL_82;
        v64 = *(__int64 **)(j + 8);
        if ( *v64 != j )
          goto LABEL_82;
        *v64 = v63;
        *(_QWORD *)(v63 + 8) = v64;
        v48 = v67;
LABEL_161:
        if ( j )
        {
          PiDevCfgFreeDriverNode(j);
          v48 = v67;
        }
LABEL_163:
        if ( v48 )
        {
          v62 = *(__int64 **)(v7 + 216);
          if ( *v62 != v59 )
            goto LABEL_82;
          *(_QWORD *)v48 = v59;
          *(_QWORD *)(v48 + 8) = v62;
          *v62 = v48;
          *(_QWORD *)(v7 + 216) = v48;
        }
      }
    }
  }
  v43 = wcschr(Str, 0x3Au);
  v44 = v43;
  if ( !v43 || (*v43 = 0, (v45 = wcschr(v43 + 1, 0x2Cu)) == 0LL) )
  {
    ObjectProperty = -1073741773;
    goto LABEL_13;
  }
  *v45 = 0;
  if ( (int)PiDevCfgQueryDriverNode(v12, v44 + 1, 0, 0, 4, &v67) < 0 )
    goto LABEL_119;
  v7 = v67;
LABEL_9:
  if ( v7 )
    goto LABEL_10;
LABEL_119:
  if ( !v6 || v6 == -1073741772 )
    ObjectProperty = -1073740656;
  else
    ObjectProperty = v6;
LABEL_13:
  while ( 1 )
  {
    v15 = v68;
    if ( (__int64 *)v68 == &v68 )
      break;
    if ( *(__int64 **)(v68 + 8) != &v68 )
      goto LABEL_82;
    v65 = *(_QWORD *)v68;
    if ( *(_QWORD *)(*(_QWORD *)v68 + 8LL) != v68 )
      goto LABEL_82;
    v68 = *(_QWORD *)v68;
    *(_QWORD *)(v65 + 8) = &v68;
    v67 = v15;
    PiDevCfgFreeDriverNode(v15);
  }
  while ( 1 )
  {
    v16 = v70;
    if ( (__int64 *)v70 == &v70 )
      break;
    if ( *(__int64 **)(v70 + 8) != &v70 )
      goto LABEL_82;
    v66 = *(_QWORD *)v70;
    if ( *(_QWORD *)(*(_QWORD *)v70 + 8LL) != v70 )
      goto LABEL_82;
    v70 = *(_QWORD *)v70;
    *(_QWORD *)(v66 + 8) = &v70;
    v67 = v16;
    PiDevCfgFreeDriverNode(v16);
  }
  if ( v7 )
    PiDevCfgFreeDriverNode(v7);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)ObjectProperty;
}
