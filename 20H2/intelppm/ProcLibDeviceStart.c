/*
 * XREFs of ProcLibDeviceStart @ 0x1C0022D64
 * Callers:
 *     EvtDevicePrepareHardware @ 0x1C0021D00 (EvtDevicePrepareHardware.c)
 * Callees:
 *     AcquireBiosPpmControl @ 0x1C0001990 (AcquireBiosPpmControl.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003658 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0003718 (WPP_RECORDER_SF_.c)
 *     AcpiEval_OSC @ 0x1C0003864 (AcpiEval_OSC.c)
 *     __security_check_cookie @ 0x1C00044F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00047F0 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C000845C (ProcLibTraceProcessorSpecificEvent.c)
 *     WPP_RECORDER_SF_DDDDDDDDDDD @ 0x1C000D820 (WPP_RECORDER_SF_DDDDDDDDDDD.c)
 *     AcpiEval_PPC @ 0x1C00213A0 (AcpiEval_PPC.c)
 *     InitAcpiCpc @ 0x1C00220D8 (InitAcpiCpc.c)
 *     InitAcpiProcessorDomains @ 0x1C00221C4 (InitAcpiProcessorDomains.c)
 *     InitAcpiCStates @ 0x1C0022434 (InitAcpiCStates.c)
 *     InitAcpiPerfStates @ 0x1C00225FC (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C002279C (InitAcpiThrottleStates.c)
 *     QueryPepCapabilites @ 0x1C002294C (QueryPepCapabilites.c)
 *     InitAcpiLegacyPcc @ 0x1C0022ACC (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x1C0022B4C (InitAcpiLpiStates.c)
 *     ProcLibTraceSummary2 @ 0x1C0024CA8 (ProcLibTraceSummary2.c)
 *     RegisterXsdDomain @ 0x1C0024F40 (RegisterXsdDomain.c)
 *     ProcLibCapChange @ 0x1C00250E8 (ProcLibCapChange.c)
 *     AcquireAcpiInterfaces @ 0x1C0025180 (AcquireAcpiInterfaces.c)
 *     InitPep @ 0x1C002523C (InitPep.c)
 *     EnumerateControlMethods @ 0x1C00254DC (EnumerateControlMethods.c)
 *     ValidatePerfDomainSymmetry @ 0x1C0025980 (ValidatePerfDomainSymmetry.c)
 *     InitializeEnergyEstimation @ 0x1C0026544 (InitializeEnergyEstimation.c)
 *     AcpiEval_PDC @ 0x1C0032E64 (AcpiEval_PDC.c)
 *     AcpiEval_TPC @ 0x1C0032F6C (AcpiEval_TPC.c)
 *     ReleaseAcpiInterfaces @ 0x1C00345EC (ReleaseAcpiInterfaces.c)
 *     InitPepIdleStates @ 0x1C00389F8 (InitPepIdleStates.c)
 *     InitPepPerfStates @ 0x1C003A37C (InitPepPerfStates.c)
 */

__int64 __fastcall ProcLibDeviceStart(__int64 a1)
{
  __int64 v1; // rdx
  int (__fastcall *v3)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, _QWORD *, _QWORD, _QWORD); // rax
  int v4; // eax
  _DWORD *v5; // rdi
  int v6; // eax
  int v7; // ebx
  NTSTATUS v8; // eax
  __int64 v9; // rax
  int v10; // eax
  const wchar_t *v11; // rax
  PIO_WORKITEM WorkItem; // rax
  __int16 v13; // r8
  int v14; // r13d
  int v15; // ebx
  int inited; // eax
  __int64 v17; // rax
  int v18; // eax
  int PepCapabilites; // eax
  int v20; // eax
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  int v23; // ecx
  __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // rax
  int v27; // eax
  int v28; // eax
  __int64 v29; // rcx
  int v30; // ebx
  int v31; // eax
  unsigned int v32; // edi
  int v33; // eax
  int v34; // eax
  unsigned int v35; // ebx
  char v36; // al
  int v37; // r9d
  unsigned __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v41; // rax
  void (__fastcall *v42)(__int64); // rax
  unsigned __int16 v43; // r9
  unsigned __int8 v44; // dl
  unsigned int v45; // r8d
  int v46; // eax
  int v47; // ecx
  __int64 v48; // rax
  int v49; // eax
  unsigned __int16 v50; // r9
  int v51; // eax
  int Type; // [rsp+28h] [rbp-A9h]
  ULONG Size[2]; // [rsp+30h] [rbp-A1h]
  ULONG Sizea[2]; // [rsp+30h] [rbp-A1h]
  ULONG Sizeb[2]; // [rsp+30h] [rbp-A1h]
  int *v56; // [rsp+88h] [rbp-49h] BYREF
  int v57; // [rsp+90h] [rbp-41h]
  int v58; // [rsp+94h] [rbp-3Dh] BYREF
  __int64 v59; // [rsp+98h] [rbp-39h] BYREF
  __int128 v60; // [rsp+A0h] [rbp-31h] BYREF
  __int64 v61; // [rsp+B0h] [rbp-21h]
  _QWORD v62[3]; // [rsp+B8h] [rbp-19h] BYREF
  __int128 v63; // [rsp+D0h] [rbp-1h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+E0h] [rbp+Fh] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+F0h] [rbp+1Fh] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v61 = 0LL;
  *(_QWORD *)(a1 + 256) = Globals;
  *(_QWORD *)(a1 + 272) = Globals;
  *(_QWORD *)(a1 + 264) = 0LL;
  v62[1] = &v63;
  v63 = 0LL;
  v59 = 0LL;
  Affinity = 0LL;
  v58 = 0;
  PreviousAffinity = 0LL;
  v62[0] = 1LL;
  v60 = 0LL;
  v62[2] = 16LL;
  v3 = *(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, _QWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 1488);
  v57 = 0;
  if ( v3(WdfDriverGlobals, v1, 0LL, 2703744LL, 0LL, v62, 0LL, 0LL) < 0 )
  {
    v63 = 0LL;
    HIDWORD(v63) = -1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x1Eu,
        (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids);
    *(_QWORD *)(a1 + 272) &= 0xFFFFFFFFFFCFFFF9uLL;
  }
  else if ( DWORD1(v63) )
  {
    *(_DWORD *)(a1 + 188) = DWORD1(v63);
    *(_BYTE *)(a1 + 185) = BYTE8(v63);
    *(_BYTE *)(a1 + 184) = 1;
    *(_WORD *)(a1 + 186) = 0x2000;
    *(_DWORD *)(a1 + 192) = 0;
  }
  v4 = HIDWORD(v63);
  v5 = (_DWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 72) = -1;
  *(_DWORD *)(a1 + 56) = -1;
  *(_DWORD *)(a1 + 48) = v4;
  *(_DWORD *)(a1 + 52) = v63;
  v6 = ((__int64 (__fastcall *)(__int64))qword_1C001C7E8)(a1);
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( *v5 == -1 )
    {
      if ( (Globals & 0x200000000000LL) != 0 )
      {
        *(_DWORD *)(a1 + 80) = dword_1C001CBF8;
        *(_DWORD *)(a1 + 84) = *(_DWORD *)(a1 + 72);
        *(_QWORD *)(a1 + 272) &= 0xFFFFFFCFFFFFFFFFuLL;
      }
    }
    else
    {
      v8 = IoSetDevicePropertyData(*(PDEVICE_OBJECT *)(a1 + 8), &PROCESSOR_NUMBER_PKEY, 0, 0, 7u, 4u, (PVOID)(a1 + 56));
      if ( v8 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizea[0] = v8;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          4u,
          0x20u,
          (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
          *(_QWORD *)Sizea);
      }
      KeProcessorGroupAffinity(&Affinity, (unsigned int)*v5);
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      v57 = 1;
    }
    *((_QWORD *)&v60 + 1) = &DEVPKEY_Device_BiosDeviceName;
    *(_QWORD *)&v60 = 24LL;
    v61 = 0LL;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *, __int64, _QWORD, __int64 *, int *))(WdfFunctions_01015 + 3472))(
            WdfDriverGlobals,
            v9,
            &v60,
            512LL,
            0LL,
            &v59,
            &v58);
    if ( v10 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v10;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x21u,
          (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
          *(_QWORD *)Sizeb);
      }
      v11 = L"Unknown";
    }
    else
    {
      v11 = (const wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                               WdfDriverGlobals,
                               v59,
                               0LL);
    }
    *(_QWORD *)(a1 + 64) = v11;
    WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
    *(_QWORD *)(a1 + 1152) = WorkItem;
    *(_BYTE *)(a1 + 1161) = 1;
    if ( !WorkItem )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          4u,
          0x22u,
          (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids);
      v7 = -1073741670;
      goto LABEL_82;
    }
    v56 = 0LL;
    if ( qword_1C001C510 )
    {
      v14 = AcpiEval_OSC(a1, (_DWORD *)qword_1C001C510, v13, &v56);
      if ( v14 >= 0 )
      {
        v15 = *v56;
        if ( (*v56 & 0xE) == 0 )
        {
          *(_QWORD *)(a1 + 88) = v56;
          goto LABEL_15;
        }
        if ( (v15 & 2) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x23u,
            (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids);
        if ( (v15 & 4) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDDDDDDDDDD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            *(unsigned __int8 *)(qword_1C001C510 + 13),
            *(unsigned __int8 *)(qword_1C001C510 + 12),
            *(unsigned __int8 *)(qword_1C001C510 + 11),
            Type);
        if ( (v15 & 8) == 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_15:
          if ( v14 >= 0 )
            goto LABEL_16;
          goto LABEL_136;
        }
        v43 = 37;
        v44 = 2;
        v45 = 1;
        Sizeb[0] = *(_DWORD *)(qword_1C001C510 + 16);
LABEL_140:
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v44,
          v45,
          v43,
          (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
          *(_QWORD *)Sizeb);
        goto LABEL_15;
      }
      if ( v14 != -1073741772 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_15;
        v43 = 39;
        Sizeb[0] = v14;
        v45 = 3;
        v44 = 3;
        goto LABEL_140;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0x26u,
          (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids);
    }
LABEL_136:
    if ( qword_1C001C508 )
      AcpiEval_PDC(a1, qword_1C001C508, (unsigned __int16)word_1C001C518);
LABEL_16:
    EnumerateControlMethods(a1, a1 + 1088);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      Sizeb[0] = *(_DWORD *)(a1 + 1088);
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        3u,
        0x28u,
        (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
        *(_QWORD *)Sizeb);
    }
    if ( (*(_QWORD *)(a1 + 272) & 0x111300000F00LL) != 0 )
    {
      inited = InitPep(a1);
      if ( inited < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = inited;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x29u,
            (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
            *(_QWORD *)Sizeb);
        }
        *(_QWORD *)(a1 + 272) &= 0xFFFFEEECFFFFF0FFuLL;
      }
    }
    v17 = *(_QWORD *)(a1 + 272);
    if ( (v17 & 0xE0000000000LL) != 0 )
    {
      v18 = InitAcpiLpiStates(a1);
      if ( v18 >= 0 )
      {
        *(_QWORD *)(a1 + 272) &= 0xFFFFFFFCFFF80C88uLL;
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v18;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x2Au,
          (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
          *(_QWORD *)Sizeb);
      }
      v17 = *(_QWORD *)(a1 + 272);
    }
    if ( (v17 & 0x111300000F00LL) != 0 )
    {
      PepCapabilites = QueryPepCapabilites(a1);
      if ( PepCapabilites < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = PepCapabilites;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x2Bu,
            (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
            *(_QWORD *)Sizeb);
        }
        *(_QWORD *)(a1 + 272) &= 0xFFFFEEECFFFFF0FFuLL;
      }
    }
    if ( (*(_DWORD *)(a1 + 272) & 0x7F077) != 0 )
    {
      v20 = InitAcpiCStates(a1);
      if ( v20 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v20;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x2Cu,
          (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
          *(_QWORD *)Sizeb);
      }
    }
    v21 = *(_QWORD *)(a1 + 272);
    if ( (v21 & 0x7F077) == 0 )
    {
      v21 &= 0xFFFFFFFFFFFFFCFFuLL;
      *(_QWORD *)(a1 + 272) = v21;
    }
    if ( (v21 & 0x300000300LL) != 0 )
    {
      v46 = InitPepIdleStates(a1);
      if ( v46 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = v46;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x2Du,
            (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
            *(_QWORD *)Sizeb);
        }
        *(_QWORD *)(a1 + 272) &= 0xFFFFFFFCFFFFFCFFuLL;
      }
    }
    v22 = *(_QWORD *)(a1 + 272);
    if ( (v22 & 0x1000000000LL) != 0 )
    {
      v47 = InitPepPerfStates(a1);
      v48 = *(_QWORD *)(a1 + 272);
      if ( v47 >= 0 )
      {
        v22 = v48 & 0xFFFFFFFF04CFFFFFuLL;
        *(_QWORD *)(a1 + 272) = v22;
      }
      else
      {
        v22 = v48 & 0xFFFFFFEFFFFFFFFFuLL;
        *(_QWORD *)(a1 + 272) = v22;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = v47;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x2Eu,
            (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
            *(_QWORD *)Sizeb);
          v22 = *(_QWORD *)(a1 + 272);
        }
      }
    }
    if ( (v22 & 0x8000000) != 0 )
    {
      v23 = InitAcpiCpc(a1);
      v24 = *(_QWORD *)(a1 + 272);
      if ( v23 >= 0 )
      {
        v22 = v24 & 0xFFFFFFFF0CCFFFFFuLL;
        *(_QWORD *)(a1 + 272) = v22;
      }
      else
      {
        v22 = v24 & 0xFFFFFFFFF7FFFFFFuLL;
        *(_QWORD *)(a1 + 272) = v22;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = v23;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x2Fu,
            (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
            *(_QWORD *)Sizeb);
          v22 = *(_QWORD *)(a1 + 272);
        }
      }
    }
    if ( (v22 & 0x80000000) != 0 )
    {
      v25 = InitAcpiLegacyPcc((_QWORD *)a1);
      v26 = *(_QWORD *)(a1 + 272);
      if ( v25 >= 0 )
      {
        v22 = v26 & 0xFFFFFFFF8CCFFFFFuLL;
        *(_QWORD *)(a1 + 272) = v22;
      }
      else
      {
        v22 = v26 & 0xFFFFFFFF7FFFFFFFuLL;
        *(_QWORD *)(a1 + 272) = v22;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = v25;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x30u,
            (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
            *(_QWORD *)Sizeb);
          v22 = *(_QWORD *)(a1 + 272);
        }
      }
    }
    if ( (v22 & 0x70000000) != 0 )
    {
      v27 = InitAcpiPerfStates(a1);
      if ( v27 < 0 )
      {
        *(_QWORD *)(a1 + 272) &= 0xFFFFFFFF8FFFFFFFuLL;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = v27;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x31u,
            (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
            *(_QWORD *)Sizeb);
        }
      }
    }
    if ( (*(_DWORD *)(a1 + 272) & 0x3300000) != 0 )
    {
      v28 = InitAcpiThrottleStates(a1);
      if ( v28 < 0 )
      {
        *(_QWORD *)(a1 + 272) &= 0xFFFFFFFFFCCFFFFFuLL;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = v28;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x32u,
            (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
            *(_QWORD *)Sizeb);
        }
      }
    }
    if ( qword_1C001C520 )
    {
      v49 = qword_1C001C520(a1);
      v7 = v49;
      if ( v49 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_82;
        v50 = 51;
        Sizeb[0] = v49;
        goto LABEL_162;
      }
    }
    if ( dword_1C001C82C == 1 )
    {
LABEL_67:
      InitAcpiProcessorDomains(a1);
      if ( (*(_DWORD *)(a1 + 272) & 0x7B07F070) != 0 )
      {
        v7 = AcquireAcpiInterfaces(a1);
        if ( v7 < 0 )
        {
          ReleaseAcpiInterfaces(a1);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
LABEL_82:
            if ( v57 )
              KeRevertToUserGroupAffinityThread(&PreviousAffinity);
            goto LABEL_84;
          }
          v50 = 52;
          Sizeb[0] = v7;
LABEL_162:
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            3u,
            v50,
            (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
            *(_QWORD *)Sizeb);
          goto LABEL_82;
        }
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 208),
        0LL);
      v30 = ((__int64 (__fastcall *)(__int64))qword_1C001C7B0)(a1);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 208));
      if ( v30 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v30;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          0x35u,
          (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
          *(_QWORD *)Sizeb);
      }
      v31 = *(_DWORD *)(a1 + 272);
      v32 = 0;
      LODWORD(v56) = 0;
      if ( (v31 & 0x70000000) != 0 )
      {
        v33 = AcpiEval_PPC(a1, (int *)&v56);
        if ( v33 < 0 )
        {
          if ( v33 == -1073741772 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                4u,
                2u,
                0x36u,
                (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids);
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            Sizeb[0] = v33;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0x37u,
              (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
              *(_QWORD *)Sizeb);
          }
        }
        else
        {
          v32 = (unsigned int)v56;
        }
      }
      v34 = *(_DWORD *)(a1 + 272);
      v35 = 0;
      LODWORD(v56) = 0;
      if ( (v34 & 0x3000000) != 0 )
      {
        v51 = AcpiEval_TPC(a1, &v56);
        if ( v51 >= 0 )
        {
          v35 = (unsigned int)v56;
        }
        else if ( v51 == -1073741772 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              2u,
              0x38u,
              (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids);
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = v51;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x39u,
            (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
            *(_QWORD *)Sizeb);
        }
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C001C3E8,
        0LL);
      ProcLibCapChange(a1, v32, v35, 100LL);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_1C001C3E8);
      if ( (*(_QWORD *)(a1 + 272) & 0x10FF300000LL) != 0 )
      {
        if ( *(_QWORD *)(a1 + 536) )
        {
          v36 = RegisterXsdDomain(a1);
          goto LABEL_77;
        }
        if ( !byte_1C001C828 )
        {
          v36 = 1;
LABEL_77:
          if ( !v36 )
            goto LABEL_78;
LABEL_97:
          if ( (int)ValidatePerfDomainSymmetry(a1) >= 0 )
          {
            v41 = *(_QWORD *)(a1 + 272);
            if ( (v41 & 0x1000000000LL) != 0 )
            {
              ((void (__fastcall *)(__int64))qword_1C001C7E0)(a1);
            }
            else if ( (v41 & 0x8000000) != 0 )
            {
              ((void (__fastcall *)(__int64))qword_1C001C7D8)(a1);
            }
            else if ( (v41 & 0x80000000) != 0 )
            {
              ((void (__fastcall *)(__int64))qword_1C001C7D0)(a1);
            }
            else
            {
              v42 = (void (__fastcall *)(__int64))qword_1C001C7B8;
              if ( (*(_QWORD *)(a1 + 272) & 0x73300000LL) == 0 )
                v42 = (void (__fastcall *)(__int64))qword_1C001C7C8;
              v42(a1);
            }
          }
          goto LABEL_78;
        }
        if ( !(unsigned int)((__int64 (__fastcall *)(__int64))qword_1C001C7F0)(a1) )
          goto LABEL_97;
      }
LABEL_78:
      if ( (*(_QWORD *)(a1 + 272) & 0x2000000000LL) != 0 && ++dword_1C001CBE0 == dword_1C001C3E4 )
        InitializeEnergyEstimation();
      AcquireBiosPpmControl(a1);
      v7 = 0;
      goto LABEL_82;
    }
    v29 = *(_QWORD *)(a1 + 272);
    if ( (v29 & 0x60000000) != 0 && *(_BYTE *)(a1 + 408) == 127 )
    {
      if ( (v29 & 0x20000000) != 0 )
      {
        *(_QWORD *)(a1 + 288) = qword_1C001C540;
        *(_QWORD *)(a1 + 320) = qword_1C001C568;
        *(_QWORD *)(a1 + 304) = qword_1C001C550;
      }
      if ( (v29 & 0x40000000) == 0 )
        goto LABEL_58;
      v29 &= ~0x400000uLL;
      *(_QWORD *)(a1 + 288) = SetPerfStateFFH;
    }
    else if ( *(_BYTE *)(a1 + 408) == 1 && (v29 & 0x10000000) != 0 )
    {
      *(_QWORD *)(a1 + 288) = SetPerfStateIO;
      v29 &= ~0x400000uLL;
      *(_QWORD *)(a1 + 304) = SetPerfStateIOHidden;
    }
    else
    {
      v29 &= 0xFFFFFFFF8FFFFFFFuLL;
    }
    *(_QWORD *)(a1 + 272) = v29;
LABEL_58:
    if ( (v29 & 0x4000000) != 0 )
      *(_QWORD *)(a1 + 328) = qword_1C001C570;
    if ( (v29 & 0xA8000000) != 0 )
    {
      *(_QWORD *)(a1 + 344) = qword_1C001C580;
      *(_QWORD *)(a1 + 352) = qword_1C001C588;
    }
    if ( (v29 & 0x2000000) != 0 && *(_BYTE *)(a1 + 464) == 127 )
    {
      *(_QWORD *)(a1 + 296) = qword_1C001C548;
      *(_QWORD *)(a1 + 312) = qword_1C001C558;
    }
    else if ( *(_BYTE *)(a1 + 464) == 1 && (v29 & 0x1100000) != 0 )
    {
      *(_QWORD *)(a1 + 296) = SetPerfStateIO;
      *(_QWORD *)(a1 + 312) = SetPerfStateIOHidden;
    }
    else
    {
      *(_QWORD *)(a1 + 272) = v29 & 0xFFFFFFFFFCCFFFFFuLL;
    }
    if ( qword_1C001C578 )
      *(_QWORD *)(a1 + 336) = qword_1C001C578;
    goto LABEL_67;
  }
  *(_QWORD *)(a1 + 272) = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    Size[0] = v6;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0x1Fu,
      (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
      *(_QWORD *)Size);
  }
  if ( dword_1C001C82C == 1 )
    v7 = 0;
LABEL_84:
  v37 = *(_DWORD *)(a1 + 264);
  v38 = *(_QWORD *)(a1 + 272);
  if ( (v37 & 0x7F077 & v38) != (v37 & 0x7F077) )
  {
    ProcLibTraceProcessorSpecificEvent(a1, qword_1C001C800, (__int64)&PPM_ETW_IDLE_STATES_ERROR_HV, 0, 0LL);
    v37 = *(_DWORD *)(a1 + 264);
    v38 = *(_QWORD *)(a1 + 272);
  }
  v39 = v37 & 0x40000000;
  if ( (v38 & 0x40000000) == 0 )
    v39 = v37 & 0x70000000;
  if ( ((unsigned int)v38 & (unsigned int)v39) != v39 )
  {
    ProcLibTraceProcessorSpecificEvent(a1, qword_1C001C808, (__int64)&PPM_ETW_PERF_STATES_ERROR_HV, 0, 0LL);
    v37 = *(_DWORD *)(a1 + 264);
    v38 = *(_QWORD *)(a1 + 272);
  }
  if ( ((unsigned int)v38 & v37 & 0x3300000) != (unsigned __int64)(v37 & 0x3300000) )
  {
    ProcLibTraceProcessorSpecificEvent(a1, qword_1C001C810, (__int64)&PPM_ETW_THROTTLE_STATES_ERROR_HV, 0, 0LL);
    v37 = *(_DWORD *)(a1 + 264);
    v38 = *(_QWORD *)(a1 + 272);
  }
  if ( ((unsigned int)v38 & v37 & 0x80000000) != (unsigned __int64)(v37 & 0x80000000) )
  {
    ProcLibTraceProcessorSpecificEvent(a1, (__int64)&PPM_ETW_PCC_ERROR, (__int64)&PPM_ETW_PCC_ERROR_HV, 0, 0LL);
    v37 = *(_DWORD *)(a1 + 264);
    v38 = *(_QWORD *)(a1 + 272);
  }
  if ( ((unsigned int)v38 & v37 & 0x8000000) != (unsigned __int64)(v37 & 0x8000000) )
    ProcLibTraceProcessorSpecificEvent(a1, (__int64)&PPM_ETW_CPC_ERROR, (__int64)&PPM_ETW_CPC_ERROR_HV, 0, 0LL);
  ProcLibTraceSummary2(a1, 0LL);
  return (unsigned int)v7;
}
