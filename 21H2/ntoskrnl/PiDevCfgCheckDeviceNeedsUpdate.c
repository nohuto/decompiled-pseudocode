/*
 * XREFs of PiDevCfgCheckDeviceNeedsUpdate @ 0x1408A507C
 * Callers:
 *     PiDevCfgProcessDeviceCallback @ 0x1407BE4A0 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgInitDeviceCallback @ 0x1408A6AA0 (PiDevCfgInitDeviceCallback.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x1408AA9D8 (PpDevCfgCheckDeviceNeedsUpdate.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     swscanf_s @ 0x1403D82E0 (swscanf_s.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     memset @ 0x140414300 (memset.c)
 *     _PnpOpenObjectRegKey @ 0x14062C674 (_PnpOpenObjectRegKey.c)
 *     _CmIsRootEnumeratedDevice @ 0x14062ECB8 (_CmIsRootEnumeratedDevice.c)
 *     _CmGetDeviceRegProp @ 0x14063627C (_CmGetDeviceRegProp.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 *     PiDevCfgFreeDriverNode @ 0x14073A5A4 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgFindDeviceDriver @ 0x14073BEC8 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgGetDriverPackageId @ 0x14073C3A8 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryObjectProperties @ 0x14073D004 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x14076C014 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1408AA78C (PiDevCfgSplitDriverConfigurationId.c)
 */

__int64 __fastcall PiDevCfgCheckDeviceNeedsUpdate(__int64 a1, unsigned int *a2)
{
  unsigned int *v2; // r12
  unsigned int v4; // ebx
  int DeviceDriver; // r14d
  __int64 v6; // r8
  __int64 v7; // rdx
  void *v8; // r9
  __int64 v9; // rdx
  LARGE_INTEGER v10; // rax
  void *v11; // r9
  __int64 v12; // rdx
  wchar_t *Buffer; // rdi
  __int64 v14; // rax
  __int64 v15; // rdi
  wchar_t *v16; // rsi
  wchar_t *v17; // r15
  _QWORD *v18; // rax
  __int128 *v19; // rcx
  int v20; // eax
  __int64 *v21; // r13
  __int64 *v22; // r12
  __int64 *v23; // rsi
  __int64 *v24; // rax
  __int64 **v25; // rcx
  __int64 **v26; // rax
  __int64 v27; // rax
  _OWORD ***v28; // rax
  __int64 v29; // rax
  __int128 **v30; // rdx
  int DriverPackageId; // eax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  _QWORD *v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v38; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v39; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v40; // [rsp+50h] [rbp-B0h] BYREF
  int v41; // [rsp+60h] [rbp-A0h] BYREF
  int v42; // [rsp+64h] [rbp-9Ch] BYREF
  LARGE_INTEGER Time; // [rsp+68h] [rbp-98h] BYREF
  int v44; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v47; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING v48; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING v50; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int *v51; // [rsp+D0h] [rbp-30h]
  _QWORD v52[20]; // [rsp+E0h] [rbp-20h] BYREF

  v51 = a2;
  v2 = a2;
  *a2 = 0;
  v42 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v44 = 1;
  Time.QuadPart = 0LL;
  v4 = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v39 = 0LL;
  *(_QWORD *)&v47.Length = 0LL;
  v47.Buffer = 0LL;
  v40 = 0LL;
  *(_QWORD *)&v48.Length = 0LL;
  v48.Buffer = 0LL;
  Handle = 0LL;
  v38 = 0LL;
  v41 = 0;
  *(_QWORD *)&v50.Length = 0LL;
  v50.Buffer = 0LL;
  DeviceDriver = PiDevCfgFindDeviceDriver(a1, 0LL, &v38);
  if ( (int)(DeviceDriver + 0x80000000) < 0 || DeviceDriver == -1073740656 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    v7 = *(_QWORD *)(a1 + 8);
    v41 = 4;
    if ( (int)CmGetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v7, v6, 11, (__int64)&v44, (__int64)&v42, (__int64)&v41, 0) < 0
      || v44 != 4
      || v41 != 4 )
    {
      v42 = 0;
    }
    memset(v52, 0, sizeof(v52));
    v8 = *(void **)(a1 + 16);
    v52[0] = &DEVPKEY_Device_DriverInfPath;
    v52[2] = &DestinationString;
    LODWORD(v52[1]) = 18;
    v52[5] = &DEVPKEY_Device_DriverDate;
    HIDWORD(v52[3]) = 6;
    v52[7] = &Time;
    v52[10] = &DEVPKEY_Device_DriverVersion;
    v52[12] = &UnicodeString;
    v52[15] = &DEVPKEY_Device_ExtendedConfigurationIds;
    v52[17] = &v47;
    HIDWORD(v52[13]) = 6;
    HIDWORD(v52[18]) = 6;
    v9 = *(_QWORD *)(a1 + 8);
    LODWORD(v52[6]) = 16;
    LODWORD(v52[8]) = 8;
    LODWORD(v52[11]) = 18;
    LODWORD(v52[16]) = 8210;
    DeviceDriver = PiDevCfgQueryObjectProperties(18LL, v9, 1u, v8, (__int64)v52, 4u);
    if ( DeviceDriver >= 0 )
    {
      if ( SLODWORD(v52[4]) < 0 )
        RtlInitUnicodeString(&DestinationString, 0LL);
      v10 = Time;
      if ( SLODWORD(v52[9]) < 0 )
        v10.QuadPart = 0LL;
      Time = v10;
      if ( SLODWORD(v52[14]) < 0 )
        RtlInitUnicodeString(&UnicodeString, 0LL);
      if ( SLODWORD(v52[19]) < 0 )
        RtlInitUnicodeString(&v47, 0LL);
      if ( !UnicodeString.Buffer
        || swscanf_s(
             UnicodeString.Buffer,
             L"%hu.%hu.%hu.%hu",
             (char *)&v39 + 6,
             (char *)&v39 + 4,
             (char *)&v39 + 2,
             &v39) != 4 )
      {
        v39 = 0LL;
      }
      if ( !CmIsRootEnumeratedDevice(*(PCWSTR *)(a1 + 8)) )
        goto LABEL_33;
      memset(v52, 0, sizeof(v52));
      v11 = *(void **)(a1 + 16);
      v12 = *(_QWORD *)(a1 + 8);
      v52[0] = DEVPKEY_Device_Owners;
      v52[2] = &v48;
      LODWORD(v52[1]) = 8210;
      HIDWORD(v52[3]) = 6;
      DeviceDriver = PiDevCfgQueryObjectProperties(1LL, v12, 1u, v11, (__int64)v52, 1u);
      if ( DeviceDriver < 0 )
        goto LABEL_90;
      if ( SLODWORD(v52[4]) < 0 )
        goto LABEL_33;
      Buffer = v48.Buffer;
      if ( !v48.Buffer || v48.Length <= 2u )
        goto LABEL_33;
      if ( !*v48.Buffer )
        goto LABEL_31;
      while ( 1 )
      {
        DeviceDriver = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)Buffer, 9u, 131097, 0, (__int64)&Handle);
        if ( DeviceDriver >= 0 )
          break;
        DeviceDriver = 0;
        v14 = -1LL;
        do
          ++v14;
        while ( Buffer[v14] );
        Buffer += v14 + 1;
        if ( !*Buffer )
          goto LABEL_31;
      }
      ZwClose(Handle);
      if ( *Buffer )
      {
LABEL_33:
        v15 = v38;
      }
      else
      {
LABEL_31:
        v15 = v38;
        if ( !v38 )
          v4 = PnpBootMode != 0 ? 0x40000 : 2;
      }
      if ( (v42 & 0x40) == 0 && (v16 = DestinationString.Buffer) != 0LL )
      {
        if ( v15 && RtlEqualUnicodeString((PCUNICODE_STRING)(v15 + 40), &DestinationString, 1u) )
        {
          if ( *(_QWORD *)(v15 + 112) != Time.QuadPart || *(_QWORD *)(v15 + 120) != v39 )
            goto LABEL_76;
          v17 = v47.Buffer;
          v18 = (_QWORD *)(v15 + 208);
          if ( v47.Buffer )
          {
            if ( (_QWORD *)*v18 != v18 )
            {
              v19 = &v40;
              *((_QWORD *)&v40 + 1) = &v40;
              *(_QWORD *)&v40 = &v40;
              if ( !*v47.Buffer )
                goto LABEL_61;
              while ( *(_QWORD *)(v15 + 208) != v15 + 208 )
              {
                RtlFreeAnsiString(&DestinationString);
                v20 = PiDevCfgSplitDriverConfigurationId(v17, &Time, (__int64)&v39);
                v15 = v38;
                if ( v20 < 0 )
                  break;
                v21 = (__int64 *)(v38 + 208);
                v22 = *(__int64 **)(v38 + 208);
                if ( v22 == (__int64 *)(v38 + 208) )
                  break;
                do
                {
                  v23 = v22;
                  if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v22 + 5), &DestinationString, 1u) )
                    break;
                  v22 = (__int64 *)*v22;
                  v23 = 0LL;
                }
                while ( v22 != v21 );
                if ( !v23 || v23[14] != Time.QuadPart || v23[15] != v39 )
                  break;
                v24 = (__int64 *)*v23;
                if ( *(__int64 **)(*v23 + 8) != v23
                  || (v25 = (__int64 **)v23[1], *v25 != v23)
                  || (*v25 = v24,
                      v24[1] = (__int64)v25,
                      v26 = (__int64 **)*((_QWORD *)&v40 + 1),
                      **((__int128 ***)&v40 + 1) != &v40) )
                {
LABEL_68:
                  __fastfail(3u);
                }
                v23[1] = *((_QWORD *)&v40 + 1);
                *v23 = (__int64)&v40;
                *v26 = v23;
                v27 = -1LL;
                *((_QWORD *)&v40 + 1) = v23;
                do
                  ++v27;
                while ( v17[v27] );
                v15 = v38;
                v17 += v27 + 1;
                if ( !*v17 )
                {
                  v19 = (__int128 *)v40;
                  goto LABEL_61;
                }
              }
              v19 = (__int128 *)v40;
              if ( !*v17 )
              {
LABEL_61:
                if ( *(_QWORD *)(v15 + 208) == v15 + 208 )
                  goto LABEL_63;
              }
              v4 |= 0x20u;
LABEL_63:
              while ( v19 != &v40 )
              {
                if ( *((__int128 **)v19 + 1) != &v40 )
                  goto LABEL_68;
                v28 = *(_OWORD ****)v19;
                if ( *(__int128 **)(*(_QWORD *)v19 + 8LL) != v19 )
                  goto LABEL_68;
                *(_QWORD *)&v40 = *(_QWORD *)v19;
                v28[1] = (_OWORD **)&v40;
                v29 = v38 + 208;
                v30 = *(__int128 ***)(v38 + 216);
                if ( *v30 != (__int128 *)(v38 + 208) )
                  goto LABEL_68;
                *(_QWORD *)v19 = v29;
                *((_QWORD *)v19 + 1) = v30;
                *v30 = v19;
                *(_QWORD *)(v29 + 8) = v19;
                v19 = (__int128 *)v40;
                v15 = v38;
              }
              v2 = v51;
              goto LABEL_78;
            }
          }
          else if ( (_QWORD *)*v18 == v18 )
          {
            if ( !PnpBootMode )
            {
LABEL_89:
              *v2 = v4;
              goto LABEL_90;
            }
            v4 |= 0x40000u;
            goto LABEL_78;
          }
LABEL_76:
          v4 |= 0x20u;
          goto LABEL_78;
        }
        if ( !PnpBootMode )
          goto LABEL_76;
        if ( (PiDevCfgFlags & 2) == 0 )
          goto LABEL_76;
        v4 |= 0x40000u;
        if ( v15 )
        {
          DriverPackageId = PiDevCfgGetDriverPackageId((__int64)v16, (__int64)&v50);
          v15 = v38;
          if ( DriverPackageId < 0 )
            goto LABEL_76;
        }
      }
      else if ( v15 )
      {
        goto LABEL_76;
      }
LABEL_78:
      if ( PnpBootMode && v15 && (v4 & 0x20) != 0 )
      {
        DeviceDriver = PiDevCfgQueryDriverConfiguration(v15);
        if ( DeviceDriver >= 0 )
        {
          v32 = v38;
          v33 = (_QWORD *)(v38 + 208);
          v34 = *(_QWORD **)(v38 + 208);
          while ( v34 != v33 )
          {
            DeviceDriver = PiDevCfgQueryDriverConfiguration(v32);
            if ( DeviceDriver < 0 )
              break;
            v32 = v38;
            v34 = (_QWORD *)*v34;
            v33 = (_QWORD *)(v38 + 208);
          }
        }
        if ( DeviceDriver == -1073740653 )
        {
          DeviceDriver = 0;
          v4 = v4 & 0xFFFBFFDF | 0x40000;
        }
        else if ( DeviceDriver < 0 )
        {
          goto LABEL_90;
        }
      }
      goto LABEL_89;
    }
  }
LABEL_90:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v47);
  RtlFreeAnsiString(&v50);
  RtlFreeAnsiString(&v48);
  if ( v38 )
    PiDevCfgFreeDriverNode(v38, v35, v36);
  return (unsigned int)DeviceDriver;
}
