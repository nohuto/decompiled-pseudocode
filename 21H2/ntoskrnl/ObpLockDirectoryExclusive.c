/*
 * XREFs of ObpLockDirectoryExclusive @ 0x1402AB5F0
 * Callers:
 *     ObpDeleteNameCheck @ 0x14062CBD0 (ObpDeleteNameCheck.c)
 *     NtSetInformationObject @ 0x140691630 (NtSetInformationObject.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x140691AB8 (ObpMarkDirectoryObjectsTemporary.c)
 *     ObpLookupObjectName @ 0x1406F3F20 (ObpLookupObjectName.c)
 *     ObCloseHandleTableEntry @ 0x1406F5660 (ObCloseHandleTableEntry.c)
 *     ObCreateObjectTypeEx @ 0x1407958F0 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140A3E538 (ObInitSystem.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402056A0 (ObfReferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 */

LONG_PTR __fastcall ObpLockDirectoryExclusive(__int64 a1, void *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  LONG_PTR result; // rax

  *(_DWORD *)(a1 + 32) = -1431694796;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)a2 + 296, 0LL);
  *(_DWORD *)(a1 + 32) = -859041228;
  result = ObfReferenceObjectWithTag(a2, 0x746C6644u);
  *(_QWORD *)a1 = a2;
  *(_WORD *)(a1 + 30) = 257;
  return result;
}
