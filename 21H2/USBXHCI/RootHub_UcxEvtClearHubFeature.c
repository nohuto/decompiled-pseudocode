/*
 * XREFs of RootHub_UcxEvtClearHubFeature @ 0x1C003DEF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000A588 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C003ECA4 (WPP_RECORDER_SF_DDDDDDDD.c)
 */

__int64 __fastcall RootHub_UcxEvtClearHubFeature(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // edx
  __int64 v9; // rbp
  int v10; // r9d
  int v11; // edx
  int v12; // r8d
  int v13; // r9d
  __int64 v15; // [rsp+20h] [rbp-A8h]
  _OWORD v16[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v17; // [rsp+90h] [rbp-38h]

  v3 = 0;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0061248);
  if ( *(_BYTE *)(*(_QWORD *)(v4 + 8) + 553LL) && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v5,
        v6,
        v7,
        v15,
        "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c",
        175,
        "Code Path Requires Passive Level");
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  v17 = 0LL;
  memset(v16, 0, sizeof(v16));
  LOWORD(v16[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v16);
  v9 = *((_QWORD *)&v16[0] + 1);
  if ( *(_WORD *)(*((_QWORD *)&v16[0] + 1) + 128LL) != 288 || *(_DWORD *)(*((_QWORD *)&v16[0] + 1) + 132LL) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = *(unsigned __int8 *)(*((_QWORD *)&v16[0] + 1) + 134LL);
      v10 = 34;
      v12 = *(unsigned __int8 *)(*((_QWORD *)&v16[0] + 1) + 133LL);
      goto LABEL_21;
    }
LABEL_22:
    v3 = -1073741823;
    *(_DWORD *)(v9 + 4) = -1073741820;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             v3);
  }
  if ( *(_WORD *)(*((_QWORD *)&v16[0] + 1) + 130LL) )
  {
    if ( *(_WORD *)(*((_QWORD *)&v16[0] + 1) + 130LL) != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = 37;
        v11 = *(unsigned __int8 *)(*((_QWORD *)&v16[0] + 1) + 134LL);
        v12 = *(unsigned __int8 *)(*((_QWORD *)&v16[0] + 1) + 133LL);
LABEL_21:
        WPP_RECORDER_SF_DDDDDDDD(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL), v11, v12, v10);
        goto LABEL_22;
      }
      goto LABEL_22;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 36;
LABEL_17:
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        v8,
        11,
        v13,
        (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = 35;
    goto LABEL_17;
  }
  *(_DWORD *)(v9 + 4) = 0;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           v3);
}
