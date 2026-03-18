/*
 * XREFs of UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0005BA4
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C00071A4 (UsbDevice_QueueConfigureEndpointEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     Controller_IsControllerAccessible @ 0x1C0006E10 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009878 (WPP_RECORDER_SF_.c)
 *     Endpoint_Disable @ 0x1C000A348 (Endpoint_Disable.c)
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0010224 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0012BE0 (WPP_RECORDER_SF_ddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003567C (WPP_RECORDER_SF_sds.c)
 */

__int64 __fastcall UsbDevice_ValidateEndpointConfigureRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  int v5; // r8d
  int v6; // r9d
  unsigned int v7; // edx
  unsigned int *v8; // rcx
  int v9; // r12d
  unsigned int v10; // r13d
  unsigned int v11; // edi
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rax
  int v18; // [rsp+20h] [rbp-48h]
  char v19; // [rsp+30h] [rbp-38h]
  unsigned int v20; // [rsp+70h] [rbp+8h]
  unsigned int *v21; // [rsp+80h] [rbp+18h]

  v2 = 0LL;
  v3 = a2;
  if ( *(_BYTE *)(a1 + 134) )
  {
    if ( (unsigned __int8)Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
    {
      v7 = *(_DWORD *)(v3 + 84);
      if ( !v7 )
        goto LABEL_4;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v7) = 5;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v7,
          12,
          34,
          (__int64)&WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids,
          *(_DWORD *)(v3 + 84));
      }
      v14 = *(_QWORD *)(a1 + 8);
      v15 = *(_DWORD *)(v14 + 572);
      if ( v15 )
      {
        if ( (unsigned int)(v15 - 1) > 1 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_sds(
              WPP_GLOBAL_Control->DeviceExtension,
              v7,
              v5,
              v6,
              v18,
              (__int64)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c",
              19,
              (__int64)"Unexpected offload mode value");
          if ( !KdRefreshDebuggerNotPresent() )
            __debugbreak();
          return (unsigned int)-1073741823;
        }
        else
        {
          if ( *(_BYTE *)(a1 + 658) )
          {
            v7 = *(_DWORD *)(v3 + 84);
LABEL_4:
            v8 = *(unsigned int **)(v3 + 88);
            v9 = 0;
            v21 = v8;
            v10 = 0;
            if ( v7 )
            {
              while ( 1 )
              {
                v16 = 0;
                v20 = 0;
                if ( *(_DWORD *)(v3 + 24) )
                {
                  while ( *(unsigned __int8 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                                                 WdfDriverGlobals,
                                                 *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8LL * v16),
                                                 off_1C00601A8)
                                             + 98) != *((_WORD *)v21 + 2) )
                  {
                    v16 = v20 + 1;
                    v20 = v16;
                    if ( v16 >= *(_DWORD *)(v3 + 24) )
                    {
                      v8 = v21;
                      goto LABEL_37;
                    }
                  }
                  ++v9;
                  v8 = v21;
                }
LABEL_37:
                v17 = *v8;
                if ( !(_DWORD)v17 )
                  break;
                v7 = *(_DWORD *)(v3 + 84);
                v8 = (unsigned int *)((char *)v8 + v17);
                ++v10;
                v21 = v8;
                if ( v10 >= v7 )
                  goto LABEL_5;
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v7) = 2;
                WPP_RECORDER_SF_dd(
                  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                  v7,
                  12,
                  37,
                  (__int64)&WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids,
                  *(_BYTE *)(a1 + 135),
                  v10);
              }
            }
            else
            {
LABEL_5:
              if ( v9 == v7 )
                return 0;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v19 = v7;
                LOBYTE(v7) = 2;
                WPP_RECORDER_SF_ddd(
                  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                  v7,
                  12,
                  38,
                  (__int64)&WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids,
                  *(_BYTE *)(a1 + 135),
                  v19,
                  v9);
              }
            }
            return (unsigned int)-1073741811;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v7) = 2;
            WPP_RECORDER_SF_(
              *(_QWORD *)(v14 + 72),
              v7,
              12,
              36,
              (__int64)&WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids);
          }
          return (unsigned int)-1073741790;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = 2;
          WPP_RECORDER_SF_(*(_QWORD *)(v14 + 72), v7, 12, 35, (__int64)&WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids);
        }
        return (unsigned int)-1073741637;
      }
    }
    else
    {
      v11 = *(_DWORD *)(v3 + 24) != 0 ? 0xC000000E : 0;
      if ( *(_DWORD *)(v3 + 40) )
      {
        do
        {
          v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                  WdfDriverGlobals,
                  *(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v2),
                  off_1C00601A8);
          Endpoint_Disable(v13, 0LL);
          v2 = (unsigned int)(v2 + 1);
        }
        while ( (unsigned int)v2 < *(_DWORD *)(v3 + 40) );
      }
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        a2,
        12,
        33,
        (__int64)&WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids,
        *(_BYTE *)(a1 + 135),
        *(_QWORD *)a1);
    }
    return *(_DWORD *)(v3 + 24) != 0 ? 0xC0000001 : 0;
  }
  return v11;
}
