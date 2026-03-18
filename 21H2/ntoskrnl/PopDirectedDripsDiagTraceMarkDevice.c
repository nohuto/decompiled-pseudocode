/*
 * XREFs of PopDirectedDripsDiagTraceMarkDevice @ 0x14099EB84
 * Callers:
 *     PopDirectedDripsMarkCandidateDevice @ 0x14098C094 (PopDirectedDripsMarkCandidateDevice.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     PopDirectedDripsDiagCreateDeviceDiagnostic @ 0x14099E6B8 (PopDirectedDripsDiagCreateDeviceDiagnostic.c)
 */

__int64 __fastcall PopDirectedDripsDiagTraceMarkDevice(__int64 a1)
{
  _QWORD *DeviceDiagnostic; // rax
  REGHANDLE v2; // rbx
  __int64 v4; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  __int64 *v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+50h] [rbp-18h]
  int v8; // [rsp+54h] [rbp-14h]

  v4 = a1;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopDirectedDripsDiagLock, 0LL);
  DeviceDiagnostic = *(_QWORD **)(v4 + 776);
  if ( DeviceDiagnostic || (DeviceDiagnostic = PopDirectedDripsDiagCreateDeviceDiagnostic(v4)) != 0LL )
    ++*((_DWORD *)DeviceDiagnostic + 36);
  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_MARK_DEVICE) )
    {
      UserData.Reserved = 0;
      v8 = 0;
      UserData.Ptr = (ULONGLONG)&PopWnfCsEnterScenarioId;
      UserData.Size = 1;
      v6 = &v4;
      v7 = 8;
      EtwWrite(v2, &POP_ETW_EVENT_DIRECTED_DRIPS_MARK_DEVICE, 0LL, 2u, &UserData);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PopDirectedDripsDiagLock);
  return KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
}
