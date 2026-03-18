/*
 * XREFs of GreEnableEUDC @ 0x1C00220CC
 * Callers:
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C0022500 (-CleanUpEUDC@@YAXXZ.c)
 *     NtGdiEnableEudc @ 0x1C0022DB0 (NtGdiEnableEudc.c)
 * Callees:
 *     bDeleteAllFlEntry @ 0x1C001F57C (bDeleteAllFlEntry.c)
 *     bAddAllFlEntry @ 0x1C0021078 (bAddAllFlEntry.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C008CBC4 (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?bSetupDefaultFlEntry@@YAHXZ @ 0x1C0296D5C (-bSetupDefaultFlEntry@@YAHXZ.c)
 */

__int64 __fastcall GreEnableEUDC(int a1)
{
  int v2; // ebx
  unsigned int v3; // edx
  unsigned int v4; // eax
  unsigned int v5; // edi
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  v2 = 0;
  if ( !ghsemEUDC1 || !ghsemEnableEUDC )
  {
    if ( !gbAttemptedEnableEUDC )
      gbAttemptedEnableEUDC = 1;
    v2 = 1;
    goto LABEL_11;
  }
  if ( (unsigned int)UmfdHostLifeTimeManager::GetSessionTextStackStatus() )
  {
LABEL_11:
    v5 = v2;
    goto LABEL_9;
  }
  GreAcquireSemaphore(ghsemEnableEUDC);
  if ( a1 )
  {
    GreAcquireSemaphore(ghsemEUDC1);
    if ( bReadyToInitializeFontAssocDefault == 1 && !bFinallyInitializeFontAssocDefault )
      bFinallyInitializeFontAssocDefault = bSetupDefaultFlEntry() != 0;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    v4 = bAddAllFlEntry(1, v3);
  }
  else
  {
    v4 = bDeleteAllFlEntry();
  }
  v5 = v4;
  EtwTraceGreLockReleaseSemaphore(L"ghsemEnableEUDC", ghsemEnableEUDC);
  GreReleaseSemaphoreInternal(ghsemEnableEUDC);
  if ( !gbAttemptedEnableEUDC )
    gbAttemptedEnableEUDC = 1;
LABEL_9:
  SEMOBJ::vUnlock((SEMOBJ *)&v7);
  return v5;
}
