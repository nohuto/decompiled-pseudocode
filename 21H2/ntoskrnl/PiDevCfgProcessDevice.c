/*
 * XREFs of PiDevCfgProcessDevice @ 0x140747740
 * Callers:
 *     IopInitializeDeviceInstanceKey @ 0x1406CF970 (IopInitializeDeviceInstanceKey.c)
 *     PipProcessStartPhase3 @ 0x14076BE08 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x14076E9B8 (PiProcessNewDeviceNode.c)
 *     PiConfigureDevice @ 0x1409477A4 (PiConfigureDevice.c)
 * Callees:
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1402D1EB4 (PnpDiagnosticTraceObjectWithStatus.c)
 *     PnpDiagnosticTraceObject @ 0x1402D2774 (PnpDiagnosticTraceObject.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PiDevCfgSetDeviceRegProp @ 0x1406E5528 (PiDevCfgSetDeviceRegProp.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     PiDevCfgInitDeviceContext @ 0x1407448BC (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgFindDeviceDriver @ 0x1407449E0 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1407459F4 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryObjectProperties @ 0x140746CCC (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgFreeDriverNode @ 0x1407474E4 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgFreeDeviceContext @ 0x1407476FC (PiDevCfgFreeDeviceContext.c)
 *     PipClearDevNodeUserFlags @ 0x14074A08C (PipClearDevNodeUserFlags.c)
 *     PipClearDevNodeProblem @ 0x140764FE4 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x140765114 (PipSetDevNodeProblem.c)
 *     PipSetDevNodeUserFlags @ 0x140767220 (PipSetDevNodeUserFlags.c)
 *     PiDevCfgConfigureDevice @ 0x1407702BC (PiDevCfgConfigureDevice.c)
 *     PiDevCfgSetObjectProperty @ 0x14077139C (PiDevCfgSetObjectProperty.c)
 *     _CmIsRootEnumeratedDevice @ 0x140778D60 (_CmIsRootEnumeratedDevice.c)
 *     _CmGetDeviceRegProp @ 0x14077CD90 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x14077DA5C (_PnpGetObjectProperty.c)
 *     PnpUpdateRebootRequiredReason @ 0x140947274 (PnpUpdateRebootRequiredReason.c)
 *     PiDevCfgMigrateRootDevice @ 0x14094C9C4 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgRequestDriverConfigurations @ 0x14094D7E8 (PiDevCfgRequestDriverConfigurations.c)
 */

__int64 __fastcall PiDevCfgProcessDevice(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // r12d
  unsigned __int16 *v6; // r15
  int v7; // edi
  char v8; // r13
  bool v9; // r14
  int inited; // esi
  char v11; // al
  __int64 v12; // rsi
  int v13; // eax
  int v14; // eax
  unsigned int v15; // eax
  int v16; // r14d
  __int64 v17; // rdx
  __int64 v18; // rdx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  char v28; // r14
  int v29; // eax
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // rdx
  int v35; // [rsp+28h] [rbp-D8h]
  int v36; // [rsp+28h] [rbp-D8h]
  int v37; // [rsp+28h] [rbp-D8h]
  int v38; // [rsp+28h] [rbp-D8h]
  int v39; // [rsp+60h] [rbp-A0h] BYREF
  int v40; // [rsp+64h] [rbp-9Ch] BYREF
  int v41; // [rsp+68h] [rbp-98h] BYREF
  int v42; // [rsp+6Ch] [rbp-94h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h] BYREF
  __int64 v44; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-80h] BYREF
  __int64 v46; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v48[10]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v49[18]; // [rsp+100h] [rbp+0h] BYREF
  char v50; // [rsp+1A0h] [rbp+A0h]
  __int64 v52; // [rsp+1A8h] [rbp+A8h]
  int v54; // [rsp+1B8h] [rbp+B8h] BYREF

  v3 = 0;
  v6 = 0LL;
  memset(v48, 0, 0x48uLL);
  v41 = 1;
  v7 = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v8 = 0;
  UnicodeString.Buffer = 0LL;
  v9 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  P = 0LL;
  v54 = 0;
  v42 = 0;
  v40 = 0;
  v44 = 0LL;
  v39 = 0;
  v46 = 0LL;
  v50 = 0;
  if ( !*(_QWORD *)(a1 + 48) )
  {
    inited = -1073741808;
    goto LABEL_50;
  }
  v6 = (unsigned __int16 *)(a1 + 40);
  PnpDiagnosticTraceObject(&KMPnPEvt_DeviceConfig_Start, (unsigned __int16 *)(a1 + 40));
  inited = PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), a2, v48);
  if ( inited >= 0 )
  {
    v11 = v48[0];
    if ( (a3 & 1) != 0 )
    {
      v11 = LOBYTE(v48[0]) | 1;
      LODWORD(v48[0]) |= 1u;
    }
    v12 = a2;
    if ( !a2 )
      v12 = v48[2];
    v52 = v12;
    if ( (v11 & 1) != 0 || PnpBootMode )
      goto LABEL_8;
    memset(v49, 0, 0x50uLL);
    HIDWORD(v49[3]) = 6;
    LODWORD(v49[1]) = 8210;
    v49[0] = DEVPKEY_Device_PendingConfigurationIds;
    LODWORD(v49[6]) = 8210;
    v26 = *(_QWORD *)(a1 + 48);
    v49[2] = &UnicodeString;
    v49[5] = DEVPKEY_Device_RequestConfigurationIds;
    v49[7] = &DestinationString;
    HIDWORD(v49[8]) = 6;
    inited = PiDevCfgQueryObjectProperties(6LL, v26, 1, v12, (__int64)v49, 2u);
    if ( inited >= 0 )
    {
      if ( SLODWORD(v49[4]) < 0 )
        RtlInitUnicodeString(&UnicodeString, 0LL);
      if ( SLODWORD(v49[9]) < 0 )
        RtlInitUnicodeString(&DestinationString, 0LL);
      if ( UnicodeString.Buffer && !*UnicodeString.Buffer )
      {
        v9 = 1;
        v3 = -1073740656;
        goto LABEL_13;
      }
LABEL_8:
      inited = PiDevCfgFindDeviceDriver((__int64)v48, UnicodeString.Buffer, &P);
      if ( inited >= 0 )
      {
        if ( DestinationString.Buffer )
        {
          inited = PiDevCfgRequestDriverConfigurations(v48, P, 0LL);
          goto LABEL_13;
        }
        v13 = PiDevCfgConfigureDevice(a1, (unsigned int)v48, (_DWORD)P, (unsigned int)&v54, (__int64)&v42);
        inited = v13;
        if ( v13 >= 0 )
        {
          v7 = v54;
          v8 = 1;
LABEL_12:
          v50 = 1;
          goto LABEL_13;
        }
        if ( v13 != -1073740653 && v13 != -1073740651 )
          goto LABEL_12;
      }
LABEL_13:
      if ( UnicodeString.Buffer && (P || v9) )
        PiDevCfgSetObjectProperty(
          PiPnpRtlCtx,
          (unsigned int)v48,
          *(_QWORD *)(a1 + 48),
          1,
          v52,
          v35,
          (__int64)DEVPKEY_Device_PendingConfigurationIds,
          0,
          0LL,
          0,
          0);
      if ( DestinationString.Buffer )
      {
        v16 = v52;
LABEL_44:
        if ( v50 )
        {
          v23 = *(_QWORD *)(a1 + 48);
          v39 = 8;
          if ( (int)PnpGetObjectProperty(
                      PiPnpRtlCtx,
                      v23,
                      1,
                      v16,
                      0LL,
                      (__int64)DEVPKEY_Device_RebootRequiredReason,
                      (__int64)&v41,
                      (__int64)&v44,
                      8,
                      (__int64)&v39,
                      0) >= 0
            && v41 == 9
            && v39 == 8 )
          {
            v24 = v44;
          }
          else
          {
            v24 = 0LL;
            v44 = 0LL;
          }
          PiDevCfgLogDeviceConfigured(a1, (__int64)v48, (__int64)P, v42, inited, v24, (__int64)&v46);
        }
        goto LABEL_48;
      }
      if ( !UnicodeString.Buffer )
      {
        if ( v9 )
          goto LABEL_92;
        if ( P )
        {
          if ( *((int *)P + 103) >= 0 )
            goto LABEL_19;
          v3 = *((_DWORD *)P + 103);
LABEL_92:
          v29 = PiDevCfgConfigureDevice(a1, (unsigned int)v48, 0, (unsigned int)&v54, (__int64)&v42);
          inited = v29;
          if ( v29 < 0 )
          {
            if ( v29 == -1073740653 || v29 == -1073740651 )
              goto LABEL_19;
          }
          else
          {
            v7 = v54;
            v8 = 1;
            switch ( v3 )
            {
              case 0xC0000490:
                v40 = -536870360;
                break;
              case 0xC0000491:
                v40 = -536870320;
                break;
              case 0xC0000492:
                v40 = -536870319;
                break;
              case 0xC0000493:
                v40 = -536870318;
                break;
              case 0xC0000494:
                v40 = -536870375;
                break;
            }
          }
          v50 = 1;
LABEL_19:
          if ( v8 )
          {
            if ( PnpBootMode || (a3 & 2) != 0 )
              v7 |= 0x40000u;
            v14 = *(_DWORD *)(a1 + 704);
            if ( (v7 & 0x40) != 0 )
              v15 = v14 & 0xFFFFFFFE;
            else
              v15 = v14 | 1;
            *(_DWORD *)(a1 + 704) = v15;
          }
          v16 = v52;
          v17 = *(_QWORD *)(a1 + 48);
          v39 = 4;
          if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v17, v52, 11, (__int64)&v41, (__int64)&v54, (__int64)&v39, 0) < 0
            || v41 != 4
            || v39 != 4 )
          {
            v54 = 0;
          }
          v19 = *(_DWORD *)(a1 + 396) & 0x2000;
          if ( inited < 0 )
          {
            if ( v19 )
            {
              v34 = *(unsigned int *)(a1 + 404);
              if ( (_DWORD)v34 == 1 || (_DWORD)v34 == 18 )
                PipSetDevNodeProblem(a1, v34, (unsigned int)inited);
            }
          }
          else
          {
            v54 &= 0xFFF7FB9F;
            v7 &= ~0x20u;
            if ( v19 )
            {
              if ( *(_DWORD *)(a1 + 404) == 1
                || (v30 = *(unsigned int *)(a1 + 404), (unsigned int)v30 <= 0x38)
                && (v31 = 0x100000010040000LL, _bittest64(&v31, v30)) )
              {
                PipClearDevNodeProblem(a1);
              }
            }
            v20 = *(_DWORD *)(a1 + 300);
            if ( ((v20 - 771) & 0xFFFFFFEE) == 0 && v20 != 787 )
            {
              v21 = *(_DWORD *)(a1 + 396);
              if ( (v21 & 0x6000) != 0 )
              {
                if ( (v21 & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 14 && (v42 & 0x70) == 0 )
                {
                  PipClearDevNodeProblem(a1);
                  PipClearDevNodeUserFlags(a1, 4LL);
                }
              }
              else if ( (v42 & 0x70) == 0 || PnpBootMode )
              {
                if ( (v7 & 0x40) != 0 )
                  PipSetDevNodeProblem(a1, 28LL, v3);
              }
              else
              {
                v32 = 0LL;
                if ( (v42 & 0x10) != 0 )
                {
                  v32 = 128LL;
                  v33 = 128LL;
                  v44 = 128LL;
                }
                else
                {
                  v33 = v44;
                }
                if ( (v42 & 0x20) != 0 )
                {
                  v33 = v32 | 0x10;
                  v44 = v32 | 0x10;
                  v32 |= 0x10uLL;
                }
                if ( (v42 & 0x40) != 0 )
                {
                  v33 = v32 | 0x200;
                  v44 = v32 | 0x200;
                }
                PnpUpdateRebootRequiredReason(*(_QWORD *)(a1 + 48), v18, v33);
                PipSetDevNodeProblem(a1, 14LL, 3221226194LL);
                PipSetDevNodeUserFlags(a1, 4LL);
              }
            }
            if ( v40 && (v7 & 0x40) != 0 )
            {
              PiDevCfgSetObjectProperty(
                PiPnpRtlCtx,
                (unsigned int)v48,
                *(_QWORD *)(a1 + 48),
                1,
                v52,
                v36,
                (__int64)&DEVPKEY_Device_InstallError,
                23,
                (__int64)&v40,
                4,
                0);
            }
            else if ( (v48[0] & 1) == 0 )
            {
              PiDevCfgSetObjectProperty(
                PiPnpRtlCtx,
                (unsigned int)v48,
                *(_QWORD *)(a1 + 48),
                1,
                v52,
                v36,
                (__int64)&DEVPKEY_Device_InstallError,
                0,
                0LL,
                0,
                0);
            }
          }
          if ( v8 || v7 )
          {
            v54 |= v7;
            PiDevCfgSetDeviceRegProp(4LL, (__int64)v48, 0xBu, 4, (__int64)&v54, 4);
            if ( v8 )
            {
              v22 = *(_QWORD *)(a1 + 48);
              v46 = MEMORY[0xFFFFF78000000014];
              PiDevCfgSetObjectProperty(
                PiPnpRtlCtx,
                (unsigned int)v48,
                v22,
                1,
                v52,
                v37,
                (__int64)&DEVPKEY_Device_InstallDate,
                16,
                (__int64)&v46,
                8,
                0);
              if ( (unsigned int)PnpGetObjectProperty(
                                   PiPnpRtlCtx,
                                   *(_QWORD *)(a1 + 48),
                                   1,
                                   v52,
                                   0LL,
                                   (__int64)&DEVPKEY_Device_FirstInstallDate,
                                   (__int64)&v41,
                                   0LL,
                                   0,
                                   (__int64)&v39,
                                   0) != -1073741789
                || v39 != 8 )
              {
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  (unsigned int)v48,
                  *(_QWORD *)(a1 + 48),
                  1,
                  v52,
                  v38,
                  (__int64)&DEVPKEY_Device_FirstInstallDate,
                  16,
                  (__int64)&v46,
                  8,
                  0);
              }
            }
          }
          goto LABEL_44;
        }
        if ( inited != -1073740656 || (PiDevCfgMode & 2) == 0 )
          goto LABEL_19;
        if ( !PnpBootMode || (*(_DWORD *)(a1 + 560) & 0x100) != 0 )
        {
          if ( (unsigned __int8)CmIsRootEnumeratedDevice(*(PCWSTR *)(a1 + 48)) )
          {
            v27 = *(_QWORD *)(a1 + 48);
            v39 = 4;
            if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v27, v52, 11, (__int64)&v41, (__int64)&v54, (__int64)&v39, 0) >= 0
              && v41 == 4
              && v39 == 4 )
            {
              v28 = v54;
            }
            else
            {
              v28 = 0;
              v54 = 0;
            }
            v9 = (v28 & 0x20) != 0;
          }
          else
          {
            v9 = 1;
          }
        }
        else
        {
          v7 = 32;
        }
        if ( (unsigned __int8)CmIsRootEnumeratedDevice(*(PCWSTR *)(a1 + 48)) )
        {
          if ( (int)PiDevCfgMigrateRootDevice(a1, v48, &v54) >= 0 )
          {
            v7 |= v54;
            if ( (v54 & 1) != 0 )
            {
              v9 = 0;
              v7 &= ~0x20u;
            }
          }
        }
        v3 = -1073740656;
      }
      if ( !v9 )
        goto LABEL_19;
      goto LABEL_92;
    }
  }
LABEL_48:
  if ( P )
    PiDevCfgFreeDriverNode((char *)P);
LABEL_50:
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&DestinationString);
  PiDevCfgFreeDeviceContext((__int64)v48);
  if ( v6 )
    PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DeviceConfig_Stop, v6, inited);
  return (unsigned int)inited;
}
