/*
 * XREFs of ??_GCPTPProcessor@@AEAAPEAXI@Z @ 0x1C019FFD8
 * Callers:
 *     ?RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01A1FD4 (-RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C0009C28 (--1CTouchProcessor@@QEAA@XZ.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?CleanupGestureState@CPTPProcessor@@AEAAXXZ @ 0x1C01A04A4 (-CleanupGestureState@CPTPProcessor@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

CPTPProcessor *__fastcall CPTPProcessor::`scalar deleting destructor'(CPTPProcessor *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  *(_QWORD *)this = &CPTPProcessor::`vftable'{for `CTouchProcessor'};
  *((_QWORD *)this + 29) = &CPTPProcessor::`vftable'{for `IPTPEngineClient'};
  v2 = *((_QWORD *)this + 64);
  if ( v2 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 32LL))(v2, 1LL);
  CPTPProcessor::CleanupGestureState(this);
  if ( *((_QWORD *)this + 63) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5, v6);
  CTouchProcessor::~CTouchProcessor(this);
  Win32FreePool((__int64)this);
  return this;
}
