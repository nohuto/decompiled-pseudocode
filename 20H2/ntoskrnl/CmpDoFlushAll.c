/*
 * XREFs of CmpDoFlushAll @ 0x14037DB0C
 * Callers:
 *     NtFlushKey @ 0x1406BF640 (NtFlushKey.c)
 *     CmReconcileAndValidateAllHives @ 0x140874D50 (CmReconcileAndValidateAllHives.c)
 *     CmpForceFlushWorker @ 0x140879330 (CmpForceFlushWorker.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     CmpFlushHive @ 0x1406504C8 (CmpFlushHive.c)
 *     CmpDereferenceHive @ 0x1406A32E0 (CmpDereferenceHive.c)
 *     CmpGetLastHive @ 0x1406D8514 (CmpGetLastHive.c)
 *     CmpGetNextHive @ 0x140700CD8 (CmpGetNextHive.c)
 *     CmpQuitNextHive @ 0x140769B50 (CmpQuitNextHive.c)
 */

void CmpDoFlushAll()
{
  __int64 LastHive; // rdi
  void *i; // rcx
  struct _EX_RUNDOWN_REF *NextHive; // rax
  ULONG_PTR v3; // rbx

  if ( !BYTE1(NlsMbCodePageTag) )
  {
    LastHive = CmpGetLastHive();
    if ( LastHive )
    {
      for ( i = 0LL; ; i = (void *)v3 )
      {
        NextHive = (struct _EX_RUNDOWN_REF *)CmpGetNextHive(i);
        v3 = (ULONG_PTR)NextHive;
        if ( !NextHive )
          break;
        if ( ExAcquireRundownProtection_0(NextHive + 204) )
        {
          if ( (*(_DWORD *)(v3 + 160) & 2) == 0 )
            CmpFlushHive(v3);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v3 + 1632));
        }
        if ( v3 == LastHive )
          break;
      }
      CmpQuitNextHive(v3);
      CmpDereferenceHive(LastHive);
    }
  }
}
