/*
 * XREFs of ?UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z @ 0x1C01BA6FC
 * Callers:
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C005F5D0 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C005F780 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     UpdatePointerDeviceSystemMetrics @ 0x1C01AC410 (UpdatePointerDeviceSystemMetrics.c)
 * Callees:
 *     ??0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C0025BE8 (--0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 *     ?WriteSystemMetricsKey@CInputSystemMetrics@@AEBAXKW4tagHPD_REGISTRY_HIVE@@@Z @ 0x1C0034B44 (-WriteSystemMetricsKey@CInputSystemMetrics@@AEBAXKW4tagHPD_REGISTRY_HIVE@@@Z.c)
 *     ?WritePointerDevicePresenceKey@CInputSystemMetrics@@AEBAXK@Z @ 0x1C0034C90 (-WritePointerDevicePresenceKey@CInputSystemMetrics@@AEBAXK@Z.c)
 *     IsPublicPointerDevice @ 0x1C005C068 (IsPublicPointerDevice.c)
 *     ?GetHardwareType@CInputSystemMetrics@@AEBAKPEBUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01BA6A4 (-GetHardwareType@CInputSystemMetrics@@AEBAKPEBUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInputSystemMetrics::UpdatePointerDeviceSystemMetrics(
        CInputSystemMetrics *this,
        const struct DEVICEINFO *a2)
{
  struct CInputSystemMetrics *v2; // r14
  CInputSystemMetrics *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // edi
  unsigned int v8; // ebp
  __int64 v9; // rbx
  int HardwareType; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  CInputSystemMetrics *v14; // rcx
  struct DEVICEINFO *i; // rsi
  __int64 v16; // rbx
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // ebx
  void *v20; // rcx
  __int64 v21; // r9
  __int64 v22; // [rsp+20h] [rbp-18h] BYREF
  char v23; // [rsp+28h] [rbp-10h]

  v2 = gpInputSystemMetrics;
  if ( IsPublicPointerDevice((__int64)a2) )
  {
    v7 = 0;
    v8 = 0;
    if ( (_BYTE)v5 )
    {
      v9 = *((_QWORD *)a2 + 60);
      HardwareType = CInputSystemMetrics::GetHardwareType(v4, (const struct tagHID_POINTER_DEVICE_INFO *)v9, v5, v6);
      v8 = *((_DWORD *)v2 + 2);
      v14 = (CInputSystemMetrics *)*(unsigned int *)(v9 + 720);
      v7 = *((_DWORD *)v2 + 1) | HardwareType;
      if ( v8 <= (unsigned int)v14 )
        v8 = *(_DWORD *)(v9 + 720);
    }
    else
    {
      CInpLockSharedIfNeeded::CInpLockSharedIfNeeded(
        (CInpLockSharedIfNeeded *)&v22,
        (struct CInpPushLock *)&CBaseInput::_sLock);
      for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
      {
        if ( IsPublicPointerDevice((__int64)i) && (*((_DWORD *)i + 46) & 0x400) == 0 )
        {
          v16 = *((_QWORD *)i + 60);
          v7 |= CInputSystemMetrics::GetHardwareType(v14, (const struct tagHID_POINTER_DEVICE_INFO *)v16, v12, v13);
          if ( v8 <= *(_DWORD *)(v16 + 720) )
            v8 = *(_DWORD *)(v16 + 720);
        }
      }
      if ( !v23 )
      {
        ExReleasePushLockSharedEx(v22, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    if ( (v7 & 0xFFFFFF30) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v11, v12, v13);
    v17 = 0xFFFFLL;
    v18 = v8;
    if ( v8 > 0xFFFF )
      v18 = 0xFFFF;
    v19 = (v18 << 8) | v7 & 0xCF;
    if ( v19 != *(_DWORD *)v2 )
    {
      CInputSystemMetrics::WriteSystemMetricsKey((void *)0xFFFF, v19, 0, v13);
      CInputSystemMetrics::WriteSystemMetricsKey(v20, v19, 1, v21);
      *(_DWORD *)v2 = v19;
    }
    if ( v7 != *((_DWORD *)v2 + 1) )
    {
      CInputSystemMetrics::WritePointerDevicePresenceKey((CInputSystemMetrics *)v17, v7);
      *((_DWORD *)v2 + 1) = v7;
    }
    *((_DWORD *)v2 + 2) = v8;
  }
}
