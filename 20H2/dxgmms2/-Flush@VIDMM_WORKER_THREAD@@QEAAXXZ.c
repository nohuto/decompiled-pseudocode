/*
 * XREFs of ?Flush@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00B9E50
 * Callers:
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C00B0494 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z.c)
 * Callees:
 *     ?TransitionToState@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@@Z @ 0x1C0087F6C (-TransitionToState@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@@Z.c)
 */

void __fastcall VIDMM_WORKER_THREAD::Flush(VIDMM_WORKER_THREAD *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 32, 0LL);
  *((_QWORD *)this + 5) = KeGetCurrentThread();
  if ( *((_DWORD *)this + 6) == 1 )
  {
    VIDMM_WORKER_THREAD::TransitionToState((__int64)this, 6);
    VIDMM_WORKER_THREAD::TransitionToState((__int64)this, 1);
  }
  else
  {
    v5 = WdLogNewEntry5_WdAssertion(v3, v2, v4);
    *(_QWORD *)(v5 + 24) = *((int *)this + 6);
    WdLogEvent5_WdAssertion(v5);
  }
  *((_QWORD *)this + 5) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 32, 0LL);
  KeLeaveCriticalRegion();
}
