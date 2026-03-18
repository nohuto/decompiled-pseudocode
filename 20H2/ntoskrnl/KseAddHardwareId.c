/*
 * XREFs of KseAddHardwareId @ 0x1407587DC
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1407333F0 (PiProcessNewDeviceNode.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KsepPoolFreePaged @ 0x140371034 (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x14037105C (KsepPoolAllocatePaged.c)
 *     KsepLogError @ 0x140371884 (KsepLogError.c)
 *     KsepDebugPrint @ 0x140525408 (KsepDebugPrint.c)
 *     KsepStringDuplicate @ 0x1407543C0 (KsepStringDuplicate.c)
 *     KsepStringFree @ 0x14075494C (KsepStringFree.c)
 *     KsepCacheLookup @ 0x1407588F0 (KsepCacheLookup.c)
 *     KsepCacheInsert @ 0x14077C968 (KsepCacheInsert.c)
 */

__int64 __fastcall KseAddHardwareId(WCHAR *SourceString)
{
  volatile signed __int64 *v1; // rsi
  struct _KTHREAD *CurrentThread; // rax
  void *v4; // rdi
  PVOID Paged; // rax
  int v6; // ebx
  char v7; // bp
  __int64 v9; // rax
  _OWORD v10[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]

  v1 = (volatile signed __int64 *)qword_140C504B0;
  memset(v10, 0, sizeof(v10));
  v11 = 0LL;
  v12 = 0LL;
  if ( dword_140C50464 != 2 )
  {
    v9 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v9 + 1] = -1073741823;
    KsepHistoryErrors[2 * v9] = 656075;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: Cannot add hardware id until the kshim engine is initialized\n");
    KsepLogError(0, "KSE: Cannot add hardware id until the kshim engine is initialized\n");
    return 0LL;
  }
  if ( !SourceString )
    return 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)((char *)&v11 + 8), SourceString);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v1, 0LL);
  v4 = (void *)KsepCacheLookup(v1, v10);
  if ( v4 )
  {
LABEL_7:
    v6 = 0;
    goto LABEL_8;
  }
  Paged = KsepPoolAllocatePaged(0x38uLL);
  v4 = Paged;
  if ( Paged && (int)KsepStringDuplicate((__int64)Paged + 40, SourceString) >= 0 )
  {
    KsepCacheInsert(v1, v4);
    goto LABEL_7;
  }
  v6 = -1073741801;
LABEL_8:
  v7 = _InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
    ExfTryToWakePushLock(v1);
  KeAbPostRelease((ULONG_PTR)v1);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v6 < 0 )
  {
    if ( v4 )
    {
      KsepStringFree((__int64)v4 + 40);
      KsepPoolFreePaged(v4);
    }
  }
  return (unsigned int)v6;
}
