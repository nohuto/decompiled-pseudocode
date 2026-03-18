/*
 * XREFs of CmpDoFlushAll @ 0x14037B05C
 * Callers:
 *     NtFlushKey @ 0x1406DFA70 (NtFlushKey.c)
 *     CmReconcileAndValidateAllHives @ 0x14086D740 (CmReconcileAndValidateAllHives.c)
 *     CmpForceFlushWorker @ 0x1408724F0 (CmpForceFlushWorker.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     CmpDereferenceHive @ 0x14065B4D0 (CmpDereferenceHive.c)
 *     CmpFlushHive @ 0x140664FA8 (CmpFlushHive.c)
 *     CmpGetNextHive @ 0x140695840 (CmpGetNextHive.c)
 *     CmpGetLastHive @ 0x1406E268C (CmpGetLastHive.c)
 *     CmpQuitNextHive @ 0x1407593E0 (CmpQuitNextHive.c)
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
