/*
 * XREFs of PiDmGetObjectCount @ 0x140948F60
 * Callers:
 *     PiDqQueryAppendActionEntry @ 0x140777CF0 (PiDqQueryAppendActionEntry.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     RtlNumberGenericTableElementsAvl @ 0x1402D8A70 (RtlNumberGenericTableElementsAvl.c)
 *     PiDmGetObjectManagerForObjectType @ 0x14077B33C (PiDmGetObjectManagerForObjectType.c)
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
  KeLeaveCriticalRegion();
  return v4;
}
