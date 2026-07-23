/*
 * XREFs of LdrpCallInitRoutine @ 0x1800199BC
 * Callers:
 *     LdrShutdownThread @ 0x180017450 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180017738 (LdrpInitializeThread.c)
 *     LdrpCallTlsInitializers @ 0x180019A78 (LdrpCallTlsInitializers.c)
 *     LdrShutdownProcess @ 0x18005DAA0 (LdrShutdownProcess.c)
 *     LdrpProcessDetachNode @ 0x18006A9D4 (LdrpProcessDetachNode.c)
 *     LdrpInitializeNode @ 0x18006C124 (LdrpInitializeNode.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800DAFF8 (AVrfpLoadAndInitializeProvider.c)
 *     AvrfMiniLoadDll @ 0x1800DB920 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogError @ 0x1800601E8 (LdrpLogError.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 *     LdrpLogEtwEvent @ 0x1800CF2C0 (LdrpLogEtwEvent.c)
 */

char __fastcall LdrpCallInitRoutine(
        __int64 (__fastcall *a1)(__int64, _QWORD, __int64),
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v8; // rdi
  __int64 v9; // r10
  __int64 v10; // rbx
  __int64 v11; // r8
  int v13; // r9d
  __int64 v14; // rcx
  int v15; // r9d
  char v16; // [rsp+48h] [rbp-38h]

  v8 = 2147353476LL;
  if ( RtlGetCurrentServiceSessionId() )
    v9 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v9 = 2147353476LL;
  if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v10 = 2147353477LL;
    if ( RtlGetCurrentServiceSessionId() )
      v14 = (__int64)NtCurrentPeb()->SharedData + 555;
    else
      v14 = 2147353477LL;
    if ( (*(_BYTE *)v14 & 0x20) != 0 )
    {
      LOBYTE(v13) = a3;
      LdrpLogEtwEvent(5283, a2, 0, v13, 0LL, 0LL);
    }
  }
  else
  {
    v10 = 2147353477LL;
  }
  v16 = a1(a2, a3, a4);
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v10 & 0x20) != 0 )
    {
      LOBYTE(v15) = -1;
      LOBYTE(v11) = -1;
      LdrpLogEtwEvent(5270, a2, v11, v15, 0LL, 0LL);
    }
  }
  if ( !v16 && a3 == 1 )
  {
    LOBYTE(v11) = 1;
    LdrpLogError(3221225794LL, 5270LL, v11, 0LL);
  }
  return v16;
}
