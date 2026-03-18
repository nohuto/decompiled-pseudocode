/*
 * XREFs of ?GetProcessCommandLine@@YAPEAGXZ @ 0x1C0133594
 * Callers:
 *     NtUserWin32kSysCallFilterStub @ 0x1C0141360 (NtUserWin32kSysCallFilterStub.c)
 * Callees:
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C00469AC (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C008F2E0 (Win32AllocPoolWithQuotaZInit.c)
 */

unsigned __int16 *GetProcessCommandLine(void)
{
  BOOL v0; // esi
  __int64 v1; // rbx
  char **v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  char **v5; // rax
  char *v6; // rax
  struct _CLIENT_ID ClientId; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ProcessInformationLength; // [rsp+90h] [rbp+20h] BYREF
  void *ProcessHandle; // [rsp+98h] [rbp+28h] BYREF

  v0 = 0;
  ObjectAttributes.Length = 48;
  ProcessInformationLength = 0;
  v1 = 0LL;
  ProcessHandle = 0LL;
  memset(&ObjectAttributes.Length + 1, 0, 20);
  v2 = 0LL;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ClientId.UniqueThread = 0LL;
  ObjectAttributes.Attributes = 512;
  ClientId.UniqueProcess = (HANDLE)PsGetCurrentThreadProcessId();
  if ( ZwOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId) >= 0
    && ZwQueryInformationProcess(
         ProcessHandle,
         ProcessImageFileMapping|ProcessUserModeIOPL,
         0LL,
         0,
         &ProcessInformationLength) == -1073741820
    && ProcessInformationLength >= 0x10 )
  {
    v5 = (char **)Win32AllocPoolWithQuotaZInit(ProcessInformationLength + 2LL, 0x79747355u);
    v2 = v5;
    if ( v5 )
    {
      if ( ZwQueryInformationProcess(
             ProcessHandle,
             ProcessImageFileMapping|ProcessUserModeIOPL,
             v5,
             ProcessInformationLength,
             0LL) >= 0 )
      {
        v6 = (char *)Win32AllocPoolWithQuotaZInit(*(unsigned __int16 *)v2 + 2LL, 0x79747355u);
        v1 = (__int64)v6;
        if ( v6 )
          v0 = (int)RtlStringCchCopyNW(
                      v6,
                      *(unsigned __int16 *)v2 + 1LL,
                      v2[1],
                      (unsigned __int64)*(unsigned __int16 *)v2 >> 1) >= 0;
      }
    }
  }
  if ( ProcessHandle )
    ZwClose(ProcessHandle);
  if ( v2 )
    Win32FreePool((__int64)v2, v3, v4);
  if ( !v0 && v1 )
  {
    Win32FreePool(v1, v3, v4);
    return 0LL;
  }
  return (unsigned __int16 *)v1;
}
