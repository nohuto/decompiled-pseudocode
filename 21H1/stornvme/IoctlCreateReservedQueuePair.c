/*
 * XREFs of IoctlCreateReservedQueuePair @ 0x1C0011124
 * Callers:
 *     IoctlToNVMe @ 0x1C0001B20 (IoctlToNVMe.c)
 * Callees:
 *     GetFreeReservedQueueIndex @ 0x1C0010F84 (GetFreeReservedQueueIndex.c)
 *     NVMeIoCompletionQueueDelete @ 0x1C0018424 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C0018AE4 (NVMeIoSubmissionQueueDelete.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C0019C80 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0019FF4 (NVMeReservedSubmissionQueueCreate.c)
 */

__int64 __fastcall IoctlCreateReservedQueuePair(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // r11
  __int64 v4; // rbp
  unsigned int v5; // edi
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // rdx
  unsigned __int16 FreeReservedQueueIndex; // ax
  int v11; // r11d
  __int64 v12; // r12
  int v13; // ecx
  unsigned __int16 v14; // r14
  unsigned __int16 v15; // r11
  __int64 v16; // r13
  bool i; // cf
  unsigned __int16 v18; // bx
  unsigned __int16 v19; // r12
  __int64 v20; // r13
  __int64 v21; // rax
  _OWORD *v22; // rcx
  unsigned __int16 v25; // [rsp+130h] [rbp+18h]
  __int64 v26; // [rsp+138h] [rbp+20h]

  v2 = *(_WORD *)(a1 + 814);
  v4 = a2;
  v5 = 0;
  if ( !v2 || *(_WORD *)(a1 + 786) >= v2 || *(_WORD *)(a1 + 784) >= v2 )
  {
    v5 = -1056964601;
    *(_BYTE *)(a2 + 3) = 6;
    goto LABEL_34;
  }
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v6 = *(_QWORD *)(a2 + 64);
    v7 = 60LL;
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 24);
    v7 = 16LL;
  }
  v8 = *(unsigned int *)(v7 + a2);
  if ( (unsigned int)v8 >= 0x9C )
  {
    v9 = *(unsigned __int16 *)(v6 + 60);
    v26 = *(unsigned int *)(v6 + 36);
    if ( v8 < 48 * v9 + 108 )
    {
      *(_BYTE *)(v4 + 3) = 18;
      v5 = -1056964604;
      goto LABEL_35;
    }
    if ( *(unsigned int *)(v6 + 40) < (unsigned __int64)(32 * v9 + 40) )
    {
      v5 = -1056964604;
      goto LABEL_35;
    }
    FreeReservedQueueIndex = GetFreeReservedQueueIndex(a1);
    v12 = FreeReservedQueueIndex;
    if ( FreeReservedQueueIndex == 0xFFFF
      || (v13 = *(unsigned __int16 *)(a1 + 282), v14 = FreeReservedQueueIndex + v13 + 1, v14 > (unsigned int)(v11 + v13)) )
    {
      v5 = -1056964601;
      goto LABEL_35;
    }
    if ( (unsigned __int16)NVMeReservedCompletionQueueCreate(a1) )
    {
      *(_DWORD *)(a1 + 28) = 18;
      v5 = -1056964607;
      goto LABEL_35;
    }
    v25 = 0;
    v15 = 0;
    v16 = *(_QWORD *)(a1 + 800) + 32 * v12;
    for ( i = *(_WORD *)(v6 + 60) != 0; ; i = v15 < v18 )
    {
      if ( !i )
      {
        *(_BYTE *)(v4 + 3) = 1;
        return v5;
      }
      if ( (unsigned __int16)NVMeReservedSubmissionQueueCreate(a1, v12, v15) )
        break;
      ++*(_WORD *)(v16 + 26);
      v15 = v25 + 1;
      v18 = *(_WORD *)(v6 + 60);
      v25 = v15;
      if ( v15 < v18 )
      {
        LOWORD(v12) = GetFreeReservedQueueIndex(a1);
        if ( (_WORD)v12 == 0xFFFF )
          goto LABEL_27;
      }
    }
    *(_DWORD *)(a1 + 28) = 18;
    v5 = -1056964607;
LABEL_27:
    if ( v14 )
    {
      v19 = 0;
      if ( *(_WORD *)(a1 + 784) )
      {
        do
        {
          v20 = 32LL * v19;
          if ( *(_WORD *)(*(_QWORD *)(a1 + 792) + v20 + 20) == v14 )
          {
            NVMeIoSubmissionQueueDelete(a1);
            v21 = *(_QWORD *)(a1 + 792);
            *(_OWORD *)(v21 + 32LL * v19) = 0LL;
            *(_OWORD *)(v21 + v20 + 16) = 0LL;
          }
          ++v19;
        }
        while ( v19 < *(_WORD *)(a1 + 784) );
        v4 = a2;
      }
      NVMeIoCompletionQueueDelete(a1);
      v22 = (_OWORD *)(*(_QWORD *)(a1 + 800) + 32 * (v14 - (unsigned __int64)*(unsigned __int16 *)(a1 + 282) - 1));
      *v22 = 0LL;
      v22[1] = 0LL;
      *(_OWORD *)(v26 + v6 + 28) = 0LL;
      *(_OWORD *)(v26 + v6 + 44) = 0LL;
      *(_OWORD *)(v26 + v6 + 60) = 0LL;
      *(_OWORD *)(v26 + v6 + 76) = 0LL;
      *(_QWORD *)(v26 + v6 + 92) = 0LL;
    }
LABEL_34:
    if ( !v5 )
      return v5;
    goto LABEL_35;
  }
  *(_BYTE *)(a2 + 3) = 18;
  v5 = -1056964602;
LABEL_35:
  if ( !*(_BYTE *)(v4 + 3) )
    *(_BYTE *)(v4 + 3) = 4;
  StorPortExtendedFunction(
    87LL,
    a1,
    0LL,
    1LL,
    8,
    L"Reserved Queue Create",
    64LL,
    2,
    0,
    v4,
    L"AllocResQCount",
    *(unsigned __int16 *)(a1 + 814),
    L"SQCount",
    *(unsigned __int16 *)(a1 + 280),
    L"CQCount",
    *(unsigned __int16 *)(a1 + 282),
    L"RSQCount",
    *(unsigned __int16 *)(a1 + 784));
  return v5;
}
