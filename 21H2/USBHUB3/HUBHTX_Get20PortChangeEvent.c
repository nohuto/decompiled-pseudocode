/*
 * XREFs of HUBHTX_Get20PortChangeEvent @ 0x1C00047A8
 * Callers:
 *     HUBPSM20_EnablingInterruptsAndGettingPortEvent @ 0x1C0011840 (HUBPSM20_EnablingInterruptsAndGettingPortEvent.c)
 *     HUBPSM20_GettingPortChangeEventInSuspended @ 0x1C0011C10 (HUBPSM20_GettingPortChangeEventInSuspended.c)
 * Callees:
 *     McTemplateK0qhhhqhhh_EtwWriteTransfer @ 0x1C0002058 (McTemplateK0qhhhqhhh_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dDDD @ 0x1C0002B60 (WPP_RECORDER_SF_dDDD.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0030374 (HUBMISC_VerifierDbgBreak.c)
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C0032078 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_Get20PortChangeEvent(__int64 a1)
{
  _QWORD *v1; // r14
  _WORD *v2; // rax
  int v3; // ebx
  int v4; // esi
  int v5; // edi
  __int16 v6; // r15
  __int16 v7; // r12
  __int16 v8; // r13
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
  {
    v6 = v2[998];
    v7 = v2[999];
    v8 = v2[1000];
  }
  else
  {
    LOBYTE(v6) = 0;
    LOBYTE(v7) = 0;
    LOBYTE(v8) = 0;
  }
  v9 = 3041;
  v10 = 4LL;
  if ( (v3 & 8) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*v1, 4LL, &WPP_RECORDER_INITIALIZED);
LABEL_8:
    v9 = 3065;
    *((_DWORD *)v1 + 356) = 4;
LABEL_9:
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
    goto LABEL_49;
  }
  if ( (v5 & 8) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*v1, 4LL, &WPP_RECORDER_INITIALIZED);
    if ( (v4 & 8) != 0 )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( (v3 & 0x100) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_49;
    v11 = 72;
    goto LABEL_19;
  }
  if ( (v5 & 1) != 0 || (a1 = (unsigned __int16)v3, LOWORD(a1) = v3 & 1, (_WORD)a1 != (v4 & 1)) )
  {
    v9 = 3017;
    goto LABEL_49;
  }
  if ( (v3 & 0x10) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_49;
    v11 = 73;
    goto LABEL_19;
  }
  if ( (v3 & 1) == 0 )
  {
    if ( (v3 & 2) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_49;
      v11 = 74;
    }
    else
    {
      if ( (v3 & 4) == 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_49;
      v11 = 75;
    }
LABEL_19:
    WPP_RECORDER_SF_(v1[179], 2u, 4u, v11, (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids);
    goto LABEL_49;
  }
  if ( (v5 & 0x10) != 0 )
  {
    if ( (v3 & 2) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_49;
      v11 = 76;
      goto LABEL_19;
    }
    if ( (v3 & 4) == 0 )
    {
      v9 = 3073;
      goto LABEL_49;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 77;
      goto LABEL_19;
    }
  }
  else
  {
    if ( (v5 & 4) == 0 )
      goto LABEL_49;
    if ( (v3 & 2) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_49;
      v11 = 78;
      goto LABEL_19;
    }
    if ( (v3 & 4) == 0 )
    {
      v9 = 3085;
      goto LABEL_49;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 79;
      goto LABEL_19;
    }
  }
LABEL_49:
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
        (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids,
        v13,
        v14,
        v15,
        v16);
    }
    if ( (*(_DWORD *)(*v1 + 2592LL) & 0x400) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortDeviceDisconnected", v1 + 34);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(v1[179], 2u, 4u, 0x51u, (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids);
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
