/*
 * XREFs of KeDeregisterBoundCallback @ 0x14050E670
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReferenceCallBackBlock @ 0x1402A5A10 (ExReferenceCallBackBlock.c)
 *     ExCompareExchangeCallBack @ 0x1403AF60C (ExCompareExchangeCallBack.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1406E2CE0 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     ExWaitForCallBacks @ 0x14094A6DC (ExWaitForCallBacks.c)
 */

__int64 __fastcall KeDeregisterBoundCallback(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // esi
  struct _EX_RUNDOWN_REF *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _EX_RUNDOWN_REF *v8; // rbx
  char v9; // di
  signed __int64 v10; // rax
  signed __int64 v11; // rtt

  CurrentThread = KeGetCurrentThread();
  v3 = -1073741816;
  --CurrentThread->KernelApcDisable;
  v4 = ExReferenceCallBackBlock(&KiBoundsCallback);
  v8 = v4;
  if ( v4 )
  {
    v9 = 0;
    if ( v4[1].Count == a1 )
      v9 = ExCompareExchangeCallBack(&KiBoundsCallback, 0LL, (__int64)v4);
    _m_prefetchw(&KiBoundsCallback);
    v10 = KiBoundsCallback;
    while ( ((unsigned __int64)v8 ^ v10) < 0xF )
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange64(&KiBoundsCallback, v10 + 1, v10);
      if ( v11 == v10 )
        goto LABEL_8;
    }
    ExReleaseRundownProtection_0(v8);
LABEL_8:
    if ( v9 )
    {
      ExWaitForCallBacks(v8);
      SC_ENV::Free(v8);
      v3 = 0;
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v6, v7);
  return v3;
}
