/*
 * XREFs of PiRegisterKernelSoftRestartNotification @ 0x1408648F8
 * Callers:
 *     IoRegisterPlugPlayNotification @ 0x140768390 (IoRegisterPlugPlayNotification.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     PnpDeferNotification @ 0x140768798 (PnpDeferNotification.c)
 *     PnpInitializeNotifyEntry @ 0x140768894 (PnpInitializeNotifyEntry.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiRegisterKernelSoftRestartNotification(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v8; // ebx
  __int64 Pool2; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rax

  if ( PnpKsrEnabled )
  {
    if ( PnpKsrPrepared )
    {
      return (unsigned int)-1073741058;
    }
    else
    {
      Pool2 = ExAllocatePool2(256LL, 88LL, 1634758224LL);
      v11 = (_QWORD *)Pool2;
      if ( Pool2 )
      {
        v8 = PnpInitializeNotifyEntry(Pool2, 4, a2, a3, a1, (__int64)&PnpKsrNotifyLock);
        if ( v8 < 0 || (v8 = PnpDeferNotification((__int64)v11), v8 < 0) )
        {
          ExFreePoolWithTag(v11, 0x61706E50u);
        }
        else
        {
          ExAcquireFastMutex(&PnpKsrNotifyLock);
          v12 = (_QWORD *)qword_140C445C8;
          if ( *(PVOID **)qword_140C445C8 != &PnpKsrNotifyList )
            __fastfail(3u);
          *v11 = &PnpKsrNotifyList;
          v11[1] = v12;
          *v12 = v11;
          qword_140C445C8 = (__int64)v11;
          KeReleaseGuardedMutex(&PnpKsrNotifyLock);
          *a4 = v11;
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
