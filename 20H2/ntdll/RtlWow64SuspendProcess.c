/*
 * XREFs of RtlWow64SuspendProcess @ 0x1800DC5C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x180056100 (RtlpCreateUserThreadEx.c)
 *     RtlIsCurrentProcess @ 0x180074BE0 (RtlIsCurrentProcess.c)
 *     RtlWow64GetSharedInfoProcess @ 0x180079B40 (RtlWow64GetSharedInfoProcess.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtWaitForSingleObject @ 0x18009D130 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     ZwQueryObject @ 0x18009D2B0 (ZwQueryObject.c)
 *     ZwQueryInformationThread @ 0x18009D550 (ZwQueryInformationThread.c)
 *     ZwSuspendProcess @ 0x1800A0800 (ZwSuspendProcess.c)
 */

__int64 __fastcall RtlWow64SuspendProcess(void *a1)
{
  int SharedInfoProcess; // ebx
  bool IsCurrentProcess; // al
  int v4; // eax
  HANDLE v5; // rdi
  __int64 v7; // [rsp+30h] [rbp-E8h]
  _BYTE v8[8]; // [rsp+60h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-B0h] BYREF
  _BYTE v10[40]; // [rsp+70h] [rbp-A8h] BYREF
  int v11; // [rsp+98h] [rbp-80h]
  int v12; // [rsp+CCh] [rbp-4Ch]

  Handle = 0LL;
  SharedInfoProcess = RtlWow64GetSharedInfoProcess(a1, v8, (__int64)v10);
  if ( SharedInfoProcess >= 0 )
  {
    if ( v8[0] && (v10[4] & 2) != 0 )
    {
      SharedInfoProcess = ZwQueryObject();
      if ( SharedInfoProcess >= 0 )
      {
        if ( (v12 & 0x800) != 0 )
        {
          IsCurrentProcess = RtlIsCurrentProcess((__int64)a1);
          v4 = RtlpCreateUserThreadEx(
                 (__int64)a1,
                 0LL,
                 102,
                 0,
                 0LL,
                 0LL,
                 v7,
                 (__int64)RtlpWow64SuspendLocalProcess,
                 !IsCurrentProcess,
                 &Handle,
                 0LL);
          v5 = Handle;
          SharedInfoProcess = v4;
          if ( v4 >= 0 )
          {
            NtWaitForSingleObject(Handle, 0, 0LL);
            ZwQueryInformationThread();
            SharedInfoProcess = v11;
          }
          if ( v5 )
            NtClose(v5);
        }
        else
        {
          return (unsigned int)-1073741790;
        }
      }
    }
    else
    {
      return (unsigned int)ZwSuspendProcess();
    }
  }
  return (unsigned int)SharedInfoProcess;
}
