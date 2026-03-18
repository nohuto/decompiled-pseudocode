/*
 * XREFs of IoctlDeleteReservedQueuePair @ 0x1C0011528
 * Callers:
 *     IoctlToNVMe @ 0x1C0001B20 (IoctlToNVMe.c)
 * Callees:
 *     NVMeFreeDmaBuffer @ 0x1C000451C (NVMeFreeDmaBuffer.c)
 *     NVMeIoCompletionQueueDelete @ 0x1C0018394 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C0018A44 (NVMeIoSubmissionQueueDelete.c)
 */

__int64 __fastcall IoctlDeleteReservedQueuePair(__int64 a1, __int64 a2)
{
  int v2; // r9d
  unsigned __int16 v3; // bp
  unsigned int v6; // r14d
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // r8d
  _WORD *v10; // rdi
  unsigned int v11; // edx
  unsigned __int16 v12; // r12
  __int64 v13; // rbx
  __int64 v14; // r13
  unsigned int v15; // edi
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r8
  unsigned __int16 v19; // cx
  unsigned __int16 v20; // r9
  __int64 v21; // r12
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int16 v25; // ax
  __int64 v27; // [rsp+28h] [rbp-F0h]
  int v28; // [rsp+38h] [rbp-E0h]
  int v29; // [rsp+40h] [rbp-D8h]
  __int64 v30; // [rsp+48h] [rbp-D0h]
  __int64 v31; // [rsp+50h] [rbp-C8h]
  __int64 v32; // [rsp+58h] [rbp-C0h]
  __int64 v33; // [rsp+60h] [rbp-B8h]
  __int64 v34; // [rsp+68h] [rbp-B0h]
  __int64 v35; // [rsp+70h] [rbp-A8h]
  __int64 v36; // [rsp+78h] [rbp-A0h]
  __int64 v37; // [rsp+80h] [rbp-98h]
  __int64 v38; // [rsp+88h] [rbp-90h]
  _WORD *v39; // [rsp+D0h] [rbp-48h]
  __int64 v40; // [rsp+120h] [rbp+8h] BYREF
  __int64 v41; // [rsp+130h] [rbp+18h]
  __int64 VirtualAddress; // [rsp+138h] [rbp+20h] BYREF

  v2 = *(unsigned __int16 *)(a1 + 814);
  v3 = 0;
  v6 = 0;
  if ( !(_WORD)v2 || !*(_WORD *)(a1 + 786) )
  {
    *(_BYTE *)(a2 + 3) = 6;
LABEL_35:
    v6 = -1056964601;
    goto LABEL_36;
  }
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v7 = *(_QWORD *)(a2 + 64);
    v8 = 60LL;
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 24);
    v8 = 16LL;
  }
  if ( *(_DWORD *)(a2 + v8) < 0x28u )
  {
    v6 = -1056964602;
    goto LABEL_36;
  }
  v9 = *(unsigned __int16 *)(a1 + 282);
  v10 = (_WORD *)(v7 + 36);
  v41 = v7 + 28;
  v11 = *(unsigned __int16 *)(v7 + 36);
  v39 = (_WORD *)(v7 + 36);
  if ( v11 > v9 + v2 || (unsigned __int16)v11 <= (unsigned __int16)v9 )
    goto LABEL_35;
  v12 = 0;
  LOWORD(v40) = *(_WORD *)(a1 + 784);
  if ( (_WORD)v40 )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(a1 + 792);
      v14 = 32LL * v12;
      if ( *(_WORD *)(v13 + v14 + 20) == *v10 )
      {
        if ( *(_QWORD *)(136LL * v12 + *(_QWORD *)(a1 + 768) + 8) && (*(_DWORD *)(a1 + 128) & 1) != 0 )
        {
          v15 = *(unsigned __int16 *)(v13 + v14 + 18);
          v16 = *(_QWORD *)(v13 + 32LL * v12);
          VirtualAddress = StorPortGetVirtualAddress(a1, v16);
          NVMeFreeDmaBuffer(a1, (unsigned __int64)v15 << 6, &VirtualAddress, v16);
          v10 = v39;
        }
        if ( !(unsigned __int8)NVMeIoSubmissionQueueDelete(a1) )
        {
          LODWORD(v27) = 2;
          *(_DWORD *)(a1 + 28) = 19;
          v6 = -1056964607;
          StorPortExtendedFunction(
            98LL,
            a1,
            0LL,
            10LL,
            (unsigned int)L"Reserved Submission Queue deletion failed",
            v27,
            v10,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38);
          goto LABEL_36;
        }
        v17 = *(_QWORD *)(a1 + 792);
        *(_OWORD *)(v17 + 32LL * v12) = 0LL;
        *(_OWORD *)(v17 + v14 + 16) = 0LL;
        --*(_WORD *)(a1 + 784);
      }
      if ( ++v12 >= (unsigned __int16)v40 )
      {
        LOWORD(v11) = *(_WORD *)(v41 + 8);
        break;
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 128) & 1) != 0 )
  {
    v18 = *(_QWORD *)(a1 + 800);
    v19 = 0;
    v20 = *(_WORD *)(a1 + 786);
    v21 = *(unsigned __int16 *)(32LL * v12 + v18 + 18);
    if ( v20 )
    {
      while ( *(_WORD *)(32LL * v19 + v18 + 16) != (_WORD)v11 )
      {
        if ( ++v19 >= v20 )
          goto LABEL_26;
      }
      v22 = *(_QWORD *)(32LL * v19 + v18);
      v40 = StorPortGetVirtualAddress(a1, v22);
      NVMeFreeDmaBuffer(a1, v21 << 6, &v40, v22);
    }
  }
LABEL_26:
  if ( !(unsigned __int8)NVMeIoCompletionQueueDelete(a1) )
  {
    LODWORD(v27) = 2;
    *(_DWORD *)(a1 + 28) = 20;
    v6 = -1056964607;
    StorPortExtendedFunction(
      98LL,
      a1,
      0LL,
      10LL,
      (unsigned int)L"Reserved Completion Queue deletion failed",
      v27,
      v10,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
LABEL_36:
    if ( !*(_BYTE *)(a2 + 3) )
      *(_BYTE *)(a2 + 3) = 4;
    StorPortExtendedFunction(
      87LL,
      a1,
      0LL,
      1LL,
      8,
      L"Reserved Queue Delete",
      64LL,
      2,
      0,
      a2,
      L"AllocResQCount",
      *(unsigned __int16 *)(a1 + 814),
      L"SQCount",
      *(unsigned __int16 *)(a1 + 280),
      L"CQCount",
      *(unsigned __int16 *)(a1 + 282),
      L"RSQCount",
      *(unsigned __int16 *)(a1 + 784));
    return v6;
  }
  while ( 1 )
  {
    v25 = *(_WORD *)(a1 + 786);
    if ( v3 >= v25 )
      break;
    v23 = *(_QWORD *)(a1 + 800);
    v24 = 32LL * v3;
    if ( *(_WORD *)(v24 + v23 + 16) == *v10 )
    {
      *(_OWORD *)(v24 + v23) = 0LL;
      *(_OWORD *)(v24 + v23 + 16) = 0LL;
    }
    ++v3;
  }
  *(_WORD *)(a1 + 786) = v25 - 1;
  *(_BYTE *)(a2 + 3) = 1;
  return v6;
}
