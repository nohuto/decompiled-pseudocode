/*
 * XREFs of HUBHTX_PortControlTransferComplete @ 0x1C0003A20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqhh_EtwWriteTransfer @ 0x1C0001F34 (McTemplateK0pqhh_EtwWriteTransfer.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C0001FC8 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002204 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_ccccc @ 0x1C000242C (WPP_RECORDER_SF_ccccc.c)
 *     WPP_RECORDER_SF_cccccc @ 0x1C0002560 (WPP_RECORDER_SF_cccccc.c)
 *     WPP_RECORDER_SF_cccccccc @ 0x1C00026AC (WPP_RECORDER_SF_cccccccc.c)
 *     WPP_RECORDER_SF_chcccc @ 0x1C000291C (WPP_RECORDER_SF_chcccc.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0030374 (HUBMISC_VerifierDbgBreak.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_PortControlTransferComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v5; // rdi
  int v6; // ebx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int16 v17; // ax
  int v18; // ebx
  __int64 v19; // rax
  __int64 v21; // [rsp+20h] [rbp-98h]
  int v22; // [rsp+20h] [rbp-98h]
  int v23; // [rsp+20h] [rbp-98h]
  __int64 v24; // [rsp+28h] [rbp-90h]
  __int64 v25; // [rsp+30h] [rbp-88h]
  _DWORD v26[3]; // [rsp+70h] [rbp-48h] BYREF
  __int64 v27; // [rsp+7Ch] [rbp-3Ch]
  int v28; // [rsp+84h] [rbp-34h]

  v4 = *(_DWORD *)(a3 + 8);
  v5 = a4;
  v6 = *(_DWORD *)(a4 + 44);
  if ( v4 >= 0 )
  {
    if ( !*(_BYTE *)(a4 + 169) )
    {
      v9 = *(_DWORD *)(a4 + 1336);
      if ( v6 == 1 )
      {
        if ( (v9 & 0x20) == 0
          && (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, _QWORD, int, const char *))(WdfFunctions_01015 + 3504))(
               WdfDriverGlobals,
               *(_QWORD *)(*(_QWORD *)a4 + 16LL),
               0LL,
               0LL,
               1687,
               "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c") >= 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(v5 + 1336), 0x20u);
        }
      }
      else if ( (v9 & 0x20) != 0 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
          WdfDriverGlobals,
          *(_QWORD *)(*(_QWORD *)a4 + 16LL),
          0LL,
          1695LL,
          "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c");
        _InterlockedAnd((volatile signed __int32 *)(v5 + 1336), 0xFFFFFFDF);
      }
      v10 = **(_DWORD **)(v5 + 80);
      if ( *(_DWORD *)(v5 + 1256) == 5000 )
      {
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x20) != 0 )
        {
          LOWORD(v24) = *(_WORD *)(v5 + 184);
          LODWORD(v21) = *(unsigned __int16 *)(v5 + 200);
          McTemplateK0pqhh_EtwWriteTransfer(
            *(unsigned __int16 *)(v5 + 200),
            &USBHUB3_ETW_EVENT_30_PORT_STATUS,
            a3,
            *(_QWORD *)(*(_QWORD *)v5 + 248LL),
            v21,
            v24,
            *(_WORD *)(v5 + 186));
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a4) = ((v10 & 8) != 0) + 48;
          LOBYTE(a2) = ((v10 & 0x10) != 0) + 48;
          WPP_RECORDER_SF_chcccc(*(_QWORD *)(v5 + 1432), a2, (unsigned __int8)(((v10 & 0x200) != 0) + 48), a4, v21);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v13) = (BYTE2(v10) >> 7) + 48;
            LOBYTE(v12) = ((v10 & 0x80000) != 0) + 48;
            LOBYTE(v11) = ((v10 & 0x200000) != 0) + 48;
            WPP_RECORDER_SF_cccccc(*(_QWORD *)(v5 + 1432), v11, v12, v13, v22);
          }
        }
      }
      else
      {
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x20) != 0 )
        {
          LOWORD(v24) = *(_WORD *)(v5 + 184);
          LODWORD(v21) = *(unsigned __int16 *)(v5 + 200);
          McTemplateK0pqhh_EtwWriteTransfer(
            *(unsigned __int16 *)(v5 + 200),
            &USBHUB3_ETW_EVENT_20_PORT_STATUS,
            a3,
            *(_QWORD *)(*(_QWORD *)v5 + 248LL),
            v21,
            v24,
            *(_WORD *)(v5 + 186));
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a4) = ((v10 & 4) != 0) + 48;
          LOBYTE(a3) = ((v10 & 0x10) != 0) + 48;
          LOBYTE(a2) = ((v10 & 2) != 0) + 48;
          WPP_RECORDER_SF_cccccccc(*(_QWORD *)(v5 + 1432), a2, a3, a4, v21);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v16 = HIWORD(v10);
            LOBYTE(v15) = ((v10 & 0x80000) != 0) + 48;
            LOBYTE(v14) = ((v10 & 0x40000) != 0) + 48;
            LOBYTE(v16) = (BYTE2(v10) & 1) + 48;
            WPP_RECORDER_SF_ccccc(*(_QWORD *)(v5 + 1432), v14, v15, v16, v23);
          }
        }
      }
    }
    if ( *(_BYTE *)(v5 + 169) == 3 )
    {
      v17 = *(_WORD *)(v5 + 170);
      if ( v17 == 2 )
      {
        *(_WORD *)(v5 + 192) |= 4u;
        *(_WORD *)(v5 + 184) |= 4u;
      }
      if ( v17 == 5 )
      {
        if ( *(_BYTE *)(v5 + 173) != 3
          || (*(_WORD *)(v5 + 192) = *(_WORD *)(v5 + 192) & 0xFE1F | 0x60,
              *(_WORD *)(v5 + 184) = *(_WORD *)(v5 + 184) & 0xFE1F | 0x60,
              *(_WORD *)(v5 + 170) == 5) )
        {
          if ( *(_BYTE *)(v5 + 173) == 4 )
          {
            *(_WORD *)(v5 + 192) = *(_WORD *)(v5 + 192) & 0xFE1F | 0x80;
            *(_WORD *)(v5 + 184) = *(_WORD *)(v5 + 184) & 0xFE1F | 0x80;
          }
        }
      }
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(a4 + 1432),
        2u,
        4u,
        0x22u,
        (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids,
        *(_DWORD *)(a3 + 8),
        *(_DWORD *)(a4 + 44));
    v8 = *(_QWORD *)v5;
    if ( (*(_DWORD *)(*(_QWORD *)v5 + 2592LL) & 2) != 0 )
    {
      HUBMISC_VerifierDbgBreak("HubHwVerifierControlTransferFailure", v8 + 1264);
      v8 = *(_QWORD *)v5;
    }
    *(_DWORD *)(v8 + 2596) = 1073872897;
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
    {
      LODWORD(v25) = v4;
      LODWORD(v24) = v6;
      LODWORD(v21) = *(unsigned __int16 *)(v5 + 200);
      McTemplateK0pqqq_EtwWriteTransfer(
        v8,
        &USBHUB3_ETW_EVENT_PORT_CONTROL_TRANSFER_ERROR,
        0LL,
        *(_QWORD *)(*(_QWORD *)v5 + 248LL),
        v21,
        v24,
        v25);
    }
  }
  v27 = 0LL;
  v28 = 0;
  v26[1] = 0;
  v26[2] = 0;
  v26[0] = 24;
  v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 1992))(
          WdfDriverGlobals,
          a1,
          v26);
  if ( v18 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            WdfDriverGlobals->Driver,
            off_1C00671E8);
    LODWORD(v24) = v18;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v19 + 64),
      2u,
      2u,
      0x3Bu,
      (__int64)&WPP_f631619360663f684a1deb181f774097_Traceguids,
      v24);
  }
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(v5 + 1240))(v5, ((v4 >> 31) & 0xFFFFFFFC) + 3012);
}
