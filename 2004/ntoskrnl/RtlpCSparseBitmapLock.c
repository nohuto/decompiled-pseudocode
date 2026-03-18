/*
 * XREFs of RtlpCSparseBitmapLock @ 0x1402D9B88
 * Callers:
 *     RtlpCSparseBitmapPageDecommit @ 0x1402D89D8 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpCSparseBitmapPageCommit @ 0x1402D9A2C (RtlpCSparseBitmapPageCommit.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     ExAcquireSpinLockShared @ 0x140228470 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 */

KIRQL __fastcall RtlpCSparseBitmapLock(__int64 a1, int a2, __int64 a3)
{
  volatile LONG *v5; // rcx
  KIRQL result; // al
  struct _KTHREAD *CurrentThread; // rax

  v5 = (volatile LONG *)(a1 + 24);
  if ( *(_BYTE *)(a1 + 48) )
  {
    if ( a2 == 1 )
      result = ExAcquireSpinLockExclusive(v5);
    else
      result = ExAcquireSpinLockShared(v5);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    if ( a2 == 1 )
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v5, 0LL);
    else
      ExAcquirePushLockSharedEx((ULONG_PTR)v5, 0LL);
    result = -1;
  }
  *(_BYTE *)(a3 + 4) = result;
  *(_QWORD *)(a3 + 8) = a1;
  *(_DWORD *)a3 = a2;
  return result;
}
