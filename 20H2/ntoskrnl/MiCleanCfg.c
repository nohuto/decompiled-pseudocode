/*
 * XREFs of MiCleanCfg @ 0x1403222CC
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1406242E8 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14022C070 (MiUnlockAndDereferenceVadShared.c)
 */

void MiCleanCfg()
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v1; // rbp
  char **v2; // rbx
  char *v3; // rsi

  CurrentThread = KeGetCurrentThread();
  v1 = 2LL;
  v2 = (char **)(CurrentThread->ApcState.Process[1].ActiveProcessorsPadding[8] + 456);
  do
  {
    v3 = *v2;
    if ( *v2 )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)(v3 + 40), 0LL);
      BYTE1(CurrentThread[1].Queue) |= 0x40u;
      MiUnlockAndDereferenceVadShared(v3);
      *v2 = 0LL;
    }
    v2 += 4;
    --v1;
  }
  while ( v1 );
}
