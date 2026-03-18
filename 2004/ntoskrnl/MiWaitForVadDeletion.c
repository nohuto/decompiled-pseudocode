/*
 * XREFs of MiWaitForVadDeletion @ 0x140556970
 * Callers:
 *     MiObtainReferencedVadEx @ 0x14020E520 (MiObtainReferencedVadEx.c)
 *     MiObtainReferencedSecureVad @ 0x14024BA10 (MiObtainReferencedSecureVad.c)
 *     MmQueryVirtualMemory @ 0x1405FF9D0 (MmQueryVirtualMemory.c)
 *     MiCleanVad @ 0x1406007B0 (MiCleanVad.c)
 *     MiLockVadRange @ 0x1406022F8 (MiLockVadRange.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     MiInsertVadEvent @ 0x1402481DC (MiInsertVadEvent.c)
 *     MiUnlockVad @ 0x14024AFC0 (MiUnlockVad.c)
 *     KeWaitForGate @ 0x14030E9A4 (KeWaitForGate.c)
 *     memset @ 0x14040A280 (memset.c)
 */

void __fastcall MiWaitForVadDeletion(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD v3[10]; // [rsp+20h] [rbp-50h] BYREF

  memset(v3, 0, 0x48uLL);
  if ( *(_QWORD *)(a1 + 16) != -1LL )
  {
    CurrentThread = KeGetCurrentThread();
    HIDWORD(v3[1]) = 0;
    v3[3] = &v3[2];
    LODWORD(v3[8]) = 1;
    v3[2] = &v3[2];
    LOWORD(v3[1]) = 263;
    BYTE2(v3[1]) = 6;
    MiInsertVadEvent(a1, v3, 1);
    MiUnlockVad((__int64)CurrentThread, a1);
    KeWaitForGate((__int64)&v3[1], 0x12u);
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 40, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 0x80u;
  }
}
