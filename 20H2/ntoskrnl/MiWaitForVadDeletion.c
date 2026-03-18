/*
 * XREFs of MiWaitForVadDeletion @ 0x14055A340
 * Callers:
 *     MiObtainReferencedSecureVad @ 0x14022EC10 (MiObtainReferencedSecureVad.c)
 *     MiObtainReferencedVadEx @ 0x14027CA80 (MiObtainReferencedVadEx.c)
 *     MmQueryVirtualMemory @ 0x140621F60 (MmQueryVirtualMemory.c)
 *     MiLockVadRange @ 0x14062E080 (MiLockVadRange.c)
 *     MiCleanVad @ 0x14068551C (MiCleanVad.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     MiInsertVadEvent @ 0x14022D57C (MiInsertVadEvent.c)
 *     MiUnlockVad @ 0x1402306B0 (MiUnlockVad.c)
 *     KeWaitForGate @ 0x1402F5308 (KeWaitForGate.c)
 *     memset @ 0x140411300 (memset.c)
 */

void __fastcall MiWaitForVadDeletion(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3[10]; // [rsp+20h] [rbp-50h] BYREF

  memset(v3, 0, 0x48uLL);
  if ( *(_QWORD *)(a1 + 16) != -1LL )
  {
    CurrentThread = KeGetCurrentThread();
    HIDWORD(v3[1]) = 0;
    v3[3] = (__int64)&v3[2];
    LODWORD(v3[8]) = 1;
    v3[2] = (__int64)&v3[2];
    LOWORD(v3[1]) = 263;
    BYTE2(v3[1]) = 6;
    MiInsertVadEvent(a1, v3, 1);
    MiUnlockVad((__int64)CurrentThread, a1);
    KeWaitForGate((__int64)&v3[1], 18);
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 40, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 0x80u;
  }
}
