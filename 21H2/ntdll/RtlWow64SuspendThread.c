/*
 * XREFs of RtlWow64SuspendThread @ 0x1800DC4E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x1800487F0 (RtlpCreateUserThreadEx.c)
 *     RtlWow64GetSharedInfoProcess @ 0x18007AB70 (RtlWow64GetSharedInfoProcess.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtWaitForSingleObject @ 0x18009D6C0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18009D820 (NtClose.c)
 *     ZwQueryObject @ 0x18009D840 (ZwQueryObject.c)
 *     ZwQueryInformationThread @ 0x18009DAE0 (ZwQueryInformationThread.c)
 *     ZwDuplicateObject @ 0x18009DDC0 (ZwDuplicateObject.c)
 *     NtSuspendThread @ 0x1800A0DF0 (NtSuspendThread.c)
 *     RtlpWow64OpenThreadProcess @ 0x1800DC728 (RtlpWow64OpenThreadProcess.c)
 */

__int64 __fastcall RtlWow64SuspendThread(int a1, int *a2)
{
  HANDLE v2; // rdi
  int SharedInfoProcess; // ebx
  __int64 v5; // rdx
  __int64 v7; // [rsp+30h] [rbp-D0h]
  _BYTE v8[8]; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v9; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  __int64 v11; // [rsp+78h] [rbp-88h]
  _QWORD v12[2]; // [rsp+80h] [rbp-80h] BYREF
  char v13; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v14[40]; // [rsp+98h] [rbp-68h] BYREF
  int v15; // [rsp+C0h] [rbp-40h]
  char v16; // [rsp+F4h] [rbp-Ch]

  v9 = 0LL;
  v11 = 0LL;
  v2 = 0LL;
  Handle = 0LL;
  SharedInfoProcess = RtlpWow64OpenThreadProcess(a1, (_DWORD)a2, (unsigned int)&v13, (unsigned int)&v9, (__int64)v12);
  if ( SharedInfoProcess < 0 )
    goto LABEL_20;
  if ( (void *)v12[0] == NtCurrentTeb()->ClientId.UniqueProcess
    && (void *)v12[1] == NtCurrentTeb()->ClientId.UniqueThread )
  {
    goto LABEL_18;
  }
  SharedInfoProcess = RtlWow64GetSharedInfoProcess(v9, v8, (__int64)v14);
  if ( SharedInfoProcess < 0 )
  {
LABEL_19:
    v2 = Handle;
    goto LABEL_20;
  }
  if ( !v8[0] || (v14[4] & 2) == 0 )
  {
LABEL_18:
    SharedInfoProcess = NtSuspendThread();
    goto LABEL_19;
  }
  SharedInfoProcess = ZwQueryObject();
  if ( SharedInfoProcess < 0 )
    goto LABEL_19;
  if ( (v16 & 2) == 0 )
  {
    SharedInfoProcess = -1073741790;
    goto LABEL_19;
  }
  LODWORD(v7) = 0;
  SharedInfoProcess = ZwDuplicateObject();
  if ( SharedInfoProcess < 0 )
    goto LABEL_19;
  v5 = v11;
  if ( (void *)v12[0] != NtCurrentTeb()->ClientId.UniqueProcess )
    v5 = v11 | 1;
  SharedInfoProcess = RtlpCreateUserThreadEx(
                        (__int64)v9,
                        0LL,
                        102,
                        0,
                        0LL,
                        0LL,
                        v7,
                        (__int64)RtlpWow64SuspendThreadWorker,
                        v5,
                        &Handle,
                        0LL);
  if ( SharedInfoProcess < 0 )
    goto LABEL_19;
  v2 = Handle;
  NtWaitForSingleObject(Handle, 0, 0LL);
  ZwQueryInformationThread();
  SharedInfoProcess = v15;
  if ( v15 >= 0 )
  {
    if ( a2 )
      *a2 = v15;
    SharedInfoProcess = 0;
  }
LABEL_20:
  if ( v11 )
    ZwDuplicateObject();
  if ( v9 )
    NtClose(v9);
  if ( v2 )
    NtClose(v2);
  return (unsigned int)SharedInfoProcess;
}
