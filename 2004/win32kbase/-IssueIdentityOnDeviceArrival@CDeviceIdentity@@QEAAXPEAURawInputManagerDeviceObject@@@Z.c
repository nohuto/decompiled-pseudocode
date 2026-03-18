/*
 * XREFs of ?IssueIdentityOnDeviceArrival@CDeviceIdentity@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C005B2FC
 * Callers:
 *     RIMCreateDev @ 0x1C00AE678 (RIMCreateDev.c)
 *     RIMVirtCreateDev @ 0x1C0153148 (RIMVirtCreateDev.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00AB3A0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CDeviceIdentity::IssueIdentityOnDeviceArrival(
        CDeviceIdentity *this,
        struct RawInputManagerDeviceObject *a2,
        __int64 a3,
        __int64 a4)
{
  struct CDeviceIdentity *v5; // rsi
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  PVOID v12; // rcx
  PVOID Object; // [rsp+30h] [rbp+8h] BYREF

  Object = this;
  v5 = gpDeviceIdentity;
  if ( *((_DWORD *)a2 + 18) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  if ( *((_DWORD *)a2 + 19) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  RIMLockExclusive(v5);
  v6 = *((_DWORD *)v5 + 4);
  *((_DWORD *)v5 + 4) = v6 + 1;
  *((_QWORD *)v5 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
  *((_DWORD *)a2 + 18) = v6;
  if ( !v6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
  v11 = *((_QWORD *)a2 + 177);
  if ( v11 )
  {
    Object = 0LL;
    if ( (int)RawInputManagerDeviceObjectResolveHandle(v11, 3LL, 1LL, &Object) >= 0 )
    {
      v12 = Object;
      *((_DWORD *)a2 + 19) = *((_DWORD *)Object + 18);
      ObfDereferenceObject(v12);
    }
  }
  *((_QWORD *)a2 + 10) = lambda_fdb4fbfabcbae4b7f8e3309af96f3b1a_::_lambda_invoker_cdecl_;
}
