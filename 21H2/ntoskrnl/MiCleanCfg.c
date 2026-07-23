/*
 * XREFs of MiCleanCfg @ 0x140241B54
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x14070262C (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiUnlockAndDereferenceVadShared @ 0x14027C7C0 (MiUnlockAndDereferenceVadShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
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
  v3 = (void **)(*(_QWORD *)(result + 1680) + 456LL);
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
