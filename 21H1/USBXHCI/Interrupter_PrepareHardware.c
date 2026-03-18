/*
 * XREFs of Interrupter_PrepareHardware @ 0x1C006BBE0
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C006AFE0 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     Interrupter_SetSecondaryInterrupterCount @ 0x1C00058AC (Interrupter_SetSecondaryInterrupterCount.c)
 *     Debug_FreAssertMsg @ 0x1C00076EC (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009878 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00194C0 (memset.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C003B82C (WPP_RECORDER_SF_Dd.c)
 *     Interrupter_PopulateInterrupterLookupTable @ 0x1C006BD10 (Interrupter_PopulateInterrupterLookupTable.c)
 *     Interrupter_CmResList_GetInterrupterCountAndType @ 0x1C006C9A4 (Interrupter_CmResList_GetInterrupterCountAndType.c)
 *     Interrupter_PrepareInterrupter @ 0x1C006CAF8 (Interrupter_PrepareInterrupter.c)
 *     Interrupter_CreateInterrupter @ 0x1C0070144 (Interrupter_CreateInterrupter.c)
 */

__int64 __fastcall Interrupter_PrepareHardware(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  _DWORD *v4; // r15
  int v7; // edx
  unsigned int v8; // r14d
  int v9; // ebx
  int v10; // r13d
  PVOID PoolWithTag; // rax
  __int64 v12; // rdx
  int v13; // edx
  unsigned int Interrupter; // ebx
  _QWORD *v15; // rcx
  __int64 v16; // rbp
  int v18; // r9d
  __int64 v19; // r8
  unsigned int v20; // ecx
  unsigned int v21; // edx
  bool v22; // cc
  int v23; // r9d
  unsigned int i; // r14d
  _BYTE *v25; // rax
  __int64 v26; // rbx
  int v27; // eax
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
  v36 = 0LL;
  v34 = 0;
  Interrupter_CmResList_GetInterrupterCountAndType(a1, a2, &v34, a1 + 16);
  v8 = v34;
  if ( !v34 )
  {
    Interrupter = -1073741670;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return Interrupter;
    v18 = 16;
LABEL_14:
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_(*(_QWORD *)(v3 + 72), v7, 9, v18, (__int64)&WPP_260d7188460d377ee27ff5eb6158db37_Traceguids);
    return Interrupter;
  }
  if ( *(_DWORD *)(v3 + 572) == 1 )
  {
    v19 = *(_QWORD *)(v3 + 88);
    v20 = (*(_DWORD *)(v19 + 80) >> 8) & 0x7FF;
    if ( v20 < 2 )
    {
      Interrupter = -1073741670;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return Interrupter;
      v18 = 17;
      goto LABEL_14;
    }
    if ( (*(_QWORD *)(v3 + 336) & 0x1000LL) != 0 )
    {
      Interrupter = -1073741670;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return Interrupter;
      v18 = 18;
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
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(v3 + 72),
          v21,
          9,
          19,
          (__int64)&WPP_260d7188460d377ee27ff5eb6158db37_Traceguids,
          *(_DWORD *)(a1 + 64),
          BYTE1(*(_DWORD *)(v19 + 80)));
      }
      *(_DWORD *)(v3 + 572) = 0;
      return (unsigned int)-1073741823;
    }
    if ( g_ReservedMessageForOffloadMode >= ((*(_DWORD *)(v19 + 80) >> 8) & 0x7FFu) )
      g_ReservedMessageForOffloadMode = ((*(_DWORD *)(*(_QWORD *)(v3 + 88) + 80LL) >> 8) & 0x7FF) - 1;
    v9 = g_ReservedMessageForOffloadMode;
    v10 = 1;
    v8 = v34;
    v22 = v34 <= g_ReservedMessageForOffloadMode;
    *(_DWORD *)(a1 + 64) = g_ReservedMessageForOffloadMode;
    if ( !v22 )
      v9 = v8;
  }
  else
  {
    v9 = v34 - 1;
    v10 = 0;
  }
  PoolWithTag = ExAllocatePoolWithTag(
                  (POOL_TYPE)WPP_MAIN_CB.DeviceLock.Header.SignalState,
                  (unsigned int)(8 * v9 + 8),
                  0x49434858u);
  *(_QWORD *)(a1 + 32) = PoolWithTag;
  if ( !PoolWithTag )
  {
    Interrupter = -1073741670;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return Interrupter;
    v18 = 20;
    goto LABEL_14;
  }
  *(_DWORD *)(a1 + 80) = v9 + 1;
  memset(PoolWithTag, 0, (unsigned int)(8 * v9 + 8));
  LOBYTE(v12) = *v4 != 0;
  Interrupter = Interrupter_PrepareInterrupter(*(_QWORD *)(a1 + 40), v12);
  if ( (Interrupter & 0x80000000) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return Interrupter;
    v23 = 21;
    goto LABEL_68;
  }
  v15 = *(_QWORD **)(a1 + 32);
  *(_DWORD *)(a1 + 24) = v10 + 1;
  *v15 = *(_QWORD *)(a1 + 40);
  if ( (*(_QWORD *)(v3 + 336) & 0x1000LL) != 0 )
    Interrupter_SetSecondaryInterrupterCount(a1, 0);
  LODWORD(v16) = 0;
  if ( *(_DWORD *)(a1 + 20) && v8 > 1 && *v4 == 2 )
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
        if ( (_DWORD)v16 )
        {
          if ( (_DWORD)v16 == *(_DWORD *)(a1 + 64) )
          {
            Debug_FreAssertMsg(
              (__int64)"Message number reserved for software offload mode is visible to Windows",
              0,
              (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\interrupter.c",
              500);
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
            Interrupter = Interrupter_CreateInterrupter(*(_QWORD *)a1, v3, v16, v27, v26, (__int64)&v36, 0LL);
            if ( (Interrupter & 0x80000000) != 0 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                return Interrupter;
              v31 = 22;
LABEL_57:
              WPP_RECORDER_SF_Dd(*(_QWORD *)(v3 + 72), v28, v29, v31, v33, v16, Interrupter);
              return Interrupter;
            }
            v30 = v36;
            LOBYTE(v28) = 1;
            Interrupter = Interrupter_PrepareInterrupter(v36, v28);
            if ( (Interrupter & 0x80000000) != 0 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                return Interrupter;
              v31 = 23;
              goto LABEL_57;
            }
            *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * (unsigned int)v16) = v30;
          }
          LODWORD(v16) = v16 + 1;
        }
        else
        {
          LODWORD(v16) = 1;
        }
      }
    }
  }
  if ( v10 != 1 )
  {
LABEL_10:
    Interrupter = Interrupter_PopulateInterrupterLookupTable(a1);
    if ( (Interrupter & 0x80000000) == 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return Interrupter;
    v23 = 26;
LABEL_68:
    LOBYTE(v13) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v3 + 72),
      v13,
      9,
      v23,
      (__int64)&WPP_260d7188460d377ee27ff5eb6158db37_Traceguids,
      Interrupter);
    return Interrupter;
  }
  v16 = *(unsigned int *)(a1 + 64);
  Interrupter = Interrupter_CreateInterrupter(*(_QWORD *)a1, v3, *(_DWORD *)(a1 + 64), 0, 0LL, (__int64)&v36, 0LL);
  if ( (Interrupter & 0x80000000) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v31 = 24;
      goto LABEL_57;
    }
    return Interrupter;
  }
  v32 = v36;
  LOBYTE(v28) = 1;
  Interrupter = Interrupter_PrepareInterrupter(v36, v28);
  if ( (Interrupter & 0x80000000) == 0 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v16) = v32;
    *(_QWORD *)(a1 + 72) = v32;
    goto LABEL_10;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v31 = 25;
    goto LABEL_57;
  }
  return Interrupter;
}
