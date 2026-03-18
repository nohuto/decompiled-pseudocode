/*
 * XREFs of KseAddHardwareId @ 0x1407EC8C4
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14076E9B8 (PiProcessNewDeviceNode.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KsepPoolFreePaged @ 0x1402D8494 (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x1402D84BC (KsepPoolAllocatePaged.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KsepLogError @ 0x140368C88 (KsepLogError.c)
 *     KsepDebugPrint @ 0x14057D738 (KsepDebugPrint.c)
 *     KsepStringDuplicate @ 0x14075C924 (KsepStringDuplicate.c)
 *     KsepStringFree @ 0x14075CDC4 (KsepStringFree.c)
 *     KsepCacheLookup @ 0x1407EC9DC (KsepCacheLookup.c)
 *     KsepCacheInsert @ 0x1407ECAC8 (KsepCacheInsert.c)
 */

__int64 __fastcall KseAddHardwareId(WCHAR *SourceString)
{
  volatile signed __int64 *v1; // rbp
  struct _KTHREAD *CurrentThread; // rax
  void *v4; // rsi
  int v5; // edi
  PVOID Paged; // rax
  __int64 v8; // rax
  _OWORD v9[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF
  int v11; // [rsp+50h] [rbp-18h]

  v1 = (volatile signed __int64 *)qword_140C54F40;
  v11 = 0;
  memset(v9, 0, sizeof(v9));
  v10 = 0LL;
  if ( dword_140C54EF4 != 2 )
  {
    v8 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v8 + 1] = -1073741823;
    KsepHistoryErrors[2 * v8] = 656075;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: Cannot add hardware id until the kshim engine is initialized\n");
    KsepLogError(0LL, (__int64)"KSE: Cannot add hardware id until the kshim engine is initialized\n");
    return 0LL;
  }
  if ( !SourceString )
    return 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)((char *)&v10 + 8), SourceString);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v1, 0LL);
  v4 = (void *)KsepCacheLookup(v1, v9);
  if ( !v4 )
  {
    Paged = KsepPoolAllocatePaged(0x38uLL);
    v4 = Paged;
    if ( !Paged || (int)KsepStringDuplicate((__int64)Paged + 40, SourceString) < 0 )
    {
      v5 = -1073741801;
      goto LABEL_5;
    }
    KsepCacheInsert(v1, v4);
  }
  v5 = 0;
LABEL_5:
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  KeAbPostRelease((ULONG_PTR)v1);
  KeLeaveCriticalRegion();
  if ( v5 < 0 )
  {
    if ( v4 )
    {
      KsepStringFree((__int64)v4 + 40);
      KsepPoolFreePaged(v4);
    }
  }
  return (unsigned int)v5;
}
