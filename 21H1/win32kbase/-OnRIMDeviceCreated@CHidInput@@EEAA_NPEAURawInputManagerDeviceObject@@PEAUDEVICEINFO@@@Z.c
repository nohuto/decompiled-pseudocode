/*
 * XREFs of ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C0051AA0
 * Callers:
 *     <none>
 * Callees:
 *     HMCreateHandleForObject @ 0x1C005A7C0 (HMCreateHandleForObject.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0071754 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x1C01A99A8 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 *     ?ShouldPtpSettingFire@PTPTelemetry@@CA_NXZ @ 0x1C01AA540 (-ShouldPtpSettingFire@PTPTelemetry@@CA_NXZ.c)
 *     ?UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z @ 0x1C01C045C (-UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CHidInput::OnRIMDeviceCreated(
        CHidInput *this,
        struct RawInputManagerDeviceObject *a2,
        struct DEVICEINFO *a3)
{
  char v4; // di
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rbx
  CInputSystemMetrics *v9; // rcx
  bool v10; // zf
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 1;
  if ( (*((_DWORD *)a2 + 72) & 0x80u) != 0 )
  {
    v6 = *((_QWORD *)a2 + 71);
    LOBYTE(a2) = 22;
    v8 = HMCreateHandleForObject(v6, a2);
    if ( v8 )
    {
      if ( *((_DWORD *)a3 + 2) != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
      CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v11);
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      if ( *(_QWORD *)(v8 + 736) != -1LL )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
      v10 = *(_DWORD *)(v8 + 24) == 7;
      *(_QWORD *)(v8 + 736) = *(_QWORD *)a3;
      if ( v10 && PTPTelemetry::ShouldPtpSettingFire() )
      {
        PTPTelemetry::PTPConfigUpdateEx(a3);
        if ( PTPTelemetry::s_HasTpDevice )
          PTPTelemetry::s_SettingsFired = 1;
      }
      CInputSystemMetrics::UpdatePointerDeviceSystemMetrics(v9, a3, 1);
    }
    else
    {
      return 0;
    }
  }
  return v4;
}
