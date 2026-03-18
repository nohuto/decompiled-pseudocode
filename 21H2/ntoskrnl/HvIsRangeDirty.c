/*
 * XREFs of HvIsRangeDirty @ 0x14092200C
 * Callers:
 *     HvpRemapAndEnlistHiveBins @ 0x14068C544 (HvpRemapAndEnlistHiveBins.c)
 * Callees:
 *     RtlAreBitsClear @ 0x14020AED0 (RtlAreBitsClear.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

bool __fastcall HvIsRangeDirty(__int64 a1, int a2, ULONG a3)
{
  volatile signed __int64 *v6; // rbx
  BOOLEAN v7; // di

  if ( (*(_DWORD *)(a1 + 160) & 1) != 0 || a2 < 0 )
    return 1;
  v6 = (volatile signed __int64 *)(a1 + 80);
  ExAcquirePushLockExclusiveEx(a1 + 80, 0LL);
  v7 = RtlAreBitsClear((PRTL_BITMAP)(a1 + 88), (unsigned int)a2 >> 9, a3);
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  return v7 == 0;
}
