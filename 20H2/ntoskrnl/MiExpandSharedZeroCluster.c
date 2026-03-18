/*
 * XREFs of MiExpandSharedZeroCluster @ 0x1402394E4
 * Callers:
 *     MiResolveDemandZeroFault @ 0x140270E70 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiIsPteEvaluated @ 0x1402397A8 (MiIsPteEvaluated.c)
 *     MiGetPagingFileOffset @ 0x1402397FC (MiGetPagingFileOffset.c)
 *     MiComputeZeroClusterMaximum @ 0x14023C1EC (MiComputeZeroClusterMaximum.c)
 *     MiUpdatePageTableUseCount @ 0x14023C700 (MiUpdatePageTableUseCount.c)
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1402B3F50 (MiGetProtoPteAddress.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     memset @ 0x140411300 (memset.c)
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
  unsigned __int64 v9; // r12
  __int64 v10; // r14
  unsigned __int64 v11; // rbx
  __int64 ProtoPteAddress; // rax
  __int64 v13; // r12
  __int64 v14; // rax
  int PagingFileOffset; // eax
  __int64 v16; // rdx
  unsigned int v17; // r14d
  unsigned int v18; // r12d
  unsigned __int64 *v19; // rsi
  int v20; // ecx
  __int64 v21; // rcx
  unsigned __int64 v22; // rdi
  int v23; // r13d
  unsigned __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  bool v30; // zf
  __int64 v31; // [rsp+20h] [rbp-79h] BYREF
  __int64 v32; // [rsp+28h] [rbp-71h] BYREF
  unsigned __int64 v33; // [rsp+30h] [rbp-69h]
  unsigned __int64 v34; // [rsp+38h] [rbp-61h]
  __int128 v35; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v36[20]; // [rsp+50h] [rbp-49h] BYREF
  char v38; // [rsp+108h] [rbp+6Fh]
  __int64 v39; // [rsp+110h] [rbp+77h]
  unsigned __int64 v40; // [rsp+118h] [rbp+7Fh]

  v1 = a1;
  memset(v36, 0, 0x60uLL);
  v2 = *(_QWORD *)(v1 + 64);
  v3 = 0;
  v4 = *(_QWORD *)(v1 + 16);
  v5 = *(_QWORD **)(v1 + 56);
  v35 = 0LL;
  v6 = *(_QWORD **)(v2 + 120);
  v32 = 0LL;
  v38 = 0;
  v33 = v4;
  if ( (__int64)v6 < 0 )
    v7 = (unsigned __int64)(*v6 - 1LL) >> 12;
  else
    v7 = -1LL;
  v8 = *(unsigned int *)(v2 + 48);
  if ( (v8 & 0x100000) == 0 && MiVadPageSizes[(v8 >> 18) & 3] == 16 )
  {
    v4 &= 0xFFFFFFFFFFFF0000uLL;
    *((_QWORD *)&v35 + 1) = 0x10000LL;
    *(_QWORD *)&v35 = v4;
    if ( v4 >> 12 < (*(unsigned int *)(v2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 32) << 32))
      || (v4 + 0xFFFF) >> 12 > (*(unsigned int *)(v2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 33) << 32)) )
    {
      return 1LL;
    }
    LOWORD(v36[0]) = 2;
    v36[1] = &v35;
    v5 = v36;
    v36[2] = 1LL;
    v36[3] = 0LL;
    v36[4] = 0LL;
    v38 = 1;
  }
  v34 = MiComputeZeroClusterMaximum(v5, &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6], v2);
  v9 = v4 >> 12;
  v39 = 0LL;
  v10 = 0LL;
  v40 = v4 >> 12;
  v11 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !v34 )
    return 1LL;
  while ( !(unsigned int)MiIsPteEvaluated(v11, *(unsigned int *)(v1 + 32)) )
  {
    ProtoPteAddress = MiGetProtoPteAddress(v2, v9, 4LL, &v32);
    v13 = ProtoPteAddress;
    if ( !ProtoPteAddress || !v32 || v10 && v32 != v10 )
      break;
    if ( ((ProtoPteAddress ^ *(_QWORD *)(v1 + 24)) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      break;
    if ( !v10 )
      v10 = v32;
    if ( v40 - (*(unsigned int *)(v2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 32) << 32)) > v7 )
      break;
    v14 = MI_READ_PTE_LOCK_FREE(ProtoPteAddress);
    v31 = v14;
    if ( (v14 & 1) != 0 || !v14 || (v14 & 0x400) != 0 || (v14 & 0x800) != 0 )
      break;
    PagingFileOffset = MiGetPagingFileOffset(&v31);
    v16 = v39;
    if ( !PagingFileOffset )
    {
      if ( !v3 )
        v16 = v13;
      ++v3;
      v39 = v16;
      v9 = v40 + 1;
      v11 += 8LL;
      ++v40;
      if ( v3 < v34 )
        continue;
    }
    goto LABEL_23;
  }
  v16 = v39;
LABEL_23:
  if ( v3 <= 1 || v38 == 1 && v11 <= ((v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
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
    v31 = MiSwizzleInvalidPte(v21);
    v22 = v31;
    if ( MI_READ_PTE_LOCK_FREE(v19) )
      goto LABEL_33;
    v23 = 0;
    v24 = v22;
    if ( MiPteInShadowRange((unsigned __int64)v19) )
    {
      if ( (unsigned int)MiPteHasShadow(v26, v25, v27, v28) )
      {
        v23 = 1;
        if ( HIBYTE(word_140C4DE88) )
          goto LABEL_30;
        v30 = (v22 & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_30;
        v30 = (v22 & 1) == 0;
      }
      if ( !v30 )
        v24 = v22 | 0x8000000000000000uLL;
    }
LABEL_30:
    *v19 = v24;
    if ( v23 )
      MiWritePteShadow(v19, v24);
    v1 = a1;
    ++v17;
LABEL_33:
    ++v18;
    v16 = v39 + 8;
    ++v19;
    v39 += 8LL;
  }
  while ( v18 < (unsigned __int64)v3 );
  if ( v17 )
    MiUpdatePageTableUseCount(v33, v17);
  return v3;
}
