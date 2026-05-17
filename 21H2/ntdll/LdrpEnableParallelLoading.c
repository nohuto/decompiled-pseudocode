/*
 * XREFs of LdrpEnableParallelLoading @ 0x180062B18
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D1EC0 (LdrpInitializeProcess.c)
 * Callees:
 *     TpAllocWork @ 0x18000F2E0 (TpAllocWork.c)
 *     RtlGetSuiteMask @ 0x18003CC10 (RtlGetSuiteMask.c)
 *     TpSetPoolMaxThreads @ 0x180062C20 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x180062C90 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpAllocPoolInternal @ 0x180062D34 (TpAllocPoolInternal.c)
 *     LdrpDetectDetour @ 0x1800634AC (LdrpDetectDetour.c)
 */

__int64 __fastcall LdrpEnableParallelLoading(unsigned int a1)
{
  unsigned int v2; // ebx
  int v3; // edi
  __int64 v4; // rdx
  int v6; // [rsp+20h] [rbp-58h] BYREF
  __int64 v7; // [rsp+28h] [rbp-50h]
  __int64 v8; // [rsp+30h] [rbp-48h]
  __int64 v9; // [rsp+38h] [rbp-40h]
  __int128 v10; // [rsp+40h] [rbp-38h]
  __int64 v11; // [rsp+50h] [rbp-28h]
  int v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+5Ch] [rbp-1Ch]
  int v14; // [rsp+60h] [rbp-18h]

  LdrpDetectDetour();
  if ( a1 )
  {
    v2 = a1;
    if ( a1 > 0x10 )
      v2 = 16;
  }
  else
  {
    v2 = 4;
    if ( (RtlGetSuiteMask() & 0x10000) != 0 )
      v2 = 0;
  }
  v3 = TpAllocPoolInternal(&LdrpThreadPool, 1LL);
  if ( v3 >= 0 )
  {
    TpSetPoolWorkerThreadIdleTimeout(LdrpThreadPool, -300000000LL);
    v4 = 1LL;
    if ( v2 > 1 )
      v4 = v2 - 1;
    TpSetPoolMaxThreads(LdrpThreadPool, v4);
    if ( v2 > 1 && !LdrpDetourExist )
    {
      v8 = 0LL;
      v9 = 0LL;
      v11 = 0LL;
      v12 = 0;
      v10 = 0LL;
      v7 = LdrpThreadPool;
      v6 = 3;
      v13 = 1;
      v14 = 72;
      return (unsigned int)TpAllocWork(
                             (_PEB_LDR_DATA *)&LdrpMapAndSnapWork,
                             (__int64)LdrpWorkCallback,
                             0LL,
                             (__int64)&v6);
    }
  }
  return (unsigned int)v3;
}
