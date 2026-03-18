/*
 * XREFs of ?Synchronize@CSynchronizationManager@DirectComposition@@SAJPEAVCBatch@2@@Z @ 0x1C009B800
 * Callers:
 *     NtDCompositionSynchronize @ 0x1C009B730 (NtDCompositionSynchronize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSynchronizationManager::Synchronize(struct DirectComposition::CBatch *a1)
{
  struct _ERESOURCE *v1; // rbx
  bool v3; // zf
  unsigned __int64 v4; // rax
  struct _RTL_GENERIC_TABLE *v5; // rcx
  unsigned int v6; // ebx
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = DirectComposition::CSynchronizationManager::s_pSyncTableLock;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v1, 1u);
  if ( *((_QWORD *)a1 + 5) )
  {
    v6 = -1073741790;
  }
  else
  {
    v3 = DirectComposition::CSynchronizationManager::s_syncIdCounter == -1LL;
    v4 = ++DirectComposition::CSynchronizationManager::s_syncIdCounter;
    if ( v3 )
    {
      v4 = 1LL;
      DirectComposition::CSynchronizationManager::s_syncIdCounter = 1LL;
    }
    v5 = DirectComposition::CSynchronizationManager::s_pSyncTable;
    *((_QWORD *)a1 + 5) = v4;
    Buffer[0] = v4;
    Buffer[1] = a1;
    v6 = RtlInsertElementGenericTable(v5, Buffer, 0x10u, 0LL) == 0LL ? 0xC0000017 : 0;
  }
  ExReleaseResourceLite(DirectComposition::CSynchronizationManager::s_pSyncTableLock);
  KeLeaveCriticalRegion();
  return v6;
}
