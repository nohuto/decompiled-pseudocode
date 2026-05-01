/*
 * XREFs of ?HampPkgNotifyDebugModeChanged@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18007FF10
 * Callers:
 *     ?HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x1800806D0 (-HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampClientPkgEnableDebugging@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x180080768 (-HampClientPkgEnableDebugging@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009D90 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001CA10 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x18003CF64 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 */

void __fastcall HampPkgNotifyDebugModeChanged(struct _HAM_PACKAGE *a1)
{
  __int64 v1; // r8
  struct _RM_HAM_ACTIVITY_HOST *v2; // rax
  struct _RM_HAM_ACTIVITY_HOST *v3; // rbx

  v1 = 0LL;
  while ( 1 )
  {
    v2 = HampHostEnumerateHostsInNode(a1, 3, v1);
    v3 = v2;
    if ( !v2 )
      break;
    RtlWakeAllConditionVariable((char *)v2 + 680);
    HampHostAcquireLockExclusiveEx(v3, 0);
    HampHostCheckQueueStateWorker(v3, 0);
    HampHostReleaseLockExclusiveEx(v3);
    v1 = (__int64)v3;
    a1 = *(struct _HAM_PACKAGE **)(*((_QWORD *)v3 + 97) + 88LL);
  }
}
