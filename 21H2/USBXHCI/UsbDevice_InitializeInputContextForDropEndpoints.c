/*
 * XREFs of UsbDevice_InitializeInputContextForDropEndpoints @ 0x1C000448C
 * Callers:
 *     UsbDevice_InitializeInputContextForAddDropEndpoints @ 0x1C0001F74 (UsbDevice_InitializeInputContextForAddDropEndpoints.c)
 * Callees:
 *     XilUsbDevice_GetDeviceContextBufferVA @ 0x1C000154C (XilUsbDevice_GetDeviceContextBufferVA.c)
 *     WPP_RECORDER_SF_dddddd @ 0x1C0001B40 (WPP_RECORDER_SF_dddddd.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbDevice_InitializeInputContextForDropEndpoints(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  _DWORD *v5; // rbp
  __int64 i; // rdi
  int v8; // edx
  int v9; // r11d
  __int64 v10; // r14
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 DeviceContextBufferVA; // rax
  __int64 v14; // r9
  __int64 v15; // r8
  int v16; // [rsp+20h] [rbp-58h]

  v4 = *(_QWORD *)((*(_BYTE *)(a1 + 657) != 0 ? 8 : 0) + a1 + 640);
  if ( v4 )
    v5 = *(_DWORD **)(v4 + 16);
  else
    v5 = 0LL;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 40); i = (unsigned int)(i + 1) )
  {
    v9 = *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                       WdfDriverGlobals,
                       *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * i),
                       off_1C00611A8)
                   + 144);
    *v5 |= 1 << v9;
    if ( *(_BYTE *)(a1 + 657) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 4;
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v8,
          12,
          42,
          (__int64)&WPP_5cc87a4a737631244eec1c43efcd9051_Traceguids,
          *(_BYTE *)(a1 + 135),
          v9);
      }
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 8);
      if ( (*(_DWORD *)(*(_QWORD *)(v10 + 88) + 100LL) & 4) != 0 )
      {
        DeviceContextBufferVA = XilUsbDevice_GetDeviceContextBufferVA(a1);
        v11 = (v15 + 1) << 6;
      }
      else
      {
        v11 = XilUsbDevice_GetDeviceContextBufferVA(a1);
        DeviceContextBufferVA = 32 * (v12 + 1);
      }
      v14 = DeviceContextBufferVA + v11;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dddddd(
          *(_QWORD *)(v10 + 72),
          *(unsigned __int8 *)(v14 + 2),
          *(unsigned __int16 *)(v14 + 6),
          (*(_DWORD *)(v14 + 4) >> 3) & 7,
          v16);
    }
  }
  return 0LL;
}
