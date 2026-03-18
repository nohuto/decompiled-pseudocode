/*
 * XREFs of PiDevCfgCheckDeviceNeedsUpdate @ 0x1408A0AFC
 * Callers:
 *     PiDevCfgProcessDeviceCallback @ 0x1407A8AE0 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgInitDeviceCallback @ 0x1408A2520 (PiDevCfgInitDeviceCallback.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x1408A6458 (PpDevCfgCheckDeviceNeedsUpdate.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     swscanf_s @ 0x1403D3D30 (swscanf_s.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     RtlEqualUnicodeString @ 0x140609D30 (RtlEqualUnicodeString.c)
 *     _PnpOpenObjectRegKey @ 0x1406A97E4 (_PnpOpenObjectRegKey.c)
 *     _CmGetDeviceRegProp @ 0x1406AFC70 (_CmGetDeviceRegProp.c)
 *     _CmIsRootEnumeratedDevice @ 0x1407109B0 (_CmIsRootEnumeratedDevice.c)
 *     PiDevCfgFindDeviceDriver @ 0x140721430 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgGetDriverPackageId @ 0x140721910 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryObjectProperties @ 0x140722564 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgFreeDriverNode @ 0x140735388 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x140757600 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1408A620C (PiDevCfgSplitDriverConfigurationId.c)
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
  __int64 v36; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v38; // [rsp+50h] [rbp-B0h] BYREF
  int v39; // [rsp+60h] [rbp-A0h] BYREF
  int v40; // [rsp+64h] [rbp-9Ch] BYREF
  LARGE_INTEGER Time; // [rsp+68h] [rbp-98h] BYREF
  int v42; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v45; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING v46; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING v48; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int *v49; // [rsp+D0h] [rbp-30h]
  _QWORD v50[20]; // [rsp+E0h] [rbp-20h] BYREF

  v49 = a2;
  v2 = a2;
  *a2 = 0;
  v40 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v42 = 1;
  Time.QuadPart = 0LL;
  v4 = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v37 = 0LL;
  *(_QWORD *)&v45.Length = 0LL;
  v45.Buffer = 0LL;
  v38 = 0LL;
  *(_QWORD *)&v46.Length = 0LL;
  v46.Buffer = 0LL;
  Handle = 0LL;
  v36 = 0LL;
  v39 = 0;
  *(_QWORD *)&v48.Length = 0LL;
  v48.Buffer = 0LL;
  DeviceDriver = PiDevCfgFindDeviceDriver(a1, 0LL, &v36);
  if ( (int)(DeviceDriver + 0x80000000) < 0 || DeviceDriver == -1073740656 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    v7 = *(_QWORD *)(a1 + 8);
    v39 = 4;
    if ( (int)CmGetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v7, v6, 11, (__int64)&v42, (__int64)&v40, (__int64)&v39, 0) < 0
      || v42 != 4
      || v39 != 4 )
    {
      v40 = 0;
    }
    memset(v50, 0, sizeof(v50));
    v8 = *(void **)(a1 + 16);
    v50[0] = &DEVPKEY_Device_DriverInfPath;
    v50[2] = &DestinationString;
    LODWORD(v50[1]) = 18;
    v50[5] = &DEVPKEY_Device_DriverDate;
    HIDWORD(v50[3]) = 6;
    v50[7] = &Time;
    v50[10] = &DEVPKEY_Device_DriverVersion;
    v50[12] = &UnicodeString;
    v50[15] = &DEVPKEY_Device_ExtendedConfigurationIds;
    v50[17] = &v45;
    HIDWORD(v50[13]) = 6;
    HIDWORD(v50[18]) = 6;
    v9 = *(_QWORD *)(a1 + 8);
    LODWORD(v50[6]) = 16;
    LODWORD(v50[8]) = 8;
    LODWORD(v50[11]) = 18;
    LODWORD(v50[16]) = 8210;
    DeviceDriver = PiDevCfgQueryObjectProperties(18LL, v9, 1u, v8, (__int64)v50, 4u);
    if ( DeviceDriver >= 0 )
    {
      if ( SLODWORD(v50[4]) < 0 )
        RtlInitUnicodeString(&DestinationString, 0LL);
      v10 = Time;
      if ( SLODWORD(v50[9]) < 0 )
        v10.QuadPart = 0LL;
      Time = v10;
      if ( SLODWORD(v50[14]) < 0 )
        RtlInitUnicodeString(&UnicodeString, 0LL);
      if ( SLODWORD(v50[19]) < 0 )
        RtlInitUnicodeString(&v45, 0LL);
      if ( !UnicodeString.Buffer
        || swscanf_s(
             UnicodeString.Buffer,
             L"%hu.%hu.%hu.%hu",
             (char *)&v37 + 6,
             (char *)&v37 + 4,
             (char *)&v37 + 2,
             &v37) != 4 )
      {
        v37 = 0LL;
      }
      if ( !CmIsRootEnumeratedDevice(*(PCWSTR *)(a1 + 8)) )
        goto LABEL_33;
      memset(v50, 0, sizeof(v50));
      v11 = *(void **)(a1 + 16);
      v12 = *(_QWORD *)(a1 + 8);
      v50[0] = DEVPKEY_Device_Owners;
      v50[2] = &v46;
      LODWORD(v50[1]) = 8210;
      HIDWORD(v50[3]) = 6;
      DeviceDriver = PiDevCfgQueryObjectProperties(1LL, v12, 1u, v11, (__int64)v50, 1u);
      if ( DeviceDriver < 0 )
        goto LABEL_90;
      if ( SLODWORD(v50[4]) < 0 )
        goto LABEL_33;
      Buffer = v46.Buffer;
      if ( !v46.Buffer || v46.Length <= 2u )
        goto LABEL_33;
      if ( !*v46.Buffer )
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
        v15 = v36;
      }
      else
      {
LABEL_31:
        v15 = v36;
        if ( !v36 )
          v4 = PnpBootMode != 0 ? 0x40000 : 2;
      }
      if ( (v40 & 0x40) == 0 && (v16 = DestinationString.Buffer) != 0LL )
      {
        if ( v15 && RtlEqualUnicodeString((PCUNICODE_STRING)(v15 + 40), &DestinationString, 1u) )
        {
          if ( *(_QWORD *)(v15 + 112) != Time.QuadPart || *(_QWORD *)(v15 + 120) != v37 )
            goto LABEL_76;
          v17 = v45.Buffer;
          v18 = (_QWORD *)(v15 + 208);
          if ( v45.Buffer )
          {
            if ( (_QWORD *)*v18 != v18 )
            {
              v19 = &v38;
              *((_QWORD *)&v38 + 1) = &v38;
              *(_QWORD *)&v38 = &v38;
              if ( !*v45.Buffer )
                goto LABEL_61;
              while ( *(_QWORD *)(v15 + 208) != v15 + 208 )
              {
                RtlFreeAnsiString(&DestinationString);
                v20 = PiDevCfgSplitDriverConfigurationId(v17, &Time, (__int64)&v37);
                v15 = v36;
                if ( v20 < 0 )
                  break;
                v21 = (__int64 *)(v36 + 208);
                v22 = *(__int64 **)(v36 + 208);
                if ( v22 == (__int64 *)(v36 + 208) )
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
                if ( !v23 || v23[14] != Time.QuadPart || v23[15] != v37 )
                  break;
                v24 = (__int64 *)*v23;
                if ( *(__int64 **)(*v23 + 8) != v23
                  || (v25 = (__int64 **)v23[1], *v25 != v23)
                  || (*v25 = v24,
                      v24[1] = (__int64)v25,
                      v26 = (__int64 **)*((_QWORD *)&v38 + 1),
                      **((__int128 ***)&v38 + 1) != &v38) )
                {
LABEL_68:
                  __fastfail(3u);
                }
                v23[1] = *((_QWORD *)&v38 + 1);
                *v23 = (__int64)&v38;
                *v26 = v23;
                v27 = -1LL;
                *((_QWORD *)&v38 + 1) = v23;
                do
                  ++v27;
                while ( v17[v27] );
                v15 = v36;
                v17 += v27 + 1;
                if ( !*v17 )
                {
                  v19 = (__int128 *)v38;
                  goto LABEL_61;
                }
              }
              v19 = (__int128 *)v38;
              if ( !*v17 )
              {
LABEL_61:
                if ( *(_QWORD *)(v15 + 208) == v15 + 208 )
                  goto LABEL_63;
              }
              v4 |= 0x20u;
LABEL_63:
              while ( v19 != &v38 )
              {
                if ( *((__int128 **)v19 + 1) != &v38 )
                  goto LABEL_68;
                v28 = *(_OWORD ****)v19;
                if ( *(__int128 **)(*(_QWORD *)v19 + 8LL) != v19 )
                  goto LABEL_68;
                *(_QWORD *)&v38 = *(_QWORD *)v19;
                v28[1] = (_OWORD **)&v38;
                v29 = v36 + 208;
                v30 = *(__int128 ***)(v36 + 216);
                if ( *v30 != (__int128 *)(v36 + 208) )
                  goto LABEL_68;
                *(_QWORD *)v19 = v29;
                *((_QWORD *)v19 + 1) = v30;
                *v30 = v19;
                *(_QWORD *)(v29 + 8) = v19;
                v19 = (__int128 *)v38;
                v15 = v36;
              }
              v2 = v49;
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
          DriverPackageId = PiDevCfgGetDriverPackageId((__int64)v16, (__int64)&v48);
          v15 = v36;
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
          v32 = v36;
          v33 = (_QWORD *)(v36 + 208);
          v34 = *(_QWORD **)(v36 + 208);
          while ( v34 != v33 )
          {
            DeviceDriver = PiDevCfgQueryDriverConfiguration(v32);
            if ( DeviceDriver < 0 )
              break;
            v32 = v36;
            v34 = (_QWORD *)*v34;
            v33 = (_QWORD *)(v36 + 208);
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
  RtlFreeAnsiString(&v45);
  RtlFreeAnsiString(&v48);
  RtlFreeAnsiString(&v46);
  if ( v36 )
    PiDevCfgFreeDriverNode(v36);
  return (unsigned int)DeviceDriver;
}
