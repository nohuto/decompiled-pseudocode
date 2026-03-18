/*
 * XREFs of MiIsRangeFullyCommitted @ 0x140681740
 * Callers:
 *     MmProtectVirtualMemory @ 0x14067CCB0 (MmProtectVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14068317C (MmSecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     MiReadPteShadow @ 0x1402366E0 (MiReadPteShadow.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     MiGetProtoPteAddress @ 0x1402B3F50 (MiGetProtoPteAddress.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall MiIsRangeFullyCommitted(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 *ProtoPteAddress; // rbx
  __int64 v6; // r14
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v8; // r15d
  __int64 v9; // rdi
  signed __int64 *v10; // rdi
  __int64 v11; // r11
  __int64 v12; // r10
  unsigned __int64 v13; // r9
  __int64 PteShadow; // rax
  $C774EFD68449142D8271B1EC1EB7FB26 *v17; // rcx
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF
  __int64 v19; // [rsp+68h] [rbp+10h] BYREF

  v18 = 0LL;
  v19 = 0LL;
  ProtoPteAddress = (__int64 *)MiGetProtoPteAddress(a1, a2 >> 12, 2, &v18);
  if ( !ProtoPteAddress )
    return 0LL;
  v6 = MiGetProtoPteAddress(a1, a3 >> 12, 2, &v19);
  if ( !v6 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = 1;
  v9 = ***(_QWORD ***)(a1 + 72);
  --CurrentThread->SpecialApcDisable;
  v10 = (signed __int64 *)(v9 + 40);
  ExAcquirePushLockSharedEx((ULONG_PTR)v10, 0LL);
  v11 = v19;
  v12 = v18;
  while ( 1 )
  {
    if ( v12 == v11 )
      v13 = v6;
    else
      v13 = *(_QWORD *)(v12 + 8) + 8LL * (unsigned int)(*(_DWORD *)(v12 + 44) - 1);
    if ( (unsigned __int64)ProtoPteAddress <= v13 )
    {
      while ( 1 )
      {
        PteShadow = *ProtoPteAddress;
        if ( (unsigned __int64)ProtoPteAddress >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)ProtoPteAddress <= 0xFFFFF6FB7DBED7F8uLL )
        {
          PteShadow = MiReadPteShadow((unsigned __int64)ProtoPteAddress, *ProtoPteAddress);
        }
        if ( !PteShadow )
          break;
        if ( (unsigned __int64)++ProtoPteAddress > v13 )
          goto LABEL_10;
      }
      v8 = 0;
    }
LABEL_10:
    if ( v12 == v11 )
      break;
    v12 = *(_QWORD *)(v12 + 16);
    v18 = v12;
    ProtoPteAddress = *(__int64 **)(v12 + 8);
    if ( !ProtoPteAddress )
    {
      v8 = 0;
      break;
    }
  }
  if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v17 = &CurrentThread->152;
    if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v17->ApcState.ApcListHead[0].Flink != v17 )
      KiCheckForKernelApcDelivery((__int64)v17);
  }
  return v8;
}
