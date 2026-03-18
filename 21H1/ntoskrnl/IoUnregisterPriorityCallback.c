/*
 * XREFs of IoUnregisterPriorityCallback @ 0x140500B70
 * Callers:
 *     IopDeleteDriver @ 0x14075D590 (IopDeleteDriver.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReferenceCallBackBlock @ 0x1402A5A10 (ExReferenceCallBackBlock.c)
 *     ExCompareExchangeCallBack @ 0x1403AF60C (ExCompareExchangeCallBack.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1406E2CE0 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     ExWaitForCallBacks @ 0x14094A6DC (ExWaitForCallBacks.c)
 */

void __fastcall IoUnregisterPriorityCallback(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // r15
  signed __int64 *i; // r14
  struct _EX_RUNDOWN_REF *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _EX_RUNDOWN_REF *v9; // rbx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  signed __int64 v12; // rax
  signed __int64 v13; // rtt

  if ( (*(_DWORD *)(a1 + 16) & 0x200) == 0 )
    return;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = 0LL;
  for ( i = IopUpdatePriorityCallbackRoutine; ; ++i )
  {
    v5 = ExReferenceCallBackBlock(&IopUpdatePriorityCallbackRoutine[v3]);
    v9 = v5;
    if ( v5 )
    {
      if ( v5[4].Count != a1 )
      {
        _m_prefetchw(i);
        v12 = *i;
        while ( ((unsigned __int64)v9 ^ v12) < 0xF )
        {
          v13 = v12;
          v12 = _InterlockedCompareExchange64(i, v12 + 1, v12);
          if ( v13 == v12 )
            goto LABEL_15;
        }
        ExReleaseRundownProtection_0(v9);
        goto LABEL_15;
      }
      if ( ExCompareExchangeCallBack(&IopUpdatePriorityCallbackRoutine[v3], 0LL, (__int64)v5) )
        break;
    }
LABEL_15:
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= 8 )
    {
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v6, v7, v8);
      return;
    }
  }
  _InterlockedDecrement(&IopUpdatePriorityCallbackRoutineCount);
  _m_prefetchw(&IopUpdatePriorityCallbackRoutine[v3]);
  v10 = IopUpdatePriorityCallbackRoutine[v3];
  if ( ((unsigned __int64)v9 ^ v10) >= 0xF )
  {
LABEL_9:
    ExReleaseRundownProtection_0(v9);
  }
  else
  {
    while ( 1 )
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange64(&IopUpdatePriorityCallbackRoutine[v3], v10 + 1, v10);
      if ( v11 == v10 )
        break;
      v6 = (unsigned __int64)v9 ^ v10;
      if ( ((unsigned __int64)v9 ^ v10) >= 0xF )
        goto LABEL_9;
    }
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v6, v7, v8);
  ExWaitForCallBacks(v9);
  SC_ENV::Free(v9);
  *(_DWORD *)(a1 + 16) &= ~0x200u;
}
