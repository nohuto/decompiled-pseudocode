/*
 * XREFs of HUBHTX_Get20PortChangeEvent @ 0x1C00045EC
 * Callers:
 *     HUBPSM20_EnablingInterruptsAndGettingPortEvent @ 0x1C0011430 (HUBPSM20_EnablingInterruptsAndGettingPortEvent.c)
 *     HUBPSM20_GettingPortChangeEventInSuspended @ 0x1C00116F0 (HUBPSM20_GettingPortChangeEventInSuspended.c)
 * Callees:
 *     McTemplateK0qhhhqhhh_EtwWriteTransfer @ 0x1C0001E7C (McTemplateK0qhhhqhhh_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dDDD @ 0x1C0002984 (WPP_RECORDER_SF_dDDD.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002FCD4 (HUBMISC_VerifierDbgBreak.c)
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C0031834 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_Get20PortChangeEvent(__int64 a1)
{
  _QWORD *v1; // r14
  _WORD *v2; // rax
  int v3; // ebx
  int v4; // esi
  int v5; // edi
  __int16 v6; // r13
  __int16 v7; // r12
  __int16 v8; // r15
  unsigned int v9; // ebp
  __int64 v10; // rdx
  unsigned __int16 v11; // r9
  __int64 v13; // [rsp+28h] [rbp-60h]
  __int64 v14; // [rsp+30h] [rbp-58h]
  __int64 v15; // [rsp+38h] [rbp-50h]
  __int64 v16; // [rsp+40h] [rbp-48h]

  v1 = (_QWORD *)a1;
  if ( *(_BYTE *)(a1 + 1457) )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
      WdfDriverGlobals,
      *(_QWORD *)(*(_QWORD *)a1 + 16LL),
      0LL,
      3056LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c");
    *((_BYTE *)v1 + 1457) = 0;
  }
  v2 = (_WORD *)v1[166];
  v3 = *((unsigned __int16 *)v1 + 92);
  v4 = *((unsigned __int16 *)v1 + 96);
  v5 = *((unsigned __int16 *)v1 + 97);
  *((_WORD *)v1 + 96) = v3;
  if ( v2 )
    v6 = v2[998];
  else
    LOBYTE(v6) = 0;
  if ( v2 )
    v7 = v2[999];
  else
    LOBYTE(v7) = 0;
  if ( v2 )
    v8 = v2[1000];
  else
    LOBYTE(v8) = 0;
  v9 = 3041;
  v10 = 4LL;
  if ( (v3 & 8) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*v1, 4LL, &WPP_RECORDER_INITIALIZED);
LABEL_14:
    v9 = 3065;
    *((_DWORD *)v1 + 356) = 4;
LABEL_15:
    if ( (*(_DWORD *)(*v1 + 2592LL) & 0x200) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", v1 + 34);
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      McTemplateK0qhhhqhhh_EtwWriteTransfer(
        a1,
        v10,
        (const GUID *)(*v1 + 2412LL),
        *((unsigned __int16 *)v1 + 100),
        v4,
        v3,
        v5,
        v9,
        v6,
        v7,
        v8);
    goto LABEL_55;
  }
  if ( (v5 & 8) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*v1, 4LL, &WPP_RECORDER_INITIALIZED);
    if ( (v4 & 8) != 0 )
      goto LABEL_15;
    goto LABEL_14;
  }
  if ( (v3 & 0x100) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_55;
    v11 = 72;
    goto LABEL_25;
  }
  if ( (v5 & 1) != 0 || (a1 = (unsigned __int16)v3, LOWORD(a1) = v3 & 1, (_WORD)a1 != (v4 & 1)) )
  {
    v9 = 3017;
    goto LABEL_55;
  }
  if ( (v3 & 0x10) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_55;
    v11 = 73;
    goto LABEL_25;
  }
  if ( (v3 & 1) == 0 )
  {
    if ( (v3 & 2) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_55;
      v11 = 74;
    }
    else
    {
      if ( (v3 & 4) == 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_55;
      v11 = 75;
    }
LABEL_25:
    WPP_RECORDER_SF_(v1[179], 2u, 4u, v11, (__int64)&WPP_48f9d914ad953e47f49793ea568006bd_Traceguids);
    goto LABEL_55;
  }
  if ( (v5 & 0x10) != 0 )
  {
    if ( (v3 & 2) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_55;
      v11 = 76;
      goto LABEL_25;
    }
    if ( (v3 & 4) == 0 )
    {
      v9 = 3073;
      goto LABEL_55;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 77;
      goto LABEL_25;
    }
  }
  else
  {
    if ( (v5 & 4) == 0 )
      goto LABEL_55;
    if ( (v3 & 2) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_55;
      v11 = 78;
      goto LABEL_25;
    }
    if ( (v3 & 4) == 0 )
    {
      v9 = 3085;
      goto LABEL_55;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 79;
      goto LABEL_25;
    }
  }
LABEL_55:
  *((_DWORD *)v1 + 2) = v9;
  if ( v9 == 3017 && (v3 & 1) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v16) = v5;
      LODWORD(v15) = v3;
      LODWORD(v14) = v4;
      LODWORD(v13) = *((unsigned __int16 *)v1 + 100);
      WPP_RECORDER_SF_dDDD(
        v1[179],
        v10,
        4u,
        0x50u,
        (__int64)&WPP_48f9d914ad953e47f49793ea568006bd_Traceguids,
        v13,
        v14,
        v15,
        v16);
    }
    if ( (*(_DWORD *)(*v1 + 2592LL) & 0x400) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortDeviceDisconnected", v1 + 34);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(v1[179], 2u, 4u, 0x51u, (__int64)&WPP_48f9d914ad953e47f49793ea568006bd_Traceguids);
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      McTemplateK0qhhhqhhh_EtwWriteTransfer(
        a1,
        v10,
        (const GUID *)(*v1 + 2412LL),
        *((unsigned __int16 *)v1 + 100),
        v4,
        v3,
        v5,
        201,
        v6,
        v7,
        v8);
  }
  return v9;
}
