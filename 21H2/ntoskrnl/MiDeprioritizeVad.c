/*
 * XREFs of MiDeprioritizeVad @ 0x1402598CC
 * Callers:
 *     MmAccessFault @ 0x14031C860 (MmAccessFault.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x140230680 (ObFastDereferenceObjectDeferDelete.c)
 *     MiTryLockVad @ 0x140259A00 (MiTryLockVad.c)
 *     MiReferenceControlAreaFileWithTag @ 0x14027A794 (MiReferenceControlAreaFileWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MiUnlockAndDereferenceVad @ 0x14032E700 (MiUnlockAndDereferenceVad.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140374BBC (MiDeprioritizeVirtualAddresses.c)
 *     PfCheckDeprioritizeFile @ 0x1407DBC0C (PfCheckDeprioritizeFile.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeprioritizeVad(unsigned int *P, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // r14
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // r15
  unsigned __int64 v11; // rbp
  signed __int32 v12; // eax
  bool v13; // zf

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
        v9 = MiReferenceControlAreaFileWithTag(v8, 1666411853LL);
        v10 = *(_QWORD *)(v9 + 24);
        ObFastDereferenceObjectDeferDelete((signed __int64 *)(v8 + 64), v9, 0x63536D4Du);
        if ( (Process[1].DirectoryTableBase & 0x400000000000LL) != 0
          && (v11 = v7 & 0xFFFFFFFFFFFFFF00uLL,
              (unsigned int)PfCheckDeprioritizeFile(HIDWORD(Process[1].ActiveProcessors.StaticBitmap[8]), v10, v11)) )
        {
          if ( (P[16] & 0x2000000) != 0 )
            MiDeprioritizeVirtualAddresses(
              (v6 << 12) + ((v11 - 256) << 12),
              256LL,
              &Process[1].ActiveProcessors.StaticBitmap[26],
              18LL);
        }
        else
        {
          P[16] &= ~0x2000000u;
        }
      }
    }
    MiUnlockAndDereferenceVad(P);
  }
  else
  {
    v12 = _InterlockedDecrement((volatile signed __int32 *)P + 9);
    if ( v12 == -1 )
      __fastfail(0xEu);
    if ( !v12 && (P[12] & 4) != 0 )
      ExFreePoolWithTag(P, 0);
    v13 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v13 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
}
