/*
 * XREFs of ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C001784C
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C0005888 (UserActivateMITInputProcessing.c)
 *     UserDeactivateMITInputProcessing @ 0x1C001B4E8 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     RimInputTypeToDeviceInputType @ 0x1C0015E64 (RimInputTypeToDeviceInputType.c)
 *     ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x1C001A144 (-ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z.c)
 *     GetKnownRIMDeviceKind @ 0x1C001A378 (GetKnownRIMDeviceKind.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::HandleInputThreadStateChange(int *a1, int a2)
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
    result = (*(__int64 (__fastcall **)(int *))(*(_QWORD *)a1 + 8LL))(a1);
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
    result = (*(__int64 (__fastcall **)(int *))(*(_QWORD *)a1 + 8LL))(a1);
    if ( result )
      return (**(__int64 (__fastcall ***)(__int64))result)(result);
  }
  return result;
}
