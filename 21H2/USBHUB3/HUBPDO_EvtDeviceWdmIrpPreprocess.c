/*
 * XREFs of HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C00173D0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0001870 (McTemplateK0pq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0006D20 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBSM_AddEvent @ 0x1C000B3FC (HUBSM_AddEvent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C000C094 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pjq_EtwWriteTransfer @ 0x1C001312C (McTemplateK0pjq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_q @ 0x1C0013D04 (WPP_RECORDER_SF_q.c)
 *     HUBPDO_GetHubName @ 0x1C0014F9C (HUBPDO_GetHubName.c)
 *     HUBPDO_RecordFailure @ 0x1C0015110 (HUBPDO_RecordFailure.c)
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x1C00152E4 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_ValidateURB @ 0x1C00162F8 (HUBPDO_ValidateURB.c)
 *     EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper @ 0x1C001ACB0 (EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper.c)
 *     HUBUCX_GetControllerName @ 0x1C00264C0 (HUBUCX_GetControllerName.c)
 *     HUBUCX_GetDeviceBusInfo @ 0x1C0026618 (HUBUCX_GetDeviceBusInfo.c)
 *     HUBMISC_WaitForSignal @ 0x1C0030194 (HUBMISC_WaitForSignal.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0030374 (HUBMISC_VerifierDbgBreak.c)
 *     HUBMISC_GenerateControllerSuffix @ 0x1C0031978 (HUBMISC_GenerateControllerSuffix.c)
 *     HUBIDLE_AddEvent @ 0x1C003C168 (HUBIDLE_AddEvent.c)
 *     __security_check_cookie @ 0x1C00435B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0043840 (memmove.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceWdmIrpPreprocess(__int64 a1, IRP *a2)
{
  unsigned int Status; // ebx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  __int64 v8; // rdi
  unsigned int LowPart; // r14d
  _IRP *MasterIrp; // rdx
  int v11; // r14d
  char v12; // dl
  _IO_SECURITY_CONTEXT *SecurityContext; // r14
  unsigned __int16 v14; // cx
  bool v15; // zf
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned __int16 v19; // r9
  unsigned __int8 v20; // dl
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rax
  _SECURITY_QUALITY_OF_SERVICE *v25; // rcx
  PVOID v26; // r9
  __int64 v27; // rdx
  unsigned __int16 *v28; // rdx
  unsigned int v29; // ebx
  size_t v30; // r8
  __int64 v31; // rdx
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // rcx
  unsigned int AccessState_high; // ecx
  _IO_STACK_LOCATION *v34; // rax
  _IO_STACK_LOCATION *v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rax
  int v39; // eax
  unsigned __int16 v40; // r9
  unsigned __int8 v41; // dl
  int v42; // eax
  unsigned int ControllerSuffix; // eax
  unsigned __int16 v44; // r9
  unsigned __int8 v45; // dl
  __int64 v46; // rcx
  __int64 v47; // rax
  _DWORD *v48; // rcx
  _IO_STACK_LOCATION *v49; // rax
  _IO_STACK_LOCATION *v50; // rax
  __int64 v51; // rdx
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // rax
  _IO_SECURITY_CONTEXT *v53; // rax
  __int64 v54; // rcx
  _IO_SECURITY_CONTEXT *v55; // rcx
  __int64 v56; // rax
  __int16 v57; // dx
  __int64 v58; // r8
  _IO_SECURITY_CONTEXT *v59; // rax
  int v60; // eax
  int v61; // ecx
  int v62; // r14d
  int v63; // r14d
  int v64; // r14d
  int v65; // r14d
  _IO_STACK_LOCATION *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rax
  _IO_SECURITY_CONTEXT *v69; // rdx
  __int64 v70; // rax
  __int64 v71; // r9
  __int64 v72; // rcx
  char v73; // cl
  __int64 v74; // rcx
  char v75; // cl
  int v76; // eax
  __int64 v78; // [rsp+20h] [rbp-49h]
  __int64 v79; // [rsp+20h] [rbp-49h]
  ULONG Priority[2]; // [rsp+28h] [rbp-41h]
  unsigned int v81; // [rsp+30h] [rbp-39h]
  struct _KEVENT Event; // [rsp+38h] [rbp-31h] BYREF
  GUID v83; // [rsp+50h] [rbp-19h] BYREF
  __int128 Source1; // [rsp+60h] [rbp-9h] BYREF
  GUID v85; // [rsp+70h] [rbp+7h] BYREF

  *(_QWORD *)&v83.Data1 = a1;
  Status = 0;
  memset(&Event, 0, sizeof(Event));
  Source1 = 0LL;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00670F8);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v8 = v4;
  *(_QWORD *)&v85.Data1 = CurrentStackLocation;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v81 = LowPart;
  if ( CurrentStackLocation->MajorFunction == 14 )
  {
    if ( LowPart != 2229348 )
    {
      if ( LowPart == 2229352 )
      {
LABEL_10:
        MasterIrp = a2->AssociatedIrp.MasterIrp;
        if ( !MasterIrp )
        {
LABEL_11:
          Status = -1073741811;
          goto LABEL_51;
        }
        *(_QWORD *)(&MasterIrp->Size + 1) = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 24LL);
        goto LABEL_13;
      }
      if ( LowPart != 2229356 && LowPart != 2229360 )
      {
        if ( LowPart == 2229364 || LowPart == 2229368 || LowPart == 2229372 )
          goto LABEL_44;
        if ( LowPart != 2229376 )
          goto LABEL_109;
        goto LABEL_10;
      }
    }
LABEL_13:
    v11 = 1;
    goto LABEL_231;
  }
  v12 = 0;
  switch ( LowPart )
  {
    case 0x220003u:
      v5 = *(unsigned __int16 *)(CurrentStackLocation->Parameters.WMI.ProviderId + 2);
      LOWORD(v5) = v5 - 53;
      if ( (unsigned __int16)v5 <= 1u )
LABEL_16:
        v12 = 1;
      break;
    case 0x490007u:
    case 0x49104Bu:
      v12 = 1;
      break;
    case 0x220FB3u:
      if ( (*(_DWORD *)(v4 + 32) & 0x20) == 0 )
        break;
      goto LABEL_16;
    case 0x220463u:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
          4u,
          5u,
          0x39u,
          (__int64)&WPP_22940240c7fa3e5c402eafd6483cb7b0_Traceguids,
          a2);
      *(_DWORD *)(*(_QWORD *)(v8 + 24) + 1632LL) |= 0x80000u;
      goto LABEL_51;
  }
  if ( *(_BYTE *)v4 && !v12 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
        3u,
        5u,
        0x3Au,
        (__int64)&WPP_22940240c7fa3e5c402eafd6483cb7b0_Traceguids,
        a2);
      CurrentStackLocation = *(_IO_STACK_LOCATION **)&v85.Data1;
    }
    Status = -1073741810;
    if ( LowPart == 2228227 )
      *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) = -2147482880;
    goto LABEL_51;
  }
  if ( LowPart == 2228227 )
  {
    SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
    v14 = WORD1(SecurityContext->SecurityQos);
    if ( (unsigned __int16)(v14 - 9) <= 1u || (unsigned __int16)(v14 - 57) <= 1u )
      goto LABEL_43;
    if ( v14 > 0x2Au )
    {
      if ( v14 < 0x30u )
        goto LABEL_43;
      if ( v14 > 0x31u )
      {
        if ( v14 <= 0x34u )
          goto LABEL_43;
        if ( v14 <= 0x36u )
        {
          SecurityContext->AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v4 + 24) + 24LL);
          goto LABEL_109;
        }
        v15 = v14 == 59;
LABEL_42:
        if ( !v15 )
        {
LABEL_43:
          SecurityContext->AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v4 + 24) + 24LL);
          goto LABEL_44;
        }
      }
    }
    else
    {
      if ( v14 == 42 )
      {
        v31 = *(_QWORD *)(v4 + 24);
        if ( WORD2(SecurityContext[5].AccessState) != 7 )
        {
          if ( (unsigned __int16)(*(_WORD *)(v31 + 1990) - 256) > 0xFFu && (*(_DWORD *)(v31 + 1632) & 0x80u) == 0
            || (*(_DWORD *)(v31 + 1644) & 2) != 0 )
          {
            BYTE1(SecurityContext[5].AccessState) = *(_BYTE *)(v31 + 2052);
            SecurityContext->AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v4 + 24) + 24LL);
            goto LABEL_13;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_49;
          v18 = *(_QWORD *)(v31 + 8);
          v19 = 59;
          v20 = 3;
          goto LABEL_48;
        }
        if ( (*(_DWORD *)(v31 + 2464) & 2) == 0 )
          goto LABEL_49;
        SecurityQos = SecurityContext[2].SecurityQos;
        if ( SecurityQos )
          v26 = (*(&SecurityQos->EffectiveOnly + 1) & 5) != 0
              ? *(PVOID *)&SecurityQos[2].Length
              : MmMapLockedPagesSpecifyCache((PMDL)SecurityQos, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10u);
        else
          v26 = *(PVOID *)&SecurityContext[1].DesiredAccess;
        if ( !v26 )
          goto LABEL_49;
        v28 = *(unsigned __int16 **)(*(_QWORD *)(v8 + 24) + 2488LL);
        AccessState_high = v28[4];
        if ( AccessState_high >= HIDWORD(SecurityContext[1].AccessState) )
          AccessState_high = HIDWORD(SecurityContext[1].AccessState);
        v29 = AccessState_high;
        v30 = AccessState_high;
LABEL_84:
        memmove(v26, v28, v30);
        HIDWORD(SecurityContext[1].AccessState) = v29;
LABEL_85:
        Status = 0;
        goto LABEL_50;
      }
      if ( v14 > 1u )
      {
        if ( v14 != 11 )
        {
          if ( v14 != 19 )
          {
            v15 = v14 == 30;
            goto LABEL_42;
          }
          v17 = *(_QWORD *)(v4 + 24);
          if ( (*(_DWORD *)(v17 + 1632) & 0x80000) == 0 )
            goto LABEL_43;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_49;
          v18 = *(_QWORD *)(v17 + 8);
          v19 = 60;
          v20 = 4;
LABEL_48:
          WPP_RECORDER_SF_(
            *(_QWORD *)(v18 + 1432),
            v20,
            5u,
            v19,
            (__int64)&WPP_22940240c7fa3e5c402eafd6483cb7b0_Traceguids);
LABEL_49:
          Status = -1073741637;
          goto LABEL_50;
        }
        v24 = *(_QWORD *)(v4 + 24);
        if ( *(_WORD *)(v24 + 1990) <= 0x200u )
        {
          SecurityContext->AccessState = *(_ACCESS_STATE **)(v24 + 24);
          goto LABEL_44;
        }
        Status = HUBPDO_ValidateURB(v8, (unsigned __int16 *)SecurityContext, v6);
        if ( (Status & 0x80000000) != 0 )
        {
LABEL_50:
          LowPart = v81;
          goto LABEL_51;
        }
        v25 = SecurityContext[2].SecurityQos;
        if ( v25 )
        {
          if ( (*(&v25->EffectiveOnly + 1) & 5) != 0 )
            v26 = *(PVOID *)&v25[2].Length;
          else
            v26 = MmMapLockedPagesSpecifyCache((PMDL)v25, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10u);
        }
        else
        {
          v26 = *(PVOID *)&SecurityContext[1].DesiredAccess;
        }
        if ( !v26 )
        {
          Status = -1073741811;
          HIDWORD(SecurityContext->SecurityQos) = -2147482880;
          goto LABEL_50;
        }
        if ( BYTE3(SecurityContext[5].AccessState) == 1 )
        {
          v29 = HIDWORD(SecurityContext[1].AccessState);
          v28 = (unsigned __int16 *)(*(_QWORD *)(v8 + 24) + 1988LL);
          if ( v29 > 0x12 )
            v29 = 18;
        }
        else
        {
          if ( BYTE3(SecurityContext[5].AccessState) != 2 )
          {
            SecurityContext->AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v8 + 24) + 24LL);
            goto LABEL_44;
          }
          v27 = *(_QWORD *)(v8 + 24);
          if ( BYTE2(SecurityContext[5].AccessState) )
          {
            SecurityContext->AccessState = *(_ACCESS_STATE **)(v27 + 24);
            goto LABEL_44;
          }
          v28 = *(unsigned __int16 **)(v27 + 2016);
          v29 = v28[1];
          if ( v29 >= HIDWORD(SecurityContext[1].AccessState) )
            v29 = HIDWORD(SecurityContext[1].AccessState);
        }
        LODWORD(SecurityContext[1].AccessState) |= 1u;
        if ( ((__int64)SecurityContext[1].AccessState & 8) != 0 )
          WORD1(SecurityContext->SecurityQos) = 8;
        v30 = v29;
        goto LABEL_84;
      }
    }
    v42 = HUBPDO_ValidateURB(v4, (unsigned __int16 *)SecurityContext, v6);
    Status = v42;
    if ( v42 < 0 )
      goto LABEL_50;
    if ( v42 != 128 )
    {
      v11 = (*(_DWORD *)(*(_QWORD *)(v8 + 24) + 1632LL) & 2) != 0 ? 5 : 3;
      goto LABEL_231;
    }
    goto LABEL_85;
  }
  if ( LowPart > 0x22043B )
  {
    if ( LowPart > 0x49000B )
    {
      if ( LowPart == 4788291 )
      {
        v69 = CurrentStackLocation->Parameters.Create.SecurityContext;
        v69->SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)(*(_QWORD *)(v4 + 16) + 2448LL);
        v70 = *(_QWORD *)(v4 + 24);
        *(_OWORD *)&v69->AccessState = *(_OWORD *)(v70 + 1988);
        LOWORD(v69[1].SecurityQos) = *(_WORD *)(v70 + 2004);
        WORD1(v69[1].SecurityQos) = *(_WORD *)(*(_QWORD *)(v8 + 24) + 2192LL);
        WORD2(v69[1].SecurityQos) = *(_WORD *)(*(_QWORD *)(v8 + 24) + 2194LL);
        v69[2].AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v8 + 24) + 2568LL);
        v69[2].DesiredAccess = *(_DWORD *)(*(_QWORD *)(v8 + 24) + 2576LL);
        BYTE2(v69[1].DesiredAccess) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 8LL) + 202LL);
        HIWORD(v69[1].AccessState) = *(_WORD *)(*(_QWORD *)(v8 + 24) + 2202LL);
        LOWORD(v69[1].DesiredAccess) = *(_WORD *)(*(_QWORD *)(v8 + 24) + 2204LL);
        v71 = *(_QWORD *)(v8 + 16);
        LOWORD(v69[1].FullCreateOptions) = *(_WORD *)(*(_QWORD *)(v8 + 24) + 2582LL)
                                         + *(_WORD *)(v71 + 1188)
                                         + *(_WORD *)(v71 + 2492);
        v72 = *(_QWORD *)(v8 + 24);
        if ( (*(_DWORD *)(v72 + 2216) & 1) != 0 )
        {
          HIWORD(v69[1].SecurityQos) = *(unsigned __int8 *)(v72 + 2197);
          v73 = *(_BYTE *)(*(_QWORD *)(v8 + 16) + 240LL);
        }
        else
        {
          HIWORD(v69[1].SecurityQos) = *(_WORD *)(v71 + 2478);
          v73 = *(_BYTE *)(v71 + 2480);
        }
        LOBYTE(v69[1].AccessState) = v73;
        v74 = *(_QWORD *)(v8 + 24);
        if ( (*(_DWORD *)(v74 + 2216) & 2) != 0 )
        {
          WORD1(v69[1].AccessState) = *(_WORD *)(v74 + 2200);
          v75 = *(_BYTE *)(*(_QWORD *)(v8 + 16) + 240LL);
        }
        else
        {
          WORD1(v69[1].AccessState) = *(_WORD *)(v71 + 2482);
          v75 = *(_BYTE *)(v71 + 2484);
        }
        BYTE4(v69[1].AccessState) = v75;
        v76 = *(_DWORD *)(v71 + 2496);
        if ( (v76 & 1) != 0 )
        {
          LODWORD(v69[2].SecurityQos) |= 1u;
          v76 = *(_DWORD *)(v71 + 2496);
        }
        if ( (v76 & 4) != 0 )
          LODWORD(v69[2].SecurityQos) |= 4u;
        if ( (*(_DWORD *)(*(_QWORD *)(v8 + 24) + 1632LL) & 0x2000) != 0 )
          LODWORD(v69[2].SecurityQos) |= 2u;
        if ( (*(_DWORD *)(*(_QWORD *)(v8 + 16) + 44LL) & 8) != 0 || (*(_DWORD *)(v71 + 2496) & 8) != 0 )
          LODWORD(v69[2].SecurityQos) |= 8u;
        goto LABEL_51;
      }
      if ( LowPart == 4788299 )
      {
        v59 = CurrentStackLocation->Parameters.Create.SecurityContext;
        Source1 = *(_OWORD *)&v59->DesiredAccess;
        HIDWORD(v59[1].AccessState) = 0;
        if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_FUNCTION_SUSPEND, 0x10uLL) == 16 )
        {
          v60 = -((*(_DWORD *)(*(_QWORD *)(v8 + 24) + 1456LL) & 0x10000) != 0);
        }
        else
        {
          if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_STATIC_STREAMS, 0x10uLL) == 16 )
          {
            Status = (*(_DWORD *)(*(_QWORD *)(v8 + 24) + 1456LL) & 0x10000) != 0 ? 0xC00000BB : 0;
            v11 = ((*(_DWORD *)(*(_QWORD *)(v8 + 24) + 1456LL) & 0x10000) != 0) + 1;
            goto LABEL_231;
          }
          if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_SUPER_SPEED_COMPATIBLE, 0x10uLL) == 16 )
          {
            v61 = *(_DWORD *)(*(_QWORD *)(v8 + 24) + 1456LL) & 0x800;
          }
          else if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_HIGH_SPEED_COMPATIBLE, 0x10uLL) == 16 )
          {
            v61 = *(_DWORD *)(*(_QWORD *)(v8 + 24) + 1456LL) & 0x900;
          }
          else
          {
            if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_FULL_SPEED_COMPATIBLE, 0x10uLL) != 16 )
            {
              if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_LOW_SPEED_COMPATIBLE, 0x10uLL) == 16 )
              {
                Status = 0;
                goto LABEL_51;
              }
              if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_SSP_ISOCH_PIPE_FLAGS, 0x10uLL) != 16 )
                goto LABEL_44;
              Status = 0;
              v11 = 2;
              goto LABEL_231;
            }
            v61 = *(_DWORD *)(*(_QWORD *)(v8 + 24) + 1456LL) & 0xB00;
          }
          v60 = -(v61 == 0);
        }
        Status = v60 & 0xC00000BB;
        goto LABEL_51;
      }
      if ( LowPart != 4788303 )
      {
        switch ( LowPart )
        {
          case 0x491404u:
            a2->AssociatedIrp.MasterIrp->AssociatedIrp.MasterIrp = *(_IRP **)(*(_QWORD *)(v4 + 24) + 24LL);
            goto LABEL_44;
          case 0x491408u:
LABEL_44:
            ++a2->CurrentLocation;
            ++a2->Tail.Overlay.CurrentStackLocation;
            return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v8 + 8), a2);
          case 0x49140Fu:
            *(_QWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 8) = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 24LL);
            goto LABEL_44;
        }
        goto LABEL_212;
      }
    }
    else if ( LowPart != 4784139 )
    {
      switch ( LowPart )
      {
        case 0x22043Fu:
          v55 = CurrentStackLocation->Parameters.Create.SecurityContext;
          if ( !v55 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
                3u,
                5u,
                0xBu,
                (__int64)&WPP_22940240c7fa3e5c402eafd6483cb7b0_Traceguids);
            goto LABEL_11;
          }
          v56 = *(_QWORD *)(v4 + 16);
          *(_OWORD *)&v55->SecurityQos = *(_OWORD *)(v56 + 304);
          *(_OWORD *)&v55->DesiredAccess = *(_OWORD *)(v56 + 320);
          v57 = *(_WORD *)(v8 + 48);
          v58 = *(unsigned __int8 *)(*(_QWORD *)(v8 + 16) + 240LL);
          if ( (_BYTE)v58 )
            *((_WORD *)&v55->DesiredAccess + v58) = v57;
          else
            LOWORD(v55->DesiredAccess) = v57;
          goto LABEL_51;
        case 0x220443u:
          goto LABEL_172;
        case 0x22044Fu:
          ControllerSuffix = HUBPDO_ReturnDeviceConfigInfo(v4, (__int64)a2);
          goto LABEL_175;
        case 0x220FB3u:
          if ( (*(_DWORD *)(v4 + 32) & 1) == 0 )
          {
            Status = -1073741101;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_51;
            v44 = 65;
            goto LABEL_130;
          }
          if ( KeGetCurrentIrql() <= 2u )
          {
LABEL_236:
            v66 = a2->Tail.Overlay.CurrentStackLocation;
            v67 = *(_QWORD *)&v83.Data1;
            *(_OWORD *)&v66[-1].MajorFunction = *(_OWORD *)&v66->MajorFunction;
            *(_OWORD *)&v66[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v66->Parameters.NotifyDirectoryEx.CompletionFilter;
            *(_OWORD *)(&v66[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v66->Parameters.SetQuota + 6);
            v66[-1].FileObject = v66->FileObject;
            v66[-1].Control = 0;
            v68 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 736))(
                    WdfDriverGlobals,
                    v67);
            return (unsigned int)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, IRP *, __int64, int))(WdfFunctions_01015 + 3216))(
                                   WdfDriverGlobals,
                                   *(_QWORD *)&v83.Data1,
                                   a2,
                                   v68,
                                   2);
          }
          Status = -1073741811;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_51;
          v44 = 66;
          goto LABEL_130;
        case 0x220FBBu:
          v54 = *(_QWORD *)(v4 + 24);
          if ( (*(_DWORD *)(v54 + 1644) & 0x1000000) == 0 )
          {
            Status = -1073741275;
            goto LABEL_51;
          }
          ControllerSuffix = HUBMISC_GenerateControllerSuffix(v54, CurrentStackLocation->Parameters.WMI.ProviderId);
LABEL_175:
          Status = ControllerSuffix;
          goto LABEL_51;
        case 0x490003u:
          v53 = CurrentStackLocation->Parameters.Create.SecurityContext;
          CurrentStackLocation->Parameters.QueryDirectory.FileName = *(_UNICODE_STRING **)(*(_QWORD *)(v8 + 24) + 24LL);
          if ( (v53->DesiredAccess & 1) != 0 )
            _InterlockedOr((volatile signed __int32 *)(v8 + 32), 0x10u);
          goto LABEL_44;
      }
      if ( LowPart != 4784135 )
      {
LABEL_212:
        Status = a2->IoStatus.Status;
        goto LABEL_51;
      }
    }
    CurrentStackLocation->Parameters.QueryDirectory.FileName = *(_UNICODE_STRING **)(*(_QWORD *)(v4 + 24) + 24LL);
    goto LABEL_44;
  }
  if ( LowPart == 2229307 )
    goto LABEL_172;
  if ( LowPart > 0x220027 )
  {
    switch ( LowPart )
    {
      case 0x22002Bu:
        ControllerSuffix = HUBPDO_RecordFailure(v4, (__int64)a2);
        goto LABEL_175;
      case 0x220420u:
        ControllerSuffix = HUBUCX_GetDeviceBusInfo(
                             *(_QWORD *)(v4 + 16),
                             *(_QWORD *)(*(_QWORD *)(v4 + 24) + 24LL),
                             CurrentStackLocation->Parameters.WMI.ProviderId);
        goto LABEL_175;
      case 0x220424u:
        ControllerSuffix = HUBUCX_GetControllerName(
                             *(_QWORD *)(v4 + 16),
                             CurrentStackLocation->Parameters.WMI.ProviderId,
                             CurrentStackLocation->Parameters.Create.Options);
        goto LABEL_175;
    }
    if ( LowPart != 2229292 )
    {
      if ( LowPart == 2229299 )
      {
        Status = CurrentStackLocation->Parameters.WMI.ProviderId == 0 ? 0xC000000D : 0;
        goto LABEL_51;
      }
      if ( LowPart != 2229303 )
        goto LABEL_212;
    }
    goto LABEL_172;
  }
  if ( LowPart != 2228263 )
  {
    if ( LowPart != 2228231 )
    {
      if ( LowPart != 2228239 )
      {
        if ( LowPart == 2228243 )
        {
          if ( KeGetCurrentIrql() )
          {
            Status = -1073741811;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_51;
            v44 = 61;
          }
          else
          {
            v47 = *(_QWORD *)&v85.Data1;
            v48 = *(_DWORD **)(*(_QWORD *)&v85.Data1 + 8LL);
            if ( v48 )
            {
              *v48 = 0;
              *(_QWORD *)(v47 + 16) = v8;
              goto LABEL_146;
            }
            Status = -1073741811;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_51;
            v44 = 62;
          }
          v45 = 2;
          goto LABEL_141;
        }
        if ( LowPart == 2228247 || LowPart == 2228251 )
          goto LABEL_51;
        if ( LowPart != 2228255 )
        {
          if ( LowPart == 2228256 )
          {
            ControllerSuffix = HUBPDO_GetHubName(v4, a2);
            goto LABEL_175;
          }
          goto LABEL_212;
        }
        if ( KeGetCurrentIrql() )
        {
          Status = -1073741811;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_51;
          v44 = 67;
          goto LABEL_130;
        }
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 4), 1, 0) )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_51;
          v44 = 68;
          goto LABEL_130;
        }
        v46 = *(_QWORD *)(v8 + 24);
        if ( (*(_DWORD *)(v46 + 2436) & 0x400) != 0 )
        {
          HUBMISC_VerifierDbgBreak("DeviceHwVerifierClientInitiatedCyclePort", v46 + 504);
          v46 = *(_QWORD *)(v8 + 24);
        }
        EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper(v46, 2228255LL, 0LL);
        HUBSM_AddEvent(*(_QWORD *)(v8 + 24) + 504LL, 4011);
LABEL_51:
        if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015
                                                                                                + 1616))(
                            WdfDriverGlobals,
                            WdfDriverGlobals->Driver,
                            off_1C00671E8)
                        + 4) & 0x1000) != 0 )
        {
          v83 = 0LL;
          if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
            (*(void (__fastcall **)(IRP *, GUID *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(a2, &v83);
          if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
          {
            LODWORD(v78) = LowPart;
            McTemplateK0pq_EtwWriteTransfer(
              v22,
              &USBHUB3_ETW_EVENT_DEVICE_INTERNAL_IOCTL_START,
              &v83,
              *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL),
              v78);
          }
          if ( LowPart != 2228227 )
          {
            if ( LowPart == 4788299 )
            {
              if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) == 0 )
                goto LABEL_258;
              Priority[0] = Status;
              McTemplateK0pjq_EtwWriteTransfer(
                v22,
                v21,
                &v83,
                *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL),
                &Source1,
                *(_QWORD *)Priority);
            }
LABEL_256:
            if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
            {
              Priority[0] = Status;
              LODWORD(v78) = LowPart;
              McTemplateK0pqq_EtwWriteTransfer(
                v22,
                &USBHUB3_ETW_EVENT_DEVICE_INTERNAL_IOCTL_COMPLETE,
                &v83,
                *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL),
                v78,
                *(_QWORD *)Priority);
            }
            goto LABEL_258;
          }
          v23 = *(_QWORD *)(*(_QWORD *)&v85.Data1 + 8LL);
          if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
          {
            LODWORD(v78) = *(unsigned __int16 *)(v23 + 2);
            McTemplateK0pq_EtwWriteTransfer(
              v22,
              &USBHUB3_ETW_EVENT_DEVICE_URB_START,
              &v83,
              *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL),
              v78);
            if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
            {
              Priority[0] = *(_DWORD *)(v23 + 4);
              LODWORD(v79) = *(unsigned __int16 *)(v23 + 2);
              McTemplateK0pqq_EtwWriteTransfer(
                *(unsigned __int16 *)(v23 + 2),
                &USBHUB3_ETW_EVENT_DEVICE_URB_COMPLETE,
                &v83,
                *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL),
                v79,
                *(_QWORD *)Priority);
              goto LABEL_256;
            }
          }
        }
LABEL_258:
        a2->IoStatus.Status = Status;
        goto LABEL_259;
      }
LABEL_172:
      Status = -1073741637;
      goto LABEL_51;
    }
    if ( (*(_DWORD *)(v4 + 32) & 1) == 0 )
    {
      Status = -1073741101;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_51;
      v44 = 63;
      goto LABEL_130;
    }
    if ( !KeGetCurrentIrql() )
      goto LABEL_109;
    Status = -1073741811;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_51;
    v44 = 64;
LABEL_130:
    v45 = 3;
LABEL_141:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 8LL) + 1432LL),
      v45,
      5u,
      v44,
      (__int64)&WPP_22940240c7fa3e5c402eafd6483cb7b0_Traceguids);
    goto LABEL_51;
  }
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  if ( Parameters && *(_QWORD *)&Parameters->NamedPipeType )
  {
    v85 = 0LL;
    if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
      (*(void (__fastcall **)(IRP *, GUID *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(a2, &v85);
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
      McTemplateK0p_EtwWriteTransfer(
        v5,
        &USBHUB3_ETW_EVENT_DEVICE_SUBMIT_IDLE_NOTIFICATION_START,
        &v85,
        *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL));
    return (unsigned int)HUBIDLE_AddEvent(v8 + 72, 6003LL, a2);
  }
  Status = -1073741224;
  v11 = 2;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_50;
  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 8LL) + 1432LL),
    3u,
    5u,
    0x45u,
    (__int64)&WPP_22940240c7fa3e5c402eafd6483cb7b0_Traceguids);
LABEL_231:
  v62 = v11 - 1;
  if ( !v62 )
    goto LABEL_44;
  v63 = v62 - 1;
  if ( !v63 )
    goto LABEL_50;
  v64 = v63 - 1;
  if ( !v64 )
  {
LABEL_109:
    v34 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v34[-1].MajorFunction = *(_OWORD *)&v34->MajorFunction;
    *(_OWORD *)&v34[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v34->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v34[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v34->Parameters.SetQuota + 6);
    v34[-1].FileObject = v34->FileObject;
    v34[-1].Control = 0;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v35 = a2->Tail.Overlay.CurrentStackLocation;
    v36 = *(_QWORD *)&v83.Data1;
    v37 = *(_QWORD *)&v83.Data1;
    v35[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))HUBPDO_SyncCompletionRoutine;
    v35[-1].Context = &Event;
    v35[-1].Control = -32;
    v38 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 736))(WdfDriverGlobals, v37);
    v39 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *, __int64, int))(WdfFunctions_01015 + 3216))(
            WdfDriverGlobals,
            v36,
            a2,
            v38,
            2);
    if ( v39 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_150;
    v40 = 71;
    v41 = 3;
    goto LABEL_149;
  }
  v65 = v64 - 1;
  if ( !v65 )
  {
LABEL_146:
    v49 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v49[-1].MajorFunction = *(_OWORD *)&v49->MajorFunction;
    *(_OWORD *)&v49[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v49->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v49[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v49->Parameters.SetQuota + 6);
    v49[-1].FileObject = v49->FileObject;
    v49[-1].Control = 0;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v50 = a2->Tail.Overlay.CurrentStackLocation;
    v51 = *(_QWORD *)&v83.Data1;
    v50[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))HUBPDO_SyncCompletionRoutine;
    v50[-1].Context = &Event;
    v50[-1].Control = -32;
    v39 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *, _QWORD, int))(WdfFunctions_01015 + 3216))(
            WdfDriverGlobals,
            v51,
            a2,
            *(_QWORD *)(*(_QWORD *)(v8 + 16) + 2400LL),
            2);
    if ( v39 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_150;
    v40 = 70;
    v41 = 2;
LABEL_149:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 8LL) + 1432LL),
      v41,
      5u,
      v40,
      (__int64)&WPP_22940240c7fa3e5c402eafd6483cb7b0_Traceguids,
      v39);
LABEL_150:
    HUBMISC_WaitForSignal(&Event);
    Status = a2->IoStatus.Status;
LABEL_259:
    IofCompleteRequest(a2, 0);
    return Status;
  }
  if ( v65 == 1 )
    goto LABEL_236;
  return Status;
}
