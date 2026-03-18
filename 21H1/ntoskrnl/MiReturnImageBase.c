/*
 * XREFs of MiReturnImageBase @ 0x140634278
 * Callers:
 *     MiCheckControlArea @ 0x1402A38D0 (MiCheckControlArea.c)
 *     MiRelocateImageAgain @ 0x14063B7B0 (MiRelocateImageAgain.c)
 *     MiFreeRelocations @ 0x140756458 (MiFreeRelocations.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     RtlClearBitsEx @ 0x1402AA000 (RtlClearBitsEx.c)
 *     MiGetImageBitMapInfo @ 0x14030EAE8 (MiGetImageBitMapInfo.c)
 *     MiZeroCfgSystemWideBitmap @ 0x140350128 (MiZeroCfgSystemWideBitmap.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     MiReturnSystemImageAddress @ 0x14074861C (MiReturnSystemImageAddress.c)
 */

_UNKNOWN **__fastcall MiReturnImageBase(__int64 a1)
{
  _UNKNOWN **result; // rax
  unsigned __int64 v2; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  result = &retaddr;
  v10 = 0LL;
  v2 = *(_QWORD *)a1;
  v8 = 0LL;
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
      MiGetImageBitMapInfo(*(_DWORD *)(a1 + 16), &v8, &v10, 0LL);
      MiZeroCfgSystemWideBitmap(a1, v10 - ((v2 + *(unsigned int *)(a1 + 8)) << 16));
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4CA88, 0LL);
      if ( *((_QWORD *)&v8 + 1) )
        RtlClearBitsEx(*((__int64 *)&v8 + 1), v2, *(unsigned int *)(a1 + 8));
      RtlClearBitsEx(v8, v2, *(unsigned int *)(a1 + 8));
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4CA88, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C4CA88);
      KeAbPostRelease((ULONG_PTR)&qword_140C4CA88);
      return (_UNKNOWN **)KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v5, v6, v7);
    }
  }
  return result;
}
