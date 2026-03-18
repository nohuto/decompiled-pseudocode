/*
 * XREFs of MiExpandSharedZeroCluster @ 0x140344B4C
 * Callers:
 *     MiResolveDemandZeroFault @ 0x14020F020 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x140207D20 (MiGetProtoPteAddress.c)
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiUpdatePageTableUseCount @ 0x140341598 (MiUpdatePageTableUseCount.c)
 *     MiComputeZeroClusterMaximum @ 0x1403415DC (MiComputeZeroClusterMaximum.c)
 *     MiIsPteEvaluated @ 0x140344E10 (MiIsPteEvaluated.c)
 *     MiGetPagingFileOffset @ 0x140344E64 (MiGetPagingFileOffset.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall MiExpandSharedZeroCluster(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rdi
  unsigned int v3; // r15d
  unsigned __int64 v4; // rbx
  _QWORD *v5; // rcx
  _QWORD *v6; // rsi
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // r14
  unsigned __int64 v11; // rbx
  unsigned __int64 ProtoPteAddress; // rax
  unsigned __int64 v13; // r12
  __int64 v14; // rax
  int PagingFileOffset; // eax
  unsigned __int64 v16; // rdx
  unsigned int v17; // r14d
  unsigned int v18; // r12d
  unsigned __int64 *v19; // rsi
  int v20; // ecx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdi
  int v23; // r13d
  unsigned __int64 v24; // rbx
  bool v26; // zf
  __int64 v27; // [rsp+20h] [rbp-79h] BYREF
  __int64 v28; // [rsp+28h] [rbp-71h] BYREF
  unsigned __int64 v29; // [rsp+30h] [rbp-69h]
  unsigned __int64 v30; // [rsp+38h] [rbp-61h]
  __int128 v31; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v32[20]; // [rsp+50h] [rbp-49h] BYREF
  char v34; // [rsp+108h] [rbp+6Fh]
  unsigned __int64 v35; // [rsp+110h] [rbp+77h]
  unsigned __int64 v36; // [rsp+118h] [rbp+7Fh]

  v1 = a1;
  memset(v32, 0, 0x60uLL);
  v2 = *(_QWORD *)(v1 + 64);
  v3 = 0;
  v4 = *(_QWORD *)(v1 + 16);
  v5 = *(_QWORD **)(v1 + 56);
  v31 = 0LL;
  v6 = *(_QWORD **)(v2 + 120);
  v28 = 0LL;
  v34 = 0;
  v29 = v4;
  if ( (__int64)v6 < 0 )
    v7 = (unsigned __int64)(*v6 - 1LL) >> 12;
  else
    v7 = -1LL;
  v8 = *(unsigned int *)(v2 + 48);
  if ( (v8 & 0x100000) == 0 && MiVadPageSizes[(v8 >> 18) & 3] == 16 )
  {
    v4 &= 0xFFFFFFFFFFFF0000uLL;
    *((_QWORD *)&v31 + 1) = 0x10000LL;
    *(_QWORD *)&v31 = v4;
    if ( v4 >> 12 < (*(unsigned int *)(v2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 32) << 32))
      || (v4 + 0xFFFF) >> 12 > (*(unsigned int *)(v2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 33) << 32)) )
    {
      return 1LL;
    }
    LOWORD(v32[0]) = 2;
    v32[1] = &v31;
    v5 = v32;
    v32[2] = 1LL;
    v32[3] = 0LL;
    v32[4] = 0LL;
    v34 = 1;
  }
  v30 = MiComputeZeroClusterMaximum(
          (__int64)v5,
          (__int64)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6],
          v2);
  v9 = v4 >> 12;
  v35 = 0LL;
  v10 = 0LL;
  v36 = v4 >> 12;
  v11 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !v30 )
    return 1LL;
  while ( !(unsigned int)MiIsPteEvaluated(v11, *(unsigned int *)(v1 + 32)) )
  {
    ProtoPteAddress = MiGetProtoPteAddress(v2, v9, 4, &v28);
    v13 = ProtoPteAddress;
    if ( !ProtoPteAddress || !v28 || v10 && v28 != v10 )
      break;
    if ( ((ProtoPteAddress ^ *(_QWORD *)(v1 + 24)) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      break;
    if ( !v10 )
      v10 = v28;
    if ( v36 - (*(unsigned int *)(v2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 32) << 32)) > v7 )
      break;
    v14 = MI_READ_PTE_LOCK_FREE(ProtoPteAddress);
    v27 = v14;
    if ( (v14 & 1) != 0 || !v14 || (v14 & 0x400) != 0 || (v14 & 0x800) != 0 )
      break;
    PagingFileOffset = MiGetPagingFileOffset(&v27);
    v16 = v35;
    if ( !PagingFileOffset )
    {
      if ( !v3 )
        v16 = v13;
      ++v3;
      v35 = v16;
      v9 = v36 + 1;
      v11 += 8LL;
      ++v36;
      if ( v3 < v30 )
        continue;
    }
    goto LABEL_23;
  }
  v16 = v35;
LABEL_23:
  if ( v3 <= 1 || v34 == 1 && v11 <= ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    return 1LL;
  v17 = 0;
  v18 = 0;
  v19 = (unsigned __int64 *)(v11 - 8LL * v3);
  do
  {
    v20 = *(_DWORD *)(v1 + 32);
    if ( v20 == 256 )
      v21 = (v16 << 16) | 0x400;
    else
      v21 = 32 * (v20 & 0x1F | 0xFFFFFFFFF8000020uLL);
    v27 = MiSwizzleInvalidPte(v21);
    v22 = v27;
    if ( MI_READ_PTE_LOCK_FREE((unsigned __int64)v19) )
      goto LABEL_33;
    v23 = 0;
    v24 = v22;
    if ( MiPteInShadowRange((unsigned __int64)v19) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v23 = 1;
        if ( HIBYTE(word_140C4DF48) )
          goto LABEL_30;
        v26 = (v22 & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_30;
        v26 = (v22 & 1) == 0;
      }
      if ( !v26 )
        v24 = v22 | 0x8000000000000000uLL;
    }
LABEL_30:
    *v19 = v24;
    if ( v23 )
      MiWritePteShadow((__int64)v19, v24);
    v1 = a1;
    ++v17;
LABEL_33:
    ++v18;
    v16 = v35 + 8;
    ++v19;
    v35 += 8LL;
  }
  while ( v18 < (unsigned __int64)v3 );
  if ( v17 )
    MiUpdatePageTableUseCount(v29, v17);
  return v3;
}
