/*
 * XREFs of ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180025C78
 * Callers:
 *     ?HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM_KEY@@P6AKPEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@PEAX@Z5@Z @ 0x18000E398 (-HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM.c)
 *     ?HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180023D00 (-HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180024330 (-HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180025C78 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x1800272F8 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x18003CF64 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180063624 (-RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z @ 0x180079F98 (-HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z.c)
 *     ?HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z @ 0x18007FD78 (-HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z.c)
 *     ?HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x18007FFAC (-HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_S.c)
 * Callees:
 *     CemRcTableGetFirst @ 0x180025464 (CemRcTableGetFirst.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180025C78 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     CemRcTableGetNext @ 0x180027194 (CemRcTableGetNext.c)
 *     CemRcObjectDereference @ 0x180027240 (CemRcObjectDereference.c)
 */

struct _HAM_RC_TREE_NODE *__fastcall HamRcNodeGetFirst(struct _HAM_RC_TREE_NODE *a1, int a2)
{
  char *v2; // rcx
  struct _HAM_RC_TREE_NODE *v4; // rdi
  struct _HAM_RC_TREE_NODE *First; // rbx
  unsigned int v7; // esi

  v2 = (char *)a1 + 40;
  if ( a2 == 1 )
    return (struct _HAM_RC_TREE_NODE *)CemRcTableGetFirst((__int64)v2);
  First = (struct _HAM_RC_TREE_NODE *)CemRcTableGetFirst((__int64)v2);
  if ( !First )
    return 0LL;
  v7 = a2 - 1;
  while ( 1 )
  {
    v4 = HamRcNodeGetFirst(First, v7);
    if ( v4 )
      break;
    First = (struct _HAM_RC_TREE_NODE *)CemRcTableGetNext(First);
    if ( !First )
      return 0LL;
  }
  CemRcObjectDereference(First);
  return v4;
}
