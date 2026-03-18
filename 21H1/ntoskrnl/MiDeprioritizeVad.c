/*
 * XREFs of MiDeprioritizeVad @ 0x14037F074
 * Callers:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14021A7A0 (MiUnlockAndDereferenceVad.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiDereferenceControlAreaFile @ 0x14028244C (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140282C60 (MiReferenceControlAreaFile.c)
 *     MiTryLockVad @ 0x14037F148 (MiTryLockVad.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140530BAC (MiDeprioritizeVirtualAddresses.c)
 *     PfCheckDeprioritizeFile @ 0x1406631F0 (PfCheckDeprioritizeFile.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeprioritizeVad(unsigned int *P, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // r14
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rbp
  __int64 v11; // rbx
  ULONG_PTR v12; // rax
  __int64 v13; // r15
  signed __int32 v14; // eax
  unsigned __int64 v15; // rbp

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  if ( (unsigned int)MiTryLockVad(CurrentThread, P) )
  {
    if ( (P[12] & 4) == 0 )
    {
      v9 = P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32);
      v10 = (a2 >> 12) - v9;
      if ( (P[16] & 0x2000000) != 0 )
      {
        v11 = **((_QWORD **)P + 9);
        v12 = MiReferenceControlAreaFile(v11);
        v13 = *(_QWORD *)(v12 + 24);
        MiDereferenceControlAreaFile(v11, v12);
        if ( (Process[1].DirectoryTableBase & 0x400000000000LL) != 0
          && (v15 = v10 & 0xFFFFFFFFFFFFFF00uLL,
              (unsigned int)PfCheckDeprioritizeFile(HIDWORD(Process[1].ActiveProcessors.Bitmap[8]), v13, v15) == 1) )
        {
          if ( (P[16] & 0x2000000) != 0 )
            MiDeprioritizeVirtualAddresses(
              (v9 << 12) + ((v15 - 256) << 12),
              256LL,
              &Process[1].ActiveProcessorsPadding[6],
              18LL);
        }
        else
        {
          P[16] &= ~0x2000000u;
        }
      }
    }
    MiUnlockAndDereferenceVad((char *)P);
  }
  else
  {
    v14 = _InterlockedDecrement((volatile signed __int32 *)P + 9);
    if ( v14 == -1 )
      __fastfail(0xEu);
    if ( !v14 && (P[12] & 4) != 0 )
      ExFreePoolWithTag(P, 0);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v6, v7, v8);
  }
}
