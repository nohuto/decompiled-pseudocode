/*
 * XREFs of ?RmpActivityHostCleanupModule@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18006AC18
 * Callers:
 *     ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180063624 (-RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?RmpObjectTableCleanup@@YAXPEAU_RM_OBJECT_TABLE@@@Z @ 0x180070460 (-RmpObjectTableCleanup@@YAXPEAU_RM_OBJECT_TABLE@@@Z.c)
 */

void __fastcall RmpActivityHostCleanupModule(struct _RM_SERVICE_GLOBALS *a1)
{
  void *v2; // r8
  void *v3; // r8

  RmpObjectTableCleanup((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 16));
  if ( *((_QWORD *)a1 + 320) )
    TpReleasePool();
  v2 = (void *)*((_QWORD *)a1 + 317);
  if ( v2 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
  v3 = (void *)*((_QWORD *)a1 + 319);
  if ( v3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
}
