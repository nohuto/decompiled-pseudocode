/*
 * XREFs of MiReturnImageBase @ 0x1405FF238
 * Callers:
 *     MiCheckControlArea @ 0x14024A8A0 (MiCheckControlArea.c)
 *     MiRelocateImageAgain @ 0x14060666C (MiRelocateImageAgain.c)
 *     MiFreeRelocations @ 0x1407583C8 (MiFreeRelocations.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     RtlClearBitsEx @ 0x140250FD0 (RtlClearBitsEx.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     MiZeroCfgSystemWideBitmap @ 0x1402F2DE8 (MiZeroCfgSystemWideBitmap.c)
 *     MiGetImageBitMapInfo @ 0x14034BFC8 (MiGetImageBitMapInfo.c)
 *     MiReturnSystemImageAddress @ 0x14074A19C (MiReturnSystemImageAddress.c)
 */

_UNKNOWN **__fastcall MiReturnImageBase(__int64 a1)
{
  _UNKNOWN **result; // rax
  unsigned __int64 v2; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  result = &retaddr;
  v7 = 0LL;
  v2 = *(_QWORD *)a1;
  v5 = 0LL;
  if ( v2 != -1LL )
  {
    if ( *(_BYTE *)(a1 + 12) == 1 )
    {
      if ( *(_BYTE *)(a1 + 13) == 1 )
        return (_UNKNOWN **)MiReturnSystemImageAddress(
                              (v2 - 0x80000000) << 16,
                              (unsigned int)(*(_DWORD *)(a1 + 8) << 16));
    }
    else
    {
      MiGetImageBitMapInfo(*(_DWORD *)(a1 + 16), &v5, &v7, 0LL);
      MiZeroCfgSystemWideBitmap(a1, v7 - ((v2 + *(unsigned int *)(a1 + 8)) << 16));
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4C948, 0LL);
      if ( *((_QWORD *)&v5 + 1) )
        RtlClearBitsEx(*((__int64 *)&v5 + 1), v2, *(unsigned int *)(a1 + 8));
      RtlClearBitsEx(v5, v2, *(unsigned int *)(a1 + 8));
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4C948, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4C948);
      KeAbPostRelease((ULONG_PTR)&qword_140C4C948);
      return (_UNKNOWN **)KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
  }
  return result;
}
