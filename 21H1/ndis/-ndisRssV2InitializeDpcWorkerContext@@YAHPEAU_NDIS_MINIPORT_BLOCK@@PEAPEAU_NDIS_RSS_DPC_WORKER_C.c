/*
 * XREFs of ?ndisRssV2InitializeDpcWorkerContext@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_RSS_DPC_WORKER_CONTEXT@@@Z @ 0x1C00395E0
 * Callers:
 *     ?ndisRssV2Initialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0039590 (-ndisRssV2Initialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisRssV2InitializeDpcWorkerContext(PVOID DeferredContext, struct _KDPC **a2)
{
  unsigned int v4; // ebx
  struct _KDPC *PoolWithTag; // rax
  struct _KDPC *v6; // rdi

  v4 = 0;
  *a2 = 0LL;
  PoolWithTag = (struct _KDPC *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0xC88uLL, 0x7372444Eu);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    KeInitializeDpc(PoolWithTag, ndisEmulateRSSv1Dpc, DeferredContext);
    KeSetImportanceDpc(v6, MediumHighImportance);
    *a2 = v6;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
