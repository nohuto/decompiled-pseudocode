/*
 * XREFs of PiDmGetObjectCount @ 0x1408A038C
 * Callers:
 *     PiDqQueryAppendActionEntry @ 0x1405D1FE8 (PiDqQueryAppendActionEntry.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     RtlNumberGenericTableElementsAvl @ 0x14033B4E0 (RtlNumberGenericTableElementsAvl.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1405DA6E0 (PiDmGetObjectManagerForObjectType.c)
 */

__int64 __fastcall PiDmGetObjectCount(int a1)
{
  struct _ERESOURCE *ObjectManagerForObjectType; // rax
  struct _KTHREAD *CurrentThread; // rcx
  struct _ERESOURCE *v3; // rdi
  ULONG v4; // ebx

  ObjectManagerForObjectType = (struct _ERESOURCE *)PiDmGetObjectManagerForObjectType(a1);
  CurrentThread = KeGetCurrentThread();
  v3 = ObjectManagerForObjectType;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(ObjectManagerForObjectType, 1u);
  v4 = RtlNumberGenericTableElementsAvl((PRTL_AVL_TABLE)&v3[1]);
  ExReleaseResourceLite(v3);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v4;
}
