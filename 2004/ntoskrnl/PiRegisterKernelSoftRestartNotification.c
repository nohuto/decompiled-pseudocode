/*
 * XREFs of PiRegisterKernelSoftRestartNotification @ 0x1408AFCD4
 * Callers:
 *     IoRegisterPlugPlayNotification @ 0x1406C5580 (IoRegisterPlugPlayNotification.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PnpDeferNotification @ 0x1406C5954 (PnpDeferNotification.c)
 *     PnpInitializeNotifyEntry @ 0x1406C5A54 (PnpInitializeNotifyEntry.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiRegisterKernelSoftRestartNotification(__int64 a1, unsigned __int64 a2, __int64 a3, _QWORD *a4)
{
  int v8; // edi
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rax

  if ( PnpKsrEnabled )
  {
    if ( PnpKsrPrepared )
    {
      return (unsigned int)-1073741058;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x58uLL, 0x61706E50u);
      v10 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x58uLL);
        v8 = PnpInitializeNotifyEntry((__int64)v10, 4, a2, a3, a1, (__int64)&PnpKsrNotifyLock);
        if ( v8 < 0 || (v8 = PnpDeferNotification((__int64)v10), v8 < 0) )
        {
          ExFreePoolWithTag(v10, 0x61706E50u);
        }
        else
        {
          ExAcquireFastMutex(&PnpKsrNotifyLock);
          v11 = (_QWORD *)qword_140C42F68;
          if ( *(PVOID **)qword_140C42F68 != &PnpKsrNotifyList )
            __fastfail(3u);
          *v10 = &PnpKsrNotifyList;
          v10[1] = v11;
          *v11 = v10;
          qword_140C42F68 = (__int64)v10;
          KeReleaseGuardedMutex(&PnpKsrNotifyLock);
          *a4 = v10;
        }
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v8;
}
