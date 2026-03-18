/*
 * XREFs of Interrupter_PrepareHardware @ 0x1C006ED2C
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C006E9D0 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     Interrupter_SetSecondaryInterrupterCount @ 0x1C0001904 (Interrupter_SetSecondaryInterrupterCount.c)
 *     Debug_FreAssertMsg @ 0x1C00028EC (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A588 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C003C62C (WPP_RECORDER_SF_Dd.c)
 *     Interrupter_CreateInterrupter @ 0x1C006CEC0 (Interrupter_CreateInterrupter.c)
 *     Interrupter_PopulateInterrupterLookupTable @ 0x1C006EE48 (Interrupter_PopulateInterrupterLookupTable.c)
 *     Interrupter_PrepareInterrupter @ 0x1C006EE98 (Interrupter_PrepareInterrupter.c)
 *     Interrupter_CmResList_GetInterrupterCountAndType @ 0x1C006F814 (Interrupter_CmResList_GetInterrupterCountAndType.c)
 */

__int64 __fastcall Interrupter_PrepareHardware(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  _DWORD *v4; // r15
  __int64 v6; // rbp
  __int64 v8; // rdx
  unsigned int v9; // r14d
  int v10; // ebx
  int v11; // r13d
  __int64 Pool2; // rax
  __int64 v13; // rcx
  int v14; // edx
  unsigned int v15; // ebx
  _QWORD *v16; // rcx
  int v18; // r9d
  __int64 v19; // r8
  unsigned int v20; // ecx
  unsigned int v21; // edx
  bool v22; // cc
  int v23; // r9d
  unsigned int i; // r14d
  _BYTE *v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // r8d
  __int64 v30; // r15
  int v31; // r9d
  __int64 v32; // r14
  int v33; // [rsp+20h] [rbp-58h]
  unsigned int v34; // [rsp+80h] [rbp+8h] BYREF
  __int64 v35; // [rsp+88h] [rbp+10h]
  __int64 v36; // [rsp+98h] [rbp+20h] BYREF

  v35 = a2;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = (_DWORD *)(a1 + 16);
  LODWORD(v6) = 0;
  v36 = 0LL;
  v34 = 0;
  Interrupter_CmResList_GetInterrupterCountAndType(a1, a2, &v34, a1 + 16);
  v9 = v34;
  if ( !v34 )
  {
    v15 = -1073741670;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v15;
    v18 = 17;
LABEL_14:
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_(*(_QWORD *)(v3 + 72), v8, 9, v18, (__int64)&WPP_84765f96df013c20a94fd65d5e9532b8_Traceguids);
    return v15;
  }
  if ( *(_DWORD *)(v3 + 588) == 1 )
  {
    v19 = *(_QWORD *)(v3 + 88);
    v20 = (*(_DWORD *)(v19 + 80) >> 8) & 0x7FF;
    if ( v20 < 2 )
    {
      v15 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v15;
      v18 = 18;
      goto LABEL_14;
    }
    if ( (*(_QWORD *)(v3 + 336) & 0x1000LL) != 0 )
    {
      v15 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v15;
      v18 = 19;
      goto LABEL_14;
    }
    v21 = *(_DWORD *)(a1 + 64);
    if ( v21 == -1 )
    {
      if ( g_ReservedMessageForOffloadMode == -1 )
        g_ReservedMessageForOffloadMode = ((*(_DWORD *)(*(_QWORD *)(v3 + 88) + 80LL) >> 8) & 0x7FF) - 1;
      v19 = *(_QWORD *)(v3 + 88);
    }
    else if ( v21 >= v20 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v21) = 2;
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(v3 + 72),
          v21,
          9,
          20,
          (__int64)&WPP_84765f96df013c20a94fd65d5e9532b8_Traceguids,
          *(_DWORD *)(a1 + 64),
          BYTE1(*(_DWORD *)(v19 + 80)));
      }
      *(_DWORD *)(v3 + 588) = 0;
      return (unsigned int)-1073741823;
    }
    if ( g_ReservedMessageForOffloadMode >= ((*(_DWORD *)(v19 + 80) >> 8) & 0x7FFu) )
      g_ReservedMessageForOffloadMode = ((*(_DWORD *)(*(_QWORD *)(v3 + 88) + 80LL) >> 8) & 0x7FF) - 1;
    v10 = g_ReservedMessageForOffloadMode;
    v11 = 1;
    v9 = v34;
    v22 = v34 <= g_ReservedMessageForOffloadMode;
    *(_DWORD *)(a1 + 64) = g_ReservedMessageForOffloadMode;
    if ( !v22 )
      v10 = v9;
  }
  else
  {
    v10 = v34 - 1;
    v11 = 0;
  }
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(8 * v10 + 8), 1229146200LL);
  *(_QWORD *)(a1 + 32) = Pool2;
  if ( !Pool2 )
  {
    v15 = -1073741670;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v15;
    v18 = 21;
    goto LABEL_14;
  }
  v13 = *(_QWORD *)(a1 + 40);
  LOBYTE(v8) = *v4 != 0;
  *(_DWORD *)(a1 + 80) = v10 + 1;
  v15 = Interrupter_PrepareInterrupter(v13, v8);
  if ( (v15 & 0x80000000) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v15;
    v23 = 22;
    goto LABEL_68;
  }
  v16 = *(_QWORD **)(a1 + 32);
  *(_DWORD *)(a1 + 24) = v11 + 1;
  *v16 = *(_QWORD *)(a1 + 40);
  if ( (*(_QWORD *)(v3 + 336) & 0x1000LL) != 0 )
    Interrupter_SetSecondaryInterrupterCount(a1, 0);
  if ( *(_DWORD *)(a1 + 20) && v9 > 1 && *v4 == 2 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2432))(
                  WdfDriverGlobals,
                  a3) )
      {
        *(_DWORD *)(a1 + 24) += *(_DWORD *)(a1 + 20);
        break;
      }
      v25 = (_BYTE *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2440))(
                       WdfDriverGlobals,
                       a3,
                       i);
      if ( *v25 == 2 && (v25[2] & 3) == 3 )
      {
        if ( (_DWORD)v6 )
        {
          if ( (_DWORD)v6 == *(_DWORD *)(a1 + 64) )
          {
            Debug_FreAssertMsg(
              (__int64)"Message number reserved for software offload mode is visible to Windows",
              0,
              (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\interrupter.c",
              540);
          }
          else
          {
            v26 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2440))(
                    WdfDriverGlobals,
                    a3,
                    i);
            v27 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2440))(
                    WdfDriverGlobals,
                    v35,
                    i);
            v15 = Interrupter_CreateInterrupter(*(_QWORD *)a1, v3, v6, v27, v26, &v36, 0LL);
            if ( (v15 & 0x80000000) != 0 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                return v15;
              v31 = 23;
LABEL_57:
              WPP_RECORDER_SF_Dd(*(_QWORD *)(v3 + 72), v28, v29, v31, v33, v6, v15);
              return v15;
            }
            v30 = v36;
            LOBYTE(v28) = 1;
            v15 = Interrupter_PrepareInterrupter(v36, v28);
            if ( (v15 & 0x80000000) != 0 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                return v15;
              v31 = 24;
              goto LABEL_57;
            }
            *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * (unsigned int)v6) = v30;
          }
          LODWORD(v6) = v6 + 1;
        }
        else
        {
          LODWORD(v6) = 1;
        }
      }
    }
  }
  if ( v11 != 1 )
  {
LABEL_10:
    v15 = Interrupter_PopulateInterrupterLookupTable(a1);
    if ( (v15 & 0x80000000) == 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v15;
    v23 = 27;
LABEL_68:
    LOBYTE(v14) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(v3 + 72), v14, 9, v23, (__int64)&WPP_84765f96df013c20a94fd65d5e9532b8_Traceguids, v15);
    return v15;
  }
  v6 = *(unsigned int *)(a1 + 64);
  v15 = Interrupter_CreateInterrupter(*(_QWORD *)a1, v3, *(_DWORD *)(a1 + 64), 0LL, 0LL, &v36, 0LL);
  if ( (v15 & 0x80000000) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v31 = 25;
      goto LABEL_57;
    }
    return v15;
  }
  v32 = v36;
  LOBYTE(v28) = 1;
  v15 = Interrupter_PrepareInterrupter(v36, v28);
  if ( (v15 & 0x80000000) == 0 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v6) = v32;
    *(_QWORD *)(a1 + 72) = v32;
    goto LABEL_10;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v31 = 26;
    goto LABEL_57;
  }
  return v15;
}
