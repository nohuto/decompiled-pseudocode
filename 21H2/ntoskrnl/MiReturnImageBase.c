/*
 * XREFs of MiReturnImageBase @ 0x140701FB8
 * Callers:
 *     MiCheckControlArea @ 0x14031F800 (MiCheckControlArea.c)
 *     MiRelocateImageAgain @ 0x1406C290C (MiRelocateImageAgain.c)
 *     MiFreeRelocations @ 0x14076B358 (MiFreeRelocations.c)
 * Callees:
 *     MiZeroCfgSystemWideBitmap @ 0x140256EA4 (MiZeroCfgSystemWideBitmap.c)
 *     MiGetImageBitMapInfo @ 0x1402A4224 (MiGetImageBitMapInfo.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     RtlClearBitsEx @ 0x140309050 (RtlClearBitsEx.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReturnSystemImageAddress @ 0x14075FE64 (MiReturnSystemImageAddress.c)
 */

char __fastcall MiReturnImageBase(__int64 a1)
{
  _UNKNOWN **v1; // rax
  unsigned __int64 v2; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = &retaddr;
  v8 = 0LL;
  v2 = *(_QWORD *)a1;
  v6 = 0LL;
  if ( v2 != -1LL )
  {
    if ( *(_BYTE *)(a1 + 12) == 1 )
    {
      if ( *(_BYTE *)(a1 + 13) == 1 )
        LOBYTE(v1) = MiReturnSystemImageAddress((v2 - 0x80000000) << 16, (unsigned int)(*(_DWORD *)(a1 + 8) << 16));
    }
    else
    {
      MiGetImageBitMapInfo(*(_DWORD *)(a1 + 16), &v6, &v8, 0LL);
      MiZeroCfgSystemWideBitmap(a1, v8 - ((v2 + *(unsigned int *)(a1 + 8)) << 16));
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4CB88, 0LL);
      if ( *((_QWORD *)&v6 + 1) )
        RtlClearBitsEx(*((__int64 *)&v6 + 1), v2, *(unsigned int *)(a1 + 8));
      RtlClearBitsEx(v6, v2, *(unsigned int *)(a1 + 8));
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4CB88, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C4CB88);
      KeAbPostRelease((ULONG_PTR)&qword_140C4CB88);
      LOBYTE(v1) = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
  }
  return (char)v1;
}
