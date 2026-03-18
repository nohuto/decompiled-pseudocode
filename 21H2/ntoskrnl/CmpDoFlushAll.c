/*
 * XREFs of CmpDoFlushAll @ 0x14022EA80
 * Callers:
 *     NtFlushKey @ 0x1406A5C00 (NtFlushKey.c)
 *     CmReconcileAndValidateAllHives @ 0x1409190E8 (CmReconcileAndValidateAllHives.c)
 *     CmpForceFlushWorker @ 0x14091D700 (CmpForceFlushWorker.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     CmpFlushHive @ 0x1406885A4 (CmpFlushHive.c)
 *     CmpDereferenceHive @ 0x1406A5F0C (CmpDereferenceHive.c)
 *     CmpGetLastHive @ 0x1406A5F34 (CmpGetLastHive.c)
 *     CmpGetNextHive @ 0x14071BA34 (CmpGetNextHive.c)
 */

void CmpDoFlushAll()
{
  __int64 LastHive; // rdi
  void *i; // rcx
  struct _EX_RUNDOWN_REF *NextHive; // rax
  ULONG_PTR v3; // rbx

  if ( !BYTE1(NlsMbOemCodePageTag) )
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
        if ( ExAcquireRundownProtection(NextHive + 205) )
        {
          if ( (*(_DWORD *)(v3 + 160) & 2) == 0 )
            CmpFlushHive(v3);
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v3 + 1640));
        }
        if ( v3 == LastHive )
          break;
      }
      CmpDereferenceHive(v3);
      CmpDereferenceHive(LastHive);
    }
  }
}
