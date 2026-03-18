/*
 * XREFs of ObpLockDirectoryShared @ 0x14025B128
 * Callers:
 *     NtQueryDirectoryObject @ 0x140612FE0 (NtQueryDirectoryObject.c)
 *     ObpLookupObjectName @ 0x140627610 (ObpLookupObjectName.c)
 *     ObpLookupDirectoryEntryEx @ 0x1406BC4C8 (ObpLookupDirectoryEntryEx.c)
 *     ObpLookupDirectoryUsingHash @ 0x1406BC61C (ObpLookupDirectoryUsingHash.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 */

LONG_PTR __fastcall ObpLockDirectoryShared(__int64 a1, void *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  LONG_PTR result; // rax

  *(_DWORD *)(a1 + 32) = -1145368012;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)a2 + 296, 0LL);
  *(_DWORD *)(a1 + 32) = -572714444;
  result = ObfReferenceObjectWithTag(a2, 0x746C6644u);
  *(_QWORD *)a1 = a2;
  *(_WORD *)(a1 + 30) = 1;
  return result;
}
