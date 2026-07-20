/*
 * XREFs of SmpStartServerSilo @ 0x140015360
 * Callers:
 *     <none>
 * Callees:
 *     SmpExecuteImage @ 0x140004D4C (SmpExecuteImage.c)
 */

NTSTATUS __fastcall SmpStartServerSilo(__int64 a1, __int64 a2)
{
  NTSTATUS result; // eax
  int InformationJobObject; // ebx
  int v5; // r9d
  void *v6; // rcx
  char ProcessParameters; // [rsp+40h] [rbp-39h] BYREF
  HANDLE ProcessHandle; // [rsp+48h] [rbp-31h]
  HANDLE ThreadHandle; // [rsp+50h] [rbp-29h]
  _BYTE JobInformation[32]; // [rsp+B0h] [rbp+37h] BYREF
  void *TargetHandle; // [rsp+E0h] [rbp+67h] BYREF

  result = NtDuplicateObject(
             *(HANDLE *)(a2 + 32),
             *(HANDLE *)(a1 + 48),
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &TargetHandle,
             0x1F003Fu,
             0,
             0);
  if ( result >= 0 )
  {
    InformationJobObject = NtQueryInformationJobObject(
                             TargetHandle,
                             JobObjectEndOfJobTimeInformation|0x20,
                             JobInformation,
                             0x20u,
                             0LL);
    if ( InformationJobObject < 0
      || (InformationJobObject = SmpExecuteImage(
                                   (__int64)&SmpHelperCmd,
                                   0LL,
                                   0LL,
                                   v5,
                                   (__int64)TargetHandle,
                                   20512,
                                   (PRTL_USER_PROCESS_PARAMETERS)&ProcessParameters),
          InformationJobObject < 0) )
    {
      v6 = TargetHandle;
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 56) )
      {
        InformationJobObject = NtResumeThread(ThreadHandle, 0LL);
        if ( InformationJobObject < 0 )
          NtTerminateProcess(ProcessHandle, 0);
      }
      NtClose(TargetHandle);
      NtClose(ProcessHandle);
      v6 = ThreadHandle;
    }
    NtClose(v6);
    return InformationJobObject;
  }
  return result;
}
