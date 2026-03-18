/*
 * XREFs of ?IssueIdentityOnDeviceArrival@CDeviceIdentity@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C004D88C
 * Callers:
 *     RIMCreateDev @ 0x1C00A1B30 (RIMCreateDev.c)
 *     RIMVirtCreateDev @ 0x1C0159498 (RIMVirtCreateDev.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00A3EC0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CDeviceIdentity::IssueIdentityOnDeviceArrival(
        CDeviceIdentity *this,
        struct RawInputManagerDeviceObject *a2)
{
  struct CDeviceIdentity *v3; // rsi
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rcx
  PVOID v7; // rcx
  PVOID Object; // [rsp+30h] [rbp+8h] BYREF

  Object = this;
  v3 = gpDeviceIdentity;
  if ( *((_DWORD *)a2 + 18) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  if ( *((_DWORD *)a2 + 19) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  RIMLockExclusive(v3);
  v4 = *((_DWORD *)v3 + 4);
  *((_DWORD *)v3 + 4) = v4 + 1;
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  *((_DWORD *)a2 + 18) = v4;
  if ( !v4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
  v6 = *((_QWORD *)a2 + 177);
  if ( v6 )
  {
    Object = 0LL;
    if ( (int)RawInputManagerDeviceObjectResolveHandle(v6, 3LL, 1LL, &Object) >= 0 )
    {
      v7 = Object;
      *((_DWORD *)a2 + 19) = *((_DWORD *)Object + 18);
      ObfDereferenceObject(v7);
    }
  }
  *((_QWORD *)a2 + 10) = lambda_fdb4fbfabcbae4b7f8e3309af96f3b1a_::_lambda_invoker_cdecl_;
}
