/*
 * XREFs of xxxSystemParametersInfo @ 0x1C008BBE0
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C008DFF4 (-UserInitialize@@YAJXZ.c)
 *     NtUserSystemParametersInfo @ 0x1C01377E0 (NtUserSystemParametersInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ReadPointerDeviceSettings @ 0x1C008BF30 (ReadPointerDeviceSettings.c)
 *     BroadcastSettingsUpdateToAllContainers @ 0x1C008C1F0 (BroadcastSettingsUpdateToAllContainers.c)
 *     ApiSetEditionCheckDesktopPolicy @ 0x1C008C210 (ApiSetEditionCheckDesktopPolicy.c)
 *     CreateProfileUserName @ 0x1C008DA20 (CreateProfileUserName.c)
 *     _GetPrecisionTouchPadConfiguration @ 0x1C008DDE0 (_GetPrecisionTouchPadConfiguration.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C008FCEC (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C01208C0 (_SetPrecisionTouchPadConfiguration.c)
 *     FastWriteProfileValue @ 0x1C0122050 (FastWriteProfileValue.c)
 *     WritePointerDeviceSettings @ 0x1C012A5D0 (WritePointerDeviceSettings.c)
 *     ?IsSPIActionAllowedForFilteredProcess@@YAHI@Z @ 0x1C013A548 (-IsSPIActionAllowedForFilteredProcess@@YAHI@Z.c)
 *     ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x1C013A8D4 (-SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1C013AB74 (-SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1C013ACE4 (-SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z @ 0x1C013AE74 (-SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z.c)
 *     EtwTraceSPIBlockedByFiltering @ 0x1C014D9A0 (EtwTraceSPIBlockedByFiltering.c)
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x1C01A18C8 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 *     ApiSetEditionxxxBroadcastSPIChange @ 0x1C01C8898 (ApiSetEditionxxxBroadcastSPIChange.c)
 */

__int64 __fastcall xxxSystemParametersInfo(unsigned int a1, unsigned int a2, void *a3, unsigned int a4)
{
  __int64 v7; // rdx
  unsigned __int8 v8; // bl
  __int64 v9; // r8
  int v10; // r15d
  unsigned __int8 v11; // r12
  __int64 v12; // r9
  unsigned __int8 v13; // di
  __int64 v14; // rcx
  unsigned int v15; // edi
  int v16; // eax
  _WORD *v18; // rdx
  int v19; // ecx
  int PrecisionTouchPadConfiguration; // eax
  _DWORD *v21; // rcx
  __int64 v22; // r13
  void (__fastcall *v23)(struct _EVENT_DATA_DESCRIPTOR *); // rax
  struct _EVENT_DATA_DESCRIPTOR *v24; // rcx
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // r13
  char *v28; // rsi
  int v29; // [rsp+30h] [rbp-59h] BYREF
  void *v30; // [rsp+38h] [rbp-51h] BYREF
  int v31; // [rsp+40h] [rbp-49h]
  __int128 v32; // [rsp+48h] [rbp-41h] BYREF
  __int64 v33; // [rsp+58h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+60h] [rbp-29h] BYREF
  __int64 v35; // [rsp+70h] [rbp-19h]
  int *v36; // [rsp+80h] [rbp-9h]
  __int64 v37; // [rsp+88h] [rbp-1h]

  v30 = a3;
  v8 = 0;
  if ( (unsigned __int8)PsIsWin32KFilterEnabled() && !(unsigned int)IsSPIActionAllowedForFilteredProcess(a1) )
  {
    EtwTraceSPIBlockedByFiltering(a1);
    if ( (unsigned int)dword_1C02431E0 > 5 && tlgKeywordOn((__int64)&dword_1C02431E0, 0x400000000000LL) )
    {
      v29 = a1;
      v36 = &v29;
      v37 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C02431E0,
        (unsigned __int8 *)dword_1C0212BA7,
        0LL,
        0LL,
        3u,
        &v34);
    }
    return 0LL;
  }
  v9 = 1LL;
  v29 = 0;
  v10 = 0;
  if ( (a4 & 1) != 0 )
  {
    v11 = 1;
    v12 = 0LL;
  }
  else
  {
    v11 = 0;
    v12 = 1LL;
  }
  v13 = v11 ^ 1;
  v31 = a4 & 2;
  v14 = 146LL;
  v33 = 0LL;
  v32 = 0LL;
  if ( a1 > 0x92 )
  {
    v14 = 147LL;
    switch ( a1 )
    {
      case 0x93u:
        v13 = (unsigned int)WritePointerDeviceSettings(147LL, v30, v11, v12) != 0;
        v10 = v13;
        goto LABEL_64;
      case 0xAEu:
        PrecisionTouchPadConfiguration = GetPrecisionTouchPadConfiguration(v30);
        return PrecisionTouchPadConfiguration != 0;
      case 0xAFu:
        v10 = SetPrecisionTouchPadConfiguration(v30, v7, 1LL, v12);
        if ( v10 )
        {
          v13 = 1;
          PTPTelemetry::PTPConfigUpdateEx(0LL);
          goto LABEL_64;
        }
        return v8;
    }
    if ( a1 != 8222 )
    {
      if ( a1 == 8223 )
        goto LABEL_91;
      if ( a1 != 8224 )
      {
        if ( a1 == 8225 )
          goto LABEL_91;
        if ( a1 != 8230 )
        {
          if ( a1 != 8231 )
            goto LABEL_11;
LABEL_91:
          v35 = 0LL;
          v34 = 0LL;
          v27 = CreateProfileUserName(&v34);
          v28 = (char *)&gpviCPUserPreferences[4 * ((a1 - 0x2000) >> 1) + 4];
          if ( v11 )
          {
            v13 = (unsigned int)FastWriteProfileValue(
                                  v27,
                                  *((unsigned int *)v28 + 1),
                                  *((_QWORD *)v28 + 1),
                                  4LL,
                                  &v30,
                                  4) != 0;
            v10 = v13;
          }
          if ( v13 )
          {
            *(_DWORD *)v28 = (_DWORD)v30;
            BroadcastSettingsUpdateToAllContainers();
          }
          if ( !v27 )
            goto LABEL_64;
          v23 = (void (__fastcall *)(struct _EVENT_DATA_DESCRIPTOR *))qword_1C024FFE8;
          if ( !qword_1C024FFE8 )
            goto LABEL_64;
          v24 = &v34;
          goto LABEL_63;
        }
      }
    }
    v19 = gpviCPUserPreferences[4 * ((a1 - 0x2000) >> 1) + 4];
LABEL_45:
    *(_DWORD *)v30 = v19;
    return v13;
  }
  if ( a1 == 146 )
  {
    PrecisionTouchPadConfiguration = ReadPointerDeviceSettings(146LL, v30, 1LL, v12);
    return PrecisionTouchPadConfiguration != 0;
  }
  if ( a1 > 0x3B )
  {
    if ( a1 != 60 )
    {
      if ( a1 != 61 )
      {
        if ( a1 != 104 )
        {
          if ( a1 != 105 )
            goto LABEL_11;
          v22 = CreateProfileUserName(&v32);
          if ( (unsigned int)ApiSetEditionCheckDesktopPolicy() )
          {
            v11 = 0;
            v13 = 0;
          }
          if ( v11 )
          {
            RtlStringCchPrintfW((wchar_t *)&v34, 0x10uLL, L"%d", a2);
            v26 = -1LL;
            do
              ++v26;
            while ( *((_WORD *)&v34.Ptr + v26) );
            v13 = (unsigned int)FastWriteProfileValue(v22, 4LL, 14LL, 1LL, &v34, 2 * (int)v26 + 2) != 0;
            v10 = v13;
          }
          if ( v13 )
          {
            *((_DWORD *)gpsi + 1247) = a2;
            BroadcastSettingsUpdateToAllContainers();
          }
          if ( !v22 )
            goto LABEL_64;
          v23 = (void (__fastcall *)(struct _EVENT_DATA_DESCRIPTOR *))qword_1C024FFE8;
          if ( !qword_1C024FFE8 )
            goto LABEL_64;
          v24 = (struct _EVENT_DATA_DESCRIPTOR *)&v32;
LABEL_63:
          v23(v24);
LABEL_64:
          if ( v10 && v31 )
            ApiSetEditionxxxBroadcastSPIChange(a1);
          return v13;
        }
        v19 = *((_DWORD *)gpsi + 1247);
        goto LABEL_45;
      }
      v25 = SpiSetAccessTimeOut(a2, v30, v11, v12, &v29);
LABEL_80:
      v10 = v29;
      v13 = v25 != 0;
      goto LABEL_64;
    }
    if ( a2 && a2 != 12 || !v30 || *(_DWORD *)v30 != 12 )
      return 0LL;
    *(_QWORD *)((char *)v30 + 4) = qword_1C0249B94;
    return 1;
  }
  switch ( a1 )
  {
    case ';':
      v25 = SpiSetStickyKeys(a2, v30, v11, v12, &v29);
      goto LABEL_80;
    case '2':
      if ( a2 && a2 != 24 )
        return 0LL;
      v21 = v30;
      if ( !v30 || *(_DWORD *)v30 != 24 )
        return 0LL;
      *(_OWORD *)((char *)v30 + 4) = xmmword_1C0249BCC;
      v21[5] = Value;
      return 1;
    case '3':
      v25 = SpiSetFilterKeys(a2, v30, v11, v12, &v29);
      goto LABEL_80;
    case '4':
      if ( (a2 & 0xFFFFFFF7) != 0 || !v30 || *(_DWORD *)v30 != 8 )
        return 0LL;
      *((_DWORD *)v30 + 1) = dword_1C0249B8C;
      return 1;
    case '5':
      v25 = SpiSetToggleKeys(a2, v30, v11, v12, &v29);
      goto LABEL_80;
    case ':':
      v18 = v30;
      if ( (a2 & 0xFFFFFFF7) == 0 && v30 && *(_DWORD *)v30 == 8 )
      {
        *((_DWORD *)v30 + 1) = dword_1C0249BC4;
        v18[3] = 0;
        v8 = 1;
        *((_DWORD *)v18 + 1) |= (unsigned __int8)gLatchBits << 24;
        *((_DWORD *)v18 + 1) |= (unsigned __int8)gLockBits << 16;
      }
      return v8;
  }
LABEL_11:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = (__int64)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v7) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        10,
        438,
        (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
    }
  }
  v15 = 0;
  if ( qword_1C02507C8 )
    v16 = qword_1C02507C8(v14, v7, v9, v12);
  else
    v16 = -1073741637;
  if ( v16 >= 0 && qword_1C02507D0 )
    v15 = qword_1C02507D0(a1, a2, v30, a4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v7) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        10,
        439,
        (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
    }
  }
  return v15;
}
