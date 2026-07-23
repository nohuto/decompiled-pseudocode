/*
 * XREFs of _LdrpEnableParallelLoading@4 @ 0x4B2AEBCB
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _LdrpDetectDetour@0 @ 0x4B2AEB06 (_LdrpDetectDetour@0.c)
 *     _TpSetPoolWorkerThreadIdleTimeout@12 @ 0x4B2AEB80 (_TpSetPoolWorkerThreadIdleTimeout@12.c)
 *     _RtlGetSuiteMask@0 @ 0x4B2B0630 (_RtlGetSuiteMask@0.c)
 *     _TpSetPoolMaxThreads@8 @ 0x4B2B1D10 (_TpSetPoolMaxThreads@8.c)
 *     _TpAllocPoolInternal@8 @ 0x4B2B37A4 (_TpAllocPoolInternal@8.c)
 *     _TpAllocWork@16 @ 0x4B2B3CB0 (_TpAllocWork@16.c)
 */

NTSTATUS __fastcall LdrpEnableParallelLoading(unsigned int a1)
{
  ULONG v2; // ebx
  int v3; // edi
  TP_CALLBACK_ENVIRON_V3 CallbackEnviron; // [esp+10h] [ebp-28h] BYREF

  LdrpDetectDetour();
  if ( a1 )
  {
    if ( a1 > 0x10 )
      a1 = 16;
    if ( a1 > 1 )
      goto LABEL_4;
LABEL_13:
    v2 = 1;
    goto LABEL_5;
  }
  if ( (RtlGetSuiteMask() & 0x10000) != 0 )
    goto LABEL_13;
  a1 = 4;
LABEL_4:
  v2 = a1 - 1;
LABEL_5:
  v3 = TpAllocPoolInternal(&LdrpThreadPool, 1);
  if ( v3 >= 0 )
  {
    TpSetPoolWorkerThreadIdleTimeout((int)LdrpThreadPool, -300000000, -1);
    TpSetPoolMaxThreads(LdrpThreadPool, v2);
    if ( a1 > 1 && !LdrpDetourExist )
    {
      CallbackEnviron.CallbackPriority = TP_CALLBACK_PRIORITY_NORMAL;
      CallbackEnviron.Pool = LdrpThreadPool;
      CallbackEnviron.Version = 3;
      memset(&CallbackEnviron.CleanupGroup, 0, 24);
      CallbackEnviron.Size = 40;
      return TpAllocWork(&LdrpMapAndSnapWork, LdrpWorkCallback, 0, &CallbackEnviron);
    }
  }
  return v3;
}
