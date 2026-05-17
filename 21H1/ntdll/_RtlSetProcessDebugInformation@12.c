/*
 * XREFs of _RtlSetProcessDebugInformation@12 @ 0x4B337540
 * Callers:
 *     _RtlpSetProcessDebugInformationRemote@4 @ 0x4B337C70 (_RtlpSetProcessDebugInformationRemote@4.c)
 * Callees:
 *     _RtlpCreateUserThreadEx@44 @ 0x4B2F0524 (_RtlpCreateUserThreadEx@44.c)
 *     _ZwWaitForSingleObject@12 @ 0x4B2F29A0 (_ZwWaitForSingleObject@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtQueryInformationThread@20 @ 0x4B2F2BD0 (_NtQueryInformationThread@20.c)
 *     _ZwResumeThread@8 @ 0x4B2F2EA0 (_ZwResumeThread@8.c)
 *     _ZwTerminateThread@8 @ 0x4B2F2EB0 (_ZwTerminateThread@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _RtlpChangeQueryDebugBufferTarget@16 @ 0x4B3376D2 (_RtlpChangeQueryDebugBufferTarget@16.c)
 *     _RtlpSetProcessBacktraces@4 @ 0x4B337C27 (_RtlpSetProcessBacktraces@4.c)
 *     _AVrfpSetProcessVerifierOptions@4 @ 0x4B3394F3 (_AVrfpSetProcessVerifierOptions@4.c)
 */

int __stdcall RtlSetProcessDebugInformation(void *a1, int a2, int a3)
{
  struct _TEB *v3; // eax
  int InformationThread; // esi
  int result; // eax
  int v6; // ecx
  unsigned int v7; // eax
  HANDLE v8; // edi
  HANDLE Handle; // [esp+10h] [ebp-30h] BYREF
  HANDLE ThreadHandle; // [esp+14h] [ebp-2Ch] BYREF
  _DWORD v11[3]; // [esp+18h] [ebp-28h] BYREF
  int ThreadInformation[7]; // [esp+24h] [ebp-1Ch] BYREF

  v3 = NtCurrentTeb();
  v11[1] = -1;
  InformationThread = 0;
  v11[0] = -600000000;
  *(_DWORD *)(a3 + 32) = a2;
  if ( v3->ClientId.UniqueProcess == a1 )
  {
    if ( ((a2 & 1) == 0 || (InformationThread = AVrfpSetProcessVerifierOptions(a3)) == 0) && (a2 & 2) != 0 )
      return RtlpSetProcessBacktraces(a3);
  }
  else
  {
    Handle = 0;
    result = RtlpChangeQueryDebugBufferTarget(0, &Handle);
    if ( result < 0 )
      return result;
    v7 = *(_DWORD *)(a3 + 36);
    if ( v7 > 0x68 )
      memcpy((void *)(a3 + *(_DWORD *)(a3 + 44) + 104), (const void *)(a3 + 104), v7 - 104);
    InformationThread = RtlpCreateUserThreadEx(
                          (int)Handle,
                          0,
                          7,
                          0,
                          0,
                          0,
                          v6,
                          (int)RtlpSetProcessDebugInformationRemote,
                          *(void **)(a3 + 8),
                          &ThreadHandle,
                          0);
    if ( InformationThread >= 0 )
    {
      v8 = ThreadHandle;
      InformationThread = ZwResumeThread((int)ThreadHandle, 0);
      if ( InformationThread < 0
        || (InformationThread = ZwWaitForSingleObject((int)v8, 1, (int)v11), InformationThread < 0) )
      {
        ZwTerminateThread((int)v8, InformationThread);
      }
      else
      {
        InformationThread = NtQueryInformationThread(v8, (THREADINFOCLASS)0, ThreadInformation, 0x1Cu, 0);
        if ( InformationThread >= 0 )
          InformationThread = ThreadInformation[0];
      }
      NtClose(v8);
    }
    NtClose(Handle);
  }
  return InformationThread;
}
