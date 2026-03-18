/*
 * XREFs of HvFoldBackDirtyData @ 0x1408721A4
 * Callers:
 *     CmpFlushHive @ 0x140664FA8 (CmpFlushHive.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     HvFreeDirtyData @ 0x14065B620 (HvFreeDirtyData.c)
 *     HvpMarkDirty @ 0x140699C70 (HvpMarkDirty.c)
 */

void __fastcall HvFoldBackDirtyData(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 v1; // rsi
  __int64 v3; // r14
  volatile signed __int64 *v4; // rdi
  int v5; // ebp

  v1 = 0LL;
  if ( *(_QWORD *)(BugCheckParameter2 + 1688) )
  {
    v3 = *(unsigned int *)(BugCheckParameter2 + 1680);
    v4 = (volatile signed __int64 *)(BugCheckParameter2 + 80);
    ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 80, 0LL);
    if ( (_DWORD)v3 )
    {
      v5 = 8;
      do
      {
        if ( _bittest64(*(const signed __int64 **)(BugCheckParameter2 + 1688), v1) == 1 )
          HvpMarkDirty(BugCheckParameter2, v5, 1u, 0);
        ++v1;
        v5 += 512;
        --v3;
      }
      while ( v3 );
    }
    if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v4);
    KeAbPostRelease((ULONG_PTR)v4);
  }
  HvFreeDirtyData(BugCheckParameter2);
}
