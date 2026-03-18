/*
 * XREFs of Controller_PopulateDeviceFlags @ 0x1C006E8E0
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C00163D0 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     Controller_Create @ 0x1C006D970 (Controller_Create.c)
 * Callees:
 *     Controller_IsSecureDevice @ 0x1C0008D84 (Controller_IsSecureDevice.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C0015AB0 (Controller_PopulateDeviceFlagsFromKse.c)
 *     WPP_RECORDER_SF_di @ 0x1C001602C (WPP_RECORDER_SF_di.c)
 *     Controller_PopulateTestRegistrySettings @ 0x1C0018F40 (Controller_PopulateTestRegistrySettings.c)
 *     Controller_PopulateDeviceFlagsFromRegistry @ 0x1C006EA54 (Controller_PopulateDeviceFlagsFromRegistry.c)
 *     Controller_PopulateRegistryOverrideForSetMultiTTBitFlag @ 0x1C006EE14 (Controller_PopulateRegistryOverrideForSetMultiTTBitFlag.c)
 */

_UNKNOWN **__fastcall Controller_PopulateDeviceFlags(__int64 a1, __int64 a2, int a3)
{
  int v4; // r8d
  unsigned int v5; // edi
  __int16 v6; // ax
  __int64 v7; // rcx
  int v8; // edx
  _QWORD *v9; // rsi
  _UNKNOWN **result; // rax
  int v11; // [rsp+20h] [rbp-28h]

  Controller_PopulateDeviceFlagsFromKse(a1, a2, a3);
  Controller_PopulateDeviceFlagsFromRegistry(a1, 2LL);
  Controller_PopulateDeviceFlagsFromRegistry(a1, 1LL);
  Controller_PopulateRegistryOverrideForSetMultiTTBitFlag(a1);
  Controller_PopulateTestRegistrySettings(a1);
  v5 = 0;
  if ( Controller_IsSecureDevice(a1) )
    *(_QWORD *)(a1 + 336) |= 0x20080uLL;
  if ( !*(_BYTE *)(a1 + 569) )
    *(_QWORD *)(a1 + 344) &= ~1uLL;
  v6 = *(_WORD *)(a1 + 248);
  *(_QWORD *)(a1 + 352) = 0LL;
  v7 = 0LL;
  if ( v6 == 7027 )
  {
    v8 = *(unsigned __int16 *)(a1 + 252);
    if ( (_WORD)v8 == 4105 )
    {
      *(_QWORD *)(a1 + 352) = 2LL;
      goto LABEL_17;
    }
    v4 = 4352;
    v7 = 0LL;
    if ( (_WORD)v8 == 4352 && *(_BYTE *)(a1 + 256) == 16 )
    {
      *(_QWORD *)(a1 + 352) = 1LL;
      v7 = 1LL;
    }
  }
  if ( v6 == 7023 )
  {
    v8 = 28707;
    if ( *(_WORD *)(a1 + 252) != 28707 )
      goto LABEL_17;
    v7 |= 0xCuLL;
    *(_QWORD *)(a1 + 352) = v7;
  }
  v8 = 6945;
  if ( v6 == 6945 )
  {
    v8 = 4160;
    if ( (unsigned __int16)(*(_WORD *)(a1 + 252) - 4160) <= 2u )
      *(_QWORD *)(a1 + 352) = v7 | 0x10;
  }
LABEL_17:
  v9 = (_QWORD *)(a1 + 336);
  do
  {
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      result = (_UNKNOWN **)WPP_RECORDER_SF_di(*(_QWORD *)(a1 + 72), v8, v4, 168, v11, v5, *v9);
    }
    ++v5;
    ++v9;
  }
  while ( v5 < 2 );
  return result;
}
