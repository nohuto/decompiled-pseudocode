/*
 * XREFs of PiDevCfgFindDeviceMigrationNode @ 0x1408A19E4
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x14075A02C (PiDevCfgMigrateDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     PnpMultiSzContainsString @ 0x14038F960 (PnpMultiSzContainsString.c)
 *     PnpValidateRegistryDword @ 0x1403974C8 (PnpValidateRegistryDword.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403CDC90 (_wcsicmp.c)
 *     ZwEnumerateValueKey @ 0x1403F2590 (ZwEnumerateValueKey.c)
 *     ZwSetValueKey @ 0x1403F2F30 (ZwSetValueKey.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PiDevCfgGetMigrationDeviceIdScore @ 0x14050869C (PiDevCfgGetMigrationDeviceIdScore.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     NtQueryKey @ 0x1405EBF30 (NtQueryKey.c)
 *     RtlCompareUnicodeString @ 0x14061BCF0 (RtlCompareUnicodeString.c)
 *     RtlGUIDFromString @ 0x1406AA8D0 (RtlGUIDFromString.c)
 *     _CmIsRootEnumeratedDevice @ 0x1407109B0 (_CmIsRootEnumeratedDevice.c)
 *     PiDevCfgGetDriverPackageId @ 0x140721910 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryObjectProperties @ 0x140722564 (PiDevCfgQueryObjectProperties.c)
 *     IopGetRegistryValue @ 0x140728128 (IopGetRegistryValue.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x1408A11DC (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgFreeDeviceMigrationNode @ 0x1408A23B8 (PiDevCfgFreeDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x1408A2E14 (PiDevCfgQueryDeviceMigrationNode.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgFindDeviceMigrationNode(__int64 *a1, __int64 a2, void *a3, int a4, PVOID **a5)
{
  ULONG v5; // r13d
  int v7; // r14d
  PVOID *v8; // rsi
  NTSTATUS v9; // ebx
  ULONG v10; // r12d
  WCHAR *v11; // r15
  const UNICODE_STRING *v12; // rcx
  ULONG i; // edx
  WCHAR v14; // dx
  int v15; // eax
  wchar_t **v16; // rdi
  PVOID *v17; // rax
  __int64 v18; // r13
  const wchar_t *v19; // rdx
  int v20; // r14d
  wchar_t **v21; // rbx
  __int64 v22; // r13
  __int64 v23; // rdi
  __int64 *v24; // r15
  int *v25; // r12
  __int16 MigrationDeviceIdScore; // ax
  __int64 v27; // rdi
  bool v28; // cl
  bool v29; // al
  const WCHAR *v30; // rbx
  __int64 v31; // r15
  __int64 v32; // rax
  int v33; // r12d
  void *v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  void *v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 *v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  UNICODE_STRING *v44; // rax
  __int64 v45; // rax
  unsigned __int64 v46; // rcx
  bool v47; // zf
  PVOID *v48; // rax
  PVOID v49; // rcx
  PVOID *v50; // rdi
  unsigned int *v51; // rcx
  PVOID *v52; // rax
  PVOID **v53; // rcx
  PVOID v54; // rcx
  __int64 v55; // rax
  int ObjectProperties; // [rsp+30h] [rbp-D0h]
  int v58; // [rsp+34h] [rbp-CCh]
  ULONG ResultLength; // [rsp+3Ch] [rbp-C4h] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  PVOID *p_P; // [rsp+48h] [rbp-B8h]
  WCHAR *PoolWithTag; // [rsp+50h] [rbp-B0h] BYREF
  int v64; // [rsp+58h] [rbp-A8h] BYREF
  int v65; // [rsp+5Ch] [rbp-A4h] BYREF
  ULONG v66; // [rsp+60h] [rbp-A0h]
  ULONG v67; // [rsp+64h] [rbp-9Ch]
  int Data; // [rsp+68h] [rbp-98h] BYREF
  __int64 *v69; // [rsp+70h] [rbp-90h]
  __int64 v70; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING String2; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING v73; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v74; // [rsp+B0h] [rbp-50h]
  UNICODE_STRING v75; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+C8h] [rbp-38h] BYREF
  HANDLE KeyHandle; // [rsp+D8h] [rbp-28h]
  UNICODE_STRING ValueName; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v79[10]; // [rsp+F0h] [rbp-10h] BYREF
  PVOID **v80; // [rsp+140h] [rbp+40h]
  GUID Guid; // [rsp+148h] [rbp+48h] BYREF
  __int128 KeyInformation; // [rsp+158h] [rbp+58h] BYREF
  __int128 v83; // [rsp+168h] [rbp+68h]
  __int64 v84; // [rsp+178h] [rbp+78h]

  v5 = 0;
  v69 = a1;
  v80 = a5;
  v74 = a2;
  v84 = 0LL;
  KeyHandle = a3;
  p_P = &P;
  v70 = 0LL;
  P = &P;
  v7 = a4;
  v58 = 0;
  v65 = 0;
  v8 = 0LL;
  v64 = 0;
  KeyInformation = 0LL;
  *(_QWORD *)&String2.Length = 0LL;
  v83 = 0LL;
  String2.Buffer = 0LL;
  Guid = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v75.Length = 0LL;
  v75.Buffer = 0LL;
  *(_QWORD *)&v73.Length = 0LL;
  v73.Buffer = 0LL;
  ValueName = 0LL;
  Data = 0;
  ResultLength = 0;
  v9 = NtQueryKey(a3, KeyCachedInformation, &KeyInformation, 0x28u, &ResultLength);
  if ( v9 >= 0 )
  {
    if ( !DWORD1(v83) )
      goto LABEL_145;
    v10 = HIDWORD(v83) + 2 * (DWORD2(v83) + 13);
    v66 = v10;
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v10, 0x63647050u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_4:
      v9 = -1073741670;
      goto LABEL_146;
    }
    v12 = (const UNICODE_STRING *)a1[5];
    if ( !v12 || (v9 = RtlGUIDFromString(v12, &Guid), v9 >= 0) )
    {
      for ( i = 0; ; i = v5 )
      {
        v67 = v5;
        ObjectProperties = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, v11, v10, &ResultLength);
        v9 = ObjectProperties;
        if ( ObjectProperties == -2147483622 )
        {
          v9 = 0;
          ObjectProperties = 0;
LABEL_117:
          ExFreePoolWithTag(v11, 0);
          if ( v9 < 0 )
            break;
          v48 = (PVOID *)P;
          if ( P == &P )
            goto LABEL_145;
LABEL_119:
          v49 = v48[23];
          if ( v49 != (PVOID)-1LL )
          {
            if ( !v8 || v8[23] > v49 )
              goto LABEL_127;
            if ( v8[23] != v49 )
              goto LABEL_128;
            if ( PnpSetupInProgress && *((_DWORD *)v48 + 44) && !*((_DWORD *)v8 + 44) )
            {
LABEL_127:
              v8 = v48;
            }
            else
            {
              *((_DWORD *)v8 + 4) |= 2u;
              *((_DWORD *)v48 + 4) |= 2u;
            }
          }
LABEL_128:
          v48 = (PVOID *)*v48;
          if ( v48 == &P )
          {
            if ( v8 )
            {
              if ( ((_DWORD)v8[2] & 2) != 0 )
              {
                v50 = (PVOID *)P;
                Data = 1;
                if ( P != &P )
                {
                  do
                  {
                    if ( ((_DWORD)v50[2] & 2) != 0 && v50[23] == v8[23] )
                    {
                      *(_DWORD *)&ValueName.Length = 1310738;
                      ValueName.Buffer = L"Duplicate";
                      ZwSetValueKey(v50[5], &ValueName, 0, 4u, &Data, 4u);
                    }
                    v50 = (PVOID *)*v50;
                  }
                  while ( v50 != &P );
                  v9 = ObjectProperties;
                }
              }
              else if ( IopGetRegistryValue(v8[5], L"Duplicate", 0, &PoolWithTag) >= 0 )
              {
                if ( PnpValidateRegistryDword((__int64)PoolWithTag) && *(unsigned int *)((char *)v51 + v51[2]) )
                  *((_DWORD *)v8 + 4) |= 2u;
                ExFreePoolWithTag(v51, 0);
              }
              v52 = (PVOID *)*v8;
              if ( *((PVOID **)*v8 + 1) == v8 )
              {
                v53 = (PVOID **)v8[1];
                if ( *v53 == v8 )
                {
                  *v53 = v52;
                  v52[1] = v53;
                  *v80 = v8;
                  break;
                }
              }
LABEL_150:
              __fastfail(3u);
            }
LABEL_145:
            v9 = -1073741275;
            break;
          }
          goto LABEL_119;
        }
        if ( ObjectProperties == -2147483643 )
        {
          ExFreePoolWithTag(v11, 0);
          v10 = ResultLength + 2;
          v66 = ResultLength + 2;
          PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, ResultLength + 2, 0x63647050u);
          v11 = PoolWithTag;
          if ( !PoolWithTag )
            goto LABEL_4;
          --v5;
          goto LABEL_18;
        }
        if ( ObjectProperties < 0 )
          goto LABEL_117;
        if ( PnpValidateRegistryDword((__int64)v11) )
          v7 = *(_DWORD *)((char *)v11 + *((unsigned int *)v11 + 2));
        v11[((unsigned __int64)*((unsigned int *)v11 + 4) >> 1) + 10] = v14;
        if ( CmIsRootEnumeratedDevice(v11 + 10) )
          goto LABEL_17;
        v15 = PiDevCfgQueryDeviceMigrationNode(v69, v11 + 10, &v70);
        ObjectProperties = v15;
        v9 = v15;
        if ( v15 == -1073741772 )
        {
          v70 = 0LL;
          PiDevCfgClearDeviceMigrationNode(v69, v11 + 10);
LABEL_17:
          v7 = a4;
          goto LABEL_18;
        }
        if ( v15 < 0 )
          goto LABEL_117;
        v16 = (wchar_t **)v70;
        *(_DWORD *)(v70 + 180) = v7;
        v17 = p_P;
        if ( *p_P != &P )
          goto LABEL_150;
        v18 = v74;
        *v16 = (wchar_t *)&P;
        v16[1] = (wchar_t *)v17;
        *v17 = v16;
        v19 = *(const wchar_t **)(v18 + 8);
        p_P = (PVOID *)v16;
        v20 = 0;
        if ( !wcsicmp(v16[4], v19) )
          v20 = 0x10000000;
        if ( (*((_DWORD *)v16 + 45) & 0x10000000) != 0 && (v20 & 0x10000000) == 0 )
          *((_DWORD *)v16 + 4) |= 1u;
        v21 = v16 + 7;
        v22 = v18 - (_QWORD)v16;
        v23 = 2LL;
        v24 = &qword_14097EF28;
        v25 = &v65;
        do
        {
          MigrationDeviceIdScore = PiDevCfgGetMigrationDeviceIdScore(*v21, *(wchar_t **)((char *)v21 + v22 - 24));
          *(_WORD *)v25 = MigrationDeviceIdScore;
          if ( MigrationDeviceIdScore != -1 )
            v20 |= *(_DWORD *)v24;
          v21 += 2;
          v25 = (int *)((char *)v25 + 2);
          v24 = (__int64 *)((char *)v24 + 4);
          --v23;
        }
        while ( v23 );
        v27 = v70;
        if ( (*(_DWORD *)(v70 + 180) & 0x10000) != 0 )
        {
          if ( (v20 & 0x10000) == 0 )
            goto LABEL_36;
          v28 = (v20 & 0x11000) == 0;
          v29 = (*(_DWORD *)(v70 + 180) & 0x1000) != 0;
        }
        else
        {
          v28 = (*(_DWORD *)(v70 + 180) & 0x1000) != 0;
          v29 = (v20 & 0x1000) == 0;
        }
        if ( v28 && v29 )
LABEL_36:
          *(_DWORD *)(v70 + 16) |= 1u;
        v30 = *(const WCHAR **)(v27 + 144);
        v31 = v74;
        if ( v30 && *(_QWORD *)(v74 + 64) )
        {
          while ( 1 )
          {
            if ( !*v30 )
              goto LABEL_47;
            if ( PnpMultiSzContainsString(*(PCWSTR *)(v31 + 64), v30) )
              break;
            v32 = -1LL;
            do
              ++v32;
            while ( v30[v32] );
            v30 += v32 + 1;
          }
          v20 |= 0x200u;
          *(_QWORD *)(v27 + 152) = v30;
        }
LABEL_47:
        if ( (*(_DWORD *)(v27 + 180) & 0x200) != 0 && (v20 & 0x200) == 0 )
          *(_DWORD *)(v27 + 16) |= 1u;
        v33 = v58;
        if ( *(_QWORD *)(v27 + 128) )
        {
          if ( (v58 & 0x100) == 0 )
          {
            memset(v79, 0, sizeof(v79));
            v34 = *(void **)(v31 + 16);
            v35 = *(_QWORD *)(v31 + 8);
            v79[0] = &DEVPKEY_Device_LocationInfo;
            v79[2] = &DestinationString;
            LODWORD(v79[1]) = 18;
            HIDWORD(v79[3]) = 6;
            ObjectProperties = PiDevCfgQueryObjectProperties(v36, v35, 1u, v34, (__int64)v79, 1u);
            v9 = ObjectProperties;
            if ( ObjectProperties < 0 )
              goto LABEL_116;
            if ( SLODWORD(v79[4]) < 0 )
              RtlInitUnicodeString(&DestinationString, 0LL);
            v33 = v58 | 0x100;
            v58 |= 0x100u;
          }
          if ( DestinationString.Buffer
            && !RtlCompareUnicodeString((PCUNICODE_STRING)(v27 + 120), &DestinationString, 1u) )
          {
            v20 |= 0x100u;
          }
        }
        if ( (v20 & 0x300) == 0 && (*(_DWORD *)(v27 + 180) & 0x100) != 0 )
          *(_DWORD *)(v27 + 16) |= 1u;
        if ( (v33 & 0x30) == 0 )
        {
          memset(v79, 0, sizeof(v79));
          v37 = *(void **)(v31 + 16);
          v38 = *(_QWORD *)(v31 + 8);
          v79[0] = &DEVPKEY_Device_Capabilities;
          v79[2] = &v64;
          v79[5] = &DEVPKEY_Device_BusReportedDeviceDesc;
          v79[7] = &String2;
          LODWORD(v79[1]) = 7;
          LODWORD(v79[3]) = 4;
          LODWORD(v79[6]) = 18;
          HIDWORD(v79[8]) = 6;
          ObjectProperties = PiDevCfgQueryObjectProperties(v39, v38, 1u, v37, (__int64)v79, 2u);
          v9 = ObjectProperties;
          if ( ObjectProperties < 0 )
            goto LABEL_116;
          if ( SLODWORD(v79[9]) < 0 )
            RtlInitUnicodeString(&String2, 0LL);
          v33 |= 0x30u;
          v58 = v33;
        }
        if ( (((unsigned __int8)v64 ^ *(_BYTE *)(v27 + 96)) & 0x10) != 0 )
        {
          if ( (*(_DWORD *)(v27 + 180) & 0x10) != 0 || (v64 & 0x10) != 0 )
            *(_DWORD *)(v27 + 16) |= 1u;
        }
        else
        {
          v20 |= 0x10u;
        }
        if ( *(_QWORD *)(v27 + 112) )
        {
          if ( !String2.Buffer || RtlCompareUnicodeString((PCUNICODE_STRING)(v27 + 104), &String2, 1u) )
            goto LABEL_76;
LABEL_75:
          v20 |= 0x20u;
          goto LABEL_76;
        }
        if ( !String2.Buffer )
          goto LABEL_75;
LABEL_76:
        if ( (*(_BYTE *)(v27 + 180) & 0x20) != 0 && (v20 & 0x20) == 0 )
          *(_DWORD *)(v27 + 16) |= 1u;
        if ( *(_QWORD *)(v27 + 168) )
        {
          if ( (v33 & 2) == 0 )
          {
            v40 = v69;
            v41 = v69[6];
            if ( v41 )
            {
              v42 = *(_QWORD *)(v41 + 8);
              if ( v42 )
              {
                if ( (int)PiDevCfgGetDriverPackageId(v42, (__int64)&UnicodeString) >= 0 )
                {
                  memset(v79, 0, sizeof(v79));
                  v79[0] = &DEVPKEY_DriverPackage_OriginalInfName;
                  v79[2] = &v73;
                  LODWORD(v79[1]) = 18;
                  HIDWORD(v79[3]) = 6;
                  ObjectProperties = PiDevCfgQueryObjectProperties(
                                       v43,
                                       (__int64)UnicodeString.Buffer,
                                       8u,
                                       0LL,
                                       (__int64)v79,
                                       1u);
                  v9 = ObjectProperties;
                  if ( ObjectProperties < 0 )
                  {
LABEL_116:
                    v11 = PoolWithTag;
                    goto LABEL_117;
                  }
                  if ( SLODWORD(v79[4]) < 0 )
                    RtlInitUnicodeString(&v73, 0LL);
                  v40 = v69;
                }
                v44 = &v73;
                if ( !v73.Buffer )
                  v44 = (UNICODE_STRING *)v40[6];
                v75 = *v44;
              }
            }
            v58 = v33 | 2;
          }
          if ( v75.Buffer && !RtlCompareUnicodeString((PCUNICODE_STRING)(v27 + 160), &v75, 1u) )
            v20 |= 2u;
        }
        if ( (*(_BYTE *)(v27 + 180) & 2) != 0 && (v20 & 2) == 0 )
          *(_DWORD *)(v27 + 16) |= 1u;
        v45 = *(_QWORD *)(v27 + 80) - *(_QWORD *)&Guid.Data1;
        if ( !v45 )
          v45 = *(_QWORD *)(v27 + 88) - *(_QWORD *)Guid.Data4;
        if ( v45 )
        {
          if ( (*(_DWORD *)(v27 + 180) & 1) != 0 )
            *(_DWORD *)(v27 + 16) |= 1u;
        }
        else
        {
          v20 |= 1u;
        }
        v46 = (HIWORD(v65) | ((unsigned __int64)(unsigned __int16)v65 << 16)) << 16;
        *(_QWORD *)(v27 + 184) = v46;
        if ( (v20 & 0x10000000) == 0 )
        {
          v46 |= 0xF000000000000000uLL;
          *(_QWORD *)(v27 + 184) = v46;
        }
        if ( (v20 & 0x200) == 0 )
        {
          v46 |= 0xF000uLL;
          *(_QWORD *)(v27 + 184) = v46;
        }
        if ( (v20 & 0x100) == 0 )
        {
          v46 |= 0x100uLL;
          *(_QWORD *)(v27 + 184) = v46;
        }
        if ( (v20 & 0x20) == 0 )
        {
          v46 |= 0x20uLL;
          *(_QWORD *)(v27 + 184) = v46;
        }
        if ( (v20 & 0x10) == 0 )
        {
          v46 |= 0x10uLL;
          *(_QWORD *)(v27 + 184) = v46;
        }
        if ( (v20 & 2) == 0 )
        {
          v46 |= 2uLL;
          *(_QWORD *)(v27 + 184) = v46;
        }
        v11 = PoolWithTag;
        v47 = (v20 & 1) == 0;
        v7 = a4;
        v10 = v66;
        v5 = v67;
        if ( v47 )
          *(_QWORD *)(v27 + 184) = v46 | 1;
LABEL_18:
        ++v5;
      }
    }
  }
LABEL_146:
  while ( 1 )
  {
    v54 = P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_150;
    v55 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_150;
    P = *(PVOID *)P;
    *(_QWORD *)(v55 + 8) = &P;
    PiDevCfgFreeDeviceMigrationNode(v54);
  }
  RtlFreeAnsiString(&String2);
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v73);
  return (unsigned int)v9;
}
