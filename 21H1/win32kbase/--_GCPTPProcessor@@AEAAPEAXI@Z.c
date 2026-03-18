/*
 * XREFs of ??_GCPTPProcessor@@AEAAPEAXI@Z @ 0x1C01A80B8
 * Callers:
 *     ?RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01AA0B4 (-RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C0022038 (--1CTouchProcessor@@QEAA@XZ.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?CleanupGestureState@CPTPProcessor@@AEAAXXZ @ 0x1C01A8584 (-CleanupGestureState@CPTPProcessor@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

CPTPProcessor *__fastcall CPTPProcessor::`scalar deleting destructor'(CPTPProcessor *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8

  *(_QWORD *)this = &CPTPProcessor::`vftable'{for `CTouchProcessor'};
  *((_QWORD *)this + 29) = &CPTPProcessor::`vftable'{for `IPTPEngineClient'};
  v2 = *((_QWORD *)this + 64);
  if ( v2 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 32LL))(v2, 1LL);
  CPTPProcessor::CleanupGestureState(this);
  if ( *((_QWORD *)this + 63) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3);
  CTouchProcessor::~CTouchProcessor(this);
  Win32FreePool((__int64)this, v4, v5);
  return this;
}
