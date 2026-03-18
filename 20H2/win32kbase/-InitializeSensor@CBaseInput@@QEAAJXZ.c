/*
 * XREFs of ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x1C0005E10
 * Callers:
 *     ?InitializeInputSensors@@YAJXZ @ 0x1C01AC6B8 (-InitializeInputSensors@@YAJXZ.c)
 * Callees:
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C0005F50 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::InitializeSensor(CBaseInput *this)
{
  void (*v2)(struct RIMDevChangeStruct *); // r9
  __int64 result; // rax
  unsigned __int64 v4; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v5[80]; // [rsp+40h] [rbp-68h] BYREF

  if ( !W32GetThreadWin32Thread(KeGetCurrentThread()) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  *((_DWORD *)this + 318) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  LODWORD(v4) = 0;
  *((_DWORD *)this + 319) = (unsigned int)PsGetCurrentThreadId();
  (*(void (__fastcall **)(CBaseInput *, _BYTE *, unsigned __int64 *))(*(_QWORD *)this + 24LL))(this, v5, &v4);
  result = CRIMBase::CreateHandles(
             this,
             (const enum CRIMBase::DispatcherHandleName *const)v5,
             (unsigned int)v4,
             v2,
             this);
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 32LL))(this);
  return result;
}
