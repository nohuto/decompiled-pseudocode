/*
 * XREFs of LdrpCallInitRoutine @ 0x1800199BC
 * Callers:
 *     LdrShutdownThread @ 0x180017450 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180017738 (LdrpInitializeThread.c)
 *     LdrpCallTlsInitializers @ 0x180019A78 (LdrpCallTlsInitializers.c)
 *     LdrShutdownProcess @ 0x18005DA50 (LdrShutdownProcess.c)
 *     LdrpProcessDetachNode @ 0x18006A8C4 (LdrpProcessDetachNode.c)
 *     LdrpInitializeNode @ 0x18006C014 (LdrpInitializeNode.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800DAC58 (AVrfpLoadAndInitializeProvider.c)
 *     AvrfMiniLoadDll @ 0x1800DB580 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogError @ 0x1800600D8 (LdrpLogError.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 *     LdrpLogEtwEvent @ 0x1800CF0E0 (LdrpLogEtwEvent.c)
 */

char __fastcall LdrpCallInitRoutine(
        __int64 (__fastcall *a1)(__int64, _QWORD, __int64),
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r10
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v19; // r9d
  __int64 v20; // rcx
  int v21; // r9d
  char v22; // [rsp+48h] [rbp-38h]

  v10 = 2147353476LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2) )
    v11 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v11 = 2147353476LL;
  if ( *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v12 = 2147353477LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v9, v8) )
      v20 = (__int64)NtCurrentPeb()->SharedData + 555;
    else
      v20 = 2147353477LL;
    if ( (*(_BYTE *)v20 & 0x20) != 0 )
    {
      LOBYTE(v19) = a3;
      LdrpLogEtwEvent(5283, a2, 0, v19, 0LL, 0LL);
    }
  }
  else
  {
    v12 = 2147353477LL;
  }
  v22 = a1(a2, a3, a4);
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v14, v13) )
    v10 = (__int64)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v10 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v16, v15) )
      v12 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v12 & 0x20) != 0 )
    {
      LOBYTE(v21) = -1;
      LOBYTE(v17) = -1;
      LdrpLogEtwEvent(5270, a2, v17, v21, 0LL, 0LL);
    }
  }
  if ( !v22 && a3 == 1 )
  {
    LOBYTE(v17) = 1;
    LdrpLogError(3221225794LL, 5270LL, v17, 0LL);
  }
  return v22;
}
