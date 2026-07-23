/*
 * XREFs of CmpDoFlushAll @ 0x14037D9EC
 * Callers:
 *     NtFlushKey @ 0x140612E10 (NtFlushKey.c)
 *     CmReconcileAndValidateAllHives @ 0x140872700 (CmReconcileAndValidateAllHives.c)
 *     CmpForceFlushWorker @ 0x140876E10 (CmpForceFlushWorker.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     CmpDereferenceHive @ 0x1405E006C (CmpDereferenceHive.c)
 *     CmpGetLastHive @ 0x140664774 (CmpGetLastHive.c)
 *     CmpGetNextHive @ 0x1406672E4 (CmpGetNextHive.c)
 *     CmpFlushHive @ 0x1406A48D8 (CmpFlushHive.c)
 *     CmpQuitNextHive @ 0x14076DD54 (CmpQuitNextHive.c)
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
        if ( ExAcquireRundownProtection(NextHive + 204) )
        {
          if ( (*(_DWORD *)(v3 + 160) & 2) == 0 )
            CmpFlushHive(v3);
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v3 + 1632));
        }
        if ( v3 == LastHive )
          break;
      }
      CmpQuitNextHive(v3);
      CmpDereferenceHive(LastHive);
    }
  }
}
