/*
 * XREFs of HUBPDO_ValidateSelectConfigUrb @ 0x1C0015334
 * Callers:
 *     HUBDSM_ValidatingSelectConfigUrbFromConfigured @ 0x1C001DB80 (HUBDSM_ValidatingSelectConfigUrbFromConfigured.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002028 (WPP_RECORDER_SF_dD.c)
 *     HUBPDO_ValidateConfigurationDescriptor @ 0x1C0015138 (HUBPDO_ValidateConfigurationDescriptor.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002FCD4 (HUBMISC_VerifierDbgBreak.c)
 *     __security_check_cookie @ 0x1C00428D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 *     WMI_FireNotification @ 0x1C0084F0C (WMI_FireNotification.c)
 */

__int64 __fastcall HUBPDO_ValidateSelectConfigUrb(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rdx
  unsigned __int16 *v4; // r12
  __int64 v5; // r13
  int v6; // ebx
  int v7; // edi
  __int64 v8; // rdx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // rdx
  unsigned __int16 *v12; // rcx
  unsigned __int64 v13; // r8
  unsigned int v14; // edx
  __int64 v15; // r9
  int v16; // eax
  __int64 result; // rax
  _OWORD v18[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v19; // [rsp+60h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 456);
  memset(v18, 0, sizeof(v18));
  v19 = 0LL;
  LOWORD(v18[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v2,
    v18);
  v4 = (unsigned __int16 *)*((_QWORD *)&v18[0] + 1);
  v5 = *(_QWORD *)(*((_QWORD *)&v18[0] + 1) + 24LL);
  if ( !v5 )
  {
    *(_DWORD *)(v1 + 36) = 0;
    return 4077LL;
  }
  v6 = HUBPDO_ValidateConfigurationDescriptor(
         a1,
         *(unsigned __int8 **)(*((_QWORD *)&v18[0] + 1) + 24LL),
         *(unsigned __int16 *)(v5 + 2));
  if ( !v6 )
  {
    v8 = *(_QWORD *)(v1 + 16);
    v9 = 2 * *(unsigned __int8 *)(v5 + 8);
    *(_DWORD *)(v1 + 36) = v9;
    if ( *(_BYTE *)(v8 + 240) && v9 > *(_DWORD *)(v8 + 92) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          3u,
          5u,
          0x1Cu,
          (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids);
      v7 = -1073741670;
      v6 = -1073737728;
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1424LL) = 5;
      WMI_FireNotification(*(_QWORD *)a1, *(unsigned __int16 *)(v1 + 48), 2LL);
      goto LABEL_52;
    }
    if ( (*(_DWORD *)(a1 + 1456) & 0x800) != 0 )
    {
      v10 = 900;
      if ( *(_DWORD *)(v8 + 92) == 100 )
        v10 = 150;
      if ( 8 * (unsigned int)*(unsigned __int8 *)(v5 + 8) > v10 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
            3u,
            5u,
            0x1Du,
            (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids);
        v11 = *(_QWORD *)(v1 + 24);
        if ( (*(_DWORD *)(v11 + 2436) & 0x1000) != 0 )
          HUBMISC_VerifierDbgBreak("DeviceHwVerifierSetConfigTooMuchPowerRequired", v11 + 504);
      }
    }
    v12 = v4 + 20;
    v13 = (unsigned __int64)v4 + *v4;
    v14 = 0;
    if ( (unsigned __int64)(v4 + 21) < v13 )
    {
      while ( v14 < *(unsigned __int8 *)(v5 + 4) )
      {
        v15 = *v12;
        if ( (unsigned int)v15 < 0x18 || (v12 = (unsigned __int16 *)((char *)v12 + v15), (unsigned __int64)v12 > v13) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
              3u,
              5u,
              0x1Eu,
              (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids,
              v15);
          goto LABEL_50;
        }
        ++v14;
        if ( (unsigned __int64)(v12 + 1) >= v13 )
          break;
      }
    }
    v16 = *(unsigned __int8 *)(v5 + 4);
    if ( (_BYTE)v16 )
    {
      if ( v14 == v16 && v14 )
        return 4077LL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          3u,
          5u,
          0x20u,
          (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids,
          *(unsigned __int8 *)(v5 + 4),
          v14);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        3u,
        5u,
        0x1Fu,
        (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids);
    }
LABEL_50:
    v6 = -1073737984;
    goto LABEL_51;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      3u,
      5u,
      0x1Bu,
      (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids);
  if ( v6 > -1073738240 )
  {
    switch ( v6 )
    {
      case -1073737728:
        v7 = -1073741670;
        goto LABEL_52;
      case -1073713152:
        v7 = -1073741810;
        goto LABEL_52;
      case -1073676288:
        v7 = -1073741536;
        goto LABEL_52;
    }
    if ( (unsigned int)v6 <= 1 )
      return 4077LL;
    goto LABEL_51;
  }
  if ( v6 == -1073738240 )
  {
    v7 = -1073741637;
    goto LABEL_52;
  }
  if ( v6 != -2147483136 && v6 != -2147482880 && v6 != -2147482112 && v6 != -1073739264 )
  {
LABEL_51:
    v7 = -1073741823;
    goto LABEL_52;
  }
  v7 = -1073741811;
LABEL_52:
  result = 4065LL;
  *(_DWORD *)(a1 + 1560) = v7;
  *(_DWORD *)(a1 + 1564) = v6;
  return result;
}
