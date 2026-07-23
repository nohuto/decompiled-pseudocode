/*
 * XREFs of LdrpEnableParallelLoading @ 0x180062B18
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D1E80 (LdrpInitializeProcess.c)
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
  ULONG v4; // edx
  TP_CALLBACK_ENVIRON_V3 CallbackEnviron; // [rsp+20h] [rbp-58h] BYREF

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
    v4 = 1;
    if ( v2 > 1 )
      v4 = v2 - 1;
    TpSetPoolMaxThreads(LdrpThreadPool, v4);
    if ( v2 > 1 && !LdrpDetourExist )
    {
      memset(&CallbackEnviron.CleanupGroup, 0, 44);
      CallbackEnviron.Pool = LdrpThreadPool;
      CallbackEnviron.Version = 3;
      CallbackEnviron.CallbackPriority = TP_CALLBACK_PRIORITY_NORMAL;
      CallbackEnviron.Size = 72;
      return (unsigned int)TpAllocWork(&LdrpMapAndSnapWork, (PTP_WORK_CALLBACK)LdrpWorkCallback, 0LL, &CallbackEnviron);
    }
  }
  return (unsigned int)v3;
}
