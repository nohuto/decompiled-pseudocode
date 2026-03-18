/*
 * XREFs of ExpQueryBootLoaderMetadata @ 0x1406389A8
 * Callers:
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
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
 */

__int64 __fastcall ExpQueryBootLoaderMetadata(void *a1, unsigned int a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v7; // rdx
  unsigned int v8; // esi
  size_t v9; // rax
  struct _KTHREAD *v10; // r14
  unsigned int SessionId; // ecx
  unsigned int v12; // edx
  __int64 p_Process; // rbx
  int v14; // edx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExBootLoaderMetadataLock, 0LL);
  v7 = (char *)ExBootLoaderMetadata;
  if ( ExBootLoaderMetadata )
  {
    v9 = *(unsigned int *)ExBootLoaderMetadata;
    *a3 = v9;
    if ( a1 )
    {
      if ( a2 < (unsigned int)v9 )
      {
        v8 = -1073741820;
        goto LABEL_8;
      }
      memmove(a1, v7 + 4, v9);
    }
  }
  else
  {
    *a3 = 0;
  }
  v8 = 0;
LABEL_8:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExBootLoaderMetadataLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ExBootLoaderMetadataLock);
  v10 = KeGetCurrentThread();
  if ( (unsigned __int64)&ExBootLoaderMetadataLock - qword_140C50630 >= 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx((__int64)v10->ApcState.Process);
  _disable();
  v12 = 0;
  p_Process = (__int64)&v10[1].Process;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&ExBootLoaderMetadataLock & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v12;
    p_Process += 96LL;
    if ( v12 >= 6 )
    {
      p_Process = 0LL;
      goto LABEL_20;
    }
  }
  *(_BYTE *)(p_Process + 18) = 0;
LABEL_20:
  if ( p_Process )
  {
    if ( *(__int64 *)p_Process < 0 )
    {
      *(_BYTE *)p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process);
      _disable();
    }
    v14 = *(_DWORD *)(p_Process + 88);
    *(_DWORD *)(p_Process + 88) = 0;
    *(_BYTE *)(p_Process + 17) = 0;
    *(_QWORD *)p_Process = 0LL;
    v10->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
    _enable();
    if ( v14 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v10, (__int64)&ExBootLoaderMetadataLock, v14);
  }
  else
  {
    if ( (*((_DWORD *)&v10->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v10, (ULONG_PTR)&ExBootLoaderMetadataLock, SessionId, 0LL);
    _enable();
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v8;
}
