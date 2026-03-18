/*
 * XREFs of NVMeReservedCompletionQueueCreate @ 0x1C0019BE0
 * Callers:
 *     IoctlCreateReservedQueuePair @ 0x1C00110AC (IoctlCreateReservedQueuePair.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002084 (ProcessCommand.c)
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000456C (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C00054C0 (memset.c)
 *     GetFreeReservedQueueIndex @ 0x1C0010F0C (GetFreeReservedQueueIndex.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001BB0C (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeReservedCompletionQueueCreate(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  unsigned __int16 v3; // r15
  int v4; // r12d
  __int64 v6; // rsi
  __int64 v7; // rbp
  unsigned __int16 FreeReservedQueueIndex; // ax
  __int64 v10; // r14
  __int64 v11; // rcx
  void *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  int v15; // ecx
  unsigned int v16; // ebx
  void *v17; // [rsp+70h] [rbp+18h] BYREF
  __int64 v18; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a2;
  if ( *(_BYTE *)(a3 + 2) == 40 )
    v6 = *(_QWORD *)(a3 + 64);
  else
    v6 = *(_QWORD *)(a3 + 24);
  v7 = *(unsigned int *)(v6 + 36);
  FreeReservedQueueIndex = GetFreeReservedQueueIndex(a1);
  if ( FreeReservedQueueIndex == 0xFFFF )
    return 5LL;
  v10 = 32LL * FreeReservedQueueIndex;
  *(_WORD *)(v10 + *(_QWORD *)(a1 + 800) + 16) = v4;
  *(_QWORD *)(v10 + *(_QWORD *)(a1 + 800) + 8) = (unsigned int)(*(_DWORD *)(a1 + 176) * (2 * v4 + 1))
                                               + *(_QWORD *)(a1 + 152)
                                               + 4096LL;
  v11 = *(_QWORD *)(v6 + 44);
  if ( v11 )
  {
    *(_QWORD *)(v10 + *(_QWORD *)(a1 + 800)) = v11;
  }
  else
  {
    v15 = *(unsigned __int16 *)(v6 + 56);
    if ( (_WORD)v15 && (*(_DWORD *)(a1 + 128) & 1) != 0 )
    {
      v17 = 0LL;
      v16 = 16 * v15;
      v18 = 0LL;
      if ( (unsigned int)NVMeAllocateDmaBuffer(a1, (unsigned int)(16 * v15), &v17, &v18) || !v17 )
        return 8LL;
      NVMeZeroMemory(v17, v16);
      *(_QWORD *)(v10 + *(_QWORD *)(a1 + 800)) = v18;
    }
  }
  *(_DWORD *)(v10 + *(_QWORD *)(a1 + 800) + 20) = *(_DWORD *)(v6 + 52);
  *(_WORD *)(v10 + *(_QWORD *)(a1 + 800) + 18) = *(_WORD *)(v6 + 56);
  *(_WORD *)(v10 + *(_QWORD *)(a1 + 800) + 24) ^= (*(_WORD *)(v6 + 58) ^ *(_WORD *)(v10 + *(_QWORD *)(a1 + 800) + 24)) & 1;
  *(_WORD *)(v10 + *(_QWORD *)(a1 + 800) + 24) ^= (*(_WORD *)(v6 + 58) ^ *(_WORD *)(v10 + *(_QWORD *)(a1 + 800) + 24)) & 2;
  v12 = *(void **)(a1 + 920);
  *(_BYTE *)(a1 + 835) = 0;
  memset(v12, 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 920) + 4232LL) = 0LL;
  v13 = *(_QWORD *)(a1 + 920);
  *(_QWORD *)(a1 + 888) = v13;
  *(_DWORD *)(a1 + 824) = 1;
  *(_BYTE *)(v13 + 4253) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 920) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 920) + 4244LL) = 0;
  v14 = *(_QWORD *)(a1 + 920) + 4096LL;
  *(_BYTE *)v14 = 5;
  *(_QWORD *)(v14 + 24) = *(_QWORD *)(v10 + *(_QWORD *)(a1 + 800));
  *(_WORD *)(v14 + 40) = v4;
  *(_WORD *)(v14 + 42) = *(_WORD *)(v10 + *(_QWORD *)(a1 + 800) + 18) - 1;
  *(_DWORD *)(v14 + 44) ^= (*(_DWORD *)(v14 + 44) ^ (*(unsigned __int16 *)(v10 + *(_QWORD *)(a1 + 800) + 24) >> 1)) & 1;
  *(_DWORD *)(v14 + 44) ^= (*(_DWORD *)(v14 + 44) ^ (2 * *(unsigned __int16 *)(v10 + *(_QWORD *)(a1 + 800) + 24))) & 2;
  *(_WORD *)(v14 + 46) = *(_WORD *)(v10 + *(_QWORD *)(a1 + 800) + 20);
  ProcessCommand(a1, a1 + 832);
  WaitForCommandCompleteWithCustomTimeout(a1);
  if ( *(_BYTE *)(a1 + 835) == 1 )
  {
    ++*(_WORD *)(a1 + 786);
    *(_OWORD *)(v6 + v7 + 28) = 0LL;
    *(_OWORD *)(v6 + v7 + 44) = 0LL;
    *(_OWORD *)(v6 + v7 + 60) = 0LL;
    *(_OWORD *)(v6 + v7 + 76) = 0LL;
    *(_QWORD *)(v6 + v7 + 92) = 0LL;
    *(_QWORD *)(v6 + v7 + 36) = *(_QWORD *)(v10 + *(_QWORD *)(a1 + 800));
    *(_QWORD *)(v6 + v7 + 44) = *(_QWORD *)(v10 + *(_QWORD *)(a1 + 800) + 8);
    *(_WORD *)(v6 + v7 + 52) = *(_WORD *)(v10 + *(_QWORD *)(a1 + 800) + 16);
    *(_WORD *)(v6 + v7 + 54) = *(_WORD *)(v10 + *(_QWORD *)(a1 + 800) + 18);
    *(_WORD *)(v6 + v7 + 60) ^= (*(_WORD *)(v6 + v7 + 60) ^ *(_WORD *)(v10 + *(_QWORD *)(a1 + 800) + 24)) & 1;
    *(_WORD *)(v6 + v7 + 60) ^= ((unsigned __int8)*(_WORD *)(v6 + v7 + 60) ^ (unsigned __int8)*(_WORD *)(v10 + *(_QWORD *)(a1 + 800) + 24)) & 2;
    *(_DWORD *)(v6 + v7 + 56) = *(_DWORD *)(v10 + *(_QWORD *)(a1 + 800) + 20);
  }
  else
  {
    return 10;
  }
  return v3;
}
