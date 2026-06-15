/*
 * XREFs of AudioDGChallenge @ 0x14004B4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioDGChallenge(RPC_BINDING_HANDLE BindingHandle, HANDLE hSourceHandle, __int64 a3)
{
  char *v4; // rdi
  int LastError; // ebx
  HANDLE CurrentProcess; // rax
  _QWORD *v9; // rax
  HANDLE TargetHandle; // [rsp+40h] [rbp-68h] BYREF
  __int64 ProcessInformation[7]; // [rsp+50h] [rbp-58h] BYREF
  char v13; // [rsp+88h] [rbp-20h]
  DWORD dwProcessId; // [rsp+C8h] [rbp+20h] BYREF

  v4 = 0LL;
  TargetHandle = 0LL;
  LastError = I_RpcBindingInqLocalClientPID(BindingHandle, &dwProcessId);
  if ( !LastError )
  {
    LastError = RpcImpersonateClient(BindingHandle);
    if ( !LastError )
    {
      v4 = (char *)OpenProcess(0x440u, 0, dwProcessId);
      RpcRevertToSelf();
      if ( !v4 )
      {
LABEL_4:
        LastError = GetLastError();
        goto LABEL_11;
      }
      ProcessInformation[0] = 64LL;
      if ( NtQueryInformationProcess(v4, ProcessBasicInformation, ProcessInformation, 0x40u, 0LL) >= 0 && (v13 & 1) != 0 )
      {
        CurrentProcess = GetCurrentProcess();
        if ( !DuplicateHandle(v4, hSourceHandle, CurrentProcess, &TargetHandle, 2u, 0, 0) )
          goto LABEL_4;
        v9 = MapViewOfFile(TargetHandle, 2u, 0, 0, 8uLL);
        if ( !v9 )
          goto LABEL_4;
        *v9 = a3;
        UnmapViewOfFile(v9);
        LastError = 0;
      }
      else
      {
        LastError = 5;
      }
    }
  }
LABEL_11:
  if ( (char *)TargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(TargetHandle);
    TargetHandle = 0LL;
  }
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  if ( LastError > 0 )
    return (unsigned __int16)LastError | 0x80070000;
  return (unsigned int)LastError;
}
