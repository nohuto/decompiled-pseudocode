/*
 * XREFs of KseAddHardwareId @ 0x14074807C
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140729B20 (PiProcessNewDeviceNode.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KsepPoolFreePaged @ 0x14036E4B4 (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x14036E4DC (KsepPoolAllocatePaged.c)
 *     KsepLogError @ 0x14036ED04 (KsepLogError.c)
 *     KsepDebugPrint @ 0x1405213E8 (KsepDebugPrint.c)
 *     KsepStringDuplicate @ 0x140743C60 (KsepStringDuplicate.c)
 *     KsepStringFree @ 0x1407441EC (KsepStringFree.c)
 *     KsepCacheLookup @ 0x140748190 (KsepCacheLookup.c)
 *     KsepCacheInsert @ 0x14076B798 (KsepCacheInsert.c)
 */

__int64 __fastcall KseAddHardwareId(WCHAR *SourceString)
{
  volatile signed __int64 *v1; // rsi
  struct _KTHREAD *CurrentThread; // rax
  void *v4; // rdi
  PVOID Paged; // rax
  int v6; // ebx
  char v7; // bp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // rax
  _OWORD v13[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]

  v1 = (volatile signed __int64 *)qword_140C50560;
  memset(v13, 0, sizeof(v13));
  v14 = 0LL;
  v15 = 0LL;
  if ( dword_140C50514 != 2 )
  {
    v12 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v12 + 1] = -1073741823;
    KsepHistoryErrors[2 * v12] = 656075;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: Cannot add hardware id until the kshim engine is initialized\n");
    KsepLogError(0, "KSE: Cannot add hardware id until the kshim engine is initialized\n");
    return 0LL;
  }
  if ( !SourceString )
    return 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)((char *)&v14 + 8), SourceString);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v1, 0LL);
  v4 = (void *)KsepCacheLookup(v1, v13);
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
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
