/*
 * XREFs of PspStorageRemoveObject @ 0x14091182C
 * Callers:
 *     PsRemoveSiloContext @ 0x1409083C0 (PsRemoveSiloContext.c)
 *     PsUnregisterSiloMonitor @ 0x14090DD30 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     PspGetStorageArrayIfPossible @ 0x14023DF48 (PspGetStorageArrayIfPossible.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspStorageRemoveObject(__int64 a1, unsigned int a2, char a3, unsigned __int64 *a4)
{
  __int64 result; // rax
  int v7; // esi
  ULONG_PTR v8; // rdi
  unsigned __int64 v9; // rbx
  unsigned int v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h] BYREF

  v10 = 0;
  v11 = 0LL;
  result = PspGetStorageArrayIfPossible(a1, a2, &v10, &v11);
  v7 = result;
  if ( (int)result >= 0 )
  {
    v8 = v11 + 16LL * v10;
    ExAcquirePushLockExclusiveEx(v8, 0LL);
    v9 = *(_QWORD *)(v8 + 8);
    if ( v9 )
    {
      if ( a3 || (v9 & 1) == 0 )
      {
        *(_QWORD *)(v8 + 8) = 0LL;
        v9 &= ~1uLL;
      }
      else
      {
        v9 = 0LL;
        v7 = -1073741637;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v8);
    KeAbPostRelease(v8);
    if ( v7 >= 0 )
    {
      if ( !v9 )
        return 3221226021LL;
      if ( a4 )
        *a4 = v9;
      else
        HalPutDmaAdapter((PADAPTER_OBJECT)v9);
    }
    return (unsigned int)v7;
  }
  return result;
}
