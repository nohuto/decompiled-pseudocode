/*
 * XREFs of Controller_PopulateDeviceFlags @ 0x1C006DA94
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0015410 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     Controller_Create @ 0x1C00702D4 (Controller_Create.c)
 * Callees:
 *     Controller_IsSecureDevice @ 0x1C0005AD0 (Controller_IsSecureDevice.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A588 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_di @ 0x1C0015540 (WPP_RECORDER_SF_di.c)
 *     Controller_PopulateTestRegistrySettings @ 0x1C00155D8 (Controller_PopulateTestRegistrySettings.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C00169B8 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Controller_ExecuteDSM @ 0x1C006C218 (Controller_ExecuteDSM.c)
 *     Controller_PopulateDeviceFlagsFromRegistry @ 0x1C006DBC8 (Controller_PopulateDeviceFlagsFromRegistry.c)
 *     Controller_PopulateRegistryOverrideForSetMultiTTBitFlag @ 0x1C006DD7C (Controller_PopulateRegistryOverrideForSetMultiTTBitFlag.c)
 */

__int16 __fastcall Controller_PopulateDeviceFlags(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  int v5; // edx
  int v6; // r8d
  __int16 result; // ax
  int v8; // edx
  __int64 v9; // rcx
  _QWORD *v10; // rsi
  __int16 v11; // cx
  int v12; // [rsp+20h] [rbp-38h]

  Controller_PopulateDeviceFlagsFromKse(a1, a2, a3);
  Controller_PopulateDeviceFlagsFromRegistry(a1, 2LL);
  Controller_PopulateDeviceFlagsFromRegistry(a1, 1LL);
  v4 = 0;
  if ( (unsigned int)Controller_ExecuteDSM((__int64 *)a1, &GUID_USB_ACPI_DSM, 0, 6, 0LL, 0) == 1 )
  {
    *(_QWORD *)(a1 + 336) |= 1uLL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v5, 4, 166, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids);
    }
  }
  Controller_PopulateRegistryOverrideForSetMultiTTBitFlag(a1);
  Controller_PopulateTestRegistrySettings(a1);
  if ( Controller_IsSecureDevice(a1) )
    *(_QWORD *)(a1 + 336) |= 0x20080uLL;
  if ( !*(_BYTE *)(a1 + 585) )
    *(_QWORD *)(a1 + 344) &= ~1uLL;
  result = *(_WORD *)(a1 + 248);
  *(_QWORD *)(a1 + 352) = 0LL;
  if ( result == 7027 )
  {
    v11 = *(_WORD *)(a1 + 252);
    v8 = 4105;
    if ( v11 == 4105 )
    {
      *(_QWORD *)(a1 + 352) = 2LL;
      goto LABEL_9;
    }
    if ( v11 == 4352 && *(_BYTE *)(a1 + 256) == 16 )
    {
      *(_QWORD *)(a1 + 352) = 1LL;
      v9 = 1LL;
      goto LABEL_8;
    }
  }
  v8 = 7023;
  v9 = 0LL;
  if ( result != 7023 )
  {
LABEL_8:
    v8 = 6945;
    if ( result == 6945 )
    {
      v8 = 4160;
      result = *(_WORD *)(a1 + 252) - 4160;
      if ( (unsigned __int16)result <= 2u )
        *(_QWORD *)(a1 + 352) = v9 | 0x10;
    }
    goto LABEL_9;
  }
  result = 28707;
  if ( *(_WORD *)(a1 + 252) == 28707 )
    *(_QWORD *)(a1 + 352) = 12LL;
LABEL_9:
  v10 = (_QWORD *)(a1 + 336);
  do
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      result = WPP_RECORDER_SF_di(*(_QWORD *)(a1 + 72), v8, v6, 169, v12, v4, *v10);
    }
    ++v4;
    ++v10;
  }
  while ( v4 < 2 );
  return result;
}
