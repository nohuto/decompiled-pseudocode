/*
 * XREFs of MiReserveDriverPtes @ 0x1407621C0
 * Callers:
 *     MiSelectSystemImageAddress @ 0x140762174 (MiSelectSystemImageAddress.c)
 *     MmMapLockedRestartPages @ 0x1409680B0 (MmMapLockedRestartPages.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x1402054C0 (RtlFindClearBitsAndSet.c)
 *     RtlSetAllBits @ 0x140262CA0 (RtlSetAllBits.c)
 *     MiObtainSystemVa @ 0x14026B32C (MiObtainSystemVa.c)
 *     MiReturnSystemVa @ 0x14026DAB0 (MiReturnSystemVa.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiMakeZeroedPageTables @ 0x1402DBF90 (MiMakeZeroedPageTables.c)
 *     MiUnlockDriverMappings @ 0x1402DC188 (MiUnlockDriverMappings.c)
 *     MiLockDriverMappings @ 0x1402DC334 (MiLockDriverMappings.c)
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 *     MiGetPteAddress @ 0x140313C70 (MiGetPteAddress.c)
 *     ExGenRandom @ 0x140363220 (ExGenRandom.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall MiReserveDriverPtes(int a1, __int64 a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // r13
  ULONG v6; // r14d
  unsigned __int64 v7; // rdi
  __int64 i; // rbx
  ULONG ClearBitsAndSet; // ecx
  ULONG v11; // r12d
  __int64 v12; // r8
  RTL_BITMAP *Pool; // r15
  unsigned int v14; // ebx
  unsigned __int64 v15; // rax
  __int64 PteAddress; // rsi
  RTL_BITMAP *v17; // rcx
  unsigned __int64 v18; // [rsp+20h] [rbp-58h]
  unsigned __int64 v20; // [rsp+98h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v4 = a3;
  v6 = (unsigned int)(a1 + 15) >> 4;
  MiLockDriverMappings((__int64)CurrentThread);
  v7 = 0LL;
  if ( !a2 )
  {
    for ( i = MiState[v4 + 149]; i; i = *(_QWORD *)i )
    {
      if ( (*(_DWORD *)(i + 36) & 1) == 0 && *(_DWORD *)(i + 16) >= v6 )
      {
        ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(i + 16), v6, *(_DWORD *)(i + 32));
        if ( ClearBitsAndSet != -1 )
        {
          v7 = *(_QWORD *)(i + 8) + ((unsigned __int64)ClearBitsAndSet << 7);
          *(_DWORD *)(i + 32) = v6 + ClearBitsAndSet;
          goto LABEL_8;
        }
      }
    }
  }
  v11 = (unsigned __int8)ExGenRandom(1);
  v20 = (16 * (v6 + v11) + 511) & 0xFFFFFE00;
  Pool = (RTL_BITMAP *)MiAllocatePool((_DWORD)InitializationPhase != 0 ? 256 : 64, (v20 >> 7) + 40, 0x70446D4Du);
  if ( !Pool )
  {
LABEL_8:
    MiUnlockDriverMappings((__int64)CurrentThread);
    return v7;
  }
  v14 = 12 - ((_DWORD)v4 != 0);
  v15 = MiObtainSystemVa(((16 * (v6 + v11) + 511) & 0xFFFFFE00) >> 9, v14, v12);
  v18 = v15;
  if ( !v15 )
    goto LABEL_18;
  PteAddress = MiGetPteAddress(v15);
  if ( !(_DWORD)v4 && !(unsigned int)MiMakeZeroedPageTables(PteAddress, PteAddress + 8 * (v20 - 1), 1, v14) )
  {
    MiReturnSystemVa(v18, (__int64)((PteAddress << 25) + (v20 << 28)) >> 16, v14);
LABEL_18:
    MiUnlockDriverMappings((__int64)CurrentThread);
    ExFreePoolWithTag(Pool, 0);
    return 0LL;
  }
  memset(&Pool[2].Buffer, 0, v20 >> 7);
  v17 = Pool + 1;
  Pool[1].SizeOfBitMap = ((16 * (v6 + v11) + 511) & 0xFFFFFE00) >> 4;
  Pool[1].Buffer = (unsigned int *)&Pool[2].Buffer;
  if ( a2 )
  {
    v11 = 0;
    RtlSetAllBits(v17);
    LODWORD(v7) = 2;
  }
  else
  {
    RtlSetBits(v17, v11, v6);
  }
  *(&Pool[2].SizeOfBitMap + 1) = v7;
  Pool->Buffer = (unsigned int *)PteAddress;
  Pool[2].SizeOfBitMap = v6 + v11;
  *(_QWORD *)&Pool->SizeOfBitMap = MiState[v4 + 149];
  MiState[v4 + 149] = (__int64)Pool;
  MiUnlockDriverMappings((__int64)CurrentThread);
  return PteAddress + ((unsigned __int64)v11 << 7);
}
