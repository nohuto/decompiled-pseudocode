/*
 * XREFs of MiWaitForVadDeletion @ 0x140556320
 * Callers:
 *     MiObtainReferencedVadEx @ 0x140267570 (MiObtainReferencedVadEx.c)
 *     MiObtainReferencedSecureVad @ 0x1402A4A40 (MiObtainReferencedSecureVad.c)
 *     MmQueryVirtualMemory @ 0x140634A10 (MmQueryVirtualMemory.c)
 *     MiCleanVad @ 0x1406357F0 (MiCleanVad.c)
 *     MiLockVadRange @ 0x140637338 (MiLockVadRange.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     MiInsertVadEvent @ 0x1402A120C (MiInsertVadEvent.c)
 *     MiUnlockVad @ 0x1402A3FF0 (MiUnlockVad.c)
 *     KeWaitForGate @ 0x1402CCFD8 (KeWaitForGate.c)
 *     memset @ 0x140408F80 (memset.c)
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
    KeWaitForGate((__int64)&v3[1], 18);
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 40, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 0x80u;
  }
}
