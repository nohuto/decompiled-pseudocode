/*
 * XREFs of ?vSynchronizeDriver@@YAXK@Z @ 0x1C0076004
 * Callers:
 *     GreFlush @ 0x1C0075B00 (GreFlush.c)
 *     ?GreSynchronizeTimer@@YAXPEAXI_K_J@Z @ 0x1C029F400 (-GreSynchronizeTimer@@YAXPEAXI_K_J@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vSynchronizeDriver(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rcx
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned int v8; // r9d
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  if ( gcSynchronizeFlush != -1 && a1 == 64 || a1 == 128 && gcSynchronizeTimer != -1 )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange, a2, a3, a4);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    for ( i = 0LL; ; i = v7 )
    {
      v6 = hdevEnumerate(i);
      v7 = v6;
      if ( !v6 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
        GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
        return;
      }
      v9 = v6;
      if ( (a1 & *(_DWORD *)(v6 + 2128)) != 0 )
        break;
LABEL_17:
      ;
    }
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v9) )
    {
      GreAcquireSemaphore(ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
      GreAcquireSemaphore(*(_QWORD *)(v9 + 48));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"pdo.hsemDevLock()", *(_QWORD *)(v9 + 48), 11LL);
    }
    if ( (a1 & *(_DWORD *)(v9 + 2128)) == 0 || (*(_DWORD *)(v9 + 40) & 0x400) != 0 )
    {
LABEL_15:
      if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v9) )
      {
        EtwTraceGreLockReleaseSemaphore(L"pdo.hsemDevLock()", *(_QWORD *)(v9 + 48));
        GreReleaseSemaphoreInternal(*(_QWORD *)(v9 + 48));
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
      goto LABEL_17;
    }
    v8 = 0;
    if ( a1 == 64 )
    {
      if ( gcSynchronizeFlush == -1 )
      {
LABEL_14:
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v9,
          (struct _SURFOBJ *)((*(_QWORD *)(v9 + 2552) + 24LL) & -(__int64)(*(_QWORD *)(v9 + 2552) != 0LL)),
          0LL,
          v8);
        goto LABEL_15;
      }
      v8 = 2;
    }
    if ( a1 == 128 && gcSynchronizeTimer != -1 )
      v8 |= 1u;
    goto LABEL_14;
  }
}
