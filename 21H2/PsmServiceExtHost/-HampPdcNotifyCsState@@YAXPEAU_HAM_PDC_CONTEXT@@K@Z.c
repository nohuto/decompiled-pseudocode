/*
 * XREFs of ?HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x180082E34
 * Callers:
 *     ?HampPdcEnterPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x180082D78 (-HampPdcEnterPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x180082DE0 (-HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009240 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009FB0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001CB50 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x18003CA04 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18007C7F0 (-HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 */

void __fastcall HampPdcNotifyCsState(struct _HAM_PDC_CONTEXT *a1, int a2)
{
  struct _RM_HAM_ACTIVITY_HOST *i; // rax
  struct _RM_HAM_ACTIVITY_HOST *v4; // rbx
  int v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  RtlPublishWnfStateData(*(_QWORD *)(*(_QWORD *)a1 + 728LL), 0LL, &v5, 4LL, 0LL);
  for ( i = HampHostEnumerateHostsInNode((struct _HAM_RC_TREE_NODE *)(*(_QWORD *)a1 + 128LL), 0, 0LL);
        ;
        i = HampManagerGetNextHost(v4) )
  {
    v4 = i;
    if ( !i )
      break;
    HampHostAcquireLockExclusiveEx(i, 0);
    HampHostCheckQueueStateWorker(v4, 0);
    HampHostReleaseLockExclusiveEx(v4);
  }
}
