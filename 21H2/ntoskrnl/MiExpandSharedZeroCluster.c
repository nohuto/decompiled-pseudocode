/*
 * XREFs of MiExpandSharedZeroCluster @ 0x140270F88
 * Callers:
 *     MiResolveDemandZeroFault @ 0x14020FB50 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MiIsPteEvaluated @ 0x14027124C (MiIsPteEvaluated.c)
 *     MiGetPagingFileOffset @ 0x1402712A0 (MiGetPagingFileOffset.c)
 *     MiComputeZeroClusterMaximum @ 0x14027449C (MiComputeZeroClusterMaximum.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiUpdatePageTableUseCount @ 0x1402CF7F4 (MiUpdatePageTableUseCount.c)
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x140330B40 (MiGetProtoPteAddress.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     memset @ 0x140414200 (memset.c)
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
  __int64 v23; // rdx
  int v24; // r13d
  unsigned __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  bool v31; // zf
  __int64 v32; // [rsp+20h] [rbp-79h] BYREF
  __int64 v33; // [rsp+28h] [rbp-71h] BYREF
  unsigned __int64 v34; // [rsp+30h] [rbp-69h]
  unsigned __int64 v35; // [rsp+38h] [rbp-61h]
  __int128 v36; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v37[20]; // [rsp+50h] [rbp-49h] BYREF
  char v39; // [rsp+108h] [rbp+6Fh]
  __int64 v40; // [rsp+110h] [rbp+77h]
  unsigned __int64 v41; // [rsp+118h] [rbp+7Fh]

  v1 = a1;
  memset(v37, 0, 0x60uLL);
  v2 = *(_QWORD *)(v1 + 64);
  v3 = 0;
  v4 = *(_QWORD *)(v1 + 16);
  v5 = *(_QWORD **)(v1 + 56);
  v36 = 0LL;
  v6 = *(_QWORD **)(v2 + 120);
  v33 = 0LL;
  v39 = 0;
  v34 = v4;
  if ( (__int64)v6 < 0 )
    v7 = (unsigned __int64)(*v6 - 1LL) >> 12;
  else
    v7 = -1LL;
  v8 = *(unsigned int *)(v2 + 48);
  if ( (v8 & 0x100000) == 0 && MiVadPageSizes[(v8 >> 18) & 3] == 16 )
  {
    v4 &= 0xFFFFFFFFFFFF0000uLL;
    *((_QWORD *)&v36 + 1) = 0x10000LL;
    *(_QWORD *)&v36 = v4;
    if ( v4 >> 12 < (*(unsigned int *)(v2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 32) << 32))
      || (v4 + 0xFFFF) >> 12 > (*(unsigned int *)(v2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 33) << 32)) )
    {
      return 1LL;
    }
    LOWORD(v37[0]) = 2;
    v37[1] = &v36;
    v5 = v37;
    v37[2] = 1LL;
    v37[3] = 0LL;
    v37[4] = 0LL;
    v39 = 1;
  }
  v35 = MiComputeZeroClusterMaximum(v5, &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6], v2);
  v9 = v4 >> 12;
  v40 = 0LL;
  v10 = 0LL;
  v41 = v4 >> 12;
  v11 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !v35 )
    return 1LL;
  while ( !(unsigned int)MiIsPteEvaluated(v11, *(unsigned int *)(v1 + 32)) )
  {
    ProtoPteAddress = MiGetProtoPteAddress(v2, v9, 4LL, &v33);
    v13 = ProtoPteAddress;
    if ( !ProtoPteAddress || !v33 || v10 && v33 != v10 )
      break;
    if ( ((ProtoPteAddress ^ *(_QWORD *)(v1 + 24)) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      break;
    if ( !v10 )
      v10 = v33;
    if ( v41 - (*(unsigned int *)(v2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 32) << 32)) > v7 )
      break;
    v14 = MI_READ_PTE_LOCK_FREE(ProtoPteAddress);
    v32 = v14;
    if ( (v14 & 1) != 0 || !v14 || (v14 & 0x400) != 0 || (v14 & 0x800) != 0 )
      break;
    PagingFileOffset = MiGetPagingFileOffset(&v32);
    v16 = v40;
    if ( !PagingFileOffset )
    {
      if ( !v3 )
        v16 = v13;
      ++v3;
      v40 = v16;
      v9 = v41 + 1;
      v11 += 8LL;
      ++v41;
      if ( v3 < v35 )
        continue;
    }
    goto LABEL_23;
  }
  v16 = v40;
LABEL_23:
  if ( v3 <= 1 || v39 == 1 && v11 <= ((v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
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
    v32 = MiSwizzleInvalidPte(v21);
    v22 = v32;
    if ( MI_READ_PTE_LOCK_FREE(v19) )
      goto LABEL_33;
    v24 = 0;
    v25 = v22;
    if ( (unsigned int)MiPteInShadowRange(v19, v23) )
    {
      if ( (unsigned int)MiPteHasShadow(v27, v26, v28, v29) )
      {
        v24 = 1;
        if ( HIBYTE(word_140C4E008) )
          goto LABEL_30;
        v31 = (v22 & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_30;
        v31 = (v22 & 1) == 0;
      }
      if ( !v31 )
        v25 = v22 | 0x8000000000000000uLL;
    }
LABEL_30:
    *v19 = v25;
    if ( v24 )
      MiWritePteShadow(v19, v25);
    v1 = a1;
    ++v17;
LABEL_33:
    ++v18;
    v16 = v40 + 8;
    ++v19;
    v40 += 8LL;
  }
  while ( v18 < (unsigned __int64)v3 );
  if ( v17 )
    MiUpdatePageTableUseCount(v34, v17);
  return v3;
}
