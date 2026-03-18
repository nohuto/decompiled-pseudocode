/*
 * XREFs of PiDmGetObjectCount @ 0x14089F06C
 * Callers:
 *     PiDqQueryAppendActionEntry @ 0x1406A08C8 (PiDqQueryAppendActionEntry.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     RtlNumberGenericTableElementsAvl @ 0x1402FEBE0 (RtlNumberGenericTableElementsAvl.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1406A8D10 (PiDmGetObjectManagerForObjectType.c)
 */

__int64 __fastcall PiDmGetObjectCount(int a1)
{
  struct _ERESOURCE *ObjectManagerForObjectType; // rax
  struct _KTHREAD *CurrentThread; // rcx
  struct _ERESOURCE *v3; // rdi
  ULONG v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  ObjectManagerForObjectType = (struct _ERESOURCE *)PiDmGetObjectManagerForObjectType(a1);
  CurrentThread = KeGetCurrentThread();
  v3 = ObjectManagerForObjectType;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(ObjectManagerForObjectType, 1u);
  v4 = RtlNumberGenericTableElementsAvl((PRTL_AVL_TABLE)&v3[1]);
  ExReleaseResourceLite(v3);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v6, v7);
  return v4;
}
