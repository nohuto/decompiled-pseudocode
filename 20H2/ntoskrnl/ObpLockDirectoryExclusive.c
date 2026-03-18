/*
 * XREFs of ObpLockDirectoryExclusive @ 0x14030FB48
 * Callers:
 *     ObpDeleteNameCheck @ 0x1405E06C0 (ObpDeleteNameCheck.c)
 *     ObpLookupObjectName @ 0x140614C20 (ObpLookupObjectName.c)
 *     ObCloseHandleTableEntry @ 0x1406160E0 (ObCloseHandleTableEntry.c)
 *     NtSetInformationObject @ 0x1406BB240 (NtSetInformationObject.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x1406BB51C (ObpMarkDirectoryObjectsTemporary.c)
 *     ObCreateObjectTypeEx @ 0x14078B3D0 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140A409B8 (ObInitSystem.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
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
