/*
 * XREFs of HUBDTX_ControlTransferComplete @ 0x1C0027010
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C0001FC8 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002204 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_dDDD @ 0x1C0002B60 (WPP_RECORDER_SF_dDDD.c)
 *     HUBSM_AddEvent @ 0x1C000B3FC (HUBSM_AddEvent.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0030374 (HUBMISC_VerifierDbgBreak.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDTX_ControlTransferComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  __int64 v5; // rbx
  int v6; // esi
  unsigned __int8 *v8; // r14
  char v9; // dl
  int v10; // ebp
  int v11; // eax
  int v12; // ecx
  __int64 v13; // rcx
  int v14; // eax
  __int16 v15; // ax
  const EVENT_DESCRIPTOR *v16; // rdx
  unsigned __int8 v17; // cl
  bool v18; // zf
  unsigned __int16 v19; // r9
  char v20; // al
  char v21; // al
  char v22; // al
  __int64 v23; // rax
  char v24; // dl
  char v25; // al
  __int64 v26; // rax
  int v27; // edi
  __int64 v28; // rax
  __int64 v30; // [rsp+20h] [rbp-78h]
  __int64 v31; // [rsp+28h] [rbp-70h]
  __int64 v32; // [rsp+30h] [rbp-68h]
  unsigned int v33; // [rsp+38h] [rbp-60h]
  __int64 v34; // [rsp+50h] [rbp-48h] BYREF
  int v35; // [rsp+58h] [rbp-40h]
  __int64 v36; // [rsp+5Ch] [rbp-3Ch]
  int v37; // [rsp+64h] [rbp-34h]

  v4 = *(_DWORD *)(a3 + 8);
  v5 = a4;
  v6 = *(_DWORD *)(a4 + 276);
  v8 = *(unsigned __int8 **)(a4 + 2640);
  *(_DWORD *)(a4 + 256) = *(_DWORD *)(a4 + 308);
  *(_DWORD *)(a4 + 408) = 0;
  v9 = *(_BYTE *)(a4 + 400);
  if ( (((unsigned __int8)v9 | ((unsigned __int8)v9 >> 5)) & 3) == 0
    && v9 < 0
    && *(_BYTE *)(a4 + 401) == 26
    && *(_WORD *)(a4 + 402) == 1 )
  {
    *(_DWORD *)(a4 + 2708) = v4;
    *(_DWORD *)(a4 + 2712) = v6;
    *(_OWORD *)(a4 + 1732) = 0LL;
    *(_OWORD *)(a4 + 1748) = 0LL;
  }
  if ( v4 >= 0 )
  {
    v10 = 4012;
    goto LABEL_152;
  }
  v10 = 4004;
  LOBYTE(a4) = 96;
  if ( *(_BYTE *)(v5 + 401) == 9 && *(_WORD *)(v5 + 402) && (*(_BYTE *)(v5 + 400) & 0x60) == 0 )
  {
    v11 = -1073733632;
    v12 = -1073741823;
  }
  else
  {
    v11 = v6;
    v12 = v4;
  }
  *(_DWORD *)(v5 + 1560) = v12;
  *(_DWORD *)(v5 + 1564) = v11;
  v13 = *(unsigned __int8 *)(v5 + 401);
  if ( (_BYTE)v13 == 48 )
  {
    if ( (*(_BYTE *)(v5 + 400) & 0x60) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
          2u,
          5u,
          0xAu,
          (__int64)&WPP_54051f9f773a359161ccd48cdf39bc09_Traceguids,
          v4,
          v6);
      if ( (*(_DWORD *)(v5 + 2436) & 4) != 0 )
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierSetSelFailure", v5 + 504);
      *(_DWORD *)(v5 + 2432) = 1073807370;
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      {
        LODWORD(v32) = v4;
        LODWORD(v31) = v6;
        LODWORD(v30) = 0;
        McTemplateK0pqqq_EtwWriteTransfer(
          v13,
          &USBHUB3_ETW_EVENT_SET_SEL_FAILURE,
          (const GUID *)(v5 + 1516),
          *(_QWORD *)(v5 + 24),
          v30,
          v31,
          v32);
      }
      v14 = 4008;
      if ( v6 != -1073741820 )
        v14 = 4004;
      v10 = v14;
      goto LABEL_149;
    }
  }
  else if ( (_BYTE)v13 == 3 )
  {
    v15 = *(_WORD *)(v5 + 402);
    if ( v15 == 48 )
    {
      if ( (*(_BYTE *)(v5 + 400) & 0x60) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DD(
            *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
            2u,
            5u,
            0xBu,
            (__int64)&WPP_54051f9f773a359161ccd48cdf39bc09_Traceguids,
            v4,
            v6);
        if ( (*(_DWORD *)(v5 + 2436) & 0x2000) != 0 )
          HUBMISC_VerifierDbgBreak("DeviceHwVerifierSetU1EnableFailure", v5 + 504);
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
          goto LABEL_149;
        LODWORD(v32) = v4;
        v16 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_SET_U1_ENABLE_FAILURE;
        LODWORD(v31) = v6;
        LODWORD(v30) = 0;
        goto LABEL_148;
      }
    }
    else if ( v15 == 49 && (*(_BYTE *)(v5 + 400) & 0x60) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
          2u,
          5u,
          0xCu,
          (__int64)&WPP_54051f9f773a359161ccd48cdf39bc09_Traceguids,
          v4,
          v6);
      if ( (*(_DWORD *)(v5 + 2436) & 0x4000) != 0 )
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierSetU2EnableFailure", v5 + 504);
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
        goto LABEL_149;
      LODWORD(v32) = v4;
      v16 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_SET_U2_ENABLE_FAILURE;
      LODWORD(v31) = v6;
      LODWORD(v30) = 0;
      goto LABEL_148;
    }
  }
  else if ( (_BYTE)v13 == 6 && (*(_BYTE *)(v5 + 400) & 0x60) == 0 )
  {
    v17 = *(_BYTE *)(v5 + 403);
    if ( v17 == 3 )
      v18 = *(_BYTE *)(v5 + 402) == 0xEE;
    else
      v18 = v17 == 6;
    if ( !v18 && (*(_DWORD *)(v5 + 2436) & 1) != 0 )
    {
      HUBMISC_VerifierDbgBreak("DeviceHwVerifierControlTransferFailure", v5 + 504);
      v17 = *(_BYTE *)(v5 + 403);
    }
    v13 = (unsigned int)v17 - 1;
    if ( (_DWORD)v13 )
    {
      v13 = (unsigned int)(v13 - 1);
      if ( (_DWORD)v13 )
      {
        v13 = (unsigned int)(v13 - 1);
        if ( (_DWORD)v13 )
        {
          v13 = (unsigned int)(v13 - 3);
          if ( (_DWORD)v13 )
          {
            if ( (_DWORD)v13 != 9 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_149;
              v19 = 22;
              goto LABEL_55;
            }
            *(_DWORD *)(v5 + 2432) = 1073807371;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_DD(
                *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
                2u,
                5u,
                0xFu,
                (__int64)&WPP_54051f9f773a359161ccd48cdf39bc09_Traceguids,
                v4,
                v6);
            if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
              goto LABEL_149;
            LODWORD(v32) = v4;
            v16 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_BOS_DESCRIPTOR_FAILURE;
            LODWORD(v31) = v6;
            LODWORD(v30) = 0;
          }
          else
          {
            *(_DWORD *)(v5 + 2432) = 1073807372;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_DD(
                *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
                2u,
                5u,
                0x10u,
                (__int64)&WPP_54051f9f773a359161ccd48cdf39bc09_Traceguids,
                v4,
                v6);
            if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
              goto LABEL_149;
            LODWORD(v32) = v4;
            v16 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_DEVICE_QUALIFIER_DESCRIPTOR_FAILURE;
            LODWORD(v31) = v6;
            LODWORD(v30) = 0;
          }
        }
        else
        {
          v20 = *(_BYTE *)(v5 + 2004);
          if ( v20 && v20 == *(_BYTE *)(v5 + 402) )
          {
            *(_DWORD *)(v5 + 2432) = 1073807373;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_DD(
                *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
                2u,
                5u,
                0x11u,
                (__int64)&WPP_54051f9f773a359161ccd48cdf39bc09_Traceguids,
                v4,
                v6);
            if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
              goto LABEL_149;
            LODWORD(v32) = v4;
            v16 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_SERIAL_NUMBER_STRING_FAILURE;
            LODWORD(v31) = v6;
            LODWORD(v30) = 0;
          }
          else
          {
            LOBYTE(v13) = *(_BYTE *)(v5 + 402);
            if ( (_BYTE)v13 )
            {
              v21 = *(_BYTE *)(v5 + 2003);
              if ( v21 && v21 == (_BYTE)v13 )
              {
                *(_DWORD *)(v5 + 2432) = 1073807375;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_DD(
                    *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
                    2u,
                    5u,
                    0x13u,
                    (__int64)&WPP_54051f9f773a359161ccd48cdf39bc09_Traceguids,
                    v4,
                    v6);
                if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
                  goto LABEL_149;
                LODWORD(v32) = v4;
                v16 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_PRODUCT_ID_STRING_FAILURE;
                LODWORD(v31) = v6;
                LODWORD(v30) = 0;
              }
              else
              {
                if ( !v8 )
                  goto LABEL_149;
                v22 = *(_BYTE *)(*(_QWORD *)v8 + 3LL);
                if ( v22 && v22 == (_BYTE)v13 )
                {
                  *(_DWORD *)(v5 + 2432) = 1073807375;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    WPP_RECORDER_SF_DD(
                      *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
                      2u,
                      5u,
                      0x14u,
                      (__int64)&WPP_54051f9f773a359161ccd48cdf39bc09_Traceguids,
                      v4,
                      v6);
                  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) == 0 )
                    goto LABEL_149;
                  LODWORD(v32) = v4;
                  v16 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_BILLBOARD_STRING_FAILURE;
                  LODWORD(v31) = v6;
                  LODWORD(v30) = 0;
                }
                else
                {
                  v23 = v8[8];
                  if ( (_BYTE)v23 == 0xFF )
                    goto LABEL_149;
                  v24 = *(_BYTE *)(*(_QWORD *)v8 + 4 * v23 + 47);
                  if ( !v24 || v24 != (_BYTE)v13 )
                    goto LABEL_149;
                  *(_DWORD *)(v5 + 2432) = 1073807375;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    WPP_RECORDER_SF_DD(
                      *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
                      2u,
                      5u,
                      0x15u,
                      (__int64)&WPP_54051f9f773a359161ccd48cdf39bc09_Traceguids,
                      v4,
                      v6);
                  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) == 0 )
                    goto LABEL_149;
                  LODWORD(v32) = v4;
                  v16 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_ALTERNATE_MODE_STRING_FAILURE;
                  LODWORD(v31) = v6;
                  LODWORD(v30) = 0;
                }
              }
            }
            else
            {
              *(_DWORD *)(v5 + 2432) = 1073807374;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_DD(
                  *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
                  2u,
                  5u,
                  0x12u,
                  (__int64)&WPP_54051f9f773a359161ccd48cdf39bc09_Traceguids,
                  v4,
                  v6);
              if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
                goto LABEL_149;
              LODWORD(v32) = v4;
              v16 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_LANGUAGE_ID_STRING_FAILURE;
              LODWORD(v31) = v6;
              LODWORD(v30) = 0;
            }
          }
        }
      }
      else
      {
        *(_DWORD *)(v5 + 2432) = 1073807367;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DD(
            *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
            2u,
            5u,
            0xEu,
            (__int64)&WPP_54051f9f773a359161ccd48cdf39bc09_Traceguids,
            v4,
            v6);
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
          goto LABEL_149;
        LODWORD(v32) = v4;
        v16 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_CONFIG_DESCRIPTOR_FAILURE;
        LODWORD(v31) = v6;
        LODWORD(v30) = 0;
      }
    }
    else
    {
      *(_DWORD *)(v5 + 2432) = 1073807360;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
          2u,
          5u,
          0xDu,
          (__int64)&WPP_54051f9f773a359161ccd48cdf39bc09_Traceguids,
          v4,
          v6);
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
        goto LABEL_149;
      LODWORD(v32) = v4;
      v16 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_DEVICE_DESCRIPTOR_FAILURE;
      LODWORD(v31) = v6;
      LODWORD(v30) = 0;
    }
    goto LABEL_148;
  }
  v25 = *(_BYTE *)(v5 + 400) & 0x60;
  if ( v25 == 64 && (_BYTE)v13 == *(_BYTE *)(v5 + 2052) )
  {
    v13 = (unsigned int)*(unsigned __int16 *)(v5 + 404) - 4;
    if ( *(_WORD *)(v5 + 404) == 4 )
    {
      *(_DWORD *)(v5 + 2432) = 1073807376;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
          2u,
          5u,
          0x17u,
          (__int64)&WPP_54051f9f773a359161ccd48cdf39bc09_Traceguids,
          v4,
          v6);
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
        goto LABEL_149;
      LODWORD(v32) = v4;
      v16 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_MS_EXT_CONFIG_DESCRIPTOR_FAILURE;
      LODWORD(v31) = v6;
      LODWORD(v30) = 0;
    }
    else
    {
      v13 = (unsigned int)*(unsigned __int16 *)(v5 + 404) - 6;
      if ( *(_WORD *)(v5 + 404) == 6 )
      {
        *(_DWORD *)(v5 + 2432) = 1073807377;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DD(
            *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
            2u,
            5u,
            0x18u,
            (__int64)&WPP_54051f9f773a359161ccd48cdf39bc09_Traceguids,
            v4,
            v6);
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
          goto LABEL_149;
        LODWORD(v32) = v4;
        v16 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_MS_CONTAINER_ID_DESCRIPTOR_FAILURE;
        LODWORD(v31) = v6;
        LODWORD(v30) = 0;
      }
      else
      {
        v13 = (unsigned int)*(unsigned __int16 *)(v5 + 404) - 7;
        if ( *(_WORD *)(v5 + 404) == 7 )
        {
          *(_DWORD *)(v5 + 2432) = 1073807388;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_DD(
              *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
              2u,
              5u,
              0x19u,
              (__int64)&WPP_54051f9f773a359161ccd48cdf39bc09_Traceguids,
              v4,
              v6);
          if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
            goto LABEL_149;
          LODWORD(v32) = v4;
          v16 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_MSOS20_DESCRIPTOR_FAILURE;
          LODWORD(v31) = v6;
          LODWORD(v30) = 0;
        }
        else
        {
          if ( *(_WORD *)(v5 + 404) != 8 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v19 = 27;
LABEL_55:
              WPP_RECORDER_SF_DD(
                *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
                2u,
                5u,
                v19,
                (__int64)&WPP_54051f9f773a359161ccd48cdf39bc09_Traceguids,
                v4,
                v6);
            }
LABEL_149:
            if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
            {
              LODWORD(v32) = v4;
              LODWORD(v31) = v6;
              LODWORD(v30) = 0;
              McTemplateK0pqqq_EtwWriteTransfer(
                v13,
                &USBHUB3_ETW_EVENT_DEVICE_CONTROL_TRANSFER_ERROR,
                0LL,
                *(_QWORD *)(v5 + 24),
                v30,
                v31,
                v32);
            }
            goto LABEL_152;
          }
          *(_DWORD *)(v5 + 2432) = 1073807390;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_DD(
              *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
              2u,
              5u,
              0x1Au,
              (__int64)&WPP_54051f9f773a359161ccd48cdf39bc09_Traceguids,
              v4,
              v6);
          if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) == 0 )
            goto LABEL_149;
          LODWORD(v32) = v4;
          v16 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_MSOS20_SET_ALT_ENUMERATION_FAILURE;
          LODWORD(v31) = v6;
          LODWORD(v30) = 0;
        }
      }
    }
LABEL_148:
    McTemplateK0pqqq_EtwWriteTransfer(v13, v16, (const GUID *)(v5 + 1516), *(_QWORD *)(v5 + 24), v30, v31, v32);
    goto LABEL_149;
  }
  if ( (_BYTE)v13 == 49 )
  {
    if ( !v25 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
          2u,
          5u,
          0x1Cu,
          (__int64)&WPP_54051f9f773a359161ccd48cdf39bc09_Traceguids,
          v4,
          v6);
      if ( (*(_DWORD *)(v5 + 2436) & 8) != 0 )
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierSetIsochDelayFailure", v5 + 504);
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
        goto LABEL_149;
      v16 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_SET_ISOCH_DELAY_FAILURE;
      goto LABEL_147;
    }
  }
  else if ( !v25
         && ((_BYTE)v13 == 1 && *(_WORD *)(v5 + 402) == 1
          || (_BYTE)v13 == 3 && !*(_WORD *)(v5 + 402) && !*(_WORD *)(v5 + 404)) )
  {
    goto LABEL_149;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v33 = (*(unsigned __int8 *)(v5 + 400) >> 5) & 3;
    WPP_RECORDER_SF_dDDD(
      *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
      v33,
      5u,
      0x1Du,
      (__int64)&WPP_54051f9f773a359161ccd48cdf39bc09_Traceguids,
      v4,
      v6,
      v33,
      v13);
  }
  if ( (*(_DWORD *)(v5 + 2436) & 1) != 0 )
    HUBMISC_VerifierDbgBreak("DeviceHwVerifierControlTransferFailure", v5 + 504);
  if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    v16 = &USBHUB3_ETW_EVENT_DEVICE_CONTROL_TRANSFER_ERROR;
LABEL_147:
    v26 = *(_QWORD *)(v5 + 8);
    LODWORD(v32) = v4;
    LODWORD(v31) = v6;
    v13 = *(unsigned __int16 *)(v26 + 200);
    LODWORD(v30) = *(unsigned __int16 *)(v26 + 200);
    goto LABEL_148;
  }
LABEL_152:
  v36 = 0LL;
  v37 = 0;
  v34 = 24LL;
  v35 = 0;
  v27 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *, __int64))(WdfFunctions_01015 + 1992))(
          WdfDriverGlobals,
          a1,
          &v34,
          a4);
  if ( v27 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v28 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            WdfDriverGlobals->Driver,
            off_1C00671E8);
    LODWORD(v31) = v27;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v28 + 64),
      2u,
      2u,
      0x3Bu,
      (__int64)&WPP_f631619360663f684a1deb181f774097_Traceguids,
      v31);
  }
  return HUBSM_AddEvent(v5 + 504, v10);
}
