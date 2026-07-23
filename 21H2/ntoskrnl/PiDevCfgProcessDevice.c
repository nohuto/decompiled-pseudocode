/*
 * XREFs of PiDevCfgProcessDevice @ 0x140739F50
 * Callers:
 *     PiConfigureDevice @ 0x14072FFA4 (PiConfigureDevice.c)
 *     PpDevCfgProcessDevice @ 0x140739DE8 (PpDevCfgProcessDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     PnpDiagnosticTraceObject @ 0x140364E1C (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x140364F94 (PnpDiagnosticTraceObjectWithStatus.c)
 *     memset @ 0x140414300 (memset.c)
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 *     _CmIsRootEnumeratedDevice @ 0x14062ECB8 (_CmIsRootEnumeratedDevice.c)
 *     _CmGetDeviceRegProp @ 0x14063627C (_CmGetDeviceRegProp.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     PipSetDevNodeProblem @ 0x1407396AC (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x140739914 (PipClearDevNodeProblem.c)
 *     PiDevCfgSetDeviceRegProp @ 0x140739E10 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgFreeDeviceContext @ 0x14073A554 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgFreeDriverNode @ 0x14073A5A4 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14073B250 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgInitDeviceContext @ 0x14073BBF0 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgFindDeviceDriver @ 0x14073BEC8 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryObjectProperties @ 0x14073D004 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgConfigureDevice @ 0x140742FE0 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgSetObjectProperty @ 0x1407454AC (PiDevCfgSetObjectProperty.c)
 *     PipClearDevNodeUserFlags @ 0x140749D74 (PipClearDevNodeUserFlags.c)
 *     PipSetDevNodeUserFlags @ 0x14074C4EC (PipSetDevNodeUserFlags.c)
 *     PnpUpdateRebootRequiredReason @ 0x1408A2264 (PnpUpdateRebootRequiredReason.c)
 *     PiDevCfgMigrateRootDevice @ 0x1408A717C (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgRequestDriverConfigurations @ 0x1408A7FCC (PiDevCfgRequestDriverConfigurations.c)
 */

__int64 __fastcall PiDevCfgProcessDevice(__int64 a1, __int64 a2, char a3)
{
  unsigned __int16 *v5; // r15
  int v6; // r14d
  bool v7; // di
  int v8; // r12d
  int inited; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // esi
  char v13; // al
  int DeviceDriver; // eax
  int v15; // eax
  bool v16; // zf
  int v17; // eax
  int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // rdx
  int DeviceRegProp; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v28; // rdx
  int ObjectProperties; // eax
  __int64 v30; // rdx
  char v31; // di
  int v32; // eax
  char v33; // al
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // r8
  int v38; // [rsp+28h] [rbp-D8h]
  int v39; // [rsp+28h] [rbp-D8h]
  int v40; // [rsp+28h] [rbp-D8h]
  int v41; // [rsp+28h] [rbp-D8h]
  int v42; // [rsp+60h] [rbp-A0h] BYREF
  int v43; // [rsp+64h] [rbp-9Ch] BYREF
  int v44; // [rsp+68h] [rbp-98h] BYREF
  int v45; // [rsp+6Ch] [rbp-94h]
  int v46; // [rsp+70h] [rbp-90h] BYREF
  __int64 v47; // [rsp+78h] [rbp-88h] BYREF
  __int64 v48; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-78h] BYREF
  __int64 v50; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v52[10]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v53[16]; // [rsp+100h] [rbp+0h] BYREF
  char v54; // [rsp+190h] [rbp+90h]
  int v56; // [rsp+1A8h] [rbp+A8h] BYREF

  v5 = 0LL;
  memset(v52, 0, 0x48uLL);
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v6 = 0;
  v44 = 1;
  v7 = 0;
  UnicodeString.Buffer = 0LL;
  v8 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v47 = 0LL;
  v56 = 0;
  v46 = 0;
  v54 = 0;
  v43 = 0;
  v48 = 0LL;
  v42 = 0;
  v50 = 0LL;
  LOBYTE(v45) = 0;
  if ( !*(_QWORD *)(a1 + 48) )
  {
    v12 = -1073741808;
    goto LABEL_50;
  }
  v5 = (unsigned __int16 *)(a1 + 40);
  PnpDiagnosticTraceObject(&KMPnPEvt_DeviceConfig_Start, (unsigned __int16 *)(a1 + 40));
  inited = PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), a2, v52);
  v11 = 0LL;
  v12 = inited;
  if ( inited >= 0 )
  {
    v13 = v52[0];
    if ( (a3 & 1) != 0 )
    {
      v13 = LOBYTE(v52[0]) | 1;
      LODWORD(v52[0]) |= 1u;
    }
    if ( !a2 )
      a2 = v52[2];
    if ( (v13 & 1) != 0 || PnpBootMode )
      goto LABEL_8;
    memset(v53, 0, 0x50uLL);
    LODWORD(v53[1]) = 8210;
    LODWORD(v53[6]) = 8210;
    v28 = *(_QWORD *)(a1 + 48);
    v53[0] = DEVPKEY_Device_PendingConfigurationIds;
    HIDWORD(v53[3]) = 6;
    v53[2] = &UnicodeString;
    v53[5] = DEVPKEY_Device_RequestConfigurationIds;
    v53[7] = &DestinationString;
    HIDWORD(v53[8]) = 6;
    ObjectProperties = PiDevCfgQueryObjectProperties(6, v28, 1, a2, (__int64)v53, 2);
    v11 = 0LL;
    v12 = ObjectProperties;
    if ( ObjectProperties >= 0 )
    {
      if ( SLODWORD(v53[4]) < 0 )
      {
        RtlInitUnicodeString(&UnicodeString, 0LL);
        v11 = 0LL;
      }
      if ( SLODWORD(v53[9]) < 0 )
      {
        RtlInitUnicodeString(&DestinationString, 0LL);
        v11 = 0LL;
      }
      if ( UnicodeString.Buffer && !*UnicodeString.Buffer )
      {
        v8 = -1073740656;
        v7 = 1;
        goto LABEL_15;
      }
LABEL_8:
      DeviceDriver = PiDevCfgFindDeviceDriver(v52, UnicodeString.Buffer, &v47);
      v11 = 0LL;
      v12 = DeviceDriver;
      if ( DeviceDriver >= 0 )
      {
        if ( DestinationString.Buffer )
        {
          v12 = PiDevCfgRequestDriverConfigurations(v52, v47, 0LL);
          v11 = 0LL;
        }
        else
        {
          v15 = PiDevCfgConfigureDevice(a1, v52, v47, &v56, &v46);
          v11 = 0LL;
          v12 = v15;
          v10 = 1LL;
          if ( v15 >= 0 )
          {
            v6 = v56;
            v54 = 1;
          }
          v16 = ((v15 + 1073740653) & 0xFFFFFFFD) == 0;
          v17 = (unsigned __int8)v45;
          if ( !v16 )
            v17 = 1;
          v45 = v17;
        }
      }
LABEL_15:
      if ( UnicodeString.Buffer && (v47 || v7) )
      {
        PiDevCfgSetObjectProperty(
          PiPnpRtlCtx,
          (unsigned int)v52,
          *(_QWORD *)(a1 + 48),
          1,
          a2,
          v38,
          (__int64)DEVPKEY_Device_PendingConfigurationIds,
          0,
          0LL,
          0,
          0);
        v11 = 0LL;
      }
      if ( DestinationString.Buffer )
        goto LABEL_44;
      if ( !UnicodeString.Buffer )
      {
        if ( v7 )
        {
LABEL_90:
          v32 = PiDevCfgConfigureDevice(a1, v52, 0LL, &v56, &v46);
          v12 = v32;
          if ( v32 >= 0 )
          {
            v6 = v56;
            v54 = 1;
            switch ( v8 )
            {
              case -1073740656:
                v43 = -536870360;
                break;
              case -1073740655:
                v43 = -536870320;
                break;
              case -1073740654:
                v43 = -536870319;
                break;
              case -1073740653:
                v43 = -536870318;
                break;
              case -1073740652:
                v43 = -536870375;
                break;
            }
          }
          v16 = ((v32 + 1073740653) & 0xFFFFFFFD) == 0;
          v33 = v45;
          if ( !v16 )
            v33 = 1;
          LOBYTE(v45) = v33;
LABEL_21:
          if ( v54 )
          {
            if ( PnpBootMode || (a3 & 2) != 0 )
              v6 |= 0x40000u;
            v18 = *(_DWORD *)(a1 + 704);
            if ( (v6 & 0x40) != 0 )
              v19 = v18 & 0xFFFFFFFE;
            else
              v19 = v18 | 1;
            *(_DWORD *)(a1 + 704) = v19;
          }
          v20 = *(_QWORD *)(a1 + 48);
          v42 = 4;
          DeviceRegProp = CmGetDeviceRegProp(
                            *(__int64 *)&PiPnpRtlCtx,
                            v20,
                            a2,
                            11,
                            (__int64)&v44,
                            (__int64)&v56,
                            (__int64)&v42,
                            0);
          v11 = 0LL;
          if ( DeviceRegProp < 0 || v44 != 4 || v42 != 4 )
            v56 = 0;
          v22 = *(_DWORD *)(a1 + 396) & 0x2000;
          if ( v12 < 0 )
          {
            if ( !v22 )
              goto LABEL_39;
            v10 = *(unsigned int *)(a1 + 404);
            if ( (_DWORD)v10 != 1 && (_DWORD)v10 != 18 )
              goto LABEL_39;
            PipSetDevNodeProblem(a1, v10, v12);
            goto LABEL_131;
          }
          v56 &= 0xFFF7FB9F;
          v6 &= ~0x20u;
          if ( v22 )
          {
            v10 = 1LL;
            if ( *(_DWORD *)(a1 + 404) == 1
              || (v34 = *(unsigned int *)(a1 + 404), (unsigned int)v34 <= 0x38)
              && (v35 = 0x100000010040000LL, _bittest64(&v35, v34)) )
            {
              PipClearDevNodeProblem(a1);
              v11 = 0LL;
            }
          }
          if ( ((*(_DWORD *)(a1 + 300) - 770) & 0xFFFFFFEF) != 0 )
            goto LABEL_37;
          v23 = *(_DWORD *)(a1 + 396);
          if ( (v23 & 0x6000) != 0 )
          {
            if ( (v23 & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 14 || (v46 & 0x70) != 0 )
              goto LABEL_37;
            PipClearDevNodeProblem(a1);
            PipClearDevNodeUserFlags(a1, 4LL);
          }
          else
          {
            if ( (v46 & 0x70) != 0 && !PnpBootMode )
            {
              v36 = 0LL;
              if ( (v46 & 0x10) != 0 )
              {
                v36 = 128LL;
                v37 = 128LL;
                v48 = 128LL;
              }
              else
              {
                v37 = v48;
              }
              if ( (v46 & 0x20) != 0 )
              {
                v37 = v36 | 0x10;
                v48 = v36 | 0x10;
                v36 |= 0x10uLL;
              }
              if ( (v46 & 0x40) != 0 )
              {
                v37 = v36 | 0x200;
                v48 = v36 | 0x200;
              }
              PnpUpdateRebootRequiredReason(*(_QWORD *)(a1 + 48), v10, v37);
              PipSetDevNodeProblem(a1, 14, -1073741102);
              PipSetDevNodeUserFlags(a1, 4LL);
              goto LABEL_123;
            }
            if ( (v6 & 0x40) == 0 )
            {
LABEL_37:
              if ( v43 && (v6 & 0x40) != 0 )
              {
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  (unsigned int)v52,
                  *(_QWORD *)(a1 + 48),
                  1,
                  a2,
                  v39,
                  (__int64)&DEVPKEY_Device_InstallError,
                  23,
                  (__int64)&v43,
                  4,
                  0);
              }
              else
              {
                if ( (v52[0] & 1) != 0 )
                  goto LABEL_39;
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  (unsigned int)v52,
                  *(_QWORD *)(a1 + 48),
                  1,
                  a2,
                  v39,
                  (__int64)&DEVPKEY_Device_InstallError,
                  0,
                  0LL,
                  0,
                  0);
              }
LABEL_131:
              v11 = 0LL;
LABEL_39:
              if ( v54 || v6 )
              {
                v56 |= v6;
                PiDevCfgSetDeviceRegProp(4LL, (__int64)v52, 0xBu, 4, (__int64)&v56, 4);
                v11 = 0LL;
                if ( v54 )
                {
                  v24 = *(_QWORD *)(a1 + 48);
                  v50 = MEMORY[0xFFFFF78000000014];
                  PiDevCfgSetObjectProperty(
                    PiPnpRtlCtx,
                    (unsigned int)v52,
                    v24,
                    1,
                    a2,
                    v40,
                    (__int64)&DEVPKEY_Device_InstallDate,
                    16,
                    (__int64)&v50,
                    8,
                    0);
                  if ( (unsigned int)PnpGetObjectProperty(
                                       *(__int64 *)&PiPnpRtlCtx,
                                       *(_QWORD *)(a1 + 48),
                                       1LL,
                                       a2,
                                       0LL,
                                       (__int64)&DEVPKEY_Device_FirstInstallDate,
                                       (__int64)&v44,
                                       0LL,
                                       0,
                                       (__int64)&v42,
                                       0) != -1073741789
                    || v42 != 8 )
                  {
                    PiDevCfgSetObjectProperty(
                      PiPnpRtlCtx,
                      (unsigned int)v52,
                      *(_QWORD *)(a1 + 48),
                      1,
                      a2,
                      v41,
                      (__int64)&DEVPKEY_Device_FirstInstallDate,
                      16,
                      (__int64)&v50,
                      8,
                      0);
                  }
                  v11 = 0LL;
                }
              }
LABEL_44:
              if ( (_BYTE)v45 )
              {
                v25 = *(_QWORD *)(a1 + 48);
                v42 = 8;
                if ( (int)PnpGetObjectProperty(
                            *(__int64 *)&PiPnpRtlCtx,
                            v25,
                            1LL,
                            a2,
                            0LL,
                            (__int64)DEVPKEY_Device_RebootRequiredReason,
                            (__int64)&v44,
                            (__int64)&v48,
                            8,
                            (__int64)&v42,
                            0) >= 0
                  && v44 == 9
                  && v42 == 8 )
                {
                  v26 = v48;
                }
                else
                {
                  v26 = 0LL;
                  v48 = 0LL;
                }
                PiDevCfgLogDeviceConfigured(a1, (unsigned int)v52, v47, v46, v12, v26, (__int64)&v50);
              }
              goto LABEL_48;
            }
            PipSetDevNodeProblem(a1, 28, v8);
          }
LABEL_123:
          v11 = 0LL;
          goto LABEL_37;
        }
        if ( v47 )
        {
          if ( *(int *)(v47 + 412) >= 0 )
            goto LABEL_21;
          v7 = 1;
          v8 = *(_DWORD *)(v47 + 412);
        }
        else
        {
          if ( v12 != -1073740656 || (PiDevCfgMode & 2) == 0 )
            goto LABEL_21;
          if ( !PnpBootMode || (*(_DWORD *)(a1 + 560) & 0x100) != 0 )
          {
            if ( CmIsRootEnumeratedDevice(*(PCWSTR *)(a1 + 48)) )
            {
              v30 = *(_QWORD *)(a1 + 48);
              v42 = 4;
              if ( (int)CmGetDeviceRegProp(
                          *(__int64 *)&PiPnpRtlCtx,
                          v30,
                          a2,
                          11,
                          (__int64)&v44,
                          (__int64)&v56,
                          (__int64)&v42,
                          0) >= 0
                && v44 == 4
                && v42 == 4 )
              {
                v31 = v56;
              }
              else
              {
                v31 = 0;
                v56 = 0;
              }
              v7 = (v31 & 0x20) != 0;
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
            if ( (int)PiDevCfgMigrateRootDevice(a1, v52, &v56) >= 0 )
            {
              v6 |= v56;
              if ( (v56 & 1) != 0 )
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
      goto LABEL_90;
    }
  }
LABEL_48:
  if ( v47 )
    PiDevCfgFreeDriverNode(v47, v10, v11);
LABEL_50:
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&DestinationString);
  PiDevCfgFreeDeviceContext(v52);
  if ( v5 )
    PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DeviceConfig_Stop, v5, v12);
  return (unsigned int)v12;
}
