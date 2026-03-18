/*
 * XREFs of XilDeviceSlot_PrepareHardware @ 0x1C0015BCC
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C006E290 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C00161E8 (XilCoreDeviceSlot_AllocateResources.c)
 *     memset @ 0x1C001BFC0 (memset.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0036B5C (WPP_RECORDER_SF_sds.c)
 *     XilDeviceSlot_AllocateSecureResources @ 0x1C0036EE4 (XilDeviceSlot_AllocateSecureResources.c)
 */

__int64 __fastcall XilDeviceSlot_PrepareHardware(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  bool v3; // zf
  __int64 v4; // rcx
  unsigned int Resources; // edi
  int SecureResources; // eax
  int v8; // edx
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  PVOID PoolWithTag; // rax
  int v13; // edx

  v1 = *(_QWORD *)(a1 + 8);
  v2 = a1 + 16;
  v3 = *(_BYTE *)(a1 + 80) == 0;
  v4 = a1 + 16;
  if ( v3 )
  {
    Resources = XilCoreDeviceSlot_AllocateResources(v4);
    *(_DWORD *)(v2 + 80) = *(_DWORD *)(v2 + 16);
    return Resources;
  }
  SecureResources = XilDeviceSlot_AllocateSecureResources(v4);
  Resources = SecureResources;
  if ( SecureResources >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(
                    SHIDWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink),
                    8LL * (unsigned int)(*(_DWORD *)(v2 + 80) + 1),
                    0x49434858u);
    *(_QWORD *)(v2 + 8) = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * (unsigned int)(*(_DWORD *)(v2 + 80) + 1));
      return Resources;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_8;
    LOBYTE(v13) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v1 + 72),
      v13,
      10,
      16,
      (__int64)&WPP_0ef60bba37223f5f44eaee70871e7dcd_Traceguids,
      Resources);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_8;
    goto LABEL_7;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v1 + 72),
      v8,
      10,
      15,
      (__int64)&WPP_0ef60bba37223f5f44eaee70871e7dcd_Traceguids,
      SecureResources);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
LABEL_7:
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v9, v10, v11);
  }
LABEL_8:
  if ( !KdRefreshDebuggerNotPresent() )
    __debugbreak();
  return Resources;
}
