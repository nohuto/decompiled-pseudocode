/*
 * XREFs of MiIsRangeFullyCommitted @ 0x140616270
 * Callers:
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14061606C (MmSecureVirtualMemoryAgainstWrites.c)
 *     MmProtectVirtualMemory @ 0x14062CEF0 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x140207D20 (MiGetProtoPteAddress.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MiReadPteShadow @ 0x1402AD460 (MiReadPteShadow.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
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
  __int64 v15; // rdx
  __int64 v16; // r8
  _DWORD *v17; // r9
  $C774EFD68449142D8271B1EC1EB7FB26 *v20; // rcx
  __int64 v21; // [rsp+60h] [rbp+8h] BYREF
  __int64 v22; // [rsp+68h] [rbp+10h] BYREF

  v21 = 0LL;
  v22 = 0LL;
  ProtoPteAddress = (__int64 *)MiGetProtoPteAddress(a1, a2 >> 12, 2, &v21);
  if ( !ProtoPteAddress )
    return 0LL;
  v6 = MiGetProtoPteAddress(a1, a3 >> 12, 2, &v22);
  if ( !v6 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = 1;
  v9 = ***(_QWORD ***)(a1 + 72);
  --CurrentThread->SpecialApcDisable;
  v10 = (signed __int64 *)(v9 + 40);
  ExAcquirePushLockSharedEx((ULONG_PTR)v10, 0LL);
  v11 = v22;
  v12 = v21;
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
    v21 = v12;
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
    v20 = &CurrentThread->152;
    if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v20->ApcState.ApcListHead[0].Flink != v20 )
      KiCheckForKernelApcDelivery((__int64)v20, v15, v16, v17);
  }
  return v8;
}
