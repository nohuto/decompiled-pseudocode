/*
 * XREFs of HUBHTX_GetPortLostChangeEvent @ 0x1C0004E68
 * Callers:
 *     HUBPSM20_GettingPortLostChangesOnStart @ 0x1C0011900 (HUBPSM20_GettingPortLostChangesOnStart.c)
 * Callees:
 *     McTemplateK0qhhhqhhh_EtwWriteTransfer @ 0x1C0002058 (McTemplateK0qhhhqhhh_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_dDDD @ 0x1C0002B60 (WPP_RECORDER_SF_dDDD.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0030374 (HUBMISC_VerifierDbgBreak.c)
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C0032078 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_GetPortLostChangeEvent(__int64 a1)
{
  _WORD *v1; // rax
  int v2; // ebx
  __int64 v3; // r14
  int v4; // esi
  int v5; // edi
  __int16 v6; // r15
  __int16 v7; // r12
  __int64 v8; // rdx
  unsigned int v9; // ebp
  char v10; // r13
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // [rsp+28h] [rbp-70h]
  __int64 v18; // [rsp+30h] [rbp-68h]
  __int64 v19; // [rsp+38h] [rbp-60h]
  __int64 v20; // [rsp+40h] [rbp-58h]
  __int16 v21; // [rsp+B0h] [rbp+18h]

  v1 = *(_WORD **)(a1 + 1328);
  v2 = *(unsigned __int16 *)(a1 + 184);
  v3 = a1;
  v4 = *(unsigned __int16 *)(a1 + 192);
  v5 = *(unsigned __int16 *)(a1 + 186);
  *(_WORD *)(a1 + 192) = v2;
  if ( v1 )
  {
    v6 = v1[998];
    v7 = v1[999];
    v21 = v1[1000];
  }
  else
  {
    LOBYTE(v6) = 0;
    LOBYTE(v21) = 0;
    LOBYTE(v7) = 0;
  }
  v8 = (unsigned __int16)v2;
  LOWORD(v8) = v2 & 1;
  v9 = 3013;
  if ( (_WORD)v8 == (v4 & 1) )
  {
    if ( (v2 & 8) != 0 )
    {
      a1 = 3LL;
      if ( (((unsigned __int16)v4 | (unsigned __int16)v5) & 8) == 0 )
      {
        HUBREG_UpdateSqmHubOvercurrentDetected(*(_QWORD *)v3, v8, 0LL);
        v14 = *(_QWORD *)v3;
        v9 = 3065;
        *(_DWORD *)(v3 + 1424) = 4;
        if ( (*(_DWORD *)(v14 + 2592) & 0x200) != 0 )
          HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", v3 + 272);
        v10 = v21;
        if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
          McTemplateK0qhhhqhhh_EtwWriteTransfer(
            a1,
            v13,
            (const GUID *)(*(_QWORD *)v3 + 2412LL),
            *(unsigned __int16 *)(v3 + 200),
            v4,
            v2,
            v5,
            249,
            v6,
            v7,
            v21);
        v8 = v2 & 1;
        goto LABEL_8;
      }
    }
    else if ( (v4 & 8) != 0 && (v5 & 8) == 0 )
    {
      HUBREG_UpdateSqmHubOvercurrentDetected(*(_QWORD *)a1, v8, 0LL);
      v16 = *(_QWORD *)v3;
      v9 = 3069;
      *(_DWORD *)(v3 + 1424) = 0;
      if ( (*(_DWORD *)(v16 + 2592) & 0x200) != 0 )
        HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", v3 + 272);
      if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
        McTemplateK0qhhhqhhh_EtwWriteTransfer(
          a1,
          v15,
          (const GUID *)(*(_QWORD *)v3 + 2412LL),
          *(unsigned __int16 *)(v3 + 200),
          v4,
          v2,
          v5,
          253,
          v6,
          v7,
          v21);
      v8 = v2 & 1;
      goto LABEL_7;
    }
    if ( (v2 & 2) == 0 && (v4 & 2) != 0 && (v5 & 2) == 0 )
    {
      v9 = 3029;
      goto LABEL_7;
    }
    if ( (v2 & 4) != 0 )
      goto LABEL_7;
    v10 = v21;
    if ( (v4 & 4) != 0 && (v5 & 4) == 0 )
      v9 = 3085;
  }
  else
  {
    if ( (v5 & 1) == 0 )
    {
      v9 = 3017;
LABEL_7:
      v10 = v21;
      goto LABEL_8;
    }
    if ( *(_BYTE *)(a1 + 1457) )
      goto LABEL_7;
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, _QWORD, int, const char *))(WdfFunctions_01015 + 3504))(
            WdfDriverGlobals,
            *(_QWORD *)(*(_QWORD *)a1 + 16LL),
            0LL,
            0LL,
            3718,
            "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c");
    v10 = v21;
    v8 = v2 & 1;
    if ( v12 >= 0 )
      *(_BYTE *)(v3 + 1457) = 1;
  }
LABEL_8:
  *(_DWORD *)(v3 + 8) = v9;
  if ( v9 == 3017 && !(_WORD)v8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v20) = v5;
      LODWORD(v19) = v2;
      LODWORD(v18) = v4;
      LODWORD(v17) = *(unsigned __int16 *)(v3 + 200);
      WPP_RECORDER_SF_dDDD(
        *(_QWORD *)(v3 + 1432),
        v8,
        4u,
        0x55u,
        (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids,
        v17,
        v18,
        v19,
        v20);
    }
    if ( (*(_DWORD *)(*(_QWORD *)v3 + 2592LL) & 0x400) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortDeviceDisconnected", v3 + 272);
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      McTemplateK0qhhhqhhh_EtwWriteTransfer(
        a1,
        v8,
        (const GUID *)(*(_QWORD *)v3 + 2412LL),
        *(unsigned __int16 *)(v3 + 200),
        v4,
        v2,
        v5,
        201,
        v6,
        v7,
        v10);
  }
  return v9;
}
