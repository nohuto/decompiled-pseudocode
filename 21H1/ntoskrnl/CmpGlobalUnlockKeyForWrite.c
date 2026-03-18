/*
 * XREFs of CmpGlobalUnlockKeyForWrite @ 0x14086D994
 * Callers:
 *     CmpFreeSiloKeyLockEntry @ 0x14086D954 (CmpFreeSiloKeyLockEntry.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     CmpFreeTransientPoolWithTag @ 0x14025C5D8 (CmpFreeTransientPoolWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     CmpDereferenceKeyControlBlock @ 0x140624030 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockKcb @ 0x140626230 (CmpUnlockKcb.c)
 *     CmpLockKcbExclusive @ 0x140695D18 (CmpLockKcbExclusive.c)
 */

void __fastcall CmpGlobalUnlockKeyForWrite(ULONG_PTR a1, _QWORD *a2)
{
  signed __int64 v4; // rax
  signed __int64 i; // rdx
  signed __int64 v6; // rtt
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  _QWORD *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9

  _m_prefetchw(a2 + 2);
  v4 = a2[2];
  for ( i = v4 - 1; i > 0; i = v4 - 1 )
  {
    v6 = v4;
    v4 = _InterlockedCompareExchange64(a2 + 2, i, v4);
    if ( v6 == v4 )
      return;
  }
  if ( i )
    __fastfail(0xEu);
  CmpLockKcbExclusive(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpKeyLockTracker, 0LL);
  v8 = _InterlockedDecrement64(a2 + 2);
  if ( v8 > 0 )
  {
    ExReleasePushLockEx((ULONG_PTR)&CmpKeyLockTracker, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v10, v11);
    CmpUnlockKcb(a1);
  }
  else
  {
    if ( v8 )
      __fastfail(0xEu);
    v12 = *a2;
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v13 = (_QWORD *)a2[1], (_QWORD *)*v13 != a2) )
      __fastfail(3u);
    *v13 = v12;
    *(_QWORD *)(v12 + 8) = v13;
    ExReleasePushLockEx((ULONG_PTR)&CmpKeyLockTracker, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v14, v15, v16);
    *(_WORD *)(a1 + 8) &= ~0x80u;
    CmpUnlockKcb(a1);
    CmpDereferenceKeyControlBlock(a2[3]);
    CmpFreeTransientPoolWithTag(a2, 0x33374D43u);
  }
}
