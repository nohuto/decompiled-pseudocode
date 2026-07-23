/*
 * XREFs of PiDevCfgConfigureDevice @ 0x140742FE0
 * Callers:
 *     PiDevCfgProcessDevice @ 0x140739F50 (PiDevCfgProcessDevice.c)
 * Callees:
 *     PipIsDevNodeDNStarted @ 0x140253288 (PipIsDevNodeDNStarted.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     PnpDuplicateUnicodeString @ 0x14036F050 (PnpDuplicateUnicodeString.c)
 *     RtlUnicodeStringPrintf @ 0x14036F14C (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     memset @ 0x140414300 (memset.c)
 *     _PnpOpenObjectRegKey @ 0x14062C674 (_PnpOpenObjectRegKey.c)
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 *     RtlpQueryRegistryValues @ 0x140635878 (RtlpQueryRegistryValues.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     RtlCompareUnicodeString @ 0x1406DDA80 (RtlCompareUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 *     PnpIsNullGuid @ 0x1406FEAA0 (PnpIsNullGuid.c)
 *     _CmDeleteDeviceRegKey @ 0x14072D41C (_CmDeleteDeviceRegKey.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x1407305EC (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x14073B980 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgQueryObjectProperties @ 0x14073D004 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgBuildIndirectString @ 0x14073D36C (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgSetObjectProperty @ 0x1407454AC (PiDevCfgSetObjectProperty.c)
 *     _RegRtlDeleteTreeInternal @ 0x140766B34 (_RegRtlDeleteTreeInternal.c)
 *     PiDevCfgConfigureDeviceDriver @ 0x140767650 (PiDevCfgConfigureDeviceDriver.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x1407677A4 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x14076C014 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgMigrateDevice @ 0x14076E9C4 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x14076F2A8 (PiDevCfgEnforceDevicePolicy.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140770ECC (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x1407710B0 (PiDevCfgGetDeviceClassConfigFlags.c)
 *     PipHardwareConfigActivateService @ 0x14077BC80 (PipHardwareConfigActivateService.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x14077C4E8 (PiDevCfgVerifyDeviceAllowed.c)
 *     PnpDeleteDeviceInterfaces @ 0x14089FA08 (PnpDeleteDeviceInterfaces.c)
 *     PiDevCfgAppendMultiSz @ 0x1408A4DEC (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1408A6F54 (PiDevCfgMakeServiceBootStart.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgConfigureDevice(__int64 a1, __int64 a2, __int64 a3, int *a4, _DWORD *a5)
{
  __int64 v7; // r14
  void *v8; // r15
  int v9; // r13d
  void *v10; // r12
  int DriverConfiguration; // ebx
  int v12; // edx
  __int64 *v13; // r12
  const WCHAR *v14; // rdx
  wchar_t *v15; // rcx
  __int64 v16; // rbx
  char v17; // cl
  char v18; // al
  _BYTE *v19; // rax
  char v20; // al
  __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // rcx
  int *v24; // r12
  __int64 *i; // r12
  int *v26; // r13
  _DWORD *v27; // r12
  __int64 v28; // rcx
  UNICODE_STRING v29; // xmm0
  __int64 v30; // r8
  __int64 v31; // rcx
  const WCHAR *v32; // rdi
  const WCHAR *v33; // rdi
  int v35; // eax
  char v36; // cl
  unsigned int v37; // ecx
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  char v43; // al
  _QWORD *v44; // rbx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // r8
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // rax
  PGUID Guid; // [rsp+20h] [rbp-E0h]
  int v56; // [rsp+28h] [rbp-D8h]
  int v57; // [rsp+28h] [rbp-D8h]
  int v58; // [rsp+28h] [rbp-D8h]
  int v59; // [rsp+28h] [rbp-D8h]
  int v60; // [rsp+28h] [rbp-D8h]
  int v61; // [rsp+28h] [rbp-D8h]
  int v62; // [rsp+28h] [rbp-D8h]
  int v63; // [rsp+28h] [rbp-D8h]
  int v64; // [rsp+28h] [rbp-D8h]
  int v65; // [rsp+28h] [rbp-D8h]
  int v66; // [rsp+28h] [rbp-D8h]
  int v67; // [rsp+28h] [rbp-D8h]
  char v68; // [rsp+60h] [rbp-A0h] BYREF
  char v69; // [rsp+61h] [rbp-9Fh] BYREF
  char v70; // [rsp+62h] [rbp-9Eh] BYREF
  char v71; // [rsp+63h] [rbp-9Dh]
  int v72; // [rsp+64h] [rbp-9Ch] BYREF
  char v73[4]; // [rsp+68h] [rbp-98h] BYREF
  int v74; // [rsp+6Ch] [rbp-94h] BYREF
  int v75[2]; // [rsp+70h] [rbp-90h]
  int v76; // [rsp+78h] [rbp-88h] BYREF
  int v77; // [rsp+7Ch] [rbp-84h] BYREF
  int v78; // [rsp+80h] [rbp-80h] BYREF
  int v79; // [rsp+84h] [rbp-7Ch]
  int v80; // [rsp+88h] [rbp-78h]
  unsigned int v81; // [rsp+8Ch] [rbp-74h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING v83; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING String2; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING v85; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v86; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v87; // [rsp+CCh] [rbp-34h]
  int v88; // [rsp+D0h] [rbp-30h] BYREF
  int v89; // [rsp+D4h] [rbp-2Ch] BYREF
  int *v90; // [rsp+D8h] [rbp-28h]
  _DWORD *v91; // [rsp+E0h] [rbp-20h]
  __int64 v92; // [rsp+E8h] [rbp-18h]
  UNICODE_STRING UnicodeString; // [rsp+F0h] [rbp-10h] BYREF
  UNICODE_STRING v94; // [rsp+100h] [rbp+0h] BYREF
  UNICODE_STRING v95; // [rsp+110h] [rbp+10h] BYREF
  PCWSTR Buffer; // [rsp+120h] [rbp+20h]
  PVOID P; // [rsp+128h] [rbp+28h] BYREF
  HANDLE KeyHandle; // [rsp+130h] [rbp+30h] BYREF
  PCWSTR SourceString; // [rsp+138h] [rbp+38h]
  UNICODE_STRING DestinationString; // [rsp+140h] [rbp+40h] BYREF
  UNICODE_STRING v101; // [rsp+150h] [rbp+50h] BYREF
  UNICODE_STRING v102; // [rsp+160h] [rbp+60h] BYREF
  UNICODE_STRING v103; // [rsp+170h] [rbp+70h] BYREF
  UNICODE_STRING v104; // [rsp+180h] [rbp+80h] BYREF
  UNICODE_STRING String1; // [rsp+190h] [rbp+90h] BYREF
  UNICODE_STRING v106; // [rsp+1A0h] [rbp+A0h] BYREF
  UNICODE_STRING v107; // [rsp+1B0h] [rbp+B0h] BYREF
  UNICODE_STRING v108; // [rsp+1C0h] [rbp+C0h] BYREF
  UNICODE_STRING v109; // [rsp+1D0h] [rbp+D0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1E0h] [rbp+E0h] BYREF
  __int128 Source2; // [rsp+210h] [rbp+110h] BYREF
  _QWORD v112[22]; // [rsp+220h] [rbp+120h] BYREF

  *(_QWORD *)v75 = a1;
  v90 = a4;
  Handle = 0LL;
  v91 = a5;
  *a4 = 1024;
  v7 = a1 + 40;
  v72 = 1024;
  *a5 = 0;
  v8 = *(void **)(a2 + 16);
  v9 = 1024;
  KeyHandle = 0LL;
  *(_DWORD *)(&v108.MaximumLength + 1) = 0;
  *(_QWORD *)&v95.Length = 0LL;
  String2 = 0LL;
  v95.Buffer = 0LL;
  v10 = 0LL;
  *(_QWORD *)&v101.Length = 0LL;
  SourceString = 0LL;
  v101.Buffer = 0LL;
  *(_QWORD *)&v102.Length = 0LL;
  Buffer = 0LL;
  v102.Buffer = 0LL;
  *(_QWORD *)&v103.Length = 0LL;
  v103.Buffer = 0LL;
  *(_QWORD *)&v104.Length = 0LL;
  v104.Buffer = 0LL;
  *(_QWORD *)&v106.Length = 0LL;
  v106.Buffer = 0LL;
  *(_QWORD *)&v107.Length = 0LL;
  v107.Buffer = 0LL;
  v80 = 0;
  v79 = 0;
  v74 = 0;
  v88 = 0;
  v89 = 0;
  v92 = 0LL;
  Source2 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&v83.Length = 0LL;
  v83.Buffer = 0LL;
  *(_QWORD *)&v85.Length = 0LL;
  v85.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v109.Length = 0LL;
  v109.Buffer = 0LL;
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = 0LL;
  v68 = 0;
  v81 = 0;
  v86 = 0;
  v69 = 0;
  v70 = 0;
  P = 0LL;
  v87 = 0;
  v76 = 0;
  v71 = 0;
  *(_QWORD *)&v94.Length = 0LL;
  v94.Buffer = 0LL;
  v73[0] = 0;
  v77 = 0;
  v78 = 0;
  *(_DWORD *)&v108.Length = 68157440;
  v108.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x410uLL, 0x63647050u);
  if ( !v108.Buffer )
    goto LABEL_157;
  if ( !a3 )
    goto LABEL_33;
  DriverConfiguration = PiDevCfgQueryDriverConfiguration(a3);
  if ( DriverConfiguration < 0 )
    goto LABEL_139;
  v92 = *(_QWORD *)(a3 + 264);
  if ( *(_QWORD *)(a3 + 296) )
  {
    if ( !PnpDuplicateUnicodeString((__int64)&v95, a3 + 288) )
      goto LABEL_157;
  }
  if ( *(_QWORD *)(a3 + 312) )
  {
    if ( !PnpDuplicateUnicodeString((__int64)&v101, a3 + 304) )
      goto LABEL_157;
    SourceString = v101.Buffer;
  }
  if ( !*(_QWORD *)(a3 + 328) )
    goto LABEL_8;
  if ( !PnpDuplicateUnicodeString((__int64)&v102, a3 + 320) )
  {
LABEL_157:
    DriverConfiguration = -1073741670;
    goto LABEL_139;
  }
  Buffer = v102.Buffer;
LABEL_8:
  if ( *(_QWORD *)(a3 + 344) && !PnpDuplicateUnicodeString((__int64)&v103, a3 + 336)
    || *(_QWORD *)(a3 + 360) && !PnpDuplicateUnicodeString((__int64)&v104, a3 + 352) )
  {
    goto LABEL_157;
  }
  v9 = *(_DWORD *)(a3 + 384);
  v12 = *(_DWORD *)(a3 + 184);
  v80 = *(_DWORD *)(a3 + 388);
  v13 = *(__int64 **)(a3 + 208);
  v72 = v9;
  v79 = v12;
  if ( v13 == (__int64 *)(a3 + 208) )
  {
    v10 = (void *)SourceString;
  }
  else
  {
    do
    {
      v35 = PiDevCfgQueryDriverConfiguration(v13);
      DriverConfiguration = v35;
      if ( v35 >= 0 )
      {
        if ( v13[37] )
        {
          *((_DWORD *)v13 + 46) &= ~1u;
        }
        else
        {
          if ( v13[39] )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v101);
            if ( DriverConfiguration < 0 )
              goto LABEL_139;
          }
          if ( v13[41] )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v102);
            if ( DriverConfiguration < 0 )
              goto LABEL_139;
          }
          if ( v13[43] )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v103);
            if ( DriverConfiguration < 0 )
              goto LABEL_139;
          }
          if ( v13[45] )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v104);
            if ( DriverConfiguration < 0 )
              goto LABEL_139;
          }
          v9 |= *((_DWORD *)v13 + 96);
          v80 |= *((_DWORD *)v13 + 97);
          v79 |= *((_DWORD *)v13 + 46);
          v72 = v9;
          DriverConfiguration = PiDevCfgAppendMultiSz(&v106);
          if ( DriverConfiguration < 0 )
            goto LABEL_139;
          DriverConfiguration = PiDevCfgAppendMultiSz(&v107);
          if ( DriverConfiguration < 0 )
            goto LABEL_139;
        }
      }
      else
      {
        if ( v35 != -1073740653 )
          break;
        if ( !PnpBootMode || (PiDevCfgFlags & 2) == 0 )
          goto LABEL_139;
        v9 |= 0x400u;
        DriverConfiguration = 0;
        v72 = v9;
      }
      v13 = (__int64 *)*v13;
    }
    while ( v13 != (__int64 *)(a3 + 208) );
    v10 = v101.Buffer;
    LOBYTE(v12) = v79;
    SourceString = v101.Buffer;
    Buffer = v102.Buffer;
  }
  if ( DriverConfiguration < 0 )
    goto LABEL_139;
  if ( (PiDevCfgFlags & 2) != 0 )
  {
    if ( (v9 & 0x400) != 0
      && (*(_BYTE *)(a3 + 408) & 2) == 0
      && (PiDevCfgOptions & 1) == 0
      && !InitIsWinPEMode
      && !PnpBootMode )
    {
      goto LABEL_188;
    }
    if ( (v12 & 0x40) != 0 )
    {
      if ( !PnpBootMode )
        goto LABEL_188;
      v9 |= 0x400u;
      v72 = v9;
    }
  }
  memset(v112, 0, 0xA8uLL);
  LODWORD(v112[1]) = 288;
  LODWORD(v112[4]) = 0x1000000;
  v112[2] = L"Description";
  LODWORD(v112[11]) = 0x1000000;
  v14 = *(const WCHAR **)(a3 + 24);
  v112[3] = &v83;
  v112[9] = L"Manufacturer";
  LODWORD(v112[8]) = 288;
  v112[10] = &v85;
  DriverConfiguration = RtlpQueryRegistryValues(3221225472LL, v14, (__int64)v112, 0LL);
  if ( DriverConfiguration < 0 )
    goto LABEL_139;
  v15 = v85.Buffer;
  if ( !v83.Buffer && !v85.Buffer && *(_QWORD *)(a3 + 168) && (PiDevCfgFlags & 2) != 0 && !InitIsWinPEMode )
  {
    if ( !PnpBootMode )
      goto LABEL_188;
    v9 |= 0x400u;
    v72 = v9;
  }
  if ( !v83.Length && v83.Buffer )
  {
    RtlFreeAnsiString(&v83);
    v15 = v85.Buffer;
  }
  if ( !v85.Length && v15 )
    RtlFreeAnsiString(&v85);
  v16 = v92;
  if ( !v92 || (int)PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, v92, 2u, 131097, 0, (__int64)&Handle) < 0 )
  {
    DriverConfiguration = 0;
    goto LABEL_213;
  }
  memset(v112, 0, 0xA0uLL);
  v112[0] = &DEVPKEY_DeviceClass_Configurable;
  LODWORD(v112[1]) = 17;
  v112[2] = &v68;
  LODWORD(v112[6]) = 17;
  v112[5] = DEVPKEY_DeviceClass_PolicyExempt;
  v112[7] = &v69;
  LODWORD(v112[3]) = 1;
  v112[10] = &DEVPKEY_DeviceClass_DefaultService;
  v112[12] = &DestinationString;
  v112[15] = DEVPKEY_DeviceClass_CompatibleFeatureScores;
  v112[17] = &P;
  LODWORD(v112[8]) = 1;
  LODWORD(v112[11]) = 18;
  HIDWORD(v112[13]) = 6;
  LODWORD(v112[16]) = 4099;
  HIDWORD(v112[18]) = 2;
  DriverConfiguration = PiDevCfgQueryObjectProperties(2LL, v16, 2u, Handle, (__int64)v112, 4u);
  if ( DriverConfiguration < 0 )
    goto LABEL_139;
  v17 = v68;
  DriverConfiguration = 0;
  v18 = v69;
  if ( SLODWORD(v112[4]) < 0 )
    v17 = 0;
  v68 = v17;
  if ( SLODWORD(v112[9]) < 0 )
    v18 = 0;
  v69 = v18;
  if ( SLODWORD(v112[14]) < 0 )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    v17 = v68;
  }
  if ( SLODWORD(v112[19]) >= 0 )
    v87 = v112[18];
  else
    P = 0LL;
  if ( !v17 )
  {
    if ( (int)PnpGetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                v92,
                2LL,
                (__int64)Handle,
                0LL,
                (__int64)DEVPKEY_DeviceClass_ConfigurableClassVersion,
                (__int64)&v77,
                (__int64)&v81,
                4,
                (__int64)&v78,
                0) >= 0
      && v77 == 7
      && v78 == 4
      && v81
      && (int)PnpGetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                *(_QWORD *)(a3 + 64),
                8LL,
                *(_QWORD *)(a3 + 16),
                0LL,
                (__int64)DEVPKEY_DriverPackage_ClassVersion,
                (__int64)&v77,
                (__int64)&v86,
                4,
                (__int64)&v78,
                0) >= 0
      && v77 == 7
      && v78 == 4 )
    {
      v36 = v68;
      if ( v86 >= v81 )
        v36 = -1;
      v68 = v36;
LABEL_214:
      if ( v36 || (PiDevCfgOptions & 1) != 0 || (PiDevCfgFlags & 2) == 0 )
        goto LABEL_32;
      if ( PnpBootMode )
      {
        v9 |= 0x400u;
        v72 = v9;
        goto LABEL_32;
      }
LABEL_188:
      DriverConfiguration = -1073740651;
      goto LABEL_139;
    }
LABEL_213:
    v36 = v68;
    goto LABEL_214;
  }
LABEL_32:
  v19 = P;
  if ( P )
  {
    v37 = 0;
    if ( !v87 )
      goto LABEL_222;
    do
    {
      if ( *v19 == *(_BYTE *)(a3 + 110) )
        break;
      ++v37;
      ++v19;
    }
    while ( v37 < v87 );
    if ( v37 >= v87 )
LABEL_222:
      DriverConfiguration = -1073740764;
    if ( DriverConfiguration < 0 )
      goto LABEL_139;
  }
LABEL_33:
  if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    memset(v112, 0, 0xA0uLL);
    v38 = *(_QWORD *)(v7 + 8);
    v112[0] = &DEVPKEY_Device_ClassGuid;
    v112[2] = &Source2;
    LODWORD(v112[1]) = 13;
    v112[5] = DEVPKEY_Device_InstallFlags;
    v112[7] = &v76;
    v112[10] = DEVPKEY_Device_DriverNodeStrongName;
    v112[12] = &v94;
    LODWORD(v112[3]) = 16;
    LODWORD(v112[6]) = 7;
    LODWORD(v112[8]) = 4;
    LODWORD(v112[11]) = 18;
    HIDWORD(v112[13]) = 6;
    DriverConfiguration = PiDevCfgQueryObjectProperties(v39, v38, 1u, v8, (__int64)v112, 3u);
    if ( DriverConfiguration < 0 )
      goto LABEL_139;
    if ( SLODWORD(v112[4]) >= 0 )
      v71 = 1;
    else
      Source2 = 0LL;
    v40 = v76;
    if ( SLODWORD(v112[9]) < 0 )
      v40 = 0;
    v76 = v40;
    if ( SLODWORD(v112[14]) < 0 )
      RtlInitUnicodeString(&v94, 0LL);
  }
  if ( !v69 )
  {
    if ( (v76 & 4) == 0 )
      goto LABEL_36;
    if ( !a3 )
      goto LABEL_240;
    memset(v112, 0, 0xA0uLL);
    v41 = *(_QWORD *)(v7 + 8);
    v112[0] = &DEVPKEY_Device_DriverInfPath;
    v112[2] = &String1;
    LODWORD(v112[1]) = 18;
    HIDWORD(v112[3]) = 6;
    DriverConfiguration = PiDevCfgQueryObjectProperties(v42, v41, 1u, v8, (__int64)v112, 1u);
    if ( DriverConfiguration < 0 )
      goto LABEL_139;
    if ( SLODWORD(v112[4]) < 0 )
      RtlInitUnicodeString(&String1, 0LL);
    if ( String1.Buffer && RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)(a3 + 40), 1u) )
    {
LABEL_240:
      v43 = -1;
      v69 = -1;
    }
    else
    {
      v43 = v69;
    }
    if ( !v43 )
    {
LABEL_36:
      DriverConfiguration = PiDevCfgEnforceDevicePolicy(*(_QWORD *)v75, a2, v92);
      if ( DriverConfiguration < 0 )
        goto LABEL_139;
    }
  }
  if ( Handle )
  {
    ObjectAttributes.RootDirectory = Handle;
    String2.Buffer = L"Configuration";
    *(_DWORD *)&String2.Length = 1835034;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.ObjectName = &String2;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    DriverConfiguration = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( DriverConfiguration != -1073741772 )
    {
      if ( DriverConfiguration < 0 )
        goto LABEL_139;
      DriverConfiguration = PiDevCfgVerifyDeviceAllowed(*(_QWORD *)v75, KeyHandle);
      if ( DriverConfiguration < 0 )
        goto LABEL_139;
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v75 + 32LL) + 8LL) + 16LL) & 4) == 0
    || (int)PnpGetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              *(_QWORD *)(v7 + 8),
              1LL,
              (__int64)v8,
              0LL,
              (__int64)&DEVPKEY_Device_Reported,
              (__int64)&v77,
              (__int64)&v70,
              1,
              (__int64)&v78,
              0) >= 0
    && v77 == 17
    && v78 == 1 )
  {
    v20 = v70;
  }
  else
  {
    v20 = 0;
    v70 = 0;
  }
  if ( a3 && !v95.Buffer && !DestinationString.Buffer && !v20 && (*(_DWORD *)(*(_QWORD *)v75 + 560LL) & 0x100) == 0 )
  {
    DriverConfiguration = -1073740652;
    goto LABEL_139;
  }
  if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    if ( a3 )
    {
      if ( PnpIsNullGuid(&Source2) )
        goto LABEL_44;
      v44 = (_QWORD *)(a3 + 240);
      if ( PnpIsNullGuid((void *)(a3 + 240)) )
        goto LABEL_44;
      v45 = Source2 - *v44;
      if ( (_QWORD)Source2 == *v44 )
        v45 = *((_QWORD *)&Source2 + 1) - *(_QWORD *)(a3 + 248);
      if ( !v45 )
        goto LABEL_44;
    }
    else if ( !v71 || (*(_DWORD *)(*(_QWORD *)v75 + 560LL) & 0x100) == 0 )
    {
      CmDeleteDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(v7 + 8), 17, 0);
    }
    CmDeleteDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(v7 + 8), 18, 0);
  }
LABEL_44:
  v21 = *(_QWORD *)v75;
  if ( (int)PiDevCfgMigrateDevice(
              v75[0],
              a2,
              a3 != 0 ? a3 + 256 : 0,
              a3 != 0 ? a3 + 40 : 0,
              (__int64)&v88,
              (__int64)&v89) >= 0 )
  {
    v9 |= v88;
    v72 = v9;
    v74 = v89;
  }
  if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    PiDevCfgResetDeviceDriverSettings(
      v21,
      a2,
      (_QWORD *)((a3 + 240) & -(__int64)(a3 != 0)),
      (__int64)Handle,
      (PGUID)((unsigned __int64)&Source2 & -(__int64)(v71 != 0)));
    if ( *(_QWORD *)&PiPnpRtlCtx && (v46 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
      v47 = *(_QWORD *)(v46 + 8);
    else
      v47 = 0LL;
    RegRtlDeleteTreeInternal(v8, L"Devices", v47, 0LL);
    if ( *(_QWORD *)&PiPnpRtlCtx && (v48 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
      v49 = *(_QWORD *)(v48 + 8);
    else
      v49 = 0LL;
    RegRtlDeleteTreeInternal(v8, L"Filters", v49, 0LL);
  }
  if ( !a3 || PnpIsNullGuid((void *)(a3 + 240)) )
  {
    if ( (*(_DWORD *)a2 & 1) == 0 )
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v7 + 8),
        1,
        (__int64)v8,
        v56,
        (__int64)&DEVPKEY_Device_ClassGuid,
        0,
        0LL,
        0,
        0);
  }
  else
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v7 + 8),
                            1,
                            (__int64)v8,
                            v56,
                            (__int64)&DEVPKEY_Device_ClassGuid,
                            13,
                            a3 + 240,
                            16,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_139;
  }
  if ( v95.Buffer )
  {
    if ( v95.Length )
    {
      v22 = PiDevCfgSetObjectProperty(
              PiPnpRtlCtx,
              a2,
              *(_QWORD *)(v7 + 8),
              1,
              (__int64)v8,
              v56,
              (__int64)&DEVPKEY_Device_Service,
              18,
              (__int64)v95.Buffer,
              (unsigned int)v95.Length + 2,
              0);
      goto LABEL_53;
    }
LABEL_155:
    if ( (*(_DWORD *)a2 & 1) == 0 && (v95.Buffer && DestinationString.Buffer || !v70) )
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v7 + 8),
        1,
        (__int64)v8,
        v56,
        (__int64)&DEVPKEY_Device_Service,
        0,
        0LL,
        0,
        0);
    goto LABEL_54;
  }
  if ( !DestinationString.Buffer || !DestinationString.Length )
    goto LABEL_155;
  v22 = PiDevCfgSetObjectProperty(
          PiPnpRtlCtx,
          a2,
          *(_QWORD *)(v7 + 8),
          1,
          (__int64)v8,
          v56,
          (__int64)&DEVPKEY_Device_Service,
          18,
          (__int64)DestinationString.Buffer,
          (unsigned int)DestinationString.Length + 2,
          0);
LABEL_53:
  DriverConfiguration = v22;
  if ( v22 < 0 )
    goto LABEL_139;
LABEL_54:
  if ( v10 )
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v7 + 8),
                            1,
                            (__int64)v8,
                            v56,
                            (__int64)&DEVPKEY_Device_LowerFilters,
                            8210,
                            (__int64)v10,
                            v101.Length,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_139;
  }
  else if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v7 + 8),
      1,
      (__int64)v8,
      v56,
      (__int64)&DEVPKEY_Device_LowerFilters,
      0,
      0LL,
      0,
      0);
  }
  if ( Buffer )
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v7 + 8),
                            1,
                            (__int64)v8,
                            v56,
                            (__int64)&DEVPKEY_Device_UpperFilters,
                            8210,
                            (__int64)Buffer,
                            v102.Length,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_139;
  }
  else if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v7 + 8),
      1,
      (__int64)v8,
      v56,
      (__int64)&DEVPKEY_Device_UpperFilters,
      0,
      0LL,
      0,
      0);
  }
  if ( a3 && v83.Buffer )
  {
    DriverConfiguration = PiDevCfgBuildIndirectString(a3, &v83.Length, (__int64)&UnicodeString, &v109);
    if ( DriverConfiguration < 0 )
      goto LABEL_139;
    if ( (v9 & 0x400) == 0 || (PiDevCfgOptions & 1) != 0 )
    {
      DriverConfiguration = PiDevCfgSetObjectProperty(
                              PiPnpRtlCtx,
                              a2,
                              *(_QWORD *)(v7 + 8),
                              1,
                              (__int64)v8,
                              v56,
                              (__int64)&DEVPKEY_Device_DeviceDesc,
                              18,
                              (__int64)UnicodeString.Buffer,
                              (unsigned int)UnicodeString.Length + 2,
                              0);
      if ( DriverConfiguration < 0 )
        goto LABEL_139;
    }
    if ( v109.Buffer )
    {
      DriverConfiguration = PiDevCfgSetObjectProperty(
                              PiPnpRtlCtx,
                              a2,
                              *(_QWORD *)(v7 + 8),
                              1,
                              (__int64)v8,
                              v56,
                              (__int64)&DEVPKEY_Device_DriverDesc,
                              18,
                              (__int64)v109.Buffer,
                              (unsigned int)v109.Length + 2,
                              0);
      if ( DriverConfiguration < 0 )
        goto LABEL_139;
    }
    else if ( (*(_DWORD *)a2 & 1) == 0 )
    {
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v7 + 8),
        1,
        (__int64)v8,
        v56,
        (__int64)&DEVPKEY_Device_DriverDesc,
        0,
        0LL,
        0,
        0);
    }
    RtlFreeAnsiString(&UnicodeString);
  }
  else if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v7 + 8),
      1,
      (__int64)v8,
      v56,
      (__int64)&DEVPKEY_Device_DriverDesc,
      0,
      0LL,
      0,
      0);
    if ( a3 )
      goto LABEL_69;
    memset(v112, 0, 0xA0uLL);
    v50 = *(_QWORD *)(v7 + 8);
    v112[0] = &DEVPKEY_Device_BusReportedDeviceDesc;
    v112[2] = &v83;
    LODWORD(v112[1]) = 18;
    HIDWORD(v112[3]) = 6;
    if ( (int)PiDevCfgQueryObjectProperties(v51, v50, 1u, v8, (__int64)v112, 1u) < 0
      || SLODWORD(v112[4]) < 0
      || !v83.Buffer )
    {
LABEL_293:
      if ( (*(_DWORD *)a2 & 1) == 0 )
        PiDevCfgSetObjectProperty(
          PiPnpRtlCtx,
          a2,
          *(_QWORD *)(v7 + 8),
          1,
          (__int64)v8,
          v56,
          (__int64)&DEVPKEY_Device_Manufacturer,
          0,
          0LL,
          0,
          0);
      goto LABEL_72;
    }
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v7 + 8),
                            1,
                            (__int64)v8,
                            v56,
                            (__int64)&DEVPKEY_Device_DeviceDesc,
                            18,
                            (__int64)v83.Buffer,
                            (unsigned int)v83.Length + 2,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_139;
  }
  if ( !a3 )
    goto LABEL_293;
LABEL_69:
  if ( !v85.Buffer )
    goto LABEL_293;
  DriverConfiguration = PiDevCfgBuildIndirectString(a3, &v85.Length, (__int64)&UnicodeString, 0LL);
  if ( DriverConfiguration < 0 )
    goto LABEL_139;
  DriverConfiguration = PiDevCfgSetObjectProperty(
                          PiPnpRtlCtx,
                          a2,
                          *(_QWORD *)(v7 + 8),
                          1,
                          (__int64)v8,
                          v56,
                          (__int64)&DEVPKEY_Device_Manufacturer,
                          18,
                          (__int64)UnicodeString.Buffer,
                          (unsigned int)UnicodeString.Length + 2,
                          0);
  if ( DriverConfiguration < 0 )
    goto LABEL_139;
LABEL_72:
  if ( a3 && (v23 = *(_QWORD *)(a3 + 280)) != 0 )
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v7 + 8),
                            1,
                            (__int64)v8,
                            v56,
                            (__int64)&DEVPKEY_Device_DriverProvider,
                            18,
                            v23,
                            (unsigned int)*(unsigned __int16 *)(a3 + 272) + 2,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_139;
  }
  else if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v7 + 8),
      1,
      (__int64)v8,
      v56,
      (__int64)&DEVPKEY_Device_DriverProvider,
      0,
      0LL,
      0,
      0);
  }
  if ( a3 )
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v7 + 8),
                            1,
                            (__int64)v8,
                            v56,
                            (__int64)&DEVPKEY_Device_DriverDate,
                            16,
                            a3 + 112,
                            8,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_139;
    v57 = *(unsigned __int16 *)(a3 + 120);
    LODWORD(Guid) = *(unsigned __int16 *)(a3 + 122);
    DriverConfiguration = RtlUnicodeStringPrintf(
                            &v108,
                            L"%u.%u.%u.%u",
                            (unsigned __int16)HIWORD(*(_DWORD *)(a3 + 124)),
                            *(unsigned __int16 *)(a3 + 124),
                            Guid);
    if ( DriverConfiguration < 0 )
      goto LABEL_139;
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v7 + 8),
                            1,
                            (__int64)v8,
                            v57,
                            (__int64)&DEVPKEY_Device_DriverVersion,
                            18,
                            (__int64)v108.Buffer,
                            (unsigned int)v108.Length + 2,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_139;
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v7 + 8),
                            1,
                            (__int64)v8,
                            v58,
                            (__int64)&DEVPKEY_Device_DriverInfPath,
                            18,
                            *(_QWORD *)(a3 + 48),
                            (unsigned int)*(unsigned __int16 *)(a3 + 40) + 2,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_139;
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v7 + 8),
                            1,
                            (__int64)v8,
                            v59,
                            (__int64)&DEVPKEY_Device_DriverInfSection,
                            18,
                            *(_QWORD *)(a3 + 96),
                            (unsigned int)*(unsigned __int16 *)(a3 + 88) + 2,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_139;
    DriverConfiguration = PiDevCfgBuildDriverNodeStrongName(a3, &v85, &v83, &String2);
    if ( DriverConfiguration < 0 )
      goto LABEL_139;
    if ( v94.Buffer && !RtlCompareUnicodeString(&v94, &String2, 1u) )
      RtlFreeAnsiString(&v94);
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v7 + 8),
                            1,
                            (__int64)v8,
                            v60,
                            (__int64)DEVPKEY_Device_DriverNodeStrongName,
                            18,
                            (__int64)String2.Buffer,
                            (unsigned int)String2.Length + 2,
                            0);
    RtlFreeAnsiString(&String2);
    if ( DriverConfiguration < 0 )
      goto LABEL_139;
  }
  else if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v7 + 8),
      1,
      (__int64)v8,
      v56,
      (__int64)&DEVPKEY_Device_DriverDate,
      0,
      0LL,
      0,
      0);
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v7 + 8),
      1,
      (__int64)v8,
      v63,
      (__int64)&DEVPKEY_Device_DriverVersion,
      0,
      0LL,
      0,
      0);
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v7 + 8),
      1,
      (__int64)v8,
      v64,
      (__int64)&DEVPKEY_Device_DriverInfPath,
      0,
      0LL,
      0,
      0);
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v7 + 8),
      1,
      (__int64)v8,
      v65,
      (__int64)&DEVPKEY_Device_DriverInfSection,
      0,
      0LL,
      0,
      0);
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v7 + 8),
      1,
      (__int64)v8,
      v66,
      (__int64)DEVPKEY_Device_DriverNodeStrongName,
      0,
      0LL,
      0,
      0);
  }
  if ( !v94.Buffer || (v76 & 8) != 0 || (*(_DWORD *)(*(_QWORD *)v75 + 396LL) & 0x6000) != 0 )
  {
    if ( (*(_DWORD *)a2 & 1) == 0 )
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v7 + 8),
        1,
        (__int64)v8,
        v56,
        (__int64)DEVPKEY_Device_RollbackDriverNode,
        0,
        0LL,
        0,
        0);
  }
  else
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v7 + 8),
                            1,
                            (__int64)v8,
                            v56,
                            (__int64)DEVPKEY_Device_RollbackDriverNode,
                            18,
                            (__int64)v94.Buffer,
                            (unsigned int)v94.Length + 2,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_139;
  }
  if ( v103.Buffer )
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v7 + 8),
                            1,
                            (__int64)v8,
                            v56,
                            (__int64)DEVPKEY_Device_DriverIncludedInfs,
                            8210,
                            (__int64)v103.Buffer,
                            v103.Length,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_139;
  }
  else if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v7 + 8),
      1,
      (__int64)v8,
      v56,
      (__int64)DEVPKEY_Device_DriverIncludedInfs,
      0,
      0LL,
      0,
      0);
  }
  if ( v104.Buffer )
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v7 + 8),
                            1,
                            (__int64)v8,
                            v56,
                            (__int64)DEVPKEY_Device_DriverIncludedConfigs,
                            8210,
                            (__int64)v104.Buffer,
                            v104.Length,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_139;
  }
  else if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v7 + 8),
      1,
      (__int64)v8,
      v56,
      (__int64)DEVPKEY_Device_DriverIncludedConfigs,
      0,
      0LL,
      0,
      0);
  }
  if ( v106.Buffer )
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v7 + 8),
                            1,
                            (__int64)v8,
                            v56,
                            (__int64)DEVPKEY_Device_DriverExtendedInfs,
                            8210,
                            (__int64)v106.Buffer,
                            v106.Length,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_139;
  }
  else if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v7 + 8),
      1,
      (__int64)v8,
      v56,
      (__int64)DEVPKEY_Device_DriverExtendedInfs,
      0,
      0LL,
      0,
      0);
  }
  if ( !a3 || *(_DWORD *)(a3 + 108) == -1 )
  {
    if ( (*(_DWORD *)a2 & 1) == 0 )
    {
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v7 + 8),
        1,
        (__int64)v8,
        v56,
        (__int64)&DEVPKEY_Device_MatchingDeviceId,
        0,
        0LL,
        0,
        0);
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v7 + 8),
        1,
        (__int64)v8,
        v67,
        (__int64)&DEVPKEY_Device_DriverRank,
        0,
        0LL,
        0,
        0);
    }
  }
  else
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v7 + 8),
                            1,
                            (__int64)v8,
                            v56,
                            (__int64)&DEVPKEY_Device_MatchingDeviceId,
                            18,
                            *(_QWORD *)(a3 + 80),
                            (unsigned int)*(unsigned __int16 *)(a3 + 72) + 2,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_139;
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v7 + 8),
                            1,
                            (__int64)v8,
                            v61,
                            (__int64)&DEVPKEY_Device_DriverRank,
                            7,
                            a3 + 108,
                            4,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_139;
  }
  if ( v76 )
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v7 + 8),
      1,
      (__int64)v8,
      v56,
      (__int64)DEVPKEY_Device_InstallFlags,
      0,
      0LL,
      0,
      0);
  if ( a3 )
  {
    v24 = v90;
    *v90 = v9;
    if ( (*(_DWORD *)(a3 + 184) & 8) != 0 && (PiDevCfgFlags & 2) != 0 )
      *v24 = v9 | 0x400;
    DriverConfiguration = PiDevCfgConfigureDeviceDriver(v75[0], a2, a3, (unsigned int)&v72, (__int64)&v74);
    if ( DriverConfiguration < 0 )
      goto LABEL_139;
    *v24 |= v72;
    *v91 |= v74;
    for ( i = *(__int64 **)(a3 + 208); i != (__int64 *)(a3 + 208); i = (__int64 *)*i )
    {
      if ( (i[23] & 1) != 0 )
      {
        DriverConfiguration = PiDevCfgConfigureDeviceDriver(v75[0], a2, (_DWORD)i, (unsigned int)&v72, (__int64)&v74);
        if ( DriverConfiguration < 0 )
          goto LABEL_139;
        *v90 |= v72;
        *v91 |= v74;
      }
    }
    DriverConfiguration = PiDevCfgConfigureDeviceLocation(*(_QWORD *)v75, a2, &v72, &v74);
    if ( DriverConfiguration < 0 )
      goto LABEL_139;
    v26 = v90;
    v27 = v91;
    *v90 |= v72;
    *v27 |= v74;
  }
  else
  {
    v28 = *(_QWORD *)v75;
    v26 = v90;
    if ( (*(_DWORD *)(*(_QWORD *)v75 + 560LL) & 0x100) != 0 )
    {
      v27 = v91;
      *v90 = 0;
      goto LABEL_110;
    }
    *v90 = 64;
    PnpDeleteDeviceInterfaces(v7);
    v27 = v91;
  }
  v28 = *(_QWORD *)v75;
LABEL_110:
  if ( v80 && !InitIsWinPEMode && PipIsDevNodeDNStarted(v28) )
    *v27 |= 0x10u;
  if ( (v76 & 2) != 0 )
    *v27 |= 0x20u;
  if ( v71 )
    *v27 |= 1u;
  if ( KeyHandle )
  {
    DriverConfiguration = PiDevCfgConfigureDeviceKeys(v28, a2, (_DWORD)KeyHandle, -1, (__int64)&v72, (__int64)&v74);
    if ( DriverConfiguration < 0 )
      goto LABEL_139;
    *v26 |= v72;
    *v27 |= v74;
  }
  if ( (*v27 & 2) == 0 && v92 && Handle )
  {
    DriverConfiguration = PiDevCfgGetDeviceClassConfigFlags(v92, Handle, &v72);
    if ( DriverConfiguration < 0 )
      goto LABEL_139;
    *v26 |= v72;
  }
  if ( a3 )
    v29 = *(UNICODE_STRING *)(a3 + 392);
  else
    v29 = *(UNICODE_STRING *)&PiDevCfgEmptyString;
  v30 = *(_QWORD *)(v7 + 8);
  String2 = v29;
  DriverConfiguration = PiDevCfgSetObjectProperty(
                          PiPnpRtlCtx,
                          a2,
                          v30,
                          1,
                          (__int64)v8,
                          v56,
                          (__int64)&DEVPKEY_Device_ConfigurationId,
                          18,
                          (__int64)v29.Buffer,
                          (unsigned int)v29.Length + 2,
                          0);
  if ( DriverConfiguration >= 0 )
  {
    if ( v107.Buffer )
    {
      DriverConfiguration = PiDevCfgSetObjectProperty(
                              PiPnpRtlCtx,
                              a2,
                              *(_QWORD *)(v7 + 8),
                              1,
                              (__int64)v8,
                              v62,
                              (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
                              8210,
                              (__int64)v107.Buffer,
                              v107.Length,
                              0);
      if ( DriverConfiguration < 0 )
        goto LABEL_139;
    }
    else if ( (*(_DWORD *)a2 & 1) == 0 )
    {
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v7 + 8),
        1,
        (__int64)v8,
        v62,
        (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
        0,
        0LL,
        0,
        0);
    }
    if ( a3 && (v31 = *(_QWORD *)(a3 + 136)) != 0 )
    {
      DriverConfiguration = PiDevCfgSetObjectProperty(
                              PiPnpRtlCtx,
                              a2,
                              *(_QWORD *)(v7 + 8),
                              1,
                              (__int64)v8,
                              v62,
                              (__int64)DEVPKEY_Device_MatchingTargetComputerId,
                              18,
                              v31,
                              (unsigned int)*(unsigned __int16 *)(a3 + 128) + 2,
                              0);
      if ( DriverConfiguration < 0 )
        goto LABEL_139;
    }
    else if ( (*(_DWORD *)a2 & 1) == 0 )
    {
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v7 + 8),
        1,
        (__int64)v8,
        v62,
        (__int64)DEVPKEY_Device_MatchingTargetComputerId,
        0,
        0LL,
        0,
        0);
    }
    if ( (v79 & 0x80u) != 0 )
    {
      v52 = *(_QWORD *)(v7 + 8);
      v73[0] = -1;
      DriverConfiguration = PiDevCfgSetObjectProperty(
                              PiPnpRtlCtx,
                              a2,
                              v52,
                              1,
                              (__int64)v8,
                              v62,
                              (__int64)DEVPKEY_Device_DriverInGroup,
                              17,
                              (__int64)v73,
                              1,
                              0);
      if ( DriverConfiguration < 0 )
        goto LABEL_139;
    }
    else if ( (*(_DWORD *)a2 & 1) == 0 )
    {
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v7 + 8),
        1,
        (__int64)v8,
        v62,
        (__int64)DEVPKEY_Device_DriverInGroup,
        0,
        0LL,
        0,
        0);
    }
    if ( v95.Buffer && v95.Length )
      PipHardwareConfigActivateService(v95.Buffer);
    v32 = SourceString;
    if ( SourceString )
    {
      while ( *v32 )
      {
        PipHardwareConfigActivateService(v32);
        if ( !PnpBootMode && (*(_DWORD *)(a3 + 184) & 0x10) != 0 )
          PiDevCfgMakeServiceBootStart(v32);
        v53 = -1LL;
        do
          ++v53;
        while ( v32[v53] );
        v32 += v53 + 1;
      }
    }
    v33 = Buffer;
    if ( Buffer )
    {
      while ( *v33 )
      {
        PipHardwareConfigActivateService(v33);
        if ( !PnpBootMode && (*(_DWORD *)(a3 + 184) & 0x10) != 0 )
          PiDevCfgMakeServiceBootStart(v33);
        v54 = -1LL;
        do
          ++v54;
        while ( v33[v54] );
        v33 += v54 + 1;
      }
    }
  }
LABEL_139:
  RtlFreeAnsiString(&v83);
  RtlFreeAnsiString(&v85);
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&v95);
  RtlFreeAnsiString(&v101);
  RtlFreeAnsiString(&v102);
  RtlFreeAnsiString(&v103);
  RtlFreeAnsiString(&v104);
  RtlFreeAnsiString(&v106);
  RtlFreeAnsiString(&v107);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&String1);
  RtlFreeAnsiString(&v94);
  if ( v108.Buffer )
    ExFreePoolWithTag(v108.Buffer, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)DriverConfiguration;
}
