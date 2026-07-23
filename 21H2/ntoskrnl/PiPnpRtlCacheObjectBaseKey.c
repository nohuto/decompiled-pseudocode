/*
 * XREFs of PiPnpRtlCacheObjectBaseKey @ 0x14062C07C
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14062A730 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x14062B220 (PiPnpRtlObjectActionCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     PiPnpRtlObjectEventCreate @ 0x14062A0C4 (PiPnpRtlObjectEventCreate.c)
 *     PiPnpRtlGetCurrentOperation @ 0x14062C18C (PiPnpRtlGetCurrentOperation.c)
 *     _PnpOpenObjectRegKey @ 0x14062C674 (_PnpOpenObjectRegKey.c)
 */

__int64 __fastcall PiPnpRtlCacheObjectBaseKey(int a1, __int64 a2, signed int a3, _QWORD *a4)
{
  int CurrentOperation; // ebx
  struct _KTHREAD *CurrentThread; // rax
  char *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // [rsp+40h] [rbp-28h] BYREF
  char *v16; // [rsp+48h] [rbp-20h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  if ( a3 >= 7 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    CurrentOperation = PiPnpRtlGetCurrentOperation(&v15);
    if ( CurrentOperation >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
      CurrentOperation = PiPnpRtlObjectEventCreate(a2, a3, v15, &v16);
      if ( CurrentOperation >= 0 && v16 )
      {
        v11 = v16 + 16;
        if ( *((_QWORD *)v16 + 2)
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
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v13, v14);
    }
  }
  return (unsigned int)CurrentOperation;
}
