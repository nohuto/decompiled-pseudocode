/*
 * XREFs of KiHandleBound @ 0x140514DB0
 * Callers:
 *     KiBoundFault @ 0x14040BAC0 (KiBoundFault.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExReferenceCallBackBlock @ 0x14027BEC0 (ExReferenceCallBackBlock.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 KiHandleBound()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v1; // edi
  struct _EX_RUNDOWN_REF *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  struct _EX_RUNDOWN_REF *v6; // rbx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  --CurrentThread->KernelApcDisable;
  v2 = ExReferenceCallBackBlock(&KiBoundsCallback);
  v6 = v2;
  if ( v2 )
  {
    v1 = ((__int64 (*)(void))v2[1].Count)();
    _m_prefetchw(&KiBoundsCallback);
    v7 = KiBoundsCallback;
    while ( ((unsigned __int64)v6 ^ v7) < 0xF )
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange64(&KiBoundsCallback, v7 + 1, v7);
      if ( v8 == v7 )
        goto LABEL_6;
    }
    ExReleaseRundownProtection(v6);
  }
LABEL_6:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v3, v4, v5);
  return v1;
}
