/*
 * XREFs of PiDmObjectGetCachedObjectReference @ 0x1406B2EC0
 * Callers:
 *     PiDmObjectGetCachedObjectProperty @ 0x1406368E0 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x14074AA30 (PiDmGetReferencedObjectFromProperty.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     PiDmGetObject @ 0x140636A6C (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x140636DF0 (PiDmObjectRelease.c)
 *     PiDmGetCacheKeys @ 0x140636F9C (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x140636FEC (PiDmGetCachedKeyIndex.c)
 */

__int64 __fastcall PiDmObjectGetCachedObjectReference(
        unsigned int a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        _QWORD *a5)
{
  int Object; // ebx
  char v9; // si
  __int64 v10; // r9
  unsigned int CachedKeyIndex; // eax
  __int64 v12; // rbp
  unsigned int v13; // edx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v15; // rdi
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v19; // [rsp+20h] [rbp-28h] BYREF
  DEVPROPKEY **v20; // [rsp+28h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp+18h] BYREF

  BugCheckParameter2 = a3;
  v20 = 0LL;
  v19 = 0;
  Object = -1073741802;
  v9 = 0;
  PiDmGetCacheKeys(a1, &v20, &v19);
  if ( v19 )
  {
    CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v20, v19, v10);
    v12 = CachedKeyIndex;
    if ( CachedKeyIndex < v13 )
    {
      if ( !a3 )
      {
        Object = PiDmGetObject(a1, a2, (__int64 *)&BugCheckParameter2);
        if ( Object < 0 )
          return (unsigned int)Object;
        v9 = 1;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v15 = BugCheckParameter2;
      ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
      v16 = *(_DWORD *)(v15 + 24 * v12 + 112);
      if ( v16 == 6 )
      {
        v17 = *(_QWORD *)(v15 + 24 * v12 + 128);
        *a5 = v17;
        _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
        v15 = BugCheckParameter2;
        Object = 0;
      }
      else if ( v16 == 2 )
      {
        Object = -1073741275;
      }
      else
      {
        Object = -1073741802;
      }
      ExReleasePushLockEx(v15, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( v9 )
        PiDmObjectRelease((unsigned int *)BugCheckParameter2);
    }
  }
  return (unsigned int)Object;
}
