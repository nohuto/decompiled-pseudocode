/*
 * XREFs of ExpSetBootLoaderMetadata @ 0x140638B98
 * Callers:
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExSystemExceptionFilter @ 0x1409F8660 (ExSystemExceptionFilter.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpSetBootLoaderMetadata(void *Src, size_t Size)
{
  size_t v2; // r14
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *PoolWithTag; // rsi
  unsigned int v6; // r14d
  struct _KTHREAD *v7; // rsi
  unsigned int SessionId; // ecx
  unsigned int v9; // edx
  __int64 p_Process; // rbx
  int v11; // edx

  v2 = (unsigned int)Size;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExBootLoaderMetadataLock, 0LL);
  PoolWithTag = ExBootLoaderMetadata;
  if ( ExBootLoaderMetadata )
  {
    if ( (_DWORD)v2 != *(_DWORD *)ExBootLoaderMetadata )
    {
      ExFreePoolWithTag(ExBootLoaderMetadata, 0x64506142u);
      PoolWithTag = 0LL;
      ExBootLoaderMetadata = 0LL;
    }
    if ( PoolWithTag )
      goto LABEL_10;
  }
  if ( !(_DWORD)v2 )
  {
LABEL_9:
    if ( !PoolWithTag )
    {
LABEL_11:
      v6 = 0;
      goto LABEL_12;
    }
LABEL_10:
    memmove(PoolWithTag + 1, Src, v2);
    *PoolWithTag = v2;
    goto LABEL_11;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v2 + 4, 0x64506142u);
  ExBootLoaderMetadata = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0;
    goto LABEL_9;
  }
  v6 = -1073741670;
LABEL_12:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExBootLoaderMetadataLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ExBootLoaderMetadataLock);
  v7 = KeGetCurrentThread();
  if ( (unsigned __int64)&ExBootLoaderMetadataLock - qword_140C50630 >= 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx((__int64)v7->ApcState.Process);
  _disable();
  v9 = 0;
  p_Process = (__int64)&v7[1].Process;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&ExBootLoaderMetadataLock & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v9;
    p_Process += 96LL;
    if ( v9 >= 6 )
    {
      p_Process = 0LL;
      goto LABEL_24;
    }
  }
  *(_BYTE *)(p_Process + 18) = 0;
LABEL_24:
  if ( p_Process )
  {
    if ( *(__int64 *)p_Process < 0 )
    {
      *(_BYTE *)p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process);
      _disable();
    }
    v11 = *(_DWORD *)(p_Process + 88);
    *(_DWORD *)(p_Process + 88) = 0;
    *(_BYTE *)(p_Process + 17) = 0;
    *(_QWORD *)p_Process = 0LL;
    v7->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
    _enable();
    if ( v11 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v7, (__int64)&ExBootLoaderMetadataLock, v11);
  }
  else
  {
    if ( (*((_DWORD *)&v7->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v7, (ULONG_PTR)&ExBootLoaderMetadataLock, SessionId, 0LL);
    _enable();
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v6;
}
