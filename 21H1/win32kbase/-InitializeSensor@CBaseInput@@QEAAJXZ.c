/*
 * XREFs of ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x1C0036E10
 * Callers:
 *     ?InitializeInputSensors@@YAJXZ @ 0x1C01B4798 (-InitializeInputSensors@@YAJXZ.c)
 * Callees:
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C0036F50 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::InitializeSensor(CBaseInput *this)
{
  __int64 v2; // rcx
  void (*v3)(struct RIMDevChangeStruct *); // r9
  __int64 result; // rax
  unsigned __int64 v5; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v6[80]; // [rsp+40h] [rbp-68h] BYREF

  if ( !W32GetThreadWin32Thread(KeGetCurrentThread()) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
  *((_DWORD *)this + 318) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  LODWORD(v5) = 0;
  *((_DWORD *)this + 319) = (unsigned int)PsGetCurrentThreadId();
  (*(void (__fastcall **)(CBaseInput *, _BYTE *, unsigned __int64 *))(*(_QWORD *)this + 24LL))(this, v6, &v5);
  result = CRIMBase::CreateHandles(
             this,
             (const enum CRIMBase::DispatcherHandleName *const)v6,
             (unsigned int)v5,
             v3,
             this);
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 32LL))(this);
  return result;
}
