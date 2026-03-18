/*
 * XREFs of HUBSM_FindAndSetTargetState @ 0x1C0009F9C
 * Callers:
 *     HUBSM_RunStateMachine @ 0x1C000B50C (HUBSM_RunStateMachine.c)
 * Callees:
 *     HUBHTX_CompleteGetPortStatusWithFailedStatus @ 0x1C0005F24 (HUBHTX_CompleteGetPortStatusWithFailedStatus.c)
 *     McTemplateK0ppqqqq_EtwWriteTransfer @ 0x1C0009C84 (McTemplateK0ppqqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C0009D34 (WPP_RECORDER_SF_qLL.c)
 *     WPP_RECORDER_SF_qLLL @ 0x1C0009E2C (WPP_RECORDER_SF_qLLL.c)
 *     HUBFDO_CompleteGetDescriptorRequest @ 0x1C000D7A4 (HUBFDO_CompleteGetDescriptorRequest.c)
 *     HUBMISC_DbgBreak @ 0x1C002FC54 (HUBMISC_DbgBreak.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0042D40 (memset.c)
 */

char __fastcall HUBSM_FindAndSetTargetState(__int64 a1, int a2, _BYTE *a3)
{
  __int64 v3; // r13
  __int64 v5; // rcx
  unsigned int v7; // r12d
  char v8; // bp
  __int64 v9; // r9
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 v12; // r8
  int v13; // eax
  _BYTE *v14; // r10
  struct _KEVENT *v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // ecx
  __int64 v20; // rdx
  unsigned __int16 v21; // r9
  __int64 v22; // rcx
  _QWORD *v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rax
  int v26; // eax
  int v27; // esi
  unsigned __int16 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // eax
  unsigned __int16 v32; // r9
  __int64 v33; // rax
  unsigned int v34; // edx
  int v36; // [rsp+20h] [rbp-68h]
  __int64 v37; // [rsp+28h] [rbp-60h]
  __int64 v38; // [rsp+30h] [rbp-58h]
  __int64 v39; // [rsp+38h] [rbp-50h]
  __int64 v40; // [rsp+40h] [rbp-48h]
  int v41; // [rsp+90h] [rbp+8h]
  __int64 v43; // [rsp+A8h] [rbp+20h]

  LODWORD(v3) = *(_DWORD *)(a1 + 880);
  v5 = *(_QWORD *)(a1 + 976);
  *a3 = 0;
  v7 = v3;
  v43 = v5;
  v8 = 1;
  v41 = *(_DWORD *)(a1 + 984);
  while ( 1 )
  {
    v9 = v7;
    v10 = 0LL;
    v11 = 1002;
    v12 = *(_QWORD *)(v5 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4LL * v7 + 852) - *(_DWORD *)(a1 + 984)));
    v13 = *(_DWORD *)(v12 + 32);
    if ( v13 != 1000 )
    {
      v5 = 0LL;
      while ( a2 != v13 )
      {
        v10 = (unsigned int)(v10 + 1);
        v5 = (unsigned int)v10;
        v13 = *(_DWORD *)(v12 + 8 * v10 + 32);
        if ( v13 == 1000 )
          goto LABEL_8;
      }
      v11 = *(_DWORD *)(v12 + 8 * v5 + 36);
      if ( v11 != 1002 )
        break;
LABEL_8:
      v5 = v43;
    }
    if ( !v7 )
      break;
    --v7;
  }
  v14 = a3;
  if ( v11 > 0x3EE )
  {
    switch ( v11 )
    {
      case 0x3EFu:
        v34 = -1073741630;
        break;
      case 0x3F0u:
        v34 = -1073741810;
        break;
      case 0x3F1u:
        v15 = (struct _KEVENT *)(*(_QWORD *)(a1 + 960) + 1608LL);
        goto LABEL_19;
      case 0x3F2u:
        v15 = (struct _KEVENT *)(*(_QWORD *)(a1 + 960) + 1584LL);
        goto LABEL_19;
      default:
        goto LABEL_43;
    }
    HUBHTX_CompleteGetPortStatusWithFailedStatus(*(_QWORD *)(a1 + 960), v34);
    return 0;
  }
  switch ( v11 )
  {
    case 0x3EEu:
      v23 = *(_QWORD **)(a1 + 960);
      v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
              WdfDriverGlobals,
              v23[62]);
      memset((void *)(*(_QWORD *)(v24 + 184) - 72LL), 0, 0x48uLL);
      *(_DWORD *)(v24 + 48) = -1073741823;
      HUBFDO_CompleteGetDescriptorRequest(*v23, *(unsigned __int16 *)(v23[1] + 200LL), v23[62], -1073741823, 0);
      v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(
              WdfDriverGlobals,
              v23);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1648))(
        WdfDriverGlobals,
        v25,
        "User Mode FDO Request",
        579LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c");
      return 0;
    case 0x3E8u:
      return 0;
    case 0x3EAu:
      v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              WdfDriverGlobals->Driver,
              off_1C00661C0);
      v19 = *(_DWORD *)(a1 + 984);
      v20 = v17;
      switch ( v19 )
      {
        case 2000:
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_36;
          v21 = 11;
          break;
        case 3000:
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_36;
          v21 = 12;
          break;
        case 4000:
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_36;
          v21 = 10;
          break;
        default:
          if ( v19 != 5000 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
LABEL_36:
            HUBMISC_DbgBreak("Unhandled Event", v20);
            if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
            {
              v22 = (unsigned int)(*(_DWORD *)(a1 + 852) - *(_DWORD *)(a1 + 984));
              LODWORD(v37) = *(_DWORD *)(a1 + 984);
              McTemplateK0ppqqqq_EtwWriteTransfer(
                v22,
                &USBHUB3_ETW_EVENT_UNHANDLED_STATE_MACHINE_EVENT,
                (const GUID *)(a1 + 1012),
                *(_QWORD *)(a1 + 1032),
                *(_QWORD *)(a1 + 960),
                v37,
                **(_DWORD **)(*(_QWORD *)(a1 + 976) + 8LL * (unsigned int)v22),
                a2,
                0);
            }
            return 0;
          }
          v21 = 13;
          break;
      }
      v37 = *(_QWORD *)(a1 + 960);
      WPP_RECORDER_SF_qLL(*(_QWORD *)(v17 + 64), v17, v18, v21, v36);
      goto LABEL_36;
    case 0x3EBu:
      v16 = *(_QWORD *)(a1 + 960);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 2104))(
        WdfDriverGlobals,
        *(_QWORD *)(v16 + 456),
        3221225473LL);
      if ( (*(_DWORD *)(v16 + 1636) & 0x40) != 0 )
      {
        *(_OWORD *)(a1 + 1012) = 0LL;
        _InterlockedAnd((volatile signed __int32 *)(v16 + 1636), 0xFFFFFFBF);
      }
      return 0;
    case 0x3ECu:
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 8LL) + 1240LL))(
        *(_QWORD *)(*(_QWORD *)(a1 + 960) + 8LL),
        3011LL);
      return 0;
    case 0x3EDu:
      v15 = (struct _KEVENT *)(*(_QWORD *)(a1 + 960) + 472LL);
LABEL_19:
      KeSetEvent(v15, 0, 0);
      return 0;
  }
LABEL_43:
  if ( v7 >= (unsigned int)v3 )
    goto LABEL_61;
  do
  {
    v26 = *(_DWORD *)(a1 + 984);
    v3 = (unsigned int)(v3 - 1);
    v27 = *(_DWORD *)(a1 + 4 * v3 + 852);
    switch ( v26 )
    {
      case 2000:
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_57;
        v28 = 16;
        goto LABEL_56;
      case 3000:
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_57;
        v28 = 17;
        goto LABEL_56;
      case 4000:
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_57;
        v28 = 15;
        goto LABEL_56;
    }
    if ( v26 == 5000 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v28 = 18;
LABEL_56:
      v37 = *(_QWORD *)(a1 + 960);
      WPP_RECORDER_SF_qLLL(v5, v10, v12, v28, v36);
    }
LABEL_57:
    *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v27;
    *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v3;
    v29 = *(unsigned __int8 *)(a1 + 832);
    v5 = 3 * v29;
    *(_DWORD *)(a1 + 12 * v29) = 1000;
    *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
    if ( SBYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
    {
      LODWORD(v40) = v3;
      LODWORD(v39) = 1000;
      LODWORD(v38) = **(_DWORD **)(*(_QWORD *)(a1 + 976) + 8LL * (unsigned int)(v27 - *(_DWORD *)(a1 + 984)));
      LODWORD(v37) = *(_DWORD *)(a1 + 984);
      McTemplateK0ppqqqq_EtwWriteTransfer(
        v5,
        &USBHUB3_ETW_EVENT_STATE_MACHINE,
        (const GUID *)(a1 + 1012),
        *(_QWORD *)(a1 + 1032),
        *(_QWORD *)(a1 + 960),
        v37,
        v38,
        v39,
        v40);
    }
  }
  while ( (unsigned int)v3 > v7 );
  v14 = a3;
  v9 = v7;
LABEL_61:
  v30 = *(_QWORD *)(v43 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4 * v9 + 852) - v41));
  if ( (*(_DWORD *)(v30 + 16) & 0x40) != 0 )
    *v14 = 1;
  *(_DWORD *)(a1 + 4 * v9 + 852) = v11;
  v31 = *(_DWORD *)(a1 + 984);
  *(_DWORD *)(a1 + 880) = v7;
  switch ( v31 )
  {
    case 2000:
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_76;
      v32 = 16;
      goto LABEL_75;
    case 3000:
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_76;
      v32 = 17;
      goto LABEL_75;
    case 4000:
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_76;
      v32 = 15;
LABEL_75:
      v37 = *(_QWORD *)(a1 + 960);
      WPP_RECORDER_SF_qLLL(v30, v10, v12, v32, v36);
      goto LABEL_76;
  }
  if ( v31 == 5000 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v32 = 18;
    goto LABEL_75;
  }
LABEL_76:
  *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v11;
  *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v7;
  v33 = *(unsigned __int8 *)(a1 + 832);
  *(_DWORD *)(a1 + 12 * v33) = a2;
  *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
  if ( SBYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
  {
    LODWORD(v40) = v7;
    LODWORD(v39) = a2;
    LODWORD(v38) = **(_DWORD **)(*(_QWORD *)(a1 + 976) + 8LL * (v11 - *(_DWORD *)(a1 + 984)));
    LODWORD(v37) = *(_DWORD *)(a1 + 984);
    McTemplateK0ppqqqq_EtwWriteTransfer(
      3 * v33,
      &USBHUB3_ETW_EVENT_STATE_MACHINE,
      (const GUID *)(a1 + 1012),
      *(_QWORD *)(a1 + 1032),
      *(_QWORD *)(a1 + 960),
      v37,
      v38,
      v39,
      v40);
  }
  if ( *(_BYTE *)(a1 + 1049) )
    HUBMISC_DbgBreak("Break On State Transition", v10);
  return v8;
}
