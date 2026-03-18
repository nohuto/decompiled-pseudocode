/*
 * XREFs of DrvSetMonitorBrightness @ 0x1C00716D0
 * Callers:
 *     PowerUnDimMonitor @ 0x1C0071190 (PowerUnDimMonitor.c)
 *     PowerDimUndimResend @ 0x1C0071310 (PowerDimUndimResend.c)
 *     PowerDimMonitor @ 0x1C011EA60 (PowerDimMonitor.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000E65C (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     UpdateMonitorDevices @ 0x1C00137F0 (UpdateMonitorDevices.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C00139BC (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvSetMonitorBrightness(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4, _BYTE *a5, char a6)
{
  unsigned int v7; // esi
  __int64 v8; // r13
  __int64 v9; // rdi
  int v10; // ebx
  __int64 v11; // rax
  unsigned int v12; // esi
  unsigned int v13; // r15d
  __int64 v14; // rbx
  __int64 v15; // rax
  struct _DEVICE_OBJECT *AttachedDeviceReference; // r12
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rax
  int InputBuffer; // [rsp+54h] [rbp-25h] BYREF
  unsigned int i; // [rsp+58h] [rbp-21h]
  unsigned int v25; // [rsp+5Ch] [rbp-1Dh] BYREF
  _DWORD v26[2]; // [rsp+60h] [rbp-19h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp-11h] BYREF
  _BYTE *v28; // [rsp+70h] [rbp-9h]
  PVOID Object; // [rsp+78h] [rbp-1h] BYREF
  int v30; // [rsp+80h] [rbp+7h]

  v7 = a3;
  v8 = (unsigned int)a2;
  v9 = a1;
  v28 = a5;
  v10 = -1073741823;
  if ( !gProtocolType )
  {
    v11 = WdLogNewEntry5_WdEvent(a1, a2, a3);
    *(_QWORD *)(v11 + 24) = v9;
    *(_QWORD *)(v11 + 32) = v8;
    WdLogEvent5_WdEvent(v11);
    UpdateMonitorDevices();
    if ( v7 != -1 )
    {
      if ( qword_1C024AAD0 )
      {
        Object = (PVOID)__PAIR64__(v7, v8);
        v30 = a4;
        v18 = qword_1C024AAD0(&Object);
        v20 = v18;
        if ( v18 < 0 )
        {
          v21 = WdLogNewEntry5_WdWarning(a1, a2, v19);
          *(_QWORD *)(v21 + 24) = v20;
          WdLogEvent5_WdWarning(v21);
        }
      }
    }
    *a5 = 0;
    v12 = 0;
    for ( i = 0; v12 < *(_DWORD *)(v9 + 20); i = v12 )
    {
      v13 = 0;
      a1 = 56LL * v12;
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + v9 + 40) + 2576LL);
      if ( *(_DWORD *)(v14 + 216) )
      {
        do
        {
          a2 = *(_QWORD *)(v14 + 224);
          if ( (*(_DWORD *)(a2 + 20LL * v13) & 1) != 0 )
          {
            DeviceObject = 0LL;
            Object = 0LL;
            InputBuffer = 0;
            if ( (!a6 || *(_BYTE *)(a2 + 20LL * v13 + 16))
              && (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID *, PDEVICE_OBJECT *))qword_1C024A9E8)(
                        a2 + 4 * (5LL * v13 + 2),
                        *(unsigned int *)(a2 + 20LL * v13 + 4),
                        &Object,
                        &DeviceObject) >= 0 )
            {
              InputBuffer = v8;
              AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
              GreDeviceIoControlImpl(AttachedDeviceReference, 0x232433u, &InputBuffer, 4u, 0LL, 0, &v25, 1u, 0);
              if ( *(_BYTE *)(*(_QWORD *)(v14 + 224) + 20LL * v13 + 16) )
              {
                *v28 = 1;
                if ( *(_QWORD *)(v14 + 144) )
                {
                  if ( (*(_DWORD *)(v14 + 160) & 0x800000) != 0
                    && *(_QWORD *)(v14 + 240)
                    && (*(_DWORD *)(v9 + 20) == 1 && *(_DWORD *)(v14 + 216) == 1 || !a4) )
                  {
                    wil_details_FeatureReporting_ReportUsageToService(
                      (__int64)&Feature_OemPanelDriverSupport__private_reporting,
                      0x801B31u,
                      0LL,
                      0LL,
                      (const struct FEATURE_LOGGED_TRAITS *)&Feature_InputVirtualization_logged_traits,
                      1,
                      3);
                    v26[0] = 1;
                    v26[1] = a4;
                    GreDeviceIoControlImpl(AttachedDeviceReference, 0x2324CFu, v26, 8u, 0LL, 0, &v25, 1u, 0);
                  }
                }
              }
              ObfDereferenceObject(AttachedDeviceReference);
              ObfDereferenceObject(Object);
            }
          }
          ++v13;
        }
        while ( v13 < *(_DWORD *)(v14 + 216) );
        v12 = i;
      }
      ++v12;
    }
    v10 = 0;
  }
  v15 = WdLogNewEntry5_WdTrace(a1, a2);
  *(_QWORD *)(v15 + 24) = v10;
  WdLogEvent5_WdTrace(v15);
  return (unsigned int)v10;
}
