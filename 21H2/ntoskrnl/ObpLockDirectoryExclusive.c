/*
 * XREFs of ObpLockDirectoryExclusive @ 0x1406B96B0
 * Callers:
 *     NtSetInformationObject @ 0x1406B9250 (NtSetInformationObject.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x1406B94DC (ObpMarkDirectoryObjectsTemporary.c)
 *     ObpCloseHandle @ 0x140734160 (ObpCloseHandle.c)
 *     ObpDeleteNameCheck @ 0x1407A3190 (ObpDeleteNameCheck.c)
 *     ObpLookupObjectName @ 0x1407CB6C0 (ObpLookupObjectName.c)
 *     ObCreateObjectTypeEx @ 0x140824B30 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140AFE184 (ObInitSystem.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall ObpLockDirectoryExclusive(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax

  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 21) = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a2 + 296, 0LL);
}
