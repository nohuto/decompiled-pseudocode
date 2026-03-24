/*
 * XREFs of HUBHTX_Get30PortChangeEvent @ 0x1C0004FF8
 * Callers:
 *     HUBPSM30_EnablingInterruptsAndGettingPortEvent @ 0x1C0012400 (HUBPSM30_EnablingInterruptsAndGettingPortEvent.c)
 *     HUBPSM30_EnablingInterruptsAndGettingPortEventInNoChange @ 0x1C0012440 (HUBPSM30_EnablingInterruptsAndGettingPortEventInNoChange.c)
 *     HUBPSM30_AcquiringPortReferenceAndGettingPortEvent @ 0x1C0012460 (HUBPSM30_AcquiringPortReferenceAndGettingPortEvent.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0001870 (McTemplateK0pq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0qhhhqhhh_EtwWriteTransfer @ 0x1C0001E7C (McTemplateK0qhhhqhhh_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002028 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dDDD @ 0x1C0002984 (WPP_RECORDER_SF_dDDD.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0002BC4 (WPP_RECORDER_SF_qd.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002FCD4 (HUBMISC_VerifierDbgBreak.c)
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C0031834 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_Get30PortChangeEvent(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v3; // r15
  _QWORD *v4; // r14
  unsigned __int16 *v5; // rax
  unsigned int v6; // ebp
  unsigned int v7; // ebx
  int v8; // edi
  int v9; // esi
  unsigned __int16 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int16 v14; // r9
  __int64 v15; // rdx
  unsigned __int16 v16; // r8
  unsigned __int16 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int16 v20; // r9
  __int64 v21; // rcx
  unsigned __int16 v22; // r9
  int v23; // eax
  unsigned __int8 v24; // dl
  __int64 v25; // rcx
  __int64 v27; // [rsp+20h] [rbp-78h]
  __int64 v28; // [rsp+28h] [rbp-70h]
  __int64 v29; // [rsp+30h] [rbp-68h]
  __int64 v30; // [rsp+38h] [rbp-60h]
  __int64 v31; // [rsp+40h] [rbp-58h]
  unsigned __int16 v32; // [rsp+A0h] [rbp+8h]
  char v33; // [rsp+B0h] [rbp+18h]

  LOBYTE(v3) = 0;
  v4 = (_QWORD *)a1;
  if ( *(_BYTE *)(a1 + 1457) )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
      WdfDriverGlobals,
      *(_QWORD *)(*(_QWORD *)a1 + 16LL),
      0LL,
      3887LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c");
    *((_BYTE *)v4 + 1457) = 0;
  }
  v5 = (unsigned __int16 *)v4[166];
  v6 = 3061;
  v7 = *((unsigned __int16 *)v4 + 92);
  v8 = *((unsigned __int16 *)v4 + 96);
  v9 = *((unsigned __int16 *)v4 + 97);
  *((_WORD *)v4 + 96) = v7;
  if ( v5 )
  {
    a1 = v5[998];
    v32 = v5[998];
  }
  else
  {
    LOBYTE(v32) = 0;
  }
  if ( v5 )
  {
    v10 = v5[999];
    v33 = v10;
  }
  else
  {
    LOBYTE(v10) = 0;
    v33 = 0;
  }
  if ( v5 )
    v3 = v5[1000];
  if ( (v7 & 8) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*v4, a2, a3);
    v13 = *v4;
    *((_DWORD *)v4 + 356) = 4;
    v6 = 3065;
    if ( (*(_DWORD *)(v13 + 2592) & 0x200) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", v4 + 34);
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      McTemplateK0qhhhqhhh_EtwWriteTransfer(
        v12,
        v11,
        (const GUID *)(*v4 + 2412LL),
        *((unsigned __int16 *)v4 + 100),
        v8,
        v7,
        v9,
        249,
        v32,
        v10,
        v3);
    goto LABEL_141;
  }
  if ( (v9 & 8) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*v4, a2, a3);
    if ( (v8 & 8) == 0 )
    {
      *((_DWORD *)v4 + 356) = 4;
      v6 = 3065;
    }
    if ( (*(_DWORD *)(*v4 + 2592LL) & 0x200) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", v4 + 34);
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      McTemplateK0qhhhqhhh_EtwWriteTransfer(
        a1,
        1LL,
        (const GUID *)(*v4 + 2412LL),
        *((unsigned __int16 *)v4 + 100),
        v8,
        v7,
        v9,
        v6,
        v32,
        v33,
        v3);
    goto LABEL_132;
  }
  if ( (v7 & 0x200) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 86;
LABEL_121:
      WPP_RECORDER_SF_(v4[179], 2u, 4u, v14, (__int64)&WPP_48f9d914ad953e47f49793ea568006bd_Traceguids);
      goto LABEL_122;
    }
    goto LABEL_122;
  }
  if ( (v7 & 0x10) != 0 )
  {
    if ( (v7 & 2) != 0 )
    {
      if ( (*(_DWORD *)(*v4 + 40LL) & 0x1000000) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v14 = 88;
          goto LABEL_121;
        }
LABEL_122:
        v25 = *v4;
        v6 = 3077;
        if ( (*(_DWORD *)(*v4 + 2592LL) & 0x10) != 0 )
        {
          HUBMISC_VerifierDbgBreak("HubHwVerifierInvalidPortStatus", v4 + 34);
          v25 = *v4;
        }
        *(_DWORD *)(v25 + 2596) = 1073872896;
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
        {
          LODWORD(v27) = *((unsigned __int16 *)v4 + 100);
          McTemplateK0pq_EtwWriteTransfer(
            v25,
            &USBHUB3_ETW_EVENT_HUB_RESET_DUE_TO_PORT_ERROR,
            0LL,
            *(_QWORD *)(*v4 + 248LL),
            v27);
        }
        *(_WORD *)(*v4 + 74LL) = v9;
        *(_WORD *)(*v4 + 72LL) = v7;
        goto LABEL_141;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(v4[179], 2u, 4u, 0x57u, (__int64)&WPP_48f9d914ad953e47f49793ea568006bd_Traceguids);
    }
    if ( (v7 & 1) != 0 )
    {
      v6 = 3081;
      goto LABEL_141;
    }
    if ( (v9 & 1) == 0 && (v8 & 1) == 0 )
      return v6;
    goto LABEL_37;
  }
  v15 = 1LL;
  if ( (v7 & 1) != 0 )
    goto LABEL_47;
  a1 = (unsigned __int16)v7;
  LOWORD(a1) = v7 & 0x1E0;
  if ( (v7 & 0x1E0) != 0xA0 || (v8 & 0x200) == 0 || (v8 & 0x1E0) == 0xA0 )
  {
    if ( (_WORD)a1 == 224 && (v8 & 0x200) != 0 && (v8 & 0x1E0) != 0xE0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(v4[179], 2u, 4u, 0x59u, (__int64)&WPP_48f9d914ad953e47f49793ea568006bd_Traceguids);
      goto LABEL_37;
    }
LABEL_47:
    v16 = v7 & 0x1E0;
    if ( (v7 & 0x1E0) == 0x160 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_122;
      v17 = 90;
      goto LABEL_50;
    }
    a1 = 128LL;
    if ( v16 == 128 && (v8 & 0x1E0) != 0x80 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_122;
      v17 = 91;
      goto LABEL_50;
    }
    if ( v16 == 320 )
    {
      v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, *v4);
      if ( !(*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(
              WdfDriverGlobals,
              v18)
        || *(_BYTE *)(*v4 + 240LL) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dD(
            v4[179],
            2u,
            4u,
            0x5Cu,
            (__int64)&WPP_48f9d914ad953e47f49793ea568006bd_Traceguids,
            (v7 >> 5) & 0xF,
            v7 & 1);
        v21 = *(unsigned int *)(*v4 + 2592LL);
        if ( (v21 & 0x100) != 0 )
          HUBMISC_VerifierDbgBreak("HubHwVerifierPortLinkStateCompliance", v4 + 34);
        if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
          McTemplateK0qhhhqhhh_EtwWriteTransfer(
            v21,
            v19,
            (const GUID *)(*v4 + 2412LL),
            *((unsigned __int16 *)v4 + 100),
            v8,
            v7,
            v9,
            245,
            v32,
            v33,
            v3);
        goto LABEL_105;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v20 = 93;
LABEL_60:
        LODWORD(v29) = v7 & 1;
        LODWORD(v28) = (v7 >> 5) & 0xF;
        WPP_RECORDER_SF_dD(v4[179], 2u, 4u, v20, (__int64)&WPP_48f9d914ad953e47f49793ea568006bd_Traceguids, v28, v29);
        goto LABEL_105;
      }
      goto LABEL_105;
    }
    if ( v16 == 192 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dD(
          v4[179],
          2u,
          4u,
          0x5Eu,
          (__int64)&WPP_48f9d914ad953e47f49793ea568006bd_Traceguids,
          (v7 >> 5) & 0xF,
          v7 & 1);
      a1 = *(unsigned int *)(*v4 + 2592LL);
      if ( (a1 & 0x20) != 0 )
        HUBMISC_VerifierDbgBreak("HubHwVerifierPortLinkStateSSInactive", v4 + 34);
      if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
        McTemplateK0qhhhqhhh_EtwWriteTransfer(
          a1,
          v15,
          (const GUID *)(*v4 + 2412LL),
          *((unsigned __int16 *)v4 + 100),
          v8,
          v7,
          v9,
          245,
          v32,
          v33,
          v3);
      if ( (v9 & 0x80u) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(v4[179], 2u, 4u, 0x5Fu, (__int64)&WPP_48f9d914ad953e47f49793ea568006bd_Traceguids);
        v6 = 3017;
        goto LABEL_133;
      }
      if ( *((_DWORD *)v4 + 2) != 3053 )
      {
        if ( (v7 & 2) != 0 )
        {
          if ( (*(_DWORD *)(*v4 + 40LL) & 0x200000) == 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v14 = 98;
              goto LABEL_121;
            }
            goto LABEL_122;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_105;
          WPP_RECORDER_SF_(v4[179], 2u, 4u, 0x61u, (__int64)&WPP_48f9d914ad953e47f49793ea568006bd_Traceguids);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v20 = 99;
          goto LABEL_60;
        }
LABEL_105:
        ++*((_DWORD *)v4 + 361);
        v6 = 3053;
        if ( *((_DWORD *)v4 + 361) != 100 * (*((_DWORD *)v4 + 361) / 0x64u) )
          goto LABEL_141;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v29) = *((_DWORD *)v4 + 361);
          WPP_RECORDER_SF_qd(v4[179], 2u, 4u, 0x6Bu, (__int64)&WPP_48f9d914ad953e47f49793ea568006bd_Traceguids, v4, v29);
        }
        if ( (*(_DWORD *)(*v4 + 2592LL) & 0x800) == 0 )
          goto LABEL_141;
        HUBMISC_VerifierDbgBreak("HubHwVerifierPortLinkStateErrorResetWatchdog", v4 + 34);
LABEL_132:
        if ( v6 != 3017 )
          goto LABEL_140;
        goto LABEL_133;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v6;
      v22 = 96;
      v23 = v7 & 1;
      v24 = 3;
    }
    else
    {
      if ( (v9 & 1) != 0 || (v7 & 1) != (v8 & 1) )
      {
        v6 = 3017;
        goto LABEL_132;
      }
      if ( (v7 & 1) != 0 )
      {
        if ( v16 != 160 )
        {
          if ( (v7 & 2) == 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v14 = 104;
              goto LABEL_121;
            }
            goto LABEL_122;
          }
          if ( v16 <= 0x60u || v16 == 256 )
          {
            if ( (v9 & 0x10) != 0 )
            {
              if ( v16 == 96 )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v14 = 106;
                  goto LABEL_121;
                }
                goto LABEL_122;
              }
              v6 = 3073;
            }
            else
            {
              if ( (v8 & 0x1E0) != 0x60 || v16 == 96 )
                return v6;
              v6 = 3085;
            }
LABEL_141:
            *((_DWORD *)v4 + 2) = v6;
            return v6;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_122;
          v17 = 105;
LABEL_50:
          WPP_RECORDER_SF_d(
            v4[179],
            2u,
            4u,
            v17,
            (__int64)&WPP_48f9d914ad953e47f49793ea568006bd_Traceguids,
            (v7 >> 5) & 0xF);
          goto LABEL_122;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(v4[179], 2u, 4u, 0x67u, (__int64)&WPP_48f9d914ad953e47f49793ea568006bd_Traceguids);
        goto LABEL_105;
      }
      if ( (v7 & 2) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v14 = 100;
          goto LABEL_121;
        }
        goto LABEL_122;
      }
      if ( v16 > 0x60u )
        return v6;
      if ( (*(_DWORD *)(*v4 + 40LL) & 0x100000) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_122;
        v17 = 102;
        goto LABEL_50;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v6;
      v22 = 101;
      v23 = (v7 >> 5) & 0xF;
      v24 = 2;
    }
    LODWORD(v28) = v23;
    WPP_RECORDER_SF_d(v4[179], v24, 4u, v22, (__int64)&WPP_48f9d914ad953e47f49793ea568006bd_Traceguids, v28);
    return v6;
  }
LABEL_37:
  v6 = 3017;
LABEL_133:
  if ( (v7 & 1) != 0 )
    goto LABEL_141;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v31) = v9;
    LODWORD(v30) = v7;
    LODWORD(v29) = v8;
    LODWORD(v28) = *((unsigned __int16 *)v4 + 100);
    WPP_RECORDER_SF_dDDD(
      v4[179],
      1LL,
      4u,
      0x6Cu,
      (__int64)&WPP_48f9d914ad953e47f49793ea568006bd_Traceguids,
      v28,
      v29,
      v30,
      v31);
  }
  if ( (*(_DWORD *)(*v4 + 2592LL) & 0x400) != 0 )
    HUBMISC_VerifierDbgBreak("HubHwVerifierPortDeviceDisconnected", v4 + 34);
  if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
    goto LABEL_141;
  McTemplateK0qhhhqhhh_EtwWriteTransfer(a1, 1LL, 0LL, *((unsigned __int16 *)v4 + 100), v8, v7, v9, 201, v32, v33, v3);
LABEL_140:
  if ( v6 != 3061 )
    goto LABEL_141;
  return v6;
}
