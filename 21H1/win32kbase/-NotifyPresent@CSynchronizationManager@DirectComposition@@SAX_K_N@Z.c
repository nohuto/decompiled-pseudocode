/*
 * XREFs of ?NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z @ 0x1C001BB5C
 * Callers:
 *     DCompositionNotifyCompositionTokenPresent @ 0x1C001BB40 (DCompositionNotifyCompositionTokenPresent.c)
 *     DCompositionNotifyPresent @ 0x1C0030F80 (DCompositionNotifyPresent.c)
 * Callees:
 *     ?FindObject@?$CGenericTable@_KVCBatch@DirectComposition@@$0GFHDEDEE@$0A@@DirectComposition@@QEAAPEAVCBatch@2@_K@Z @ 0x1C001BBFC (-FindObject@-$CGenericTable@_KVCBatch@DirectComposition@@$0GFHDEDEE@$0A@@DirectComposition@@QEAA.c)
 */

void __fastcall DirectComposition::CSynchronizationManager::NotifyPresent(__int64 a1, char a2)
{
  struct _ERESOURCE *v2; // rbx
  __int64 v5; // rcx
  __int64 Object; // rax
  __int64 v7; // r8
  int v8; // eax

  if ( a1 )
  {
    v2 = DirectComposition::CSynchronizationManager::s_pSyncTableLock;
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v2, 1u);
    Object = DirectComposition::CGenericTable<unsigned __int64,DirectComposition::CBatch,1702052676,0>::FindObject(
               v5,
               a1);
    v7 = Object;
    if ( Object )
    {
      v8 = *(_DWORD *)(Object + 48);
      if ( a2 )
        *(_DWORD *)(v7 + 48) = v8 - 1;
      else
        *(_DWORD *)(v7 + 48) = v8 + 1;
    }
    ExReleaseResourceLite(DirectComposition::CSynchronizationManager::s_pSyncTableLock);
    KeLeaveCriticalRegion();
  }
}
