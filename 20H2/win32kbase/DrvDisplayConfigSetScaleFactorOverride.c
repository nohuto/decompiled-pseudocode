/*
 * XREFs of DrvDisplayConfigSetScaleFactorOverride @ 0x1C01485B0
 * Callers:
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C01480D0 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087050 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     UserNotifyUniversalScaleFactorChanged @ 0x1C013BE64 (UserNotifyUniversalScaleFactorChanged.c)
 */

__int64 __fastcall DrvDisplayConfigSetScaleFactorOverride(_DWORD *a1, _DWORD *a2)
{
  __int64 v4; // rdi
  __int64 v5; // r8
  struct PDEV *i; // rbx
  _DWORD *v7; // rcx
  int v8; // eax
  char *v9; // r9
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  _DWORD *v16; // rcx
  __int64 v17; // rcx

  LODWORD(v4) = -1073741811;
  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
  for ( i = gppdevList; i; i = *(struct PDEV **)i )
  {
    if ( (*((_DWORD *)i + 10) & 0x401) == 1 )
    {
      v7 = (_DWORD *)*((_QWORD *)i + 322);
      if ( ((unsigned __int64)(v7 + 1) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
      {
        v8 = v7[40];
        if ( (v8 & 0x800000) != 0 )
        {
          v9 = (char *)i + 2456;
          if ( a2 )
          {
            if ( *a2 )
            {
              v10 = ((__int64 (__fastcall *)(_DWORD *, _QWORD, _QWORD, char *))qword_1C024AA88)(
                      v7 + 62,
                      (unsigned int)v7[64],
                      (unsigned int)a1[5],
                      v9);
              v4 = v10;
              if ( v10 < 0 )
              {
                v13 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11, v5);
                v13[3] = v4;
                v13[4] = (int)a1[5];
                v13[5] = *(int *)(*((_QWORD *)i + 322) + 252LL);
                v13[6] = *(unsigned int *)(*((_QWORD *)i + 322) + 248LL);
                v14 = *(unsigned int *)(*((_QWORD *)i + 322) + 256LL);
                v13[7] = v14;
                WdLogEvent5_WdError(v13, v14);
              }
            }
            else if ( (v8 & 4) != 0 )
            {
              v15 = (unsigned int)v7[64];
              v16 = v7 + 62;
LABEL_18:
              LODWORD(v4) = ((__int64 (__fastcall *)(_DWORD *, __int64, _QWORD, char *))qword_1C024AA88)(
                              v16,
                              v15,
                              (unsigned int)a1[5],
                              v9);
              break;
            }
          }
          else if ( a1[2] == v7[62] && a1[3] == v7[63] )
          {
            v15 = (unsigned int)v7[64];
            if ( a1[4] == (_DWORD)v15 )
            {
              v16 = v7 + 62;
              goto LABEL_18;
            }
          }
        }
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v5);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
    PsLeavePriorityRegion(v17);
  }
  if ( (int)v4 >= 0 )
    UserNotifyUniversalScaleFactorChanged();
  return (unsigned int)v4;
}
