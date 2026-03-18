/*
 * XREFs of NVMeReservedSubmissionQueueCreate @ 0x1C0019FF4
 * Callers:
 *     IoctlCreateReservedQueuePair @ 0x1C0011124 (IoctlCreateReservedQueuePair.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002084 (ProcessCommand.c)
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0004570 (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0005500 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001BBDC (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeReservedSubmissionQueueCreate(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int16 a4,
        unsigned __int16 a5,
        unsigned __int16 a6)
{
  unsigned __int16 v6; // bp
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v12; // r12
  __int64 v13; // rcx
  void *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // ecx
  unsigned int v18; // r15d
  __int64 v20; // r8
  void *v21; // [rsp+70h] [rbp+8h] BYREF
  __int64 v22; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int16 v23; // [rsp+80h] [rbp+18h]
  __int16 v24; // [rsp+88h] [rbp+20h]

  v24 = a4;
  v23 = a3;
  v6 = 0;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v8 = *(_QWORD *)(a2 + 64);
  else
    v8 = *(_QWORD *)(a2 + 24);
  v9 = v8 + *(unsigned int *)(v8 + 36);
  v10 = a6;
  v11 = 32LL * a5;
  v12 = 2LL * a6;
  *(_WORD *)(v11 + *(_QWORD *)(a1 + 792) + 16) = a3;
  *(_QWORD *)(v11 + *(_QWORD *)(a1 + 792) + 8) = 2 * (unsigned int)a3 * *(_DWORD *)(a1 + 176)
                                               + *(_QWORD *)(a1 + 152)
                                               + 4096LL;
  v13 = *(_QWORD *)(v8 + 8 * v12 + 68);
  if ( v13 )
  {
    *(_QWORD *)(v11 + *(_QWORD *)(a1 + 792)) = v13;
  }
  else
  {
    v17 = *(unsigned __int16 *)(v8 + 8 * v12 + 78);
    if ( (_WORD)v17 && (*(_DWORD *)(a1 + 128) & 1) != 0 )
    {
      v21 = 0LL;
      v18 = v17 << 6;
      v22 = 0LL;
      if ( (unsigned int)NVMeAllocateDmaBuffer(a1, (unsigned int)(v17 << 6), &v21, &v22) || !v21 )
        return 8LL;
      NVMeZeroMemory(v21, v18);
      *(_QWORD *)(v11 + *(_QWORD *)(a1 + 792)) = v22;
    }
  }
  *(_WORD *)(v11 + *(_QWORD *)(a1 + 792) + 18) = *(_WORD *)(v8 + 8 * v12 + 78);
  *(_WORD *)(v11 + *(_QWORD *)(a1 + 792) + 22) ^= (*(_WORD *)(v11 + *(_QWORD *)(a1 + 792) + 22) ^ *(_WORD *)(v8 + 8 * v12 + 80)) & 1;
  *(_WORD *)(v11 + *(_QWORD *)(a1 + 792) + 20) = v24;
  *(_WORD *)(v11 + *(_QWORD *)(a1 + 792) + 24) = *(unsigned __int8 *)(v8 + 16 * (v10 + 3) + 28);
  v14 = *(void **)(a1 + 920);
  *(_BYTE *)(a1 + 835) = 0;
  memset(v14, 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 920) + 4232LL) = 0LL;
  v15 = *(_QWORD *)(a1 + 920);
  *(_QWORD *)(a1 + 888) = v15;
  *(_DWORD *)(a1 + 824) = 1;
  *(_BYTE *)(v15 + 4253) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 920) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 920) + 4244LL) = 0;
  v16 = *(_QWORD *)(a1 + 920) + 4096LL;
  *(_BYTE *)v16 = 1;
  LOWORD(v15) = v23;
  *(_QWORD *)(v16 + 24) = *(_QWORD *)(v11 + *(_QWORD *)(a1 + 792));
  *(_WORD *)(v16 + 40) = v15;
  *(_WORD *)(v16 + 42) = *(_WORD *)(v11 + *(_QWORD *)(a1 + 792) + 18) - 1;
  *(_DWORD *)(v16 + 44) ^= (*(_DWORD *)(v16 + 44) ^ *(unsigned __int16 *)(v11 + *(_QWORD *)(a1 + 792) + 22)) & 1;
  *(_DWORD *)(v16 + 44) ^= ((unsigned __int8)*(_DWORD *)(v16 + 44) ^ (unsigned __int8)(2
                                                                                     * *(_WORD *)(v11
                                                                                                + *(_QWORD *)(a1 + 792)
                                                                                                + 24))) & 6;
  *(_WORD *)(v16 + 46) = *(_WORD *)(v11 + *(_QWORD *)(a1 + 792) + 20);
  ProcessCommand(a1, a1 + 832);
  WaitForCommandCompleteWithCustomTimeout(a1);
  if ( *(_BYTE *)(a1 + 835) == 1 )
  {
    ++*(_WORD *)(a1 + 784);
    v20 = 32 * v10;
    *(_QWORD *)(v20 + v9 + 68) = *(_QWORD *)(v11 + *(_QWORD *)(a1 + 792));
    *(_QWORD *)(v20 + v9 + 76) = *(_QWORD *)(v11 + *(_QWORD *)(a1 + 792) + 8);
    *(_WORD *)(v20 + v9 + 84) = *(_WORD *)(v11 + *(_QWORD *)(a1 + 792) + 16);
    *(_WORD *)(v20 + v9 + 86) = *(_WORD *)(v11 + *(_QWORD *)(a1 + 792) + 18);
    *(_WORD *)(v20 + v9 + 90) ^= (*(_WORD *)(32 * v10 + v9 + 90) ^ *(_WORD *)(v11 + *(_QWORD *)(a1 + 792) + 22)) & 1;
    *(_WORD *)(v20 + v9 + 88) = *(_WORD *)(v11 + *(_QWORD *)(a1 + 792) + 20);
    *(_WORD *)(32 * (v10 + 2) + v9 + 28) = *(_WORD *)(v11 + *(_QWORD *)(a1 + 792) + 24);
    ++*(_WORD *)(v9 + 62);
  }
  else
  {
    return 9;
  }
  return v6;
}
