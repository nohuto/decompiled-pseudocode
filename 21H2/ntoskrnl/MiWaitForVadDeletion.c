/*
 * XREFs of MiWaitForVadDeletion @ 0x140202010
 * Callers:
 *     MiObtainReferencedSecureVad @ 0x140281620 (MiObtainReferencedSecureVad.c)
 *     MiObtainReferencedVadEx @ 0x14030E7C0 (MiObtainReferencedVadEx.c)
 *     MiLockVadRange @ 0x1406F7D78 (MiLockVadRange.c)
 *     MiCleanVad @ 0x1406F8C0C (MiCleanVad.c)
 *     MmQueryVirtualMemory @ 0x1407BA750 (MmQueryVirtualMemory.c)
 * Callees:
 *     KeWaitForGate @ 0x140217454 (KeWaitForGate.c)
 *     MiUnlockVad @ 0x140281C44 (MiUnlockVad.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     MiInsertVadEvent @ 0x14030BA20 (MiInsertVadEvent.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall MiWaitForVadDeletion(__int64 a1)
{
  void *result; // rax
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD v4[10]; // [rsp+20h] [rbp-50h] BYREF

  result = memset(v4, 0, 0x48uLL);
  if ( *(_QWORD *)(a1 + 16) != -1LL )
  {
    CurrentThread = KeGetCurrentThread();
    HIDWORD(v4[1]) = 0;
    v4[3] = &v4[2];
    LODWORD(v4[8]) = 1;
    v4[2] = &v4[2];
    LOWORD(v4[1]) = 263;
    BYTE2(v4[1]) = 6;
    MiInsertVadEvent(a1, v4);
    MiUnlockVad(CurrentThread, a1);
    KeWaitForGate(&v4[1], 18LL);
    --CurrentThread->SpecialApcDisable;
    result = (void *)ExAcquirePushLockExclusiveEx(a1 + 40, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 0x80u;
  }
  return result;
}
