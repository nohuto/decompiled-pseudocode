/*
 * XREFs of CmpDoFlushAll @ 0x14037BDDC
 * Callers:
 *     NtFlushKey @ 0x140702800 (NtFlushKey.c)
 *     CmReconcileAndValidateAllHives @ 0x14086F200 (CmReconcileAndValidateAllHives.c)
 *     CmpForceFlushWorker @ 0x1408737E0 (CmpForceFlushWorker.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     CmpGetNextHive @ 0x1405DF1A0 (CmpGetNextHive.c)
 *     CmpFlushHive @ 0x14061F888 (CmpFlushHive.c)
 *     CmpDereferenceHive @ 0x140644B24 (CmpDereferenceHive.c)
 *     CmpGetLastHive @ 0x14070500C (CmpGetLastHive.c)
 *     CmpQuitNextHive @ 0x14075B260 (CmpQuitNextHive.c)
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
