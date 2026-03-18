/*
 * XREFs of ?vSynchronizeDriver@@YGXK@Z @ 0x934CE
 * Callers:
 *     _GreFlush@0 @ 0x934C6 (_GreFlush@0.c)
 *     ?GreSynchronizeTimer@@YGXPAXIIJ@Z @ 0x1FD05C (-GreSynchronizeTimer@@YGXPAXIIJ@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vSynchronizeDriver(int a1)
{
  _DWORD *i; // eax
  _DWORD *v3; // edi
  unsigned int v4; // edx
  _DWORD *v5; // [esp+4h] [ebp-4h] BYREF

  if ( gcSynchronizeFlush != -1 && a1 == 64 || a1 == 128 && gcSynchronizeTimer != -1 )
  {
    GreAcquireSemaphoreSharedInternal(_ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
    for ( i = (_DWORD *)hdevEnumerate(0); ; i = (_DWORD *)hdevEnumerate(v3) )
    {
      v3 = i;
      if ( !i )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
        GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
        return;
      }
      v5 = i;
      if ( (a1 & i[354]) != 0 )
        break;
LABEL_17:
      ;
    }
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v5) )
    {
      GreAcquireSemaphore(_ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", _ghsemGreLock, 2);
      GreAcquireSemaphore(v5[8]);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"pdo.hsemDevLock()", v5[8], 11);
    }
    if ( (a1 & v5[354]) == 0 || (v5[6] & 0x400) != 0 )
    {
LABEL_15:
      if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v5) )
      {
        EtwTraceGreLockReleaseSemaphore(L"pdo.hsemDevLock()", v5[8]);
        GreReleaseSemaphoreInternal(v5[8]);
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", _ghsemGreLock);
        GreReleaseSemaphoreInternal(_ghsemGreLock);
      }
      goto LABEL_17;
    }
    v4 = 0;
    if ( a1 == 64 )
    {
      if ( gcSynchronizeFlush == -1 )
      {
LABEL_14:
        PDEVOBJ::vSync((PDEVOBJ *)&v5, v5[455] != 0 ? (struct _SURFOBJ *)(v5[455] + 16) : 0, 0, v4);
        goto LABEL_15;
      }
      v4 = 2;
    }
    if ( a1 == 128 && gcSynchronizeTimer != -1 )
      v4 |= 1u;
    goto LABEL_14;
  }
}
