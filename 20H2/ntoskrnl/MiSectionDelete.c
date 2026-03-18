/*
 * XREFs of MiSectionDelete @ 0x14067DC40
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     MiSectionControlArea @ 0x14022C010 (MiSectionControlArea.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MiDereferenceControlAreaBySection @ 0x14029BDD8 (MiDereferenceControlAreaBySection.c)
 *     RtlAvlRemoveNode @ 0x1402C3340 (RtlAvlRemoveNode.c)
 *     MiDereferencePerSessionProtos @ 0x1406DC9FC (MiDereferencePerSessionProtos.c)
 *     MiLogSectionObjectEvent @ 0x1408CA1D0 (MiLogSectionObjectEvent.c)
 */

__int64 __fastcall MiSectionDelete(__int64 a1)
{
  unsigned int v2; // esi
  unsigned __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // edx
  __int64 v8; // rdx
  struct _KTHREAD *CurrentThread; // rbp

  v2 = *(_WORD *)(a1 + 58) & 1;
  v3 = MiSectionControlArea(a1);
  if ( *(_QWORD *)(v4 + 24) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4C810, 0LL);
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140C4C808, (unsigned __int64 *)a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4C810, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4C810);
    KeAbPostRelease((ULONG_PTR)&qword_140C4C810);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  v5 = *(_QWORD *)(a1 + 40);
  if ( (v5 & 3) != 0 )
    HalPutDmaAdapter((PADAPTER_OBJECT)(v5 & 0xFFFFFFFFFFFFFFFCuLL));
  v6 = *(_DWORD *)(v3 + 56);
  if ( (v6 & 0x20) == 0 && (*(_DWORD *)(a1 + 56) & 0x8000000) != 0 && *(_QWORD *)(v3 + 64) )
  {
    _InterlockedAdd((volatile signed __int32 *)(v3 + 92), 0xFFFFFFFF);
    v6 = *(_DWORD *)(v3 + 56);
  }
  if ( (v6 & 0x4000000) != 0 )
  {
    v8 = (*(_DWORD *)(a1 + 60) >> 12) & 0x7FFFF;
    if ( (_DWORD)v8 == 0x7FFFF )
      v8 = 0xFFFFFFFFLL;
    MiDereferencePerSessionProtos(v3, v8);
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) != 0 && !*(_QWORD *)(v3 + 64) )
    MiLogSectionObjectEvent(a1, 0LL);
  return MiDereferenceControlAreaBySection(v3, v2);
}
