/*
 * XREFs of PpDevCfgProcessDeviceExtensions @ 0x1408A64CC
 * Callers:
 *     PiConfigureDevice @ 0x14071BFA4 (PiConfigureDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     _CmGetDeviceRegProp @ 0x1406AFC70 (_CmGetDeviceRegProp.c)
 *     PiDevCfgFindDeviceDriver @ 0x140721430 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryObjectProperties @ 0x140722564 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgSetObjectProperty @ 0x14072A97C (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgFreeDeviceContext @ 0x140735338 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgFreeDriverNode @ 0x140735388 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgSetDeviceRegProp @ 0x140736764 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgInitDeviceContext @ 0x1407368A4 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgConfigureDeviceDriver @ 0x140750BD0 (PiDevCfgConfigureDeviceDriver.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x140757600 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgAppendMultiSz @ 0x1408A086C (PiDevCfgAppendMultiSz.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceExtensions(__int64 a1)
{
  wchar_t *v2; // r12
  wchar_t *v3; // r13
  int v4; // esi
  int inited; // ebx
  __int64 v6; // rcx
  void *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rdi
  int DriverConfiguration; // eax
  char v11; // r9
  UNICODE_STRING *v12; // rcx
  int v13; // r13d
  __int64 v14; // rdi
  wchar_t *Buffer; // rcx
  unsigned int v16; // esi
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  int v29; // [rsp+30h] [rbp-D8h]
  int v30; // [rsp+30h] [rbp-D8h]
  int v31; // [rsp+30h] [rbp-D8h]
  __int64 v32; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+70h] [rbp-98h] BYREF
  __int64 v34; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING v37; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING v38; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING v39; // [rsp+C0h] [rbp-48h] BYREF
  __int64 *v40; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v41; // [rsp+D8h] [rbp-30h]
  UNICODE_STRING *p_DestinationString; // [rsp+E0h] [rbp-28h]
  int v43; // [rsp+E8h] [rbp-20h]
  int v44; // [rsp+ECh] [rbp-1Ch]
  __int64 v45; // [rsp+F0h] [rbp-18h]
  UNICODE_STRING v46; // [rsp+F8h] [rbp-10h] BYREF
  UNICODE_STRING v47; // [rsp+108h] [rbp+0h] BYREF
  UNICODE_STRING v48; // [rsp+118h] [rbp+10h] BYREF
  UNICODE_STRING v49; // [rsp+128h] [rbp+20h] BYREF
  void *v50[10]; // [rsp+138h] [rbp+30h] BYREF
  __int128 v51; // [rsp+188h] [rbp+80h]
  __int128 v52; // [rsp+198h] [rbp+90h]

  memset(v50, 0, 0x48uLL);
  LODWORD(v34) = 1;
  v51 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v2 = 0LL;
  v52 = 0LL;
  DestinationString.Buffer = 0LL;
  v3 = 0LL;
  v33 = 0LL;
  v4 = 0;
  *(_QWORD *)&v39.Length = 0LL;
  v39.Buffer = 0LL;
  *(_QWORD *)&v46.Length = 0LL;
  v46.Buffer = 0LL;
  *(_QWORD *)&v47.Length = 0LL;
  v47.Buffer = 0LL;
  *(_QWORD *)&v48.Length = 0LL;
  v48.Buffer = 0LL;
  *(_QWORD *)&v49.Length = 0LL;
  v49.Buffer = 0LL;
  *(_QWORD *)&v37.Length = 0LL;
  v37.Buffer = 0LL;
  *(_QWORD *)&v38.Length = 0LL;
  v38.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v32 = 0LL;
  if ( !PiDevCfgMode )
  {
    inited = 0;
    goto LABEL_66;
  }
  v6 = *(_QWORD *)(a1 + 48);
  if ( !v6 )
  {
    inited = -1073741808;
    goto LABEL_66;
  }
  inited = PiDevCfgInitDeviceContext(v6, 0LL, v50);
  if ( inited < 0 )
    goto LABEL_64;
  v7 = v50[2];
  v8 = *(_QWORD *)(a1 + 48);
  v40 = DEVPKEY_Device_PendingConfigurationIds;
  p_DestinationString = &DestinationString;
  v41 = 8210LL;
  v43 = 0;
  v45 = 0LL;
  v44 = 6;
  inited = PiDevCfgQueryObjectProperties(1LL, v8, 1u, v50[2], (__int64)&v40, 1u);
  if ( inited < 0 )
    goto LABEL_64;
  if ( (int)v45 < 0 )
    RtlInitUnicodeString(&DestinationString, 0LL);
  inited = PiDevCfgFindDeviceDriver((__int64)v50, DestinationString.Buffer, &v33);
  if ( inited < 0 )
    goto LABEL_64;
  v9 = *(_QWORD *)(v33 + 208);
  if ( v9 == v33 + 208 )
    goto LABEL_48;
  do
  {
    DriverConfiguration = PiDevCfgQueryDriverConfiguration(v9);
    inited = DriverConfiguration;
    if ( DriverConfiguration == -1073740653 )
    {
      v11 = 1;
      v12 = &v39;
    }
    else
    {
      if ( DriverConfiguration < 0 )
        goto LABEL_64;
      if ( *(_QWORD *)(v9 + 296) )
      {
        *(_DWORD *)(v9 + 184) &= ~1u;
        goto LABEL_27;
      }
      if ( *(_QWORD *)(v9 + 312) )
      {
        inited = PiDevCfgAppendMultiSz(&v46, 0LL, (const void **)(v9 + 304), 0);
        if ( inited < 0 )
          goto LABEL_64;
      }
      if ( *(_QWORD *)(v9 + 328) )
      {
        inited = PiDevCfgAppendMultiSz(&v47, 0LL, (const void **)(v9 + 320), 0);
        if ( inited < 0 )
          goto LABEL_64;
      }
      if ( *(_QWORD *)(v9 + 344) )
      {
        inited = PiDevCfgAppendMultiSz(&v48, 0LL, (const void **)(v9 + 336), 0);
        if ( inited < 0 )
          goto LABEL_64;
      }
      if ( *(_QWORD *)(v9 + 360) )
      {
        inited = PiDevCfgAppendMultiSz(&v49, 0LL, (const void **)(v9 + 352), 0);
        if ( inited < 0 )
          goto LABEL_64;
      }
      v4 |= *(_DWORD *)(v9 + 384);
      inited = PiDevCfgAppendMultiSz(&v37, (const void **)(v9 + 40), 0LL, 0);
      if ( inited < 0 )
        goto LABEL_64;
      v11 = 0;
      v12 = &v38;
    }
    inited = PiDevCfgAppendMultiSz(v12, (const void **)(v9 + 392), 0LL, v11);
    if ( inited < 0 )
      goto LABEL_64;
LABEL_27:
    v13 = v4;
    v9 = *(_QWORD *)v9;
  }
  while ( v9 != v33 + 208 );
  v14 = 0LL;
  if ( inited < 0 )
    goto LABEL_64;
  Buffer = v39.Buffer;
  if ( v39.Buffer )
  {
    inited = PiDevCfgSetObjectProperty(
               *(__int64 *)&PiPnpRtlCtx,
               v50,
               *(_QWORD *)(a1 + 48),
               1u,
               (__int64)v7,
               v29,
               (__int64)DEVPKEY_Device_RequestConfigurationIds,
               8210,
               (__int64)v39.Buffer,
               v39.Length,
               0);
    if ( inited >= 0 )
      inited = -1073740653;
    goto LABEL_64;
  }
  v16 = 0;
  *(_QWORD *)&v51 = &v46;
  *((_QWORD *)&v51 + 1) = &v47;
  *(_QWORD *)&v52 = &v48;
  *((_QWORD *)&v52 + 1) = &v49;
  do
  {
    v17 = *(_QWORD *)((char *)&v51 + v14);
    if ( *(_QWORD *)(v17 + 8) )
    {
      v18 = *(_QWORD *)(a1 + 48);
      v19 = *(__int64 **)((char *)&off_140D2C6C0 + v14);
      v43 = 0;
      v45 = 0LL;
      v40 = v19;
      p_DestinationString = &UnicodeString;
      v41 = 8210LL;
      v44 = 6;
      inited = PiDevCfgQueryObjectProperties((__int64)Buffer, v18, 1u, v7, (__int64)&v40, 1u);
      if ( inited < 0 )
        goto LABEL_64;
      if ( (int)v45 < 0 )
        RtlInitUnicodeString(&UnicodeString, 0LL);
      inited = PiDevCfgAppendMultiSz(&UnicodeString, 0LL, (const void **)v17, 0);
      if ( inited < 0 )
        goto LABEL_64;
      inited = PiDevCfgSetObjectProperty(
                 *(__int64 *)&PiPnpRtlCtx,
                 v50,
                 *(_QWORD *)(a1 + 48),
                 1u,
                 (__int64)v7,
                 v30,
                 *(_QWORD *)((char *)&off_140D2C6C0 + v14),
                 8210,
                 (__int64)UnicodeString.Buffer,
                 UnicodeString.Length,
                 0);
      if ( inited < 0 )
        goto LABEL_64;
      RtlFreeAnsiString(&UnicodeString);
    }
    ++v16;
    v14 += 8LL;
  }
  while ( v16 < 4 );
  v20 = v33;
  v4 = v13;
  v21 = v33 + 208;
  v22 = *(_QWORD *)(v33 + 208);
  while ( v22 != v21 )
  {
    if ( (*(_DWORD *)(v22 + 184) & 1) != 0 )
    {
      inited = PiDevCfgConfigureDeviceDriver(a1, (__int64)v50, v22, &v32, 0LL);
      if ( inited < 0 )
        goto LABEL_64;
      v4 |= v32;
      v20 = v33;
    }
    v22 = *(_QWORD *)v22;
    v21 = v20 + 208;
  }
  v2 = v37.Buffer;
  v3 = v38.Buffer;
LABEL_48:
  if ( DestinationString.Buffer )
    PiDevCfgSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      v50,
      *(_QWORD *)(a1 + 48),
      1u,
      (__int64)v7,
      v29,
      (__int64)DEVPKEY_Device_PendingConfigurationIds,
      0,
      0LL,
      0,
      0);
  v23 = *(_QWORD *)(a1 + 48);
  if ( v2 )
  {
    inited = PiDevCfgSetObjectProperty(
               *(__int64 *)&PiPnpRtlCtx,
               v50,
               v23,
               1u,
               (__int64)v7,
               v29,
               (__int64)DEVPKEY_Device_DriverExtendedInfs,
               8210,
               (__int64)v2,
               v37.Length,
               0);
    if ( inited < 0 )
      goto LABEL_64;
  }
  else
  {
    PiDevCfgSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      v50,
      v23,
      1u,
      (__int64)v7,
      v29,
      (__int64)DEVPKEY_Device_DriverExtendedInfs,
      0,
      0LL,
      0,
      0);
  }
  v24 = *(_QWORD *)(a1 + 48);
  if ( v3 )
  {
    inited = PiDevCfgSetObjectProperty(
               *(__int64 *)&PiPnpRtlCtx,
               v50,
               v24,
               1u,
               (__int64)v7,
               v31,
               (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
               8210,
               (__int64)v3,
               v38.Length,
               0);
    if ( inited < 0 )
      goto LABEL_64;
  }
  else
  {
    PiDevCfgSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      v50,
      v24,
      1u,
      (__int64)v7,
      v31,
      (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
      0,
      0LL,
      0,
      0);
  }
  if ( v4 )
  {
    v25 = *(_QWORD *)(a1 + 48);
    HIDWORD(v32) = 4;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                v25,
                (__int64)v7,
                11,
                (__int64)&v34,
                (__int64)&v32,
                (__int64)&v32 + 4,
                0) < 0
      || (_DWORD)v34 != 4
      || (v27 = v32, HIDWORD(v32) != 4) )
    {
      v27 = 0;
    }
    LODWORD(v32) = v4 | v27;
    PiDevCfgSetDeviceRegProp(v26, (__int64)v50, 0xBu, 4, (__int64)&v32, 4);
  }
LABEL_64:
  if ( v33 )
    PiDevCfgFreeDriverNode(v33);
LABEL_66:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&v46);
  RtlFreeAnsiString(&v47);
  RtlFreeAnsiString(&v48);
  RtlFreeAnsiString(&v49);
  RtlFreeAnsiString(&v37);
  RtlFreeAnsiString(&v38);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v39);
  PiDevCfgFreeDeviceContext((__int64)v50);
  return (unsigned int)inited;
}
