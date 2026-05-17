/*
 * XREFs of RtlSetProcessDebugInformation @ 0x1800D83C0
 * Callers:
 *     RtlpSetProcessDebugInformationRemote @ 0x1800D8EB0 (RtlpSetProcessDebugInformationRemote.c)
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x1800560B0 (RtlpCreateUserThreadEx.c)
 *     NtWaitForSingleObject @ 0x18009CE90 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     ZwQueryInformationThread @ 0x18009D2B0 (ZwQueryInformationThread.c)
 *     ZwResumeThread @ 0x18009D850 (ZwResumeThread.c)
 *     NtTerminateThread @ 0x18009D870 (NtTerminateThread.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x1800D85F0 (RtlpChangeQueryDebugBufferTarget.c)
 *     AVrfpSetProcessVerifierOptions @ 0x1800DB1DC (AVrfpSetProcessVerifierOptions.c)
 *     RtlControlStackTraceDataBase @ 0x180100D18 (RtlControlStackTraceDataBase.c)
 */

__int64 __fastcall RtlSetProcessDebugInformation(void *a1, int a2, __int64 a3)
{
  int InformationThread; // ebx
  char v5; // si
  __int64 result; // rax
  unsigned __int64 v7; // r8
  HANDLE v8; // rdi
  unsigned int *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int *v12; // r8
  __int64 v13; // [rsp+30h] [rbp-78h]
  int v14; // [rsp+60h] [rbp-48h]
  HANDLE v15; // [rsp+B0h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp+18h] BYREF
  LARGE_INTEGER Timeout; // [rsp+C8h] [rbp+20h] BYREF

  Timeout.QuadPart = -600000000LL;
  InformationThread = 0;
  *(_DWORD *)(a3 + 64) = a2;
  v5 = a2;
  if ( NtCurrentTeb()->ClientId.UniqueProcess == a1 )
  {
    if ( (a2 & 1) != 0 )
    {
      InformationThread = AVrfpSetProcessVerifierOptions(a3);
      if ( InformationThread )
        return (unsigned int)InformationThread;
    }
    if ( (v5 & 2) == 0 )
      return (unsigned int)InformationThread;
    v9 = *(unsigned int **)(a3 + 104);
    if ( v9 )
    {
      v10 = *v9;
      v11 = v9[1];
      if ( (_DWORD)v10 )
      {
        v12 = v9 + 2;
      }
      else
      {
        if ( (unsigned int)v11 < 0x18 )
          return (unsigned int)-1073741811;
        v12 = v9 + 2;
        if ( *((_QWORD *)v9 + 1) || *((_QWORD *)v9 + 2) )
          return (unsigned int)-1073741811;
      }
      return (unsigned int)RtlControlStackTraceDataBase(v10, v11, v12);
    }
    return (unsigned int)-1073741801;
  }
  else
  {
    v15 = 0LL;
    result = RtlpChangeQueryDebugBufferTarget(a3, a1, 0LL, &v15);
    if ( (int)result < 0 )
      return result;
    v7 = *(_QWORD *)(a3 + 72);
    if ( v7 > 0xD0 )
      memmove((void *)(*(_QWORD *)(a3 + 88) + a3 + 208), (const void *)(a3 + 208), v7 - 208);
    InformationThread = RtlpCreateUserThreadEx(
                          (__int64)v15,
                          0LL,
                          7,
                          0,
                          0LL,
                          0LL,
                          v13,
                          (__int64)RtlpSetProcessDebugInformationRemote,
                          *(_QWORD *)(a3 + 16),
                          &Handle,
                          0LL);
    if ( InformationThread >= 0 )
    {
      v8 = Handle;
      InformationThread = ZwResumeThread();
      if ( InformationThread < 0 || (InformationThread = NtWaitForSingleObject(v8, 1u, &Timeout), InformationThread < 0) )
      {
        NtTerminateThread();
      }
      else
      {
        InformationThread = ZwQueryInformationThread();
        if ( InformationThread >= 0 )
          InformationThread = v14;
      }
      NtClose(v8);
    }
    NtClose(v15);
  }
  return (unsigned int)InformationThread;
}
