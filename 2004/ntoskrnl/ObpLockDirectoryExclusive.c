/*
 * XREFs of ObpLockDirectoryExclusive @ 0x14033A0D8
 * Callers:
 *     ObpLookupObjectName @ 0x1405F1FF0 (ObpLookupObjectName.c)
 *     ObCloseHandleTableEntry @ 0x1405F34B0 (ObCloseHandleTableEntry.c)
 *     ObpDeleteNameCheck @ 0x14063D600 (ObpDeleteNameCheck.c)
 *     NtSetInformationObject @ 0x1406E1820 (NtSetInformationObject.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x1406E1CA8 (ObpMarkDirectoryObjectsTemporary.c)
 *     ObCreateObjectTypeEx @ 0x14077DE30 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140A3A924 (ObInitSystem.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
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
