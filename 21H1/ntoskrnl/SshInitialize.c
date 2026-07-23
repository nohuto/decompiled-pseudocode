/*
 * XREFs of SshInitialize @ 0x140A3CB24
 * Callers:
 *     PoInitSystem @ 0x140A3BEEC (PoInitSystem.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1407788A4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     CmSiRWLockInitialize @ 0x14077E460 (CmSiRWLockInitialize.c)
 *     SshpQueryRegistryValues @ 0x14077F5AC (SshpQueryRegistryValues.c)
 *     SSHSupportEtwRegister @ 0x14077F89C (SSHSupportEtwRegister.c)
 *     SshpSubscribeCallbacks @ 0x140A3D028 (SshpSubscribeCallbacks.c)
 *     SshpUninitialize @ 0x140A91444 (SshpUninitialize.c)
 */

__int64 __fastcall SshInitialize(int a1)
{
  _RTL_RUN_ONCE *v1; // rax
  _RTL_RUN_ONCE *v2; // rax
  __int64 v3; // rdx
  int v4; // ebx

  if ( !a1 )
  {
    CmSiRWLockInitialize(&SshpLibraryListLock);
    qword_140C1E2B8 = (__int64)&SshpLibraryList;
    SshpLibraryList = (__int64)&SshpLibraryList;
    v1 = (_RTL_RUN_ONCE *)&unk_140C1E310;
    do
    {
      CmSiRWLockInitialize(v1 - 2);
      v2[1].Value = (unsigned __int64)v2;
      v2->Value = (unsigned __int64)v2;
      v1 = v2 + 4;
    }
    while ( v3 != 1 );
    SshpSessionId = 0LL;
    SshpSessionGuid = 0LL;
    SshpInitialized = 1;
    return 0;
  }
  if ( a1 != 3 )
  {
    v4 = -1073741811;
LABEL_12:
    SshpUninitialize();
    return (unsigned int)v4;
  }
  v4 = SSHSupportEtwRegister();
  if ( v4 < 0 )
    goto LABEL_12;
  SshpTraceHandleRegistered = 1;
  v4 = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((ULONGLONG *)&dword_140C046A0, 0LL, 0LL);
  if ( v4 < 0 )
    goto LABEL_12;
  SshpTelemetryHandleRegistered = 1;
  v4 = SshpSubscribeCallbacks();
  if ( v4 < 0 )
    goto LABEL_12;
  SshpQueryRegistryValues();
  return 0;
}
