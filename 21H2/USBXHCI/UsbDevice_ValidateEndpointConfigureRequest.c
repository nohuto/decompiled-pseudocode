/*
 * XREFs of UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0005C8C
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0007714 (UsbDevice_QueueConfigureEndpointEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     Controller_IsControllerAccessible @ 0x1C0007380 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A0B8 (WPP_RECORDER_SF_.c)
 *     Endpoint_Disable @ 0x1C000AB88 (Endpoint_Disable.c)
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0010CB0 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0013CB0 (WPP_RECORDER_SF_ddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0035E5C (WPP_RECORDER_SF_sds.c)
 */

__int64 __fastcall UsbDevice_ValidateEndpointConfigureRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  unsigned int v5; // edi
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // r10
  int v11; // ecx
  int v12; // ecx
  unsigned int *v13; // rcx
  int v14; // r12d
  unsigned int v15; // edx
  unsigned int v16; // r13d
  unsigned int v17; // eax
  __int64 v18; // rax
  int v20; // [rsp+20h] [rbp-48h]
  char v21; // [rsp+30h] [rbp-38h]
  unsigned int v22; // [rsp+70h] [rbp+8h]
  unsigned int *v23; // [rsp+80h] [rbp+18h]

  v2 = 0LL;
  v3 = a2;
  if ( !*(_BYTE *)(a1 + 134) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        a2,
        12,
        33,
        (__int64)&WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids,
        *(_BYTE *)(a1 + 135),
        *(_QWORD *)a1);
    }
    return *(_DWORD *)(v3 + 24) != 0 ? 0xC0000001 : 0;
  }
  if ( !(unsigned __int8)Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
  {
    v5 = *(_DWORD *)(v3 + 24) != 0 ? 0xC000000E : 0;
    if ( *(_DWORD *)(v3 + 40) )
    {
      do
      {
        v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
               WdfDriverGlobals,
               *(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v2),
               off_1C00601A8);
        Endpoint_Disable(v8, 0LL);
        v2 = (unsigned int)(v2 + 1);
      }
      while ( (unsigned int)v2 < *(_DWORD *)(v3 + 40) );
    }
    return v5;
  }
  v9 = *(_DWORD *)(v3 + 84);
  if ( v9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v9) = 5;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v9,
        12,
        34,
        (__int64)&WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids,
        *(_DWORD *)(v3 + 84));
    }
    v10 = *(_QWORD *)(a1 + 8);
    v11 = *(_DWORD *)(v10 + 588);
    if ( !v11 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(v10 + 72), v9, 12, 35, (__int64)&WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids);
      }
      return (unsigned int)-1073741637;
    }
    v12 = v11 - 1;
    if ( v12 )
    {
      if ( v12 != 1 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(
            WPP_GLOBAL_Control->DeviceExtension,
            v9,
            v6,
            v7,
            v20,
            (__int64)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c",
            60,
            (__int64)"Unexpected offload mode value");
        if ( !KdRefreshDebuggerNotPresent() )
          __debugbreak();
        return (unsigned int)-1073741823;
      }
    }
    else if ( !*(_BYTE *)(a1 + 658) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(v10 + 72), v9, 12, 36, (__int64)&WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids);
      }
      return (unsigned int)-1073741790;
    }
  }
  v13 = *(unsigned int **)(v3 + 88);
  v14 = 0;
  v15 = *(_DWORD *)(v3 + 84);
  v16 = 0;
  v23 = v13;
  if ( v15 )
  {
    while ( 1 )
    {
      v17 = 0;
      v22 = 0;
      if ( *(_DWORD *)(v3 + 24) )
      {
        while ( *(unsigned __int8 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                                       WdfDriverGlobals,
                                       *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8LL * v17),
                                       off_1C00601A8)
                                   + 98) != *((_WORD *)v23 + 2) )
        {
          v17 = v22 + 1;
          v22 = v17;
          if ( v17 >= *(_DWORD *)(v3 + 24) )
          {
            v13 = v23;
            goto LABEL_34;
          }
        }
        ++v14;
        v13 = v23;
      }
LABEL_34:
      v18 = *v13;
      if ( !(_DWORD)v18 )
        break;
      v15 = *(_DWORD *)(v3 + 84);
      v13 = (unsigned int *)((char *)v13 + v18);
      ++v16;
      v23 = v13;
      if ( v16 >= v15 )
        goto LABEL_36;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v15,
        12,
        37,
        (__int64)&WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids,
        *(_BYTE *)(a1 + 135),
        v16);
    }
  }
  else
  {
LABEL_36:
    if ( v14 == v15 )
      return 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = v15;
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v15,
        12,
        38,
        (__int64)&WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids,
        *(_BYTE *)(a1 + 135),
        v21,
        v14);
    }
  }
  return (unsigned int)-1073741811;
}
