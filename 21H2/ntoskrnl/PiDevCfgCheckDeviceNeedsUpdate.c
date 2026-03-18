/*
 * XREFs of PiDevCfgCheckDeviceNeedsUpdate @ 0x14094AA64
 * Callers:
 *     PiDevCfgProcessDeviceCallback @ 0x14084F060 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgInitDeviceCallback @ 0x14094C2D0 (PiDevCfgInitDeviceCallback.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x14094E998 (PpDevCfgCheckDeviceNeedsUpdate.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     swscanf_s @ 0x1403E75B0 (swscanf_s.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     PiDevCfgFindDeviceDriver @ 0x1407449E0 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x140744E30 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgGetDriverPackageId @ 0x140745620 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryObjectProperties @ 0x140746CCC (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgFreeDriverNode @ 0x1407474E4 (PiDevCfgFreeDriverNode.c)
 *     _CmIsRootEnumeratedDevice @ 0x140778D60 (_CmIsRootEnumeratedDevice.c)
 *     _PnpOpenObjectRegKey @ 0x14077C924 (_PnpOpenObjectRegKey.c)
 *     _CmGetDeviceRegProp @ 0x14077CD90 (_CmGetDeviceRegProp.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x14094E74C (PiDevCfgSplitDriverConfigurationId.c)
 */

__int64 __fastcall PiDevCfgCheckDeviceNeedsUpdate(__int64 a1, unsigned int *a2)
{
  unsigned int v4; // ebx
  int DeviceDriver; // edi
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rdx
  LARGE_INTEGER v10; // rax
  __int64 v11; // r9
  __int64 v12; // rdx
  wchar_t *Buffer; // rsi
  __int64 v14; // rax
  char *v15; // rcx
  int v16; // r8d
  BOOLEAN v17; // al
  wchar_t *v18; // r14
  _QWORD *v19; // rax
  __int128 *v20; // rdx
  int v21; // eax
  _QWORD *v22; // r15
  _QWORD *v23; // rsi
  BOOLEAN v24; // al
  __int64 v25; // rax
  _QWORD *v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rax
  _OWORD ***v29; // rax
  char *v30; // rax
  PVOID *v31; // rcx
  int DriverPackageId; // eax
  PVOID v33; // rcx
  _QWORD *v34; // rsi
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v38; // [rsp+50h] [rbp-B0h] BYREF
  int v39; // [rsp+60h] [rbp-A0h] BYREF
  int v40; // [rsp+64h] [rbp-9Ch] BYREF
  LARGE_INTEGER Time; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  int v43; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v45; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING v46; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING v48; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v49[20]; // [rsp+D0h] [rbp-30h] BYREF

  v43 = 1;
  *a2 = 0;
  v40 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
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
  P = 0LL;
  v39 = 0;
  *(_QWORD *)&v48.Length = 0LL;
  v48.Buffer = 0LL;
  DeviceDriver = PiDevCfgFindDeviceDriver(a1, 0LL, &P);
  if ( (int)(DeviceDriver + 0x80000000) < 0 || DeviceDriver == -1073740656 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    v7 = *(_QWORD *)(a1 + 8);
    v39 = 4;
    if ( (int)CmGetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v7, v6, 11, (__int64)&v43, (__int64)&v40, (__int64)&v39, 0) < 0
      || v43 != 4
      || v39 != 4 )
    {
      v40 = 0;
    }
    memset(v49, 0, sizeof(v49));
    v8 = *(_QWORD *)(a1 + 16);
    v9 = *(_QWORD *)(a1 + 8);
    v49[0] = &DEVPKEY_Device_DriverInfPath;
    v49[2] = &DestinationString;
    v49[5] = &DEVPKEY_Device_DriverDate;
    v49[7] = &Time;
    v49[10] = &DEVPKEY_Device_DriverVersion;
    LODWORD(v49[1]) = 18;
    v49[12] = &UnicodeString;
    v49[15] = &DEVPKEY_Device_ExtendedConfigurationIds;
    v49[17] = &v45;
    HIDWORD(v49[3]) = 6;
    LODWORD(v49[6]) = 16;
    LODWORD(v49[8]) = 8;
    LODWORD(v49[11]) = 18;
    HIDWORD(v49[13]) = 6;
    LODWORD(v49[16]) = 8210;
    HIDWORD(v49[18]) = 6;
    DeviceDriver = PiDevCfgQueryObjectProperties(18LL, v9, 1, v8, (__int64)v49, 4u);
    if ( DeviceDriver >= 0 )
    {
      if ( SLODWORD(v49[4]) < 0 )
        RtlInitUnicodeString(&DestinationString, 0LL);
      v10 = Time;
      if ( SLODWORD(v49[9]) < 0 )
        v10.QuadPart = 0LL;
      Time = v10;
      if ( SLODWORD(v49[14]) < 0 )
        RtlInitUnicodeString(&UnicodeString, 0LL);
      if ( SLODWORD(v49[19]) < 0 )
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
      memset(v49, 0, sizeof(v49));
      v11 = *(_QWORD *)(a1 + 16);
      v12 = *(_QWORD *)(a1 + 8);
      v49[0] = DEVPKEY_Device_Owners;
      v49[2] = &v46;
      LODWORD(v49[1]) = 8210;
      HIDWORD(v49[3]) = 6;
      DeviceDriver = PiDevCfgQueryObjectProperties(1LL, v12, 1, v11, (__int64)v49, 1u);
      if ( DeviceDriver < 0 )
        goto LABEL_89;
      if ( SLODWORD(v49[4]) < 0 )
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
        v15 = (char *)P;
      }
      else
      {
LABEL_31:
        v15 = (char *)P;
        if ( !P )
          v4 = PnpBootMode != 0 ? 0x40000 : 2;
      }
      if ( (v40 & 0x40) == 0 && (v16 = (int)DestinationString.Buffer, DestinationString.Buffer) )
      {
        if ( v15 )
        {
          v17 = RtlEqualUnicodeString((PCUNICODE_STRING)(v15 + 40), &DestinationString, 1u);
          v15 = (char *)P;
          if ( v17 )
          {
            if ( *((_QWORD *)P + 14) != Time.QuadPart || *((_QWORD *)P + 15) != v37 )
              goto LABEL_77;
            v18 = v45.Buffer;
            v19 = (char *)P + 208;
            if ( v45.Buffer )
            {
              if ( (_QWORD *)*v19 != v19 )
              {
                v20 = &v38;
                *((_QWORD *)&v38 + 1) = &v38;
                *(_QWORD *)&v38 = &v38;
                if ( !*v45.Buffer )
                  goto LABEL_61;
                while ( *((char **)v15 + 26) != v15 + 208 )
                {
                  RtlFreeUnicodeString(&DestinationString);
                  v21 = PiDevCfgSplitDriverConfigurationId(v18, &Time, (__int64)&v37);
                  v15 = (char *)P;
                  if ( v21 < 0 )
                    break;
                  v22 = (_QWORD *)*((_QWORD *)P + 26);
                  if ( v22 == (_QWORD *)((char *)P + 208) )
                    break;
                  do
                  {
                    v23 = v22;
                    v24 = RtlEqualUnicodeString((PCUNICODE_STRING)(v22 + 5), &DestinationString, 1u);
                    v15 = (char *)P;
                    if ( v24 )
                      break;
                    v22 = (_QWORD *)*v22;
                    v23 = 0LL;
                  }
                  while ( v22 != (_QWORD *)((char *)P + 208) );
                  if ( !v23 || v23[14] != Time.QuadPart || v23[15] != v37 )
                    break;
                  v25 = *v23;
                  if ( *(_QWORD **)(*v23 + 8LL) != v23
                    || (v26 = (_QWORD *)v23[1], (_QWORD *)*v26 != v23)
                    || (*v26 = v25,
                        *(_QWORD *)(v25 + 8) = v26,
                        v27 = (_QWORD *)*((_QWORD *)&v38 + 1),
                        **((__int128 ***)&v38 + 1) != &v38) )
                  {
LABEL_68:
                    __fastfail(3u);
                  }
                  v23[1] = *((_QWORD *)&v38 + 1);
                  *v23 = &v38;
                  *v27 = v23;
                  v28 = -1LL;
                  *((_QWORD *)&v38 + 1) = v23;
                  do
                    ++v28;
                  while ( v18[v28] );
                  v15 = (char *)P;
                  v18 += v28 + 1;
                  if ( !*v18 )
                  {
                    v20 = (__int128 *)v38;
                    goto LABEL_61;
                  }
                }
                v20 = (__int128 *)v38;
                if ( !*v18 )
                {
LABEL_61:
                  if ( *((char **)v15 + 26) == v15 + 208 )
                    goto LABEL_63;
                }
                v4 |= 0x20u;
LABEL_63:
                while ( v20 != &v38 )
                {
                  if ( *((__int128 **)v20 + 1) != &v38 )
                    goto LABEL_68;
                  v29 = *(_OWORD ****)v20;
                  if ( *(__int128 **)(*(_QWORD *)v20 + 8LL) != v20 )
                    goto LABEL_68;
                  *(_QWORD *)&v38 = *(_QWORD *)v20;
                  v29[1] = (_OWORD **)&v38;
                  v30 = (char *)P + 208;
                  v31 = (PVOID *)*((_QWORD *)P + 27);
                  if ( *v31 != (char *)P + 208 )
                    goto LABEL_68;
                  *(_QWORD *)v20 = v30;
                  *((_QWORD *)v20 + 1) = v31;
                  *v31 = v20;
                  *((_QWORD *)v30 + 1) = v20;
                  v20 = (__int128 *)v38;
                  v15 = (char *)P;
                }
                goto LABEL_78;
              }
            }
            else if ( (_QWORD *)*v19 == v19 )
            {
              if ( !PnpBootMode )
                goto LABEL_88;
              v4 |= 0x40000u;
              goto LABEL_78;
            }
LABEL_77:
            v4 |= 0x20u;
            goto LABEL_78;
          }
          v16 = (int)DestinationString.Buffer;
        }
        if ( !PnpBootMode )
          goto LABEL_77;
        if ( (PiDevCfgFlags & 2) == 0 )
          goto LABEL_77;
        v4 |= 0x40000u;
        if ( v15 )
        {
          DriverPackageId = PiDevCfgGetDriverPackageId(v16, (__int64)&v48);
          v15 = (char *)P;
          if ( DriverPackageId < 0 )
            goto LABEL_77;
        }
      }
      else if ( v15 )
      {
        goto LABEL_77;
      }
LABEL_78:
      if ( PnpBootMode && v15 && (v4 & 0x20) != 0 )
      {
        DeviceDriver = PiDevCfgQueryDriverConfiguration((__int64)v15);
        if ( DeviceDriver < 0 )
          goto LABEL_85;
        v33 = P;
        v34 = (_QWORD *)*((_QWORD *)P + 26);
        if ( v34 != (_QWORD *)((char *)P + 208) )
        {
          do
          {
            DeviceDriver = PiDevCfgQueryDriverConfiguration((__int64)v33);
            if ( DeviceDriver < 0 )
              break;
            v33 = P;
            v34 = (_QWORD *)*v34;
          }
          while ( v34 != (_QWORD *)((char *)P + 208) );
LABEL_85:
          if ( DeviceDriver == -1073740653 )
          {
            DeviceDriver = 0;
            v4 = v4 & 0xFFFBFFDF | 0x40000;
          }
          else if ( DeviceDriver < 0 )
          {
            goto LABEL_89;
          }
        }
      }
LABEL_88:
      *a2 = v4;
    }
  }
LABEL_89:
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&v45);
  RtlFreeUnicodeString(&v48);
  RtlFreeUnicodeString(&v46);
  if ( P )
    PiDevCfgFreeDriverNode((char *)P);
  return (unsigned int)DeviceDriver;
}
