/*
 * XREFs of MiWaitForVadDeletion @ 0x14055BE10
 * Callers:
 *     MiObtainReferencedVadEx @ 0x14021B2A0 (MiObtainReferencedVadEx.c)
 *     MiObtainReferencedSecureVad @ 0x14025B6F0 (MiObtainReferencedSecureVad.c)
 *     MiLockVadRange @ 0x14061DC20 (MiLockVadRange.c)
 *     MiCleanVad @ 0x14061E898 (MiCleanVad.c)
 *     MmQueryVirtualMemory @ 0x14061E930 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiInsertVadEvent @ 0x14025B9BC (MiInsertVadEvent.c)
 *     KeWaitForGate @ 0x140299F74 (KeWaitForGate.c)
 *     MiUnlockVad @ 0x140314658 (MiUnlockVad.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     memset @ 0x140414200 (memset.c)
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
