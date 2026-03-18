/*
 * XREFs of HvFoldBackDirtyData @ 0x140878FE4
 * Callers:
 *     CmpFlushHive @ 0x1406504C8 (CmpFlushHive.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     HvFreeDirtyData @ 0x1406A3430 (HvFreeDirtyData.c)
 *     HvpMarkDirty @ 0x140707D60 (HvpMarkDirty.c)
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
          HvpMarkDirty(BugCheckParameter2, v5, 1, 0);
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
