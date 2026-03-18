/*
 * XREFs of ?StartDeadlockTrackers@DXGADAPTER@@QEAAXXZ @ 0x1C01B42C4
 * Callers:
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C01B41A0 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 * Callees:
 *     ?Activate@DXGDEADLOCK_TRACKER@@QEAAXXZ @ 0x1C01E096C (-Activate@DXGDEADLOCK_TRACKER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::StartDeadlockTrackers(DXGADAPTER *this)
{
  char *v2; // rdi
  char *v3; // rsi
  char *i; // rbx

  if ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 1149, 1, 0) )
  {
    WdLogSingleEntry1(9LL, 12256LL);
    v2 = (char *)this + 4600;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 4600, 0LL);
    v3 = (char *)this + 4624;
    *((_QWORD *)this + 576) = KeGetCurrentThread();
    for ( i = (char *)*((_QWORD *)this + 578); i != v3; i = *(char **)i )
      DXGDEADLOCK_TRACKER::Activate((DXGDEADLOCK_TRACKER *)(i - 224));
    *((_QWORD *)v2 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
}
