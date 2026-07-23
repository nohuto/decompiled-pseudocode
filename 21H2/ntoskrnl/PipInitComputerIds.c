/*
 * XREFs of PipInitComputerIds @ 0x140A5C730
 * Callers:
 *     IopInitializeBootDrivers @ 0x140A5EB88 (IopInitializeBootDrivers.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140216B10 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x140217FB0 (MmUnmapIoSpace.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x14026D570 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwSetValueKey @ 0x1403FB180 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1403FC060 (ZwDeleteValueKey.c)
 *     memset @ 0x140414300 (memset.c)
 *     PnpUnicodeStringToWstrFree @ 0x14062A5A4 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14062C36C (PnpUnicodeStringToWstr.c)
 *     _PnpCtxRegCloseKey @ 0x1406306B4 (_PnpCtxRegCloseKey.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x14066DF18 (RtlStringFromGUIDEx.c)
 *     RtlUpcaseUnicodeString @ 0x14067B110 (RtlUpcaseUnicodeString.c)
 *     IopCreateRegistryKeyEx @ 0x14073FF04 (IopCreateRegistryKeyEx.c)
 *     _PnpSetObjectProperty @ 0x140745DE4 (_PnpSetObjectProperty.c)
 *     _PnpCtxRegDeleteTree @ 0x1407AC328 (_PnpCtxRegDeleteTree.c)
 *     PipHardwareConfigOpenKey @ 0x1407AC520 (PipHardwareConfigOpenKey.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     PipCreateComputerId @ 0x140A5D698 (PipCreateComputerId.c)
 *     PipSmBiosGetString @ 0x140A5D8BC (PipSmBiosGetString.c)
 *     PipSmBiosFindStruct @ 0x140A5DA04 (PipSmBiosFindStruct.c)
 */

__int64 __fastcall PipInitComputerIds(__int64 a1)
{
  void *v2; // r15
  unsigned int v3; // r12d
  __int64 v4; // rcx
  int v5; // eax
  HANDLE v6; // r13
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // r13d
  __int64 v11; // rax
  __int64 v12; // rcx
  void *v13; // r12
  __int64 Struct; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int8 *v17; // rdi
  _BYTE *v18; // rsi
  int String; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdi
  _BYTE *v27; // rsi
  int v28; // eax
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rdx
  _BYTE *v32; // rcx
  unsigned __int8 *v33; // rdi
  _BYTE *v34; // rsi
  int v35; // eax
  int v36; // eax
  int v37; // eax
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  unsigned int v40; // r13d
  int v41; // eax
  unsigned int v42; // esi
  UNICODE_STRING *v43; // rdi
  unsigned int v44; // edi
  UNICODE_STRING *v45; // rsi
  PCWSTR *v46; // r15
  PVOID v47; // r12
  __int64 v48; // rax
  wchar_t *Buffer; // rax
  HANDLE v50; // rdi
  unsigned int v51; // r14d
  const wchar_t *v52; // rsi
  UNICODE_STRING *v53; // rcx
  __int64 v54; // rdx
  __int128 *v55; // rax
  int v56; // eax
  unsigned int v57; // r14d
  int v58; // eax
  UNICODE_STRING *v59; // rcx
  __int64 v60; // rdx
  __int128 *v61; // rax
  __int128 *v62; // rax
  __int64 v63; // rdx
  UNICODE_STRING *v64; // rcx
  int v65; // eax
  __int64 v66; // rdx
  UNICODE_STRING *v67; // rcx
  __int128 *v68; // rax
  int v69; // eax
  int v70; // eax
  __int64 v71; // rdx
  UNICODE_STRING *v72; // rcx
  __int128 *v73; // rax
  int v74; // eax
  int v75; // eax
  int v76; // eax
  int v77; // eax
  __int64 v78; // rdx
  UNICODE_STRING *v79; // rcx
  __int128 *v80; // rax
  int v81; // eax
  int v82; // eax
  int v83; // eax
  __int64 v84; // rdx
  UNICODE_STRING *v85; // rcx
  _QWORD *v86; // rax
  int v87; // eax
  int v88; // eax
  wchar_t *PoolWithTag; // rax
  wchar_t *v90; // r12
  wchar_t *v91; // rcx
  unsigned __int16 v92; // ax
  wchar_t *v93; // rsi
  unsigned __int64 v94; // rdx
  __int64 v95; // rcx
  const wchar_t *v96; // rax
  signed __int64 v97; // r11
  __int64 v98; // r8
  unsigned __int64 v99; // r9
  UNICODE_STRING *v100; // rsi
  __int64 v101; // rdi
  __int64 v102; // rcx
  HANDLE v103; // rdi
  PVOID Data; // [rsp+28h] [rbp-E0h]
  unsigned int v106; // [rsp+58h] [rbp-B0h]
  void *v107; // [rsp+60h] [rbp-A8h]
  __int16 ValueName; // [rsp+68h] [rbp-A0h]
  UNICODE_STRING ValueName_8; // [rsp+70h] [rbp-98h] BYREF
  int v110; // [rsp+80h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp-78h] BYREF
  const wchar_t *v113; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v114; // [rsp+A0h] [rbp-68h]
  PVOID v115; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v117; // [rsp+C0h] [rbp-48h]
  UNICODE_STRING v118; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v119; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v120; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v121; // [rsp+F8h] [rbp-10h] BYREF
  UNICODE_STRING *p_DestinationString; // [rsp+108h] [rbp+0h]
  UNICODE_STRING UnicodeString[10]; // [rsp+118h] [rbp+10h] BYREF
  _OWORD v124[15]; // [rsp+1B8h] [rbp+B0h] BYREF
  wchar_t SourceString; // [rsp+2A8h] [rbp+1A0h] BYREF
  wchar_t pszDest[8]; // [rsp+2B0h] [rbp+1A8h] BYREF

  v117 = 0LL;
  v2 = 0LL;
  KeyHandle = 0LL;
  v3 = 0;
  Handle = 0LL;
  v113 = 0LL;
  ValueName = 0;
  v110 = 0;
  v114 = 0;
  v115 = 0LL;
  DestinationString = 0LL;
  p_DestinationString = 0LL;
  v118 = 0LL;
  v119 = 0LL;
  v120 = 0LL;
  v121 = 0LL;
  ValueName_8 = 0LL;
  memset(UnicodeString, 0, sizeof(UnicodeString));
  v5 = PipHardwareConfigOpenKey(v4, 0xF003Fu, &KeyHandle);
  v6 = KeyHandle;
  v7 = v5;
  if ( v5 >= 0 )
  {
    PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, (char *)KeyHandle, L"ComputerIds");
    *(_DWORD *)&ValueName_8.Length = 1572886;
    ValueName_8.Buffer = L"ComputerIds";
    v7 = IopCreateRegistryKeyEx(&Handle, v6, &ValueName_8, 0xF003Fu, 0, 0LL);
    if ( v7 >= 0 )
    {
      PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, (char *)v6, L"ProductIds");
      *(_DWORD *)&ValueName_8.Length = 1441812;
      ValueName_8.Buffer = L"ProductIds";
      v7 = IopCreateRegistryKeyEx(&v113, v6, &ValueName_8, 0xF003Fu, 0, 0LL);
      if ( v7 >= 0 )
      {
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 56LL);
        if ( !v8 || (v9 = *(_QWORD *)(v8 + 16)) == 0 )
        {
          v7 = -1073741637;
          goto LABEL_151;
        }
        v10 = *(_DWORD *)(v8 + 12);
        v106 = v10;
        v11 = MmMapIoSpaceEx(v9, v10, 2u);
        v107 = (void *)v11;
        v13 = (void *)v11;
        if ( !v11 )
        {
          v7 = -1073741670;
          v2 = 0LL;
LABEL_165:
          v3 = v10;
          goto LABEL_151;
        }
        LOBYTE(v12) = 1;
        Struct = PipSmBiosFindStruct(v12, 0LL, v11, v10);
        v17 = (unsigned __int8 *)Struct;
        if ( Struct )
        {
          v18 = (_BYTE *)(Struct + 5);
          if ( Struct + 5 <= Struct + (unsigned __int64)*(unsigned __int8 *)(Struct + 1) )
          {
            LOBYTE(v15) = *(_BYTE *)(Struct + 4);
            String = PipSmBiosGetString(Struct, v15, v13, v10, UnicodeString);
            v7 = String;
            if ( String == -1073741275 )
            {
              v7 = 0;
            }
            else if ( String < 0 )
            {
              goto LABEL_164;
            }
          }
          if ( v17 + 27 <= &v17[v17[1]] )
          {
            LOBYTE(v15) = v17[26];
            v20 = PipSmBiosGetString(v17, v15, v13, v10, &UnicodeString[1]);
            v7 = v20;
            if ( v20 == -1073741275 )
            {
              v7 = 0;
            }
            else if ( v20 < 0 )
            {
              goto LABEL_164;
            }
          }
          if ( v17 + 6 <= &v17[v17[1]] )
          {
            LOBYTE(v15) = *v18;
            v21 = PipSmBiosGetString(v17, v15, v13, v10, &UnicodeString[2]);
            v7 = v21;
            if ( v21 == -1073741275 )
            {
              v7 = 0;
            }
            else if ( v21 < 0 )
            {
              goto LABEL_164;
            }
          }
          if ( v17 + 26 <= &v17[v17[1]] )
          {
            LOBYTE(v15) = v17[25];
            v22 = PipSmBiosGetString(v17, v15, v13, v10, &UnicodeString[3]);
            v7 = v22;
            if ( v22 == -1073741275 )
            {
              v7 = 0;
            }
            else if ( v22 < 0 )
            {
              goto LABEL_164;
            }
          }
          v16 = (unsigned __int64)&v17[v17[1]];
          if ( (unsigned __int64)(v17 + 7) <= v16 )
          {
            LOBYTE(v15) = v17[6];
            v23 = PipSmBiosGetString(v17, v15, v13, v10, &UnicodeString[9]);
            v7 = v23;
            if ( v23 == -1073741275 )
            {
              v7 = 0;
            }
            else if ( v23 < 0 )
            {
              goto LABEL_164;
            }
          }
        }
        LOBYTE(v15) = 10;
        LOBYTE(v16) = 2;
        v24 = PipSmBiosFindStruct(v16, v15, v13, v10);
        v26 = v24;
        if ( v24 )
        {
          v27 = (_BYTE *)(v24 + 5);
          if ( v24 + 5 <= v24 + (unsigned __int64)*(unsigned __int8 *)(v24 + 1) )
          {
            LOBYTE(v25) = *(_BYTE *)(v24 + 4);
            v28 = PipSmBiosGetString(v24, v25, v13, v10, &UnicodeString[6]);
            v7 = v28;
            if ( v28 == -1073741275 )
            {
              v7 = 0;
            }
            else if ( v28 < 0 )
            {
              goto LABEL_164;
            }
          }
          if ( v26 + 6 <= v26 + (unsigned __int64)*(unsigned __int8 *)(v26 + 1) )
          {
            LOBYTE(v25) = *v27;
            v29 = PipSmBiosGetString(v26, v25, v13, v10, &UnicodeString[7]);
            v7 = v29;
            if ( v29 == -1073741275 )
            {
              v7 = 0;
            }
            else if ( v29 < 0 )
            {
              goto LABEL_164;
            }
          }
        }
        v30 = PipSmBiosFindStruct(0LL, 0LL, v13, v10);
        v33 = (unsigned __int8 *)v30;
        if ( !v30 )
          goto LABEL_44;
        v34 = (_BYTE *)(v30 + 5);
        if ( v30 + 5 <= v30 + (unsigned __int64)*(unsigned __int8 *)(v30 + 1) )
        {
          LOBYTE(v31) = *(_BYTE *)(v30 + 4);
          v35 = PipSmBiosGetString(v30, v31, v13, v10, &UnicodeString[4]);
          v7 = v35;
          if ( v35 == -1073741275 )
          {
            v7 = 0;
          }
          else if ( v35 < 0 )
          {
            goto LABEL_164;
          }
        }
        if ( v33 + 6 > &v33[v33[1]] )
          goto LABEL_37;
        LOBYTE(v31) = *v34;
        v36 = PipSmBiosGetString(v33, v31, v13, v10, &UnicodeString[5]);
        v7 = v36;
        if ( v36 == -1073741275 )
        {
          v7 = 0;
          goto LABEL_37;
        }
        if ( v36 >= 0 )
        {
LABEL_37:
          if ( v33 + 9 > &v33[v33[1]] )
            goto LABEL_40;
          LOBYTE(v31) = v33[8];
          v37 = PipSmBiosGetString(v33, v31, v13, v10, &UnicodeString[8]);
          v7 = v37;
          if ( v37 == -1073741275 )
          {
            v7 = 0;
            goto LABEL_40;
          }
          if ( v37 >= 0 )
          {
LABEL_40:
            v32 = v33 + 21;
            v38 = (unsigned __int64)&v33[v33[1]];
            if ( (unsigned __int64)(v33 + 21) <= v38 )
              HIBYTE(ValueName) = v33[20];
            if ( (unsigned __int64)(v33 + 22) <= v38 )
              LOBYTE(ValueName) = *v32;
LABEL_44:
            LOBYTE(v32) = 3;
            v39 = PipSmBiosFindStruct(v32, 0LL, v13, v10);
            v40 = 0;
            if ( v39 && v39 + 6 <= v39 + (unsigned __int64)*(unsigned __int8 *)(v39 + 1) )
            {
              v41 = *(_BYTE *)(v39 + 5) & 0x7F;
              v110 = v41;
            }
            else
            {
              v41 = v110;
            }
            if ( v41 )
            {
              ValueName_8.Buffer = L"EnclosureType";
              *(_DWORD *)&ValueName_8.Length = 1835034;
              ZwSetValueKey(KeyHandle, &ValueName_8, 0, 4u, &v110, 4u);
            }
            v42 = 0;
            v43 = UnicodeString;
            do
            {
              if ( v43->Buffer && !v43->Length )
                RtlFreeAnsiString(&UnicodeString[v42]);
              ++v42;
              ++v43;
            }
            while ( v42 < 0xA );
            v44 = 0;
            v45 = UnicodeString;
            v46 = (PCWSTR *)off_140008850;
            do
            {
              RtlInitUnicodeString(&ValueName_8, *v46);
              if ( v45->Length )
              {
                if ( (int)PnpUnicodeStringToWstr((__int16 **)&v115, 0LL, &UnicodeString[v44].Length) >= 0 )
                {
                  v47 = v115;
                  v48 = -1LL;
                  do
                    ++v48;
                  while ( *((_WORD *)v115 + v48) );
                  ZwSetValueKey(KeyHandle, &ValueName_8, 0, 1u, v115, 2 * v48 + 2);
                  PnpUnicodeStringToWstrFree(v47, (__int64)&UnicodeString[v44]);
                }
                v40 = 0;
              }
              else
              {
                ZwDeleteValueKey(KeyHandle, &ValueName_8);
              }
              ++v44;
              ++v46;
              ++v45;
            }
            while ( v44 < 0xA );
            Buffer = UnicodeString[0].Buffer;
            v50 = Handle;
            v51 = v114;
            if ( !UnicodeString[0].Buffer )
            {
LABEL_126:
              PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 112 * v51 + 2, 0x6E697050u);
              v90 = PoolWithTag;
              if ( PoolWithTag )
              {
                v91 = PoolWithTag;
                ValueName_8.Buffer = PoolWithTag;
                v92 = 112 * v51 + 2;
                ValueName_8.MaximumLength = v92;
                if ( v51 )
                {
                  v113 = L"ComputerMetadata\\";
                  do
                  {
                    v93 = 0LL;
                    ValueName_8.Length = 0;
                    v94 = 0LL;
                    v7 = 0;
                    if ( (ValueName_8.MaximumLength & 1) != 0 || v92 == 0xFFFF )
                    {
                      v7 = -1073741811;
                    }
                    else
                    {
                      if ( v91 || !v92 )
                      {
                        v93 = v91;
                        v94 = (unsigned __int64)v92 >> 1;
                      }
                      else
                      {
                        v7 = -1073741811;
                      }
                      if ( v7 < 0 )
                        goto LABEL_149;
                      v95 = 0LL;
                      if ( v94 )
                      {
                        v96 = L"ComputerMetadata\\";
                        v97 = (char *)v93 - (char *)v113;
                        v98 = 0x7FFFLL;
                        v99 = v94;
                        v7 = 0;
                        do
                        {
                          if ( !v98 )
                            break;
                          if ( *v96 == (_WORD)v117 )
                            break;
                          *(const wchar_t *)((char *)v96 + v97) = *v96;
                          --v98;
                          ++v96;
                          ++v95;
                          --v99;
                        }
                        while ( v99 );
                        if ( !v99 && v98 && *v96 )
                          v7 = -2147483643;
                        v93 += v95;
                        LOWORD(v94) = v94 - v95;
                      }
                      else
                      {
                        v7 = v93 != 0LL ? -2147483643 : -1073741811;
                      }
                      ValueName_8.Length = 2 * v95;
                      if ( ((v7 + 0x80000000) & 0x80000000) != 0 || v7 == -2147483643 )
                      {
                        ValueName_8.Length = 0;
                        ValueName_8.MaximumLength = 2 * v94;
                        ValueName_8.Buffer = v93;
                      }
                    }
                    if ( v7 < 0 )
                      goto LABEL_149;
                    v7 = RtlStringFromGUIDEx((PGUID)&v124[v40], &ValueName_8, 0);
                    if ( v7 < 0 )
                      goto LABEL_149;
                    v7 = RtlUpcaseUnicodeString(&ValueName_8, &ValueName_8, 0);
                    if ( v7 < 0 )
                      goto LABEL_149;
                    v91 = ValueName_8.Buffer + 39;
                    v92 = ValueName_8.MaximumLength - 78;
                    ValueName_8.Buffer += 39;
                    ++v40;
                    ValueName_8.MaximumLength -= 78;
                  }
                  while ( v40 < v51 );
                }
                if ( v7 >= 0 )
                {
                  *v91 = 0;
                  ++ValueName_8.Buffer;
                  v7 = PnpSetObjectProperty(
                         *(__int64 *)&PiPnpRtlCtx,
                         (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
                         5u,
                         0LL,
                         0LL,
                         (__int64)&DEVPKEY_Device_HardwareIds,
                         8210,
                         (__int64)v90,
                         112 * v51 + 2,
                         0);
                }
LABEL_149:
                ExFreePoolWithTag(v90, 0);
              }
              else
              {
                v7 = -1073741670;
              }
              goto LABEL_150;
            }
            v52 = v113;
            if ( UnicodeString[2].Buffer && UnicodeString[4].Buffer && UnicodeString[5].Buffer )
            {
              LODWORD(Data) = (unsigned __int8)ValueName;
              v7 = RtlStringCchPrintfW(pszDest, 8uLL, L"%02x&%02x", HIBYTE(ValueName), Data);
              if ( v7 < 0 )
                goto LABEL_150;
              RtlInitUnicodeString(&DestinationString, pszDest);
              if ( UnicodeString[3].Buffer )
              {
                *(_QWORD *)&v119 = UnicodeString;
                v53 = &UnicodeString[2];
                *((_QWORD *)&v119 + 1) = &UnicodeString[1];
                v54 = 4LL;
                v55 = &v120;
                do
                {
                  *(_QWORD *)v55 = v53++;
                  v55 = (__int128 *)((char *)v55 + 8);
                  --v54;
                }
                while ( v54 );
                p_DestinationString = &DestinationString;
                v7 = PipCreateComputerId(v50, v52, &v119, 7LL, v124);
                v51 = 1;
                if ( v7 < 0 )
                  goto LABEL_150;
              }
              *(_QWORD *)&v119 = UnicodeString;
              *((_QWORD *)&v119 + 1) = &UnicodeString[1];
              *(_QWORD *)&v120 = &UnicodeString[2];
              *((_QWORD *)&v120 + 1) = &UnicodeString[4];
              *(_QWORD *)&v121 = &UnicodeString[5];
              *((_QWORD *)&v121 + 1) = &DestinationString;
              v56 = PipCreateComputerId(v50, v52, &v119, 6LL, &v124[v51]);
              v57 = v51 + 1;
              v7 = v56;
              if ( v56 < 0 )
                goto LABEL_150;
              *(_QWORD *)&v119 = UnicodeString;
              *((_QWORD *)&v119 + 1) = &UnicodeString[2];
              *(_QWORD *)&v120 = &UnicodeString[4];
              *((_QWORD *)&v120 + 1) = &UnicodeString[5];
              *(_QWORD *)&v121 = &DestinationString;
              v58 = PipCreateComputerId(v50, v52, &v119, 5LL, &v124[v57]);
              v51 = v57 + 1;
              v7 = v58;
              if ( v58 < 0 )
                goto LABEL_150;
              Buffer = UnicodeString[0].Buffer;
            }
            if ( !Buffer )
              goto LABEL_126;
            if ( UnicodeString[2].Buffer )
            {
              if ( UnicodeString[3].Buffer )
              {
                if ( UnicodeString[6].Buffer )
                {
                  if ( UnicodeString[7].Buffer )
                  {
                    *(_QWORD *)&v119 = UnicodeString;
                    v59 = &UnicodeString[2];
                    v60 = 2LL;
                    *((_QWORD *)&v119 + 1) = &UnicodeString[1];
                    v61 = &v120;
                    do
                    {
                      *(_QWORD *)v61 = v59++;
                      v61 = (__int128 *)((char *)v61 + 8);
                      --v60;
                    }
                    while ( v60 );
                    v62 = &v121;
                    v63 = 2LL;
                    v64 = &UnicodeString[6];
                    do
                    {
                      *(_QWORD *)v62 = v64++;
                      v62 = (__int128 *)((char *)v62 + 8);
                      --v63;
                    }
                    while ( v63 );
                    v65 = PipCreateComputerId(v50, v52, &v119, 6LL, &v124[v51++]);
                    v7 = v65;
                    if ( v65 < 0 )
                      goto LABEL_150;
                  }
                }
                v66 = 2LL;
                *(_QWORD *)&v119 = UnicodeString;
                v67 = &UnicodeString[2];
                *((_QWORD *)&v119 + 1) = &UnicodeString[1];
                v68 = &v120;
                do
                {
                  *(_QWORD *)v68 = v67++;
                  v68 = (__int128 *)((char *)v68 + 8);
                  --v66;
                }
                while ( v66 );
                v69 = PipCreateComputerId(v50, v52, &v119, 4LL, &v124[v51++]);
                v7 = v69;
                if ( v69 < 0 )
                  goto LABEL_150;
              }
              *(_QWORD *)&v119 = UnicodeString;
              *((_QWORD *)&v119 + 1) = &UnicodeString[1];
              *(_QWORD *)&v120 = &UnicodeString[2];
              v70 = PipCreateComputerId(v50, v52, &v119, 3LL, &v124[v51++]);
              v7 = v70;
              if ( v70 < 0 )
                goto LABEL_150;
              Buffer = UnicodeString[0].Buffer;
            }
            if ( !Buffer )
              goto LABEL_126;
            if ( UnicodeString[3].Buffer )
            {
              if ( UnicodeString[6].Buffer )
              {
                if ( UnicodeString[7].Buffer )
                {
                  v71 = 2LL;
                  *(_QWORD *)&v119 = UnicodeString;
                  v72 = &UnicodeString[6];
                  *((_QWORD *)&v119 + 1) = &UnicodeString[3];
                  v73 = &v120;
                  do
                  {
                    *(_QWORD *)v73 = v72++;
                    v73 = (__int128 *)((char *)v73 + 8);
                    --v71;
                  }
                  while ( v71 );
                  v74 = PipCreateComputerId(v50, v52, &v119, 4LL, &v124[v51++]);
                  v7 = v74;
                  if ( v74 < 0 )
                    goto LABEL_150;
                }
              }
              *(_QWORD *)&v119 = UnicodeString;
              *((_QWORD *)&v119 + 1) = &UnicodeString[3];
              v75 = PipCreateComputerId(v50, v52, &v119, 2LL, &v124[v51++]);
              v7 = v75;
              if ( v75 < 0 )
                goto LABEL_150;
              Buffer = UnicodeString[0].Buffer;
            }
            if ( !Buffer )
              goto LABEL_126;
            if ( UnicodeString[2].Buffer )
            {
              if ( UnicodeString[6].Buffer )
              {
                if ( UnicodeString[7].Buffer )
                {
                  *(_QWORD *)&v119 = UnicodeString;
                  *((_QWORD *)&v119 + 1) = &UnicodeString[2];
                  *(_QWORD *)&v120 = &UnicodeString[6];
                  *((_QWORD *)&v120 + 1) = &UnicodeString[7];
                  v76 = PipCreateComputerId(v50, v52, &v119, 4LL, &v124[v51++]);
                  v7 = v76;
                  if ( v76 < 0 )
                    goto LABEL_150;
                }
              }
              *(_QWORD *)&v119 = UnicodeString;
              *((_QWORD *)&v119 + 1) = &UnicodeString[2];
              v77 = PipCreateComputerId(v50, v52, &v119, 2LL, &v124[v51++]);
              v7 = v77;
              if ( v77 < 0 )
                goto LABEL_150;
              Buffer = UnicodeString[0].Buffer;
            }
            if ( !Buffer )
              goto LABEL_126;
            if ( UnicodeString[1].Buffer )
            {
              if ( UnicodeString[7].Buffer )
              {
                if ( UnicodeString[6].Buffer )
                {
                  v78 = 2LL;
                  *(_QWORD *)&v119 = UnicodeString;
                  v79 = &UnicodeString[6];
                  *((_QWORD *)&v119 + 1) = &UnicodeString[1];
                  v80 = &v120;
                  do
                  {
                    *(_QWORD *)v80 = v79++;
                    v80 = (__int128 *)((char *)v80 + 8);
                    --v78;
                  }
                  while ( v78 );
                  v81 = PipCreateComputerId(v50, v52, &v119, 4LL, &v124[v51++]);
                  v7 = v81;
                  if ( v81 < 0 )
                    goto LABEL_150;
                }
              }
              *(_QWORD *)&v119 = UnicodeString;
              *((_QWORD *)&v119 + 1) = &UnicodeString[1];
              v82 = PipCreateComputerId(v50, v52, &v119, 2LL, &v124[v51++]);
              v7 = v82;
              if ( v82 < 0 )
                goto LABEL_150;
              Buffer = UnicodeString[0].Buffer;
            }
            if ( !Buffer )
              goto LABEL_126;
            if ( v110 )
            {
              v7 = RtlStringCchPrintfW(&SourceString, 4uLL, L"%x");
              if ( v7 < 0 )
                goto LABEL_150;
              RtlInitUnicodeString(&v118, &SourceString);
              *(_QWORD *)&v119 = UnicodeString;
              *((_QWORD *)&v119 + 1) = &v118;
              v83 = PipCreateComputerId(v50, 0LL, &v119, 2LL, &v124[v51++]);
              v7 = v83;
              if ( v83 < 0 )
                goto LABEL_150;
              Buffer = UnicodeString[0].Buffer;
            }
            if ( !Buffer )
              goto LABEL_126;
            if ( !UnicodeString[7].Buffer )
              goto LABEL_191;
            if ( !UnicodeString[6].Buffer )
              goto LABEL_191;
            v84 = 2LL;
            *(_QWORD *)&v119 = UnicodeString;
            v85 = &UnicodeString[6];
            v86 = (_QWORD *)&v119 + 1;
            do
            {
              *v86++ = v85++;
              --v84;
            }
            while ( v84 );
            v87 = PipCreateComputerId(v50, 0LL, &v119, 3LL, &v124[v51++]);
            v7 = v87;
            if ( v87 >= 0 )
            {
LABEL_191:
              *(_QWORD *)&v119 = UnicodeString;
              v88 = PipCreateComputerId(v50, 0LL, &v119, 1LL, &v124[v51++]);
              v7 = v88;
              if ( v88 >= 0 )
                goto LABEL_126;
            }
LABEL_150:
            v3 = v106;
            v2 = v107;
            goto LABEL_151;
          }
        }
LABEL_164:
        v2 = v13;
        goto LABEL_165;
      }
    }
  }
LABEL_151:
  v100 = UnicodeString;
  v101 = 10LL;
  do
  {
    RtlFreeAnsiString(v100++);
    --v101;
  }
  while ( v101 );
  v103 = Handle;
  if ( v2 )
    MmUnmapIoSpace(v2, v3);
  if ( v103 )
    ZwClose(v103);
  if ( KeyHandle )
    PnpCtxRegCloseKey(v102, KeyHandle);
  return (unsigned int)v7;
}
