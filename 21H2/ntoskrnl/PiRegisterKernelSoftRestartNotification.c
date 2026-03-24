/*
 * XREFs of PiRegisterKernelSoftRestartNotification @ 0x1408B2DD4
 * Callers:
 *     IoRegisterPlugPlayNotification @ 0x1406C4890 (IoRegisterPlugPlayNotification.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140265CD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14034A080 (ExAcquireFastMutex.c)
 *     memset @ 0x140414200 (memset.c)
 *     PnpDeferNotification @ 0x1406C4C64 (PnpDeferNotification.c)
 *     PnpInitializeNotifyEntry @ 0x1406C4D64 (PnpInitializeNotifyEntry.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
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
          v11 = (_QWORD *)qword_140C43178;
          if ( *(PVOID **)qword_140C43178 != &PnpKsrNotifyList )
            __fastfail(3u);
          *v10 = &PnpKsrNotifyList;
          v10[1] = v11;
          *v11 = v10;
          qword_140C43178 = (__int64)v10;
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
