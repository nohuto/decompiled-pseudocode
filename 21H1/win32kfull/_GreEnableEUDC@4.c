/*
 * XREFs of _GreEnableEUDC@4 @ 0xEBCF6
 * Callers:
 *     ?CleanUpEUDC@@YGXXZ @ 0xCE864 (-CleanUpEUDC@@YGXXZ.c)
 *     _NtGdiEnableEudc@4 @ 0xEBCE4 (_NtGdiEnableEudc@4.c)
 * Callees:
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SGJXZ @ 0x49AEE (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SGJXZ.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     bDeleteAllFlEntry @ 0xCD72E (bDeleteAllFlEntry.c)
 *     bAddAllFlEntry @ 0xDBBB8 (bAddAllFlEntry.c)
 *     ?bSetupDefaultFlEntry@@YGHXZ @ 0x1F7794 (-bSetupDefaultFlEntry@@YGHXZ.c)
 */

int __thiscall GreEnableEUDC(void *this)
{
  int v2; // eax
  int v3; // esi
  int v5; // ebx
  int v6; // [esp+Ch] [ebp-4h] BYREF

  v6 = _ghsemGreLock;
  GreAcquireSemaphore(_ghsemGreLock);
  if ( !ghsemEUDC1 || !ghsemEnableEUDC )
  {
    v5 = 1;
    if ( !gbAttemptedEnableEUDC )
      gbAttemptedEnableEUDC = 1;
    goto LABEL_16;
  }
  if ( UmfdHostLifeTimeManager::GetSessionTextStackStatus() )
  {
    v5 = 0;
LABEL_16:
    v3 = v5;
    goto LABEL_9;
  }
  GreAcquireSemaphore(ghsemEnableEUDC);
  if ( this )
  {
    GreAcquireSemaphore(ghsemEUDC1);
    if ( bReadyToInitializeFontAssocDefault == 1 && !bFinallyInitializeFontAssocDefault )
      bFinallyInitializeFontAssocDefault = bSetupDefaultFlEntry() != 0;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    v2 = bAddAllFlEntry((struct _FONTHASH **)1);
  }
  else
  {
    v2 = bDeleteAllFlEntry();
  }
  v3 = v2;
  EtwTraceGreLockReleaseSemaphore(L"ghsemEnableEUDC", ghsemEnableEUDC);
  GreReleaseSemaphoreInternal(ghsemEnableEUDC);
  if ( !gbAttemptedEnableEUDC )
    gbAttemptedEnableEUDC = 1;
LABEL_9:
  SEMOBJ::vUnlock((SEMOBJ *)&v6);
  return v3;
}
