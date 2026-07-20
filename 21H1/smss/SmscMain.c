/*
 * XREFs of SmscMain @ 0x140003F4C
 * Callers:
 *     wmain @ 0x140001840 (wmain.c)
 * Callees:
 *     SmscpLoadSubSystemsForMuSession @ 0x140004080 (SmscpLoadSubSystemsForMuSession.c)
 *     SmscpExecuteInitialCommand @ 0x140004290 (SmscpExecuteInitialCommand.c)
 *     SmpLoadPnPSerializeSettings @ 0x140005228 (SmpLoadPnPSerializeSettings.c)
 *     SmscpParseArgs @ 0x140005378 (SmscpParseArgs.c)
 *     SmscpNotifySmOfFailure @ 0x140015AA8 (SmscpNotifySmOfFailure.c)
 */

char __fastcall SmscMain(unsigned int a1, __int64 a2, int a3)
{
  int v3; // eax
  __int64 v6; // rcx
  int v7; // eax
  void *v8; // rcx
  unsigned int v9; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  char v12; // [rsp+50h] [rbp+20h] BYREF
  LARGE_INTEGER Interval; // [rsp+58h] [rbp+28h] BYREF

  v3 = SmpDebug;
  if ( a3 )
    v3 = a3;
  SmpDefaultEnvironment = 0LL;
  v6 = *(_QWORD *)&KeGetPcr()->MajorVersion;
  SmpDebug = v3;
  RtlCreateTagHeap(*(HANDLE *)(v6 + 48), 0, (PWSTR)L"SMSC!", (PWSTR)L"PARS");
  RtlInitUnicodeString(&DestinationString, 0LL);
  v7 = SmscpParseArgs(a1, a2, &v12, &DestinationString);
  if ( v7 < 0 )
  {
    if ( DestinationString.Buffer )
      LOBYTE(v7) = RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, DestinationString.Buffer);
  }
  else
  {
    v8 = *(void **)SmscpSharedWindow;
    *(_OWORD *)SmscpSharedWindow = 0LL;
    *(_DWORD *)SmscpSharedWindow = 0;
    NtSetEvent(v8, 0LL);
    while ( 1 )
    {
      Interval.QuadPart = -50000000LL;
      if ( (int)RtlConnectToSm(0LL, 0LL, 0LL, &SmpApiConnectionPort) >= 0 )
        break;
      NtDelayExecution(0, &Interval);
    }
    v9 = *(_DWORD *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 704LL);
    SmpLoadPnPSerializeSettings();
    if ( (int)SmscpLoadSubSystemsForMuSession(v9) < 0
      || (v7 = SmscpExecuteInitialCommand(v9, &v12, &DestinationString), v7 < 0) )
    {
      SmscpNotifySmOfFailure();
      JUMPOUT(0x140004073LL);
    }
  }
  return v7;
}
