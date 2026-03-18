/*
 * XREFs of KsepShimDbChanged @ 0x140368A88
 * Callers:
 *     KseQueryDeviceData @ 0x1407EC640 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140963440 (KseQueryDeviceDataList.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KsepShimDatabaseTime @ 0x1407ECB78 (KsepShimDatabaseTime.c)
 */

__int64 KsepShimDbChanged()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v1; // esi
  struct _KTHREAD *v2; // rdi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v5; // edx
  int v6; // r9d

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&KsepShimDbLock, 0LL);
  v1 = 0;
  if ( (int)KsepShimDatabaseTime(L"\\SystemRoot\\AppPatch\\drvmain.sdb") >= 0 )
  {
    if ( qword_140C2A688 )
    {
      qword_140C2A688 = 0LL;
      v1 = 1;
    }
    else
    {
      qword_140C2A688 = 0LL;
    }
    if ( (int)KsepShimDatabaseTime(L"\\SystemRoot\\AppPatch\\drvpatch.sdb") >= 0 )
    {
      if ( qword_140C2A6C0 )
      {
        qword_140C2A6C0 = 0LL;
        v1 = 1;
      }
      else
      {
        qword_140C2A6C0 = 0LL;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&KsepShimDbLock);
  v2 = KeGetCurrentThread();
  if ( (unsigned __int64)&KsepShimDbLock - qword_140C50630 < 0x8000000000LL )
    SessionId = MmGetSessionIdEx((__int64)v2->ApcState.Process);
  else
    SessionId = -1;
  _disable();
  p_Process = (__int64)&v2[1].Process;
  v5 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&KsepShimDbLock & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v5;
    p_Process += 96LL;
    if ( v5 >= 6 )
      goto LABEL_21;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( p_Process )
  {
    if ( *(__int64 *)p_Process < 0 )
    {
      *(_BYTE *)p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process);
      _disable();
    }
    v6 = *(_DWORD *)(p_Process + 88);
    *(_DWORD *)(p_Process + 88) = 0;
    *(_BYTE *)(p_Process + 17) = 0;
    *(_QWORD *)p_Process = 0LL;
    v2->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
    _enable();
    if ( v6 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v2, (__int64)&KsepShimDbLock, v6);
    goto LABEL_19;
  }
LABEL_21:
  if ( (*((_DWORD *)&v2->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v2, (ULONG_PTR)&KsepShimDbLock, SessionId, 0LL);
  _enable();
LABEL_19:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v1;
}
