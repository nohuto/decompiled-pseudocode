/*
 * XREFs of ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C000760C
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C0005888 (UserActivateMITInputProcessing.c)
 *     UserDeactivateMITInputProcessing @ 0x1C0007434 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x1C00077B8 (-ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z.c)
 *     GetKnownRIMDeviceKind @ 0x1C00079E8 (GetKnownRIMDeviceKind.c)
 *     RimInputTypeToDeviceInputType @ 0x1C002375C (RimInputTypeToDeviceInputType.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::HandleInputThreadStateChange(unsigned int *a1, int a2)
{
  CInputThread *v2; // rsi
  unsigned int CurrentThreadId; // eax
  int v6; // ebx
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  struct DEVICEINFO *v13; // rbx
  int v14; // edi
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
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
  if ( a2 )
  {
    if ( a2 != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
    result = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 8LL))(a1);
    if ( result )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  else
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(&CBaseInput::_sLock, 0LL);
    v12 = RimInputTypeToDeviceInputType(a1[36]);
    v13 = CBaseInput::_spDevList;
    v14 = v12;
    while ( v13 )
    {
      if ( *((unsigned __int8 *)v13 + 48) == v14 && (*((_QWORD *)v13 + 29) || (*((_DWORD *)v13 + 46) & 0x2000) != 0) )
      {
        KnownRIMDeviceKind = GetKnownRIMDeviceKind(v13);
        if ( KnownRIMDeviceKind )
          CBaseInput::ForwardPnpNotificationToISM(KnownRIMDeviceKind, v13, *(_QWORD *)v13, 2LL);
      }
      v13 = (struct DEVICEINFO *)*((_QWORD *)v13 + 7);
    }
    ExReleasePushLockSharedEx(&CBaseInput::_sLock, 0LL);
    KeLeaveCriticalRegion();
    result = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 8LL))(a1);
    if ( result )
      return (**(__int64 (__fastcall ***)(__int64))result)(result);
  }
  return result;
}
