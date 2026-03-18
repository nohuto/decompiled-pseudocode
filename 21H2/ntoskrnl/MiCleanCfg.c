/*
 * XREFs of MiCleanCfg @ 0x14024CB6C
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1406F89A4 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14030EA70 (MiUnlockAndDereferenceVadShared.c)
 */

__int64 MiCleanCfg()
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v1; // rbp
  __int64 result; // rax
  void **v3; // rbx
  void *v4; // rsi

  CurrentThread = KeGetCurrentThread();
  v1 = 2LL;
  result = (__int64)CurrentThread->ApcState.Process;
  v3 = (void **)(*(_QWORD *)(result + 1680) + 440LL);
  do
  {
    v4 = *v3;
    if ( *v3 )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)v4 + 40, 0LL);
      BYTE1(CurrentThread[1].Queue) |= 0x40u;
      result = MiUnlockAndDereferenceVadShared(v4);
      *v3 = 0LL;
    }
    v3 += 4;
    --v1;
  }
  while ( v1 );
  return result;
}
