/*
 * XREFs of HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0016F00
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0001870 (McTemplateK0pq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0006A7C (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBSM_AddEvent @ 0x1C000AFFC (HUBSM_AddEvent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C000BCAC (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pjq_EtwWriteTransfer @ 0x1C0012C28 (McTemplateK0pjq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_q @ 0x1C001373C (WPP_RECORDER_SF_q.c)
 *     HUBPDO_GetHubName @ 0x1C0014ADC (HUBPDO_GetHubName.c)
 *     HUBPDO_RecordFailure @ 0x1C0014C50 (HUBPDO_RecordFailure.c)
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x1C0014E10 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_ValidateURB @ 0x1C0015E30 (HUBPDO_ValidateURB.c)
 *     EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper @ 0x1C001A758 (EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper.c)
 *     HUBUCX_GetControllerName @ 0x1C0026018 (HUBUCX_GetControllerName.c)
 *     HUBUCX_GetDeviceBusInfo @ 0x1C002616C (HUBUCX_GetDeviceBusInfo.c)
 *     HUBMISC_WaitForSignal @ 0x1C002FAF4 (HUBMISC_WaitForSignal.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002FCD4 (HUBMISC_VerifierDbgBreak.c)
 *     HUBMISC_GenerateControllerSuffix @ 0x1C0031298 (HUBMISC_GenerateControllerSuffix.c)
 *     HUBIDLE_AddEvent @ 0x1C003BAF4 (HUBIDLE_AddEvent.c)
 *     __security_check_cookie @ 0x1C00428D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0042A80 (memmove.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceWdmIrpPreprocess(__int64 a1, IRP *a2)
{
  unsigned int Status; // ebx
  __int64 v4; // rax
  __int64 v5; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  __int64 v7; // rsi
  __int64 v8; // r9
  __int64 v9; // r8
  unsigned int LowPart; // r12d
  int v11; // edi
  _IRP *MasterIrp; // rdx
  char v13; // dl
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  _IO_STACK_LOCATION *v18; // rax
  __int64 v19; // rax
  _IO_SECURITY_CONTEXT *SecurityContext; // rdi
  unsigned __int16 v22; // cx
  bool v23; // zf
  int v24; // eax
  __int64 v25; // rcx
  unsigned __int16 v26; // r9
  unsigned __int8 v27; // dl
  __int64 v28; // rax
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // rcx
  __int64 v30; // rdx
  unsigned __int16 *v31; // rdx
  unsigned int AccessState_high; // ebx
  size_t v33; // r8
  _SECURITY_QUALITY_OF_SERVICE *v34; // rcx
  unsigned int v35; // ecx
  unsigned int ControllerSuffix; // eax
  unsigned __int16 v37; // r9
  __int64 v38; // rcx
  unsigned __int16 v39; // r9
  _IO_SECURITY_CONTEXT *v40; // rax
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // rax
  _IO_SECURITY_CONTEXT *v42; // rax
  __int64 v43; // rcx
  _IO_SECURITY_CONTEXT *v44; // rcx
  __int64 v45; // rax
  __int16 v46; // dx
  _IO_SECURITY_CONTEXT *v47; // rax
  int v48; // eax
  int v49; // ecx
  _IO_SECURITY_CONTEXT *v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rcx
  char v53; // cl
  __int64 v54; // rcx
  char v55; // cl
  int v56; // eax
  _IO_STACK_LOCATION *v57; // rax
  _IO_STACK_LOCATION *v58; // rax
  int v59; // eax
  unsigned __int16 v60; // r9
  unsigned __int8 v61; // dl
  _IO_STACK_LOCATION *v62; // rax
  _IO_STACK_LOCATION *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  _IO_SECURITY_CONTEXT *v67; // rdi
  __int64 v69; // [rsp+20h] [rbp-49h]
  __int64 v70; // [rsp+20h] [rbp-49h]
  ULONG Priority[2]; // [rsp+28h] [rbp-41h]
  struct _KEVENT Event; // [rsp+38h] [rbp-31h] BYREF
  __int128 Source1; // [rsp+50h] [rbp-19h] BYREF
  GUID v75; // [rsp+60h] [rbp-9h] BYREF
  GUID v76; // [rsp+70h] [rbp+7h] BYREF

  Status = 0;
  memset(&Event, 0, sizeof(Event));
  Source1 = 0LL;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00660D0);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v7 = v4;
  v8 = (__int64)&WPP_RECORDER_INITIALIZED;
  v9 = 5LL;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( CurrentStackLocation->MajorFunction == 14 )
  {
    if ( LowPart != 2229348 )
    {
      if ( LowPart != 2229352 )
      {
        if ( LowPart == 2229356 || LowPart == 2229360 || LowPart == 2229364 || LowPart == 2229368 || LowPart == 2229372 )
          goto LABEL_16;
        if ( LowPart != 2229376 )
        {
LABEL_10:
          v11 = 3;
          goto LABEL_26;
        }
      }
      MasterIrp = a2->AssociatedIrp.MasterIrp;
      if ( !MasterIrp )
      {
        Status = -1073741811;
LABEL_14:
        v11 = 2;
        goto LABEL_26;
      }
      *(_QWORD *)(&MasterIrp->Size + 1) = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 24LL);
    }
    goto LABEL_16;
  }
  v13 = 0;
  switch ( LowPart )
  {
    case 0x220003u:
      v5 = *(unsigned __int16 *)(CurrentStackLocation->Parameters.WMI.ProviderId + 2);
      LOWORD(v5) = v5 - 53;
      if ( (unsigned __int16)v5 <= 1u )
LABEL_19:
        v13 = 1;
      break;
    case 0x490007u:
    case 0x49104Bu:
      v13 = 1;
      break;
    case 0x220FB3u:
      if ( (*(_DWORD *)(v4 + 32) & 0x20) == 0 )
        break;
      goto LABEL_19;
    case 0x220463u:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
          4u,
          5u,
          0x39u,
          (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids,
          a2);
      *(_DWORD *)(*(_QWORD *)(v7 + 24) + 1632LL) |= 0x80000u;
      goto LABEL_42;
  }
  if ( *(_BYTE *)v4 && !v13 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
        3u,
        5u,
        0x3Au,
        (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids,
        a2);
    Status = -1073741810;
    v11 = 2;
    if ( LowPart == 2228227 )
      *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) = -2147482880;
    goto LABEL_26;
  }
  if ( LowPart == 2228227 )
  {
    SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
    v22 = WORD1(SecurityContext->SecurityQos);
    if ( (unsigned __int16)(v22 - 9) <= 1u || (unsigned __int16)(v22 - 57) <= 1u )
      goto LABEL_105;
    if ( v22 > 0x2Au )
    {
      if ( v22 < 0x30u )
        goto LABEL_105;
      if ( v22 <= 0x31u )
      {
LABEL_53:
        v24 = HUBPDO_ValidateURB(v4, (unsigned __int16 *)CurrentStackLocation->Parameters.Create.SecurityContext, 5LL);
        Status = v24;
        if ( v24 >= 0 )
        {
          if ( v24 != 128 )
          {
            v11 = (*(_DWORD *)(*(_QWORD *)(v7 + 24) + 1632LL) & 2) != 0 ? 5 : 3;
            goto LABEL_26;
          }
          goto LABEL_86;
        }
LABEL_42:
        v11 = 2;
        goto LABEL_26;
      }
      if ( v22 <= 0x34u )
      {
LABEL_105:
        SecurityContext->AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v4 + 24) + 24LL);
        goto LABEL_16;
      }
      if ( v22 <= 0x36u )
      {
        SecurityContext->AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v4 + 24) + 24LL);
        goto LABEL_10;
      }
      v23 = v22 == 59;
LABEL_52:
      if ( v23 )
        goto LABEL_53;
      goto LABEL_105;
    }
    if ( v22 != 42 )
    {
      if ( v22 <= 1u )
        goto LABEL_53;
      v8 = 11LL;
      if ( v22 != 11 )
      {
        if ( v22 != 19 )
        {
          v23 = v22 == 30;
          goto LABEL_52;
        }
        v25 = *(_QWORD *)(v4 + 24);
        if ( (*(_DWORD *)(v25 + 1632) & 0x80000) == 0 )
          goto LABEL_105;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v26 = 60;
          v27 = 4;
LABEL_59:
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(v25 + 8) + 1432LL),
            v27,
            5u,
            v26,
            (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids);
          goto LABEL_60;
        }
        goto LABEL_60;
      }
      v28 = *(_QWORD *)(v4 + 24);
      if ( *(_WORD *)(v28 + 1990) <= 0x200u )
      {
        SecurityContext->AccessState = *(_ACCESS_STATE **)(v28 + 24);
        goto LABEL_16;
      }
      Status = HUBPDO_ValidateURB(v7, (unsigned __int16 *)CurrentStackLocation->Parameters.Create.SecurityContext, 5LL);
      if ( (Status & 0x80000000) != 0 )
        goto LABEL_42;
      SecurityQos = SecurityContext[2].SecurityQos;
      if ( SecurityQos )
      {
        if ( (*(&SecurityQos->EffectiveOnly + 1) & 5) != 0 )
          v8 = *(_QWORD *)&SecurityQos[2].Length;
        else
          v8 = (__int64)MmMapLockedPagesSpecifyCache(
                          (PMDL)SecurityQos,
                          0,
                          MmCached,
                          0LL,
                          0,
                          ExDefaultMdlProtection | 0x10u);
      }
      else
      {
        v8 = *(_QWORD *)&SecurityContext[1].DesiredAccess;
      }
      if ( !v8 )
      {
        Status = -1073741811;
        HIDWORD(SecurityContext->SecurityQos) = -2147482880;
        goto LABEL_42;
      }
      if ( BYTE3(SecurityContext[5].AccessState) == 1 )
      {
        AccessState_high = HIDWORD(SecurityContext[1].AccessState);
        v31 = (unsigned __int16 *)(*(_QWORD *)(v7 + 24) + 1988LL);
        if ( AccessState_high > 0x12 )
          AccessState_high = 18;
      }
      else
      {
        if ( BYTE3(SecurityContext[5].AccessState) != 2 )
        {
          SecurityContext->AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v7 + 24) + 24LL);
LABEL_74:
          Status = 0;
          v11 = 1;
          goto LABEL_26;
        }
        v30 = *(_QWORD *)(v7 + 24);
        if ( BYTE2(SecurityContext[5].AccessState) )
        {
          SecurityContext->AccessState = *(_ACCESS_STATE **)(v30 + 24);
          goto LABEL_74;
        }
        v31 = *(unsigned __int16 **)(v30 + 2016);
        AccessState_high = v31[1];
        if ( AccessState_high >= HIDWORD(SecurityContext[1].AccessState) )
          AccessState_high = HIDWORD(SecurityContext[1].AccessState);
      }
      LODWORD(SecurityContext[1].AccessState) |= 1u;
      if ( ((__int64)SecurityContext[1].AccessState & 8) != 0 )
        WORD1(SecurityContext->SecurityQos) = 8;
      v33 = AccessState_high;
LABEL_85:
      memmove((void *)v8, v31, v33);
      HIDWORD(SecurityContext[1].AccessState) = AccessState_high;
LABEL_86:
      Status = 0;
      goto LABEL_42;
    }
    v25 = *(_QWORD *)(v4 + 24);
    if ( WORD2(SecurityContext[5].AccessState) != 7 )
    {
      if ( (unsigned __int16)(*(_WORD *)(v25 + 1990) - 256) > 0xFFu && (*(_DWORD *)(v25 + 1632) & 0x80u) == 0
        || (*(_DWORD *)(v25 + 1644) & 2) != 0 )
      {
        BYTE1(SecurityContext[5].AccessState) = *(_BYTE *)(v25 + 2052);
        goto LABEL_105;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = 59;
        v27 = 3;
        goto LABEL_59;
      }
LABEL_60:
      Status = -1073741637;
      goto LABEL_42;
    }
    if ( (*(_DWORD *)(v25 + 2464) & 2) != 0 )
    {
      v34 = SecurityContext[2].SecurityQos;
      if ( v34 )
      {
        if ( (*(&v34->EffectiveOnly + 1) & 5) != 0 )
          v8 = *(_QWORD *)&v34[2].Length;
        else
          v8 = (__int64)MmMapLockedPagesSpecifyCache((PMDL)v34, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10u);
      }
      else
      {
        v8 = *(_QWORD *)&SecurityContext[1].DesiredAccess;
      }
      if ( !v8 )
        goto LABEL_60;
      v31 = *(unsigned __int16 **)(*(_QWORD *)(v7 + 24) + 2488LL);
      v35 = v31[4];
      if ( v35 >= HIDWORD(SecurityContext[1].AccessState) )
        v35 = HIDWORD(SecurityContext[1].AccessState);
      AccessState_high = v35;
      v33 = v35;
      goto LABEL_85;
    }
LABEL_89:
    Status = -1073741637;
    goto LABEL_14;
  }
  if ( LowPart > 0x22043B )
  {
    if ( LowPart > 0x49000B )
    {
      if ( LowPart == 4788291 )
      {
        v50 = CurrentStackLocation->Parameters.Create.SecurityContext;
        v50->SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)(*(_QWORD *)(v4 + 16) + 2448LL);
        v51 = *(_QWORD *)(v4 + 24);
        *(_OWORD *)&v50->AccessState = *(_OWORD *)(v51 + 1988);
        LOWORD(v50[1].SecurityQos) = *(_WORD *)(v51 + 2004);
        WORD1(v50[1].SecurityQos) = *(_WORD *)(*(_QWORD *)(v7 + 24) + 2192LL);
        WORD2(v50[1].SecurityQos) = *(_WORD *)(*(_QWORD *)(v7 + 24) + 2194LL);
        v50[2].AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v7 + 24) + 2568LL);
        v50[2].DesiredAccess = *(_DWORD *)(*(_QWORD *)(v7 + 24) + 2576LL);
        BYTE2(v50[1].DesiredAccess) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) + 202LL);
        HIWORD(v50[1].AccessState) = *(_WORD *)(*(_QWORD *)(v7 + 24) + 2202LL);
        LOWORD(v50[1].DesiredAccess) = *(_WORD *)(*(_QWORD *)(v7 + 24) + 2204LL);
        v8 = *(_QWORD *)(v7 + 16);
        LOWORD(v50[1].FullCreateOptions) = *(_WORD *)(*(_QWORD *)(v7 + 24) + 2582LL)
                                         + *(_WORD *)(v8 + 1188)
                                         + *(_WORD *)(v8 + 2492);
        v52 = *(_QWORD *)(v7 + 24);
        if ( (*(_DWORD *)(v52 + 2216) & 1) != 0 )
        {
          HIWORD(v50[1].SecurityQos) = *(unsigned __int8 *)(v52 + 2197);
          v53 = *(_BYTE *)(*(_QWORD *)(v7 + 16) + 240LL);
        }
        else
        {
          HIWORD(v50[1].SecurityQos) = *(_WORD *)(v8 + 2478);
          v53 = *(_BYTE *)(v8 + 2480);
        }
        LOBYTE(v50[1].AccessState) = v53;
        v54 = *(_QWORD *)(v7 + 24);
        if ( (*(_DWORD *)(v54 + 2216) & 2) != 0 )
        {
          WORD1(v50[1].AccessState) = *(_WORD *)(v54 + 2200);
          v55 = *(_BYTE *)(*(_QWORD *)(v7 + 16) + 240LL);
        }
        else
        {
          WORD1(v50[1].AccessState) = *(_WORD *)(v8 + 2482);
          v55 = *(_BYTE *)(v8 + 2484);
        }
        BYTE4(v50[1].AccessState) = v55;
        v56 = *(_DWORD *)(v8 + 2496);
        if ( (v56 & 1) != 0 )
        {
          LODWORD(v50[2].SecurityQos) |= 1u;
          v56 = *(_DWORD *)(v8 + 2496);
        }
        if ( (v56 & 4) != 0 )
          LODWORD(v50[2].SecurityQos) |= 4u;
        if ( (*(_DWORD *)(*(_QWORD *)(v7 + 24) + 1632LL) & 0x2000) != 0 )
          LODWORD(v50[2].SecurityQos) |= 2u;
        v9 = 8LL;
        if ( (*(_DWORD *)(*(_QWORD *)(v7 + 16) + 44LL) & 8) != 0 || (*(_DWORD *)(v8 + 2496) & 8) != 0 )
          LODWORD(v50[2].SecurityQos) |= 8u;
        goto LABEL_14;
      }
      if ( LowPart == 4788299 )
      {
        v47 = CurrentStackLocation->Parameters.Create.SecurityContext;
        v11 = 1;
        Source1 = *(_OWORD *)&v47->DesiredAccess;
        HIDWORD(v47[1].AccessState) = 0;
        if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_FUNCTION_SUSPEND, 0x10uLL) == 16 )
        {
          v48 = -((*(_DWORD *)(*(_QWORD *)(v7 + 24) + 1456LL) & 0x10000) != 0);
        }
        else
        {
          if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_STATIC_STREAMS, 0x10uLL) == 16 )
          {
            Status = (*(_DWORD *)(*(_QWORD *)(v7 + 24) + 1456LL) & 0x10000) != 0 ? 0xC00000BB : 0;
            v11 = ((*(_DWORD *)(*(_QWORD *)(v7 + 24) + 1456LL) & 0x10000) != 0) + 1;
            goto LABEL_26;
          }
          if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_SUPER_SPEED_COMPATIBLE, 0x10uLL) == 16 )
          {
            v49 = *(_DWORD *)(*(_QWORD *)(v7 + 24) + 1456LL) & 0x800;
          }
          else if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_HIGH_SPEED_COMPATIBLE, 0x10uLL) == 16 )
          {
            v49 = *(_DWORD *)(*(_QWORD *)(v7 + 24) + 1456LL) & 0x900;
          }
          else
          {
            if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_FULL_SPEED_COMPATIBLE, 0x10uLL) != 16 )
            {
              if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_LOW_SPEED_COMPATIBLE, 0x10uLL) == 16 )
              {
                v11 = 2;
              }
              else if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_SSP_ISOCH_PIPE_FLAGS, 0x10uLL) == 16 )
              {
                v11 = 2;
              }
              goto LABEL_26;
            }
            v49 = *(_DWORD *)(*(_QWORD *)(v7 + 24) + 1456LL) & 0xB00;
          }
          v48 = -(v49 == 0);
        }
        v11 = 2;
        Status = v48 & 0xC00000BB;
        goto LABEL_26;
      }
      if ( LowPart != 4788303 )
      {
        switch ( LowPart )
        {
          case 0x491404u:
            a2->AssociatedIrp.MasterIrp->AssociatedIrp.MasterIrp = *(_IRP **)(*(_QWORD *)(v4 + 24) + 24LL);
            goto LABEL_16;
          case 0x491408u:
LABEL_16:
            v11 = 1;
            goto LABEL_26;
          case 0x49140Fu:
            *(_QWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 8) = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 24LL);
            goto LABEL_16;
        }
        goto LABEL_205;
      }
    }
    else if ( LowPart != 4784139 )
    {
      switch ( LowPart )
      {
        case 0x22043Fu:
          v44 = CurrentStackLocation->Parameters.Create.SecurityContext;
          if ( v44 )
          {
            v45 = *(_QWORD *)(v4 + 16);
            *(_OWORD *)&v44->SecurityQos = *(_OWORD *)(v45 + 304);
            *(_OWORD *)&v44->DesiredAccess = *(_OWORD *)(v45 + 320);
            v46 = *(_WORD *)(v7 + 48);
            v9 = *(unsigned __int8 *)(*(_QWORD *)(v7 + 16) + 240LL);
            if ( (_BYTE)v9 )
              *((_WORD *)&v44->DesiredAccess + v9) = v46;
            else
              LOWORD(v44->DesiredAccess) = v46;
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
                3u,
                5u,
                0xBu,
                (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids);
            Status = -1073741811;
          }
          goto LABEL_42;
        case 0x220443u:
          goto LABEL_89;
        case 0x22044Fu:
          ControllerSuffix = HUBPDO_ReturnDeviceConfigInfo(v4, (__int64)a2);
          goto LABEL_124;
        case 0x220FB3u:
          if ( (*(_DWORD *)(v4 + 32) & 1) == 0 )
          {
            Status = -1073741101;
            v11 = 2;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_26;
            v37 = 65;
            goto LABEL_145;
          }
          if ( KeGetCurrentIrql() <= 2u )
          {
            v11 = 5;
            goto LABEL_26;
          }
          Status = -1073741811;
          v11 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v37 = 66;
            goto LABEL_145;
          }
          goto LABEL_26;
        case 0x220FBBu:
          v43 = *(_QWORD *)(v4 + 24);
          if ( (*(_DWORD *)(v43 + 1644) & 0x1000000) == 0 )
          {
            Status = -1073741275;
            goto LABEL_42;
          }
          ControllerSuffix = HUBMISC_GenerateControllerSuffix(
                               v43,
                               CurrentStackLocation->Parameters.WMI.ProviderId,
                               5LL,
                               &WPP_RECORDER_INITIALIZED);
          goto LABEL_124;
        case 0x490003u:
          v42 = CurrentStackLocation->Parameters.Create.SecurityContext;
          CurrentStackLocation->Parameters.QueryDirectory.FileName = *(_UNICODE_STRING **)(*(_QWORD *)(v7 + 24) + 24LL);
          if ( (v42->DesiredAccess & 1) != 0 )
            _InterlockedOr((volatile signed __int32 *)(v7 + 32), 0x10u);
          goto LABEL_16;
      }
      if ( LowPart != 4784135 )
        goto LABEL_205;
    }
    CurrentStackLocation->Parameters.QueryDirectory.FileName = *(_UNICODE_STRING **)(*(_QWORD *)(v4 + 24) + 24LL);
    goto LABEL_16;
  }
  if ( LowPart == 2229307 )
    goto LABEL_89;
  if ( LowPart > 0x220027 )
  {
    switch ( LowPart )
    {
      case 0x22002Bu:
        ControllerSuffix = HUBPDO_RecordFailure(v4, (__int64)a2);
        goto LABEL_124;
      case 0x220420u:
        ControllerSuffix = HUBUCX_GetDeviceBusInfo(
                             *(_QWORD *)(v4 + 16),
                             *(_QWORD *)(*(_QWORD *)(v4 + 24) + 24LL),
                             CurrentStackLocation->Parameters.WMI.ProviderId,
                             &WPP_RECORDER_INITIALIZED);
        goto LABEL_124;
      case 0x220424u:
        ControllerSuffix = HUBUCX_GetControllerName(
                             *(_QWORD *)(v4 + 16),
                             CurrentStackLocation->Parameters.WMI.ProviderId,
                             CurrentStackLocation->Parameters.Create.Options,
                             &WPP_RECORDER_INITIALIZED);
        goto LABEL_124;
      case 0x22042Cu:
        goto LABEL_89;
      case 0x220433u:
        v11 = 2;
        Status = CurrentStackLocation->Parameters.WMI.ProviderId == 0 ? 0xC000000D : 0;
        goto LABEL_26;
      case 0x220437u:
        goto LABEL_89;
    }
LABEL_205:
    Status = a2->IoStatus.Status;
    goto LABEL_14;
  }
  switch ( LowPart )
  {
    case 0x220027u:
      Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
      if ( !Parameters || !*(_QWORD *)&Parameters->NamedPipeType )
      {
        Status = -1073741224;
        v11 = 2;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          break;
        v37 = 69;
        goto LABEL_145;
      }
      v76 = 0LL;
      if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
        (*(void (__fastcall **)(IRP *, GUID *, __int64, _UNKNOWN **))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(
          a2,
          &v76,
          5LL,
          &WPP_RECORDER_INITIALIZED);
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
        McTemplateK0p_EtwWriteTransfer(
          v5,
          &USBHUB3_ETW_EVENT_DEVICE_SUBMIT_IDLE_NOTIFICATION_START,
          &v76,
          *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL));
      Status = HUBIDLE_AddEvent(v7 + 72, 6003LL, a2);
      v11 = 6;
      break;
    case 0x220007u:
      if ( (*(_DWORD *)(v4 + 32) & 1) == 0 )
      {
        Status = -1073741101;
        v11 = 2;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          break;
        v37 = 63;
        goto LABEL_145;
      }
      if ( !KeGetCurrentIrql() )
        goto LABEL_10;
      Status = -1073741811;
      v11 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v37 = 64;
        goto LABEL_145;
      }
      break;
    case 0x22000Fu:
      goto LABEL_89;
    case 0x220013u:
      if ( KeGetCurrentIrql() )
      {
        Status = -1073741811;
        v11 = 2;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          break;
        v39 = 61;
LABEL_137:
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) + 1432LL),
          2u,
          5u,
          v39,
          (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids);
        break;
      }
      v40 = CurrentStackLocation->Parameters.Create.SecurityContext;
      if ( v40 )
      {
        LODWORD(v40->SecurityQos) = 0;
        v11 = 4;
        CurrentStackLocation->Parameters.QueryDirectory.FileName = (_UNICODE_STRING *)v7;
        break;
      }
      Status = -1073741811;
      v11 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v39 = 62;
        goto LABEL_137;
      }
      break;
    case 0x220017u:
    case 0x22001Bu:
      goto LABEL_14;
    case 0x22001Fu:
      v11 = 2;
      if ( KeGetCurrentIrql() )
      {
        Status = -1073741811;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          break;
        v37 = 67;
        goto LABEL_145;
      }
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v4 + 4), 1, 0) )
      {
        v38 = *(_QWORD *)(v4 + 24);
        if ( (*(_DWORD *)(v38 + 2436) & 0x400) != 0 )
        {
          HUBMISC_VerifierDbgBreak("DeviceHwVerifierClientInitiatedCyclePort", v38 + 504);
          v38 = *(_QWORD *)(v7 + 24);
        }
        EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper(v38, 2228255LL, 0LL);
        HUBSM_AddEvent(*(_QWORD *)(v7 + 24) + 504LL, 4011);
        break;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        break;
      v37 = 68;
LABEL_145:
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) + 1432LL),
        3u,
        5u,
        v37,
        (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids);
      break;
    case 0x220020u:
      ControllerSuffix = HUBPDO_GetHubName(v4, a2);
LABEL_124:
      Status = ControllerSuffix;
      goto LABEL_42;
    default:
      goto LABEL_205;
  }
LABEL_26:
  v14 = v11 - 1;
  if ( !v14 )
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v7 + 8), a2);
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *, __int64))(WdfFunctions_01015 + 1616))(
                        WdfDriverGlobals,
                        WdfDriverGlobals->Driver,
                        off_1C00661C0,
                        v8)
                    + 4) & 0x1000) != 0 )
    {
      v75 = 0LL;
      if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
        (*(void (__fastcall **)(IRP *, GUID *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(a2, &v75);
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
      {
        LODWORD(v69) = LowPart;
        McTemplateK0pq_EtwWriteTransfer(
          v66,
          &USBHUB3_ETW_EVENT_DEVICE_INTERNAL_IOCTL_START,
          &v75,
          *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL),
          v69);
      }
      if ( LowPart == 2228227 )
      {
        v67 = CurrentStackLocation->Parameters.Create.SecurityContext;
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) == 0 )
          goto LABEL_263;
        LODWORD(v69) = WORD1(v67->SecurityQos);
        McTemplateK0pq_EtwWriteTransfer(
          v66,
          &USBHUB3_ETW_EVENT_DEVICE_URB_START,
          &v75,
          *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL),
          v69);
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) == 0 )
          goto LABEL_263;
        Priority[0] = HIDWORD(v67->SecurityQos);
        LODWORD(v70) = WORD1(v67->SecurityQos);
        McTemplateK0pqq_EtwWriteTransfer(
          WORD1(v67->SecurityQos),
          &USBHUB3_ETW_EVENT_DEVICE_URB_COMPLETE,
          &v75,
          *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL),
          v70,
          *(_QWORD *)Priority);
      }
      if ( LowPart != 4788299 )
        goto LABEL_261;
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
      {
        Priority[0] = Status;
        McTemplateK0pjq_EtwWriteTransfer(
          v66,
          v65,
          &v75,
          *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL),
          &Source1,
          *(_QWORD *)Priority);
LABEL_261:
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
        {
          Priority[0] = Status;
          LODWORD(v69) = LowPart;
          McTemplateK0pqq_EtwWriteTransfer(
            v66,
            &USBHUB3_ETW_EVENT_DEVICE_INTERNAL_IOCTL_COMPLETE,
            &v75,
            *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL),
            v69,
            *(_QWORD *)Priority);
        }
      }
    }
LABEL_263:
    a2->IoStatus.Status = Status;
    goto LABEL_264;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    v62 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v62[-1].MajorFunction = *(_OWORD *)&v62->MajorFunction;
    *(_OWORD *)&v62[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v62->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v62[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v62->Parameters.SetQuota + 6);
    v62[-1].FileObject = v62->FileObject;
    v62[-1].Control = 0;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v63 = a2->Tail.Overlay.CurrentStackLocation;
    v63[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))HUBPDO_SyncCompletionRoutine;
    v63[-1].Context = &Event;
    v63[-1].Control = -32;
    v64 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 736))(WdfDriverGlobals, a1);
    v59 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *, __int64, int))(WdfFunctions_01015 + 3216))(
            WdfDriverGlobals,
            a1,
            a2,
            v64,
            2);
    if ( v59 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_245;
    v60 = 71;
    v61 = 3;
    goto LABEL_244;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v57 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v57[-1].MajorFunction = *(_OWORD *)&v57->MajorFunction;
    *(_OWORD *)&v57[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v57->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v57[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v57->Parameters.SetQuota + 6);
    v57[-1].FileObject = v57->FileObject;
    v57[-1].Control = 0;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v58 = a2->Tail.Overlay.CurrentStackLocation;
    v58[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))HUBPDO_SyncCompletionRoutine;
    v58[-1].Context = &Event;
    v58[-1].Control = -32;
    v59 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *, _QWORD, int))(WdfFunctions_01015 + 3216))(
            WdfDriverGlobals,
            a1,
            a2,
            *(_QWORD *)(*(_QWORD *)(v7 + 16) + 2400LL),
            2);
    if ( v59 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_245;
    v60 = 70;
    v61 = 2;
LABEL_244:
    Priority[0] = v59;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) + 1432LL),
      v61,
      5u,
      v60,
      (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids,
      *(_QWORD *)Priority);
LABEL_245:
    HUBMISC_WaitForSignal(&Event);
    Status = a2->IoStatus.Status;
LABEL_264:
    IofCompleteRequest(a2, 0);
    return Status;
  }
  if ( v17 == 1 )
  {
    v18 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v18[-1].MajorFunction = *(_OWORD *)&v18->MajorFunction;
    *(_OWORD *)&v18[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v18->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v18[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v18->Parameters.SetQuota + 6);
    v18[-1].FileObject = v18->FileObject;
    v18[-1].Control = 0;
    v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 736))(
            WdfDriverGlobals,
            a1,
            v9,
            v8);
    return (unsigned int)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *, __int64, int))(WdfFunctions_01015 + 3216))(
                           WdfDriverGlobals,
                           a1,
                           a2,
                           v19,
                           2);
  }
  return Status;
}
