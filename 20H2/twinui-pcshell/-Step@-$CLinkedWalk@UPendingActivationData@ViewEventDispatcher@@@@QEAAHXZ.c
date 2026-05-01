/*
 * XREFs of ?Step@?$CLinkedWalk@UPendingActivationData@ViewEventDispatcher@@@@QEAAHXZ @ 0x1802A6258
 * Callers:
 *     ??1ViewEventDispatcher@@EEAA@XZ @ 0x1802A030C (--1ViewEventDispatcher@@EEAA@XZ.c)
 *     ?_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x1802AB450 (-_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU-$CLinkedNode@UPendingActivationData@.c)
 *     ?_FlushRemovedPendingActivations@ViewEventDispatcher@@AEAAXXZ @ 0x1802AB5B4 (-_FlushRemovedPendingActivations@ViewEventDispatcher@@AEAAXXZ.c)
 *     ?_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x1802ACA0C (-_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU-$CLinkedNode@UPendingA.c)
 *     ?_RemovePendingActivationsForAppId@ViewEventDispatcher@@AEAAXAEBVString@Internal@Windows@@@Z @ 0x1802ACEF8 (-_RemovePendingActivationsForAppId@ViewEventDispatcher@@AEAAXAEBVString@Internal@Windows@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLinkedWalk<ViewEventDispatcher::PendingActivationData>::Step(__int64 ***a1)
{
  __int64 **v1; // rdx
  __int64 *v2; // rdx

  v1 = a1[1];
  if ( v1 )
  {
    v2 = *v1;
LABEL_5:
    a1[1] = (__int64 **)v2;
    return v2 != 0LL;
  }
  v2 = 0LL;
  if ( *a1 )
  {
    v2 = **a1;
    goto LABEL_5;
  }
  return v2 != 0LL;
}
