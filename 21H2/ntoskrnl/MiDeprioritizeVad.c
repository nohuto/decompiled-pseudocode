/*
 * XREFs of MiDeprioritizeVad @ 0x140381E94
 * Callers:
 *     MmAccessFault @ 0x14020D090 (MmAccessFault.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14021AF80 (MiUnlockAndDereferenceVad.c)
 *     MiReferenceControlAreaFile @ 0x14031CEB0 (MiReferenceControlAreaFile.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MiDereferenceControlAreaFile @ 0x1403571E4 (MiDereferenceControlAreaFile.c)
 *     MiTryLockVad @ 0x140381F68 (MiTryLockVad.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1405366CC (MiDeprioritizeVirtualAddresses.c)
 *     PfCheckDeprioritizeFile @ 0x1406CD858 (PfCheckDeprioritizeFile.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeprioritizeVad(unsigned int *P, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // r14
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  __int64 v8; // rbx
  ULONG_PTR v9; // rax
  __int64 v10; // r15
  signed __int32 v11; // eax
  unsigned __int64 v12; // rbp

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  if ( (unsigned int)MiTryLockVad(CurrentThread, P) )
  {
    if ( (P[12] & 4) == 0 )
    {
      v6 = P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32);
      v7 = (a2 >> 12) - v6;
      if ( (P[16] & 0x2000000) != 0 )
      {
        v8 = **((_QWORD **)P + 9);
        v9 = MiReferenceControlAreaFile(v8);
        v10 = *(_QWORD *)(v9 + 24);
        MiDereferenceControlAreaFile(v8, v9);
        if ( (Process[1].DirectoryTableBase & 0x400000000000LL) != 0
          && (v12 = v7 & 0xFFFFFFFFFFFFFF00uLL,
              (unsigned int)PfCheckDeprioritizeFile(HIDWORD(Process[1].ActiveProcessors.Bitmap[8]), v10, v12) == 1) )
        {
          if ( (P[16] & 0x2000000) != 0 )
            MiDeprioritizeVirtualAddresses(
              (v6 << 12) + ((v12 - 256) << 12),
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
    v11 = _InterlockedDecrement((volatile signed __int32 *)P + 9);
    if ( v11 == -1 )
      __fastfail(0xEu);
    if ( !v11 && (P[12] & 4) != 0 )
      ExFreePoolWithTag(P, 0);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
}
