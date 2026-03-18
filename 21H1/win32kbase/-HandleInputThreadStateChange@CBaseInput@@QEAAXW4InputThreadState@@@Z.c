/*
 * XREFs of ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C003860C
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C0036888 (UserActivateMITInputProcessing.c)
 *     UserDeactivateMITInputProcessing @ 0x1C0038434 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     RimInputTypeToDeviceInputType @ 0x1C00387EC (RimInputTypeToDeviceInputType.c)
 *     ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x1C0038818 (-ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z.c)
 *     GetKnownRIMDeviceKind @ 0x1C0038A48 (GetKnownRIMDeviceKind.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::HandleInputThreadStateChange(unsigned int *a1, int a2)
{
  CInputThread *v2; // rsi
  unsigned int CurrentThreadId; // eax
  int v6; // ebx
  unsigned int v7; // edi
  __int64 v8; // rcx
  int v9; // eax
  struct DEVICEINFO *v10; // rbx
  int v11; // edi
  __int64 result; // rax
  unsigned int KnownRIMDeviceKind; // eax

  v2 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v6 = *((_DWORD *)v2 + 10);
  v7 = CurrentThreadId;
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( v7 != v6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  if ( a2 )
  {
    if ( a2 != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
    result = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 8LL))(a1);
    if ( result )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  else
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(&CBaseInput::_sLock, 0LL);
    v9 = RimInputTypeToDeviceInputType(a1[36]);
    v10 = CBaseInput::_spDevList;
    v11 = v9;
    while ( v10 )
    {
      if ( *((unsigned __int8 *)v10 + 48) == v11 && (*((_QWORD *)v10 + 29) || (*((_DWORD *)v10 + 46) & 0x2000) != 0) )
      {
        KnownRIMDeviceKind = GetKnownRIMDeviceKind(v10);
        if ( KnownRIMDeviceKind )
          CBaseInput::ForwardPnpNotificationToISM(KnownRIMDeviceKind, v10, *(_QWORD *)v10, 2LL);
      }
      v10 = (struct DEVICEINFO *)*((_QWORD *)v10 + 7);
    }
    ExReleasePushLockSharedEx(&CBaseInput::_sLock, 0LL);
    KeLeaveCriticalRegion();
    result = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 8LL))(a1);
    if ( result )
      return (**(__int64 (__fastcall ***)(__int64))result)(result);
  }
  return result;
}
