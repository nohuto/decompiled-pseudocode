/*
 * XREFs of ?InitDomainLocks@@YAJXZ @ 0x1C0048308
 * Callers:
 *     InitCreateUserCrit @ 0x1C029B0F0 (InitCreateUserCrit.c)
 * Callees:
 *     ?LockInitialize@tagDomLock@@QEBAJXZ @ 0x1C0048500 (-LockInitialize@tagDomLock@@QEBAJXZ.c)
 */

__int64 InitDomainLocks(void)
{
  __int64 result; // rax

  gObjDummyLock = 0uLL;
  gHidCountersLock = 0LL;
  qword_1C02532D8 = 0LL;
  gpsiLock = 0uLL;
  gValidLockListEntryPushLock = 0LL;
  LODWORD(qword_1C02532F8) = 0;
  dword_1C02532E0 = 0;
  LODWORD(qword_1C02532C8) = 0;
  result = tagDomLock::LockInitialize((tagDomLock *)&gDomainProcessInfoLock);
  if ( (int)result >= 0 )
  {
    result = tagDomLock::LockInitialize((tagDomLock *)&gDomainThreadInfoLock);
    if ( (int)result >= 0 )
    {
      result = tagDomLock::LockInitialize((tagDomLock *)&gDomainPostLock);
      if ( (int)result >= 0 )
      {
        result = tagDomLock::LockInitialize((tagDomLock *)&gDomainQueueLock);
        if ( (int)result >= 0 )
        {
          result = tagDomLock::LockInitialize((tagDomLock *)&gDomainHookLock);
          if ( (int)result >= 0 )
          {
            result = tagDomLock::LockInitialize((tagDomLock *)&gDomainWinEventLock);
            if ( (int)result >= 0 )
            {
              result = tagDomLock::LockInitialize((tagDomLock *)&gDomainWindowLock);
              if ( (int)result >= 0 )
              {
                result = tagDomLock::LockInitialize((tagDomLock *)&gDomainHandleManagerLock);
                if ( (int)result >= 0 )
                {
                  result = tagDomLock::LockInitialize((tagDomLock *)&gDomainClientLibLock);
                  if ( (int)result >= 0 )
                  {
                    result = tagDomLock::LockInitialize((tagDomLock *)&gDomainPowerTransitionsStateLock);
                    if ( (int)result >= 0 )
                    {
                      result = tagDomLock::LockInitialize((tagDomLock *)&gDomainDummyLock);
                      if ( (int)result >= 0 )
                      {
                        result = tagDomLock::LockInitialize((tagDomLock *)&gDomainTlLock);
                        if ( (int)result >= 0 )
                        {
                          result = tagDomLock::LockInitialize((tagDomLock *)&gDomainRawInputLock);
                          if ( (int)result >= 0 )
                          {
                            result = tagDomLock::LockInitialize((tagDomLock *)&gDomainAsyncKeyStateLock);
                            if ( (int)result >= 0 )
                            {
                              result = tagDomLock::LockInitialize((tagDomLock *)&gDomainDesktopLock);
                              if ( (int)result >= 0 )
                              {
                                result = tagDomLock::LockInitialize((tagDomLock *)&gDomainJobLock);
                                if ( (int)result >= 0 )
                                {
                                  result = tagDomLock::LockInitialize((tagDomLock *)&gDomainForegroundLock);
                                  if ( (int)result >= 0 )
                                  {
                                    result = tagDomLock::LockInitialize((tagDomLock *)&gDomainActiveLock);
                                    if ( (int)result >= 0 )
                                    {
                                      result = tagDomLock::LockInitialize((tagDomLock *)&gDomainInputDelegationLock);
                                      if ( (int)result >= 0 )
                                      {
                                        result = tagDomLock::LockInitialize((tagDomLock *)&gDomainQueueMgmtLock);
                                        if ( (int)result >= 0 )
                                        {
                                          result = tagDomLock::LockInitialize((tagDomLock *)&gDomainThreadRundownLock);
                                          if ( (int)result >= 0 )
                                            return tagDomLock::LockInitialize((tagDomLock *)&gDomainEtwLock);
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
