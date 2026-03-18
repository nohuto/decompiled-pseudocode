/*
 * XREFs of PiPnpRtlCacheObjectBaseKey @ 0x14077B908
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140779F10 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x14077AA70 (PiPnpRtlObjectActionCallback.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     PiPnpRtlObjectEventCreate @ 0x14077A750 (PiPnpRtlObjectEventCreate.c)
 *     PiPnpRtlGetCurrentOperation @ 0x14077BA10 (PiPnpRtlGetCurrentOperation.c)
 *     _PnpOpenObjectRegKey @ 0x14077C924 (_PnpOpenObjectRegKey.c)
 */

__int64 __fastcall PiPnpRtlCacheObjectBaseKey(int a1, __int64 a2, signed int a3, _QWORD *a4)
{
  int CurrentOperation; // ebx
  struct _KTHREAD *CurrentThread; // rax
  char *v11; // rdi
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  char *v13; // [rsp+48h] [rbp-20h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  if ( a3 >= 7 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    CurrentOperation = PiPnpRtlGetCurrentOperation(&v12);
    if ( CurrentOperation >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
      CurrentOperation = PiPnpRtlObjectEventCreate(a2, a3, v12, &v13);
      if ( CurrentOperation >= 0 && v13 )
      {
        v11 = v13 + 16;
        if ( *((_QWORD *)v13 + 2)
          || (CurrentOperation = PnpOpenObjectRegKey(a1, a2, a3, 0x2000000, 0, (__int64)v11), CurrentOperation >= 0) )
        {
          *a4 = *(_QWORD *)v11;
        }
        else
        {
          *(_QWORD *)v11 = 0LL;
        }
      }
      ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
      KeLeaveCriticalRegion();
    }
  }
  return (unsigned int)CurrentOperation;
}
