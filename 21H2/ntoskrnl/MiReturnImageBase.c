/*
 * XREFs of MiReturnImageBase @ 0x1406FC148
 * Callers:
 *     MiCheckControlArea @ 0x140287660 (MiCheckControlArea.c)
 *     MiRelocateImageAgain @ 0x1406FF49C (MiRelocateImageAgain.c)
 *     MiFreeRelocations @ 0x1407FB090 (MiFreeRelocations.c)
 * Callees:
 *     MiZeroCfgSystemWideBitmap @ 0x140248574 (MiZeroCfgSystemWideBitmap.c)
 *     MiGetImageBitMapInfo @ 0x14029EB0C (MiGetImageBitMapInfo.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     RtlClearBitsEx @ 0x14030BB30 (RtlClearBitsEx.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     MiReturnSystemImageAddress @ 0x140761FC0 (MiReturnSystemImageAddress.c)
 */

char __fastcall MiReturnImageBase(__int64 a1)
{
  $CEA84C04E3712D858E5667A507841A2A *v1; // rax
  unsigned __int64 v2; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = ($CEA84C04E3712D858E5667A507841A2A *)&retaddr;
  v9 = 0LL;
  v2 = *(_QWORD *)a1;
  v7 = 0LL;
  if ( v2 != -1LL )
  {
    if ( *(_BYTE *)(a1 + 12) )
    {
      if ( *(_BYTE *)(a1 + 13) )
        LOBYTE(v1) = MiReturnSystemImageAddress((v2 - 0x80000000) << 16, (unsigned int)(*(_DWORD *)(a1 + 8) << 16));
    }
    else
    {
      MiGetImageBitMapInfo(*(_DWORD *)(a1 + 16), &v7, &v9, 0LL);
      MiZeroCfgSystemWideBitmap(a1, v9 - ((v2 + *(unsigned int *)(a1 + 8)) << 16));
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4F300, 0LL);
      if ( *((_QWORD *)&v7 + 1) )
        RtlClearBitsEx(*((__int64 *)&v7 + 1), v2, *(unsigned int *)(a1 + 8));
      RtlClearBitsEx(v7, v2, *(unsigned int *)(a1 + 8));
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4F300, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C4F300);
      LOBYTE(v1) = KeAbPostRelease((ULONG_PTR)&qword_140C4F300);
      if ( CurrentThread->SpecialApcDisable++ == -1 )
      {
        v1 = &CurrentThread->152;
        if ( ($CEA84C04E3712D858E5667A507841A2A *)v1->ApcState.ApcListHead[0].Flink != v1 )
          LOBYTE(v1) = KiCheckForKernelApcDelivery();
      }
    }
  }
  return (char)v1;
}
