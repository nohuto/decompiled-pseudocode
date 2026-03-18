/*
 * XREFs of ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C00BF910
 * Callers:
 *     <none>
 * Callees:
 *     HMCreateHandleForObject @ 0x1C0021AA0 (HMCreateHandleForObject.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C005219C (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x1C01A18C8 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 *     ?ShouldPtpSettingFire@PTPTelemetry@@CA_NXZ @ 0x1C01A2460 (-ShouldPtpSettingFire@PTPTelemetry@@CA_NXZ.c)
 *     ?UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z @ 0x1C01B838C (-UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CHidInput::OnRIMDeviceCreated(CHidInput *this, unsigned __int64 **a2, struct DEVICEINFO *a3)
{
  char v4; // di
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  CInputSystemMetrics *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  bool v15; // zf
  _BYTE v16[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 1;
  if ( (*((_DWORD *)a2 + 72) & 0x80u) != 0 )
  {
    v8 = HMCreateHandleForObject(a2[71], 22);
    if ( v8 )
    {
      if ( *((_DWORD *)a3 + 2) != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v9, v10);
      CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
        (__int64)v16,
        v6,
        v9,
        v10);
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      if ( *(_QWORD *)(v8 + 736) != -1LL )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13, v14);
      v15 = *(_DWORD *)(v8 + 24) == 7;
      *(_QWORD *)(v8 + 736) = *(_QWORD *)a3;
      if ( v15 && PTPTelemetry::ShouldPtpSettingFire() )
      {
        PTPTelemetry::PTPConfigUpdateEx(a3);
        if ( PTPTelemetry::s_HasTpDevice )
          PTPTelemetry::s_SettingsFired = 1;
      }
      CInputSystemMetrics::UpdatePointerDeviceSystemMetrics(v12, a3, 1);
    }
    else
    {
      return 0;
    }
  }
  return v4;
}
