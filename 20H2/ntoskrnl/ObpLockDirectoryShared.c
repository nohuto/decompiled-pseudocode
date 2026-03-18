/*
 * XREFs of ObpLockDirectoryShared @ 0x1402098F8
 * Callers:
 *     NtQueryDirectoryObject @ 0x1405FD5E0 (NtQueryDirectoryObject.c)
 *     ObpLookupObjectName @ 0x140614C20 (ObpLookupObjectName.c)
 *     ObpLookupDirectoryEntryEx @ 0x1406B51E8 (ObpLookupDirectoryEntryEx.c)
 *     ObpLookupDirectoryUsingHash @ 0x1406B533C (ObpLookupDirectoryUsingHash.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
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
