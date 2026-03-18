/*
 * XREFs of MiMarkBootKernelStack @ 0x140B05B1C
 * Callers:
 *     MiInitializeKernelStacks @ 0x140B04910 (MiInitializeKernelStacks.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     MiWriteValidPteNewProtection @ 0x14033DBC0 (MiWriteValidPteNewProtection.c)
 *     MiMarkKernelStack @ 0x1403C2D6C (MiMarkKernelStack.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiMarkBootKernelStack(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rbx
  char *AnyMultiplexedVm; // rbp
  __int64 v6; // r9
  unsigned __int8 i; // r15
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rsi
  int v15; // [rsp+20h] [rbp-108h] BYREF
  __int64 v16; // [rsp+28h] [rbp-100h] BYREF
  _QWORD v17[24]; // [rsp+30h] [rbp-F8h] BYREF

  memset(v17, 0, 0xB8uLL);
  v17[3] = 0LL;
  v4 = 0LL;
  LODWORD(v17[1]) = 20;
  BYTE4(v17[0]) = 1;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  for ( i = MiLockWorkingSetShared((__int64)AnyMultiplexedVm); a1 < a2; a1 += 8LL )
  {
    if ( v4 )
    {
      if ( (a1 & 0xFFF) != 0 )
        goto LABEL_4;
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4);
    }
    v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v4, 0LL, v6);
LABEL_4:
    v16 = MI_READ_PTE_LOCK_FREE(a1);
    v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v16);
    v12 = 0xFFFFFFFFFFLL;
    v13 = 48 * ((v8 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v15 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v15, v9, v10, v11);
      while ( *(__int64 *)(v13 + 24) < 0 );
    }
    MiMarkKernelStack(v12, v13, 0xFFFFFFFFFFFFFFF0uLL);
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (MiFlags & 0x20000) == 0 )
    {
      MiWriteValidPteNewProtection(a1, v16 | 0x8000000000000062uLL);
      MiInsertTbFlushEntry((__int64)v17, (__int64)(a1 << 25) >> 16, 1LL, 0);
    }
  }
  MiFlushTbList((__int64)v17);
  if ( v4 )
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, i);
}
