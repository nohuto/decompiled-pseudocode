/*
 * XREFs of PiDevCfgProcessDevice @ 0x14072E460
 * Callers:
 *     PiConfigureDevice @ 0x14071DF24 (PiConfigureDevice.c)
 *     PpDevCfgProcessDevice @ 0x140730134 (PpDevCfgProcessDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     PnpDiagnosticTraceObject @ 0x140362B50 (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x140362CD4 (PnpDiagnosticTraceObjectWithStatus.c)
 *     memset @ 0x14040A280 (memset.c)
 *     _PnpGetObjectProperty @ 0x1405DB4CC (_PnpGetObjectProperty.c)
 *     _CmGetDeviceRegProp @ 0x1405E046C (_CmGetDeviceRegProp.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 *     _CmIsRootEnumeratedDevice @ 0x1406A6080 (_CmIsRootEnumeratedDevice.c)
 *     PiDevCfgConfigureDevice @ 0x1407232F0 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgSetObjectProperty @ 0x1407257BC (PiDevCfgSetObjectProperty.c)
 *     PipClearDevNodeUserFlags @ 0x14072A900 (PipClearDevNodeUserFlags.c)
 *     PiDevCfgQueryObjectProperties @ 0x14072D9CC (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgFindDeviceDriver @ 0x14072DE0C (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgFreeDeviceContext @ 0x14072EA64 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgFreeDriverNode @ 0x14072EAB4 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14072EED0 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14072FE90 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgInitDeviceContext @ 0x14072FFD0 (PiDevCfgInitDeviceContext.c)
 *     PipClearDevNodeProblem @ 0x14073015C (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x140733048 (PipSetDevNodeProblem.c)
 *     PipSetDevNodeUserFlags @ 0x14075F5CC (PipSetDevNodeUserFlags.c)
 *     PnpUpdateRebootRequiredReason @ 0x14089F004 (PnpUpdateRebootRequiredReason.c)
 *     PiDevCfgMigrateRootDevice @ 0x1408A3F1C (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgRequestDriverConfigurations @ 0x1408A4D6C (PiDevCfgRequestDriverConfigurations.c)
 */

__int64 __fastcall PiDevCfgProcessDevice(__int64 a1, void *a2, char a3)
{
  unsigned __int16 *v5; // r15
  int v6; // r14d
  bool v7; // di
  unsigned int v8; // r12d
  int inited; // esi
  char v10; // al
  int v11; // eax
  bool v12; // zf
  int v13; // eax
  int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rdx
  int v18; // eax
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  char v26; // di
  int v27; // eax
  char v28; // al
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // rdx
  int v34; // [rsp+28h] [rbp-D8h]
  int v35; // [rsp+28h] [rbp-D8h]
  int v36; // [rsp+28h] [rbp-D8h]
  int v37; // [rsp+28h] [rbp-D8h]
  int v38; // [rsp+60h] [rbp-A0h] BYREF
  int v39; // [rsp+64h] [rbp-9Ch] BYREF
  int v40; // [rsp+68h] [rbp-98h] BYREF
  int v41; // [rsp+6Ch] [rbp-94h]
  int v42; // [rsp+70h] [rbp-90h] BYREF
  __int64 v43; // [rsp+78h] [rbp-88h] BYREF
  __int64 v44; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-78h] BYREF
  __int64 v46; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v48[10]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v49[16]; // [rsp+100h] [rbp+0h] BYREF
  char v50; // [rsp+190h] [rbp+90h]
  int v52; // [rsp+1A8h] [rbp+A8h] BYREF

  v5 = 0LL;
  memset(v48, 0, 0x48uLL);
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v6 = 0;
  v40 = 1;
  v7 = 0;
  UnicodeString.Buffer = 0LL;
  v8 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v43 = 0LL;
  v52 = 0;
  v42 = 0;
  v50 = 0;
  v39 = 0;
  v44 = 0LL;
  v38 = 0;
  v46 = 0LL;
  LOBYTE(v41) = 0;
  if ( !*(_QWORD *)(a1 + 48) )
  {
    inited = -1073741808;
    goto LABEL_51;
  }
  v5 = (unsigned __int16 *)(a1 + 40);
  PnpDiagnosticTraceObject(&KMPnPEvt_DeviceConfig_Start, (unsigned __int16 *)(a1 + 40));
  inited = PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), a2, v48);
  if ( inited >= 0 )
  {
    v10 = v48[0];
    if ( (a3 & 1) != 0 )
    {
      v10 = LOBYTE(v48[0]) | 1;
      LODWORD(v48[0]) |= 1u;
    }
    if ( !a2 )
      a2 = (void *)v48[2];
    if ( (v10 & 1) != 0 || PnpBootMode )
      goto LABEL_8;
    memset(v49, 0, 0x50uLL);
    LODWORD(v49[1]) = 8210;
    LODWORD(v49[6]) = 8210;
    v24 = *(_QWORD *)(a1 + 48);
    v49[0] = DEVPKEY_Device_PendingConfigurationIds;
    HIDWORD(v49[3]) = 6;
    v49[2] = &UnicodeString;
    v49[5] = DEVPKEY_Device_RequestConfigurationIds;
    v49[7] = &DestinationString;
    HIDWORD(v49[8]) = 6;
    inited = PiDevCfgQueryObjectProperties(6LL, v24, 1u, a2, (__int64)v49, 2u);
    if ( inited >= 0 )
    {
      if ( SLODWORD(v49[4]) < 0 )
        RtlInitUnicodeString(&UnicodeString, 0LL);
      if ( SLODWORD(v49[9]) < 0 )
        RtlInitUnicodeString(&DestinationString, 0LL);
      if ( UnicodeString.Buffer && !*UnicodeString.Buffer )
      {
        v8 = -1073740656;
        v7 = 1;
        goto LABEL_15;
      }
LABEL_8:
      inited = PiDevCfgFindDeviceDriver((__int64)v48, UnicodeString.Buffer, &v43);
      if ( inited >= 0 )
      {
        if ( DestinationString.Buffer )
        {
          inited = PiDevCfgRequestDriverConfigurations(v48, v43, 0LL);
        }
        else
        {
          v11 = PiDevCfgConfigureDevice(a1, (__int64)v48, v43, &v52, &v42);
          inited = v11;
          if ( v11 >= 0 )
          {
            v6 = v52;
            v50 = 1;
          }
          v12 = ((v11 + 1073740653) & 0xFFFFFFFD) == 0;
          v13 = (unsigned __int8)v41;
          if ( !v12 )
            v13 = 1;
          v41 = v13;
        }
      }
LABEL_15:
      if ( UnicodeString.Buffer && (v43 || v7) )
        PiDevCfgSetObjectProperty(
          *(__int64 *)&PiPnpRtlCtx,
          v48,
          *(_QWORD *)(a1 + 48),
          1u,
          (__int64)a2,
          v34,
          (__int64)DEVPKEY_Device_PendingConfigurationIds,
          0,
          0LL,
          0,
          0);
      if ( DestinationString.Buffer )
        goto LABEL_45;
      if ( !UnicodeString.Buffer )
      {
        if ( v7 )
          goto LABEL_91;
        if ( v43 )
        {
          if ( *(int *)(v43 + 412) >= 0 )
          {
LABEL_21:
            if ( v50 )
            {
              if ( PnpBootMode || (a3 & 2) != 0 )
                v6 |= 0x40000u;
              v14 = *(_DWORD *)(a1 + 704);
              if ( (v6 & 0x40) != 0 )
                v15 = v14 & 0xFFFFFFFE;
              else
                v15 = v14 | 1;
              *(_DWORD *)(a1 + 704) = v15;
            }
            v16 = *(_QWORD *)(a1 + 48);
            v38 = 4;
            if ( (int)CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        v16,
                        (__int64)a2,
                        11,
                        (__int64)&v40,
                        (__int64)&v52,
                        (__int64)&v38,
                        0) < 0
              || v40 != 4
              || v38 != 4 )
            {
              v52 = 0;
            }
            v18 = *(_DWORD *)(a1 + 396) & 0x2000;
            if ( inited < 0 )
            {
              if ( v18 )
              {
                v33 = *(unsigned int *)(a1 + 404);
                if ( (_DWORD)v33 == 1 || (_DWORD)v33 == 18 )
                  PipSetDevNodeProblem(a1, v33, (unsigned int)inited);
              }
            }
            else
            {
              v52 &= 0xFFF7FB9F;
              v6 &= ~0x20u;
              if ( v18 )
              {
                v17 = 1LL;
                if ( *(_DWORD *)(a1 + 404) == 1
                  || (v29 = *(unsigned int *)(a1 + 404), (unsigned int)v29 <= 0x38)
                  && (v30 = 0x100000010040000LL, _bittest64(&v30, v29)) )
                {
                  PipClearDevNodeProblem(a1);
                }
              }
              if ( ((*(_DWORD *)(a1 + 300) - 770) & 0xFFFFFFEF) == 0 )
              {
                v19 = *(_DWORD *)(a1 + 396);
                if ( (v19 & 0x6000) != 0 )
                {
                  if ( (v19 & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 14 && (v42 & 0x70) == 0 )
                  {
                    PipClearDevNodeProblem(a1);
                    PipClearDevNodeUserFlags(a1, 4);
                  }
                }
                else if ( (v42 & 0x70) == 0 || PnpBootMode )
                {
                  if ( (v6 & 0x40) != 0 )
                    PipSetDevNodeProblem(a1, 28LL, v8);
                }
                else
                {
                  v31 = 0LL;
                  if ( (v42 & 0x10) != 0 )
                  {
                    v31 = 128LL;
                    v32 = 128LL;
                    v44 = 128LL;
                  }
                  else
                  {
                    v32 = v44;
                  }
                  if ( (v42 & 0x20) != 0 )
                  {
                    v32 = v31 | 0x10;
                    v44 = v31 | 0x10;
                    v31 |= 0x10uLL;
                  }
                  if ( (v42 & 0x40) != 0 )
                  {
                    v32 = v31 | 0x200;
                    v44 = v31 | 0x200;
                  }
                  PnpUpdateRebootRequiredReason(*(_QWORD *)(a1 + 48), v17, v32);
                  PipSetDevNodeProblem(a1, 14LL, 3221226194LL);
                  PipSetDevNodeUserFlags(a1, 4LL);
                }
              }
              if ( v39 && (v6 & 0x40) != 0 )
              {
                PiDevCfgSetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  v48,
                  *(_QWORD *)(a1 + 48),
                  1u,
                  (__int64)a2,
                  v35,
                  (__int64)&DEVPKEY_Device_InstallError,
                  23,
                  (__int64)&v39,
                  4,
                  0);
              }
              else if ( (v48[0] & 1) == 0 )
              {
                PiDevCfgSetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  v48,
                  *(_QWORD *)(a1 + 48),
                  1u,
                  (__int64)a2,
                  v35,
                  (__int64)&DEVPKEY_Device_InstallError,
                  0,
                  0LL,
                  0,
                  0);
              }
            }
            if ( v50 || v6 )
            {
              v52 |= v6;
              PiDevCfgSetDeviceRegProp(4, (unsigned int)v48, 11, 4, (__int64)&v52, 4);
              if ( v50 )
              {
                v20 = *(_QWORD *)(a1 + 48);
                v46 = MEMORY[0xFFFFF78000000014];
                PiDevCfgSetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  v48,
                  v20,
                  1u,
                  (__int64)a2,
                  v36,
                  (__int64)&DEVPKEY_Device_InstallDate,
                  16,
                  (__int64)&v46,
                  8,
                  0);
                if ( (unsigned int)PnpGetObjectProperty(
                                     *(__int64 *)&PiPnpRtlCtx,
                                     *(_QWORD *)(a1 + 48),
                                     1LL,
                                     (__int64)a2,
                                     0LL,
                                     (__int64)&DEVPKEY_Device_FirstInstallDate,
                                     (__int64)&v40,
                                     0LL,
                                     0,
                                     (__int64)&v38,
                                     0) != -1073741789
                  || v38 != 8 )
                {
                  PiDevCfgSetObjectProperty(
                    *(__int64 *)&PiPnpRtlCtx,
                    v48,
                    *(_QWORD *)(a1 + 48),
                    1u,
                    (__int64)a2,
                    v37,
                    (__int64)&DEVPKEY_Device_FirstInstallDate,
                    16,
                    (__int64)&v46,
                    8,
                    0);
                }
              }
            }
LABEL_45:
            if ( (_BYTE)v41 )
            {
              v21 = *(_QWORD *)(a1 + 48);
              v38 = 8;
              if ( (int)PnpGetObjectProperty(
                          *(__int64 *)&PiPnpRtlCtx,
                          v21,
                          1LL,
                          (__int64)a2,
                          0LL,
                          (__int64)DEVPKEY_Device_RebootRequiredReason,
                          (__int64)&v40,
                          (__int64)&v44,
                          8,
                          (__int64)&v38,
                          0) >= 0
                && v40 == 9
                && v38 == 8 )
              {
                v22 = v44;
              }
              else
              {
                v22 = 0LL;
                v44 = 0LL;
              }
              PiDevCfgLogDeviceConfigured(a1, (unsigned int)v48, v43, v42, inited, v22, (__int64)&v46);
            }
            goto LABEL_49;
          }
          v7 = 1;
          v8 = *(_DWORD *)(v43 + 412);
        }
        else
        {
          if ( inited != -1073740656 || (PiDevCfgMode & 2) == 0 )
            goto LABEL_21;
          if ( !PnpBootMode || (*(_DWORD *)(a1 + 560) & 0x100) != 0 )
          {
            if ( CmIsRootEnumeratedDevice(*(PCWSTR *)(a1 + 48)) )
            {
              v25 = *(_QWORD *)(a1 + 48);
              v38 = 4;
              if ( (int)CmGetDeviceRegProp(
                          *(__int64 *)&PiPnpRtlCtx,
                          v25,
                          (__int64)a2,
                          11,
                          (__int64)&v40,
                          (__int64)&v52,
                          (__int64)&v38,
                          0) >= 0
                && v40 == 4
                && v38 == 4 )
              {
                v26 = v52;
              }
              else
              {
                v26 = 0;
                v52 = 0;
              }
              v7 = (v26 & 0x20) != 0;
            }
            else
            {
              v7 = 1;
            }
          }
          else
          {
            v6 = 32;
          }
          if ( CmIsRootEnumeratedDevice(*(PCWSTR *)(a1 + 48)) )
          {
            if ( (int)PiDevCfgMigrateRootDevice(a1, v48, &v52) >= 0 )
            {
              v6 |= v52;
              if ( (v52 & 1) != 0 )
              {
                v7 = 0;
                v6 &= ~0x20u;
              }
            }
          }
          v8 = -1073740656;
        }
      }
      if ( !v7 )
        goto LABEL_21;
LABEL_91:
      v27 = PiDevCfgConfigureDevice(a1, (__int64)v48, 0LL, &v52, &v42);
      inited = v27;
      if ( v27 >= 0 )
      {
        v6 = v52;
        v50 = 1;
        switch ( v8 )
        {
          case 0xC0000490:
            v39 = -536870360;
            break;
          case 0xC0000491:
            v39 = -536870320;
            break;
          case 0xC0000492:
            v39 = -536870319;
            break;
          case 0xC0000493:
            v39 = -536870318;
            break;
          case 0xC0000494:
            v39 = -536870375;
            break;
        }
      }
      v12 = ((v27 + 1073740653) & 0xFFFFFFFD) == 0;
      v28 = v41;
      if ( !v12 )
        v28 = 1;
      LOBYTE(v41) = v28;
      goto LABEL_21;
    }
  }
LABEL_49:
  if ( v43 )
    PiDevCfgFreeDriverNode(v43);
LABEL_51:
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&DestinationString);
  PiDevCfgFreeDeviceContext(v48);
  if ( v5 )
    PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DeviceConfig_Stop, v5, inited);
  return (unsigned int)inited;
}
