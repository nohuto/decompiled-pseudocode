/*
 * XREFs of PepUpdatePerformanceConstraintWorker @ 0x1C0034050
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FD0 (WPP_RECORDER_SF_.c)
 *     PepNotifyPerfConstraints @ 0x1C000D5B0 (PepNotifyPerfConstraints.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EA90 (_guard_dispatch_icall_nop.c)
 *     ProcLibTracePerfConstraintChange @ 0x1C001F508 (ProcLibTracePerfConstraintChange.c)
 *     ProcLibCapChange @ 0x1C0027914 (ProcLibCapChange.c)
 */

void __fastcall PepUpdatePerformanceConstraintWorker(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  void *DeviceExtension; // rbp
  __int64 v3; // rdi
  int *v4; // r14
  __int64 v5; // rcx
  unsigned int v6; // eax
  unsigned int v7; // eax

  DeviceExtension = DeviceObject->DeviceExtension;
  v3 = *((_QWORD *)DeviceExtension + 148);
  if ( v3 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C00133F8,
      0LL);
    _InterlockedExchange((volatile __int32 *)DeviceExtension + 291, 0);
    v4 = (int *)(v3 + 28);
    PepNotifyPerfConstraints((__int64)DeviceExtension, (_DWORD *)(v3 + 28), (_DWORD *)(v3 + 24));
    v5 = *(_QWORD *)(v3 + 8);
    v6 = *(_DWORD *)(v3 + 28);
    if ( v6 > *(_DWORD *)(v5 + 4) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          1u,
          0x29u,
          (__int64)&WPP_1d6ef99ef6c8303b7a60f04e4b83c2ae_Traceguids);
        v5 = *(_QWORD *)(v3 + 8);
      }
      v6 = *(_DWORD *)(v5 + 4);
      *v4 = v6;
    }
    if ( v6 < *(_DWORD *)(v5 + 12) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          1u,
          0x2Au,
          (__int64)&WPP_1d6ef99ef6c8303b7a60f04e4b83c2ae_Traceguids);
        v5 = *(_QWORD *)(v3 + 8);
      }
      v6 = *(_DWORD *)(v5 + 12);
      *v4 = v6;
    }
    v7 = 100 * v6 / *(_DWORD *)(v5 + 4);
    *(_DWORD *)(v3 + 32) = v7;
    ProcLibCapChange(
      (__int64)DeviceExtension,
      *((_DWORD *)DeviceExtension + 112),
      *((_DWORD *)DeviceExtension + 124),
      v7);
    ((void (__fastcall *)(void *))qword_1C00137C8)(DeviceExtension);
    ProcLibTracePerfConstraintChange((__int64)DeviceExtension, *v4, *(_DWORD *)(v3 + 24));
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C00133F8);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x28u,
      (__int64)&WPP_1d6ef99ef6c8303b7a60f04e4b83c2ae_Traceguids);
  }
}
