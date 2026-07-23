/*
 * XREFs of MiExpandSharedZeroCluster @ 0x14025EF28
 * Callers:
 *     MiResolveDemandZeroFault @ 0x1402B4450 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiUpdatePageTableUseCount @ 0x14024DB74 (MiUpdatePageTableUseCount.c)
 *     MiIsPteEvaluated @ 0x14025F1EC (MiIsPteEvaluated.c)
 *     MiGetPagingFileOffset @ 0x14025F240 (MiGetPagingFileOffset.c)
 *     MiComputeZeroClusterMaximum @ 0x14026243C (MiComputeZeroClusterMaximum.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x14033B890 (MiGetProtoPteAddress.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     memset @ 0x140414300 (memset.c)
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
  __int64 v15; // rdx
  __int64 v16; // r8
  int PagingFileOffset; // eax
  __int64 v18; // rdx
  unsigned int v19; // r14d
  unsigned int v20; // r12d
  unsigned __int64 *v21; // rsi
  int v22; // ecx
  __int64 v23; // rcx
  unsigned __int64 v24; // rdi
  int v25; // r13d
  unsigned __int64 v26; // rbx
  bool v28; // zf
  __int64 v29; // [rsp+20h] [rbp-79h] BYREF
  __int64 v30; // [rsp+28h] [rbp-71h] BYREF
  unsigned __int64 v31; // [rsp+30h] [rbp-69h]
  unsigned __int64 v32; // [rsp+38h] [rbp-61h]
  __int128 v33; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v34[20]; // [rsp+50h] [rbp-49h] BYREF
  char v36; // [rsp+108h] [rbp+6Fh]
  __int64 v37; // [rsp+110h] [rbp+77h]
  unsigned __int64 v38; // [rsp+118h] [rbp+7Fh]

  v1 = a1;
  memset(v34, 0, 0x60uLL);
  v2 = *(_QWORD *)(v1 + 64);
  v3 = 0;
  v4 = *(_QWORD *)(v1 + 16);
  v5 = *(_QWORD **)(v1 + 56);
  v33 = 0LL;
  v6 = *(_QWORD **)(v2 + 120);
  v30 = 0LL;
  v36 = 0;
  v31 = v4;
  if ( (__int64)v6 < 0 )
    v7 = (unsigned __int64)(*v6 - 1LL) >> 12;
  else
    v7 = -1LL;
  v8 = *(unsigned int *)(v2 + 48);
  if ( (v8 & 0x100000) == 0 && MiVadPageSizes[(v8 >> 18) & 3] == 16 )
  {
    v4 &= 0xFFFFFFFFFFFF0000uLL;
    *((_QWORD *)&v33 + 1) = 0x10000LL;
    *(_QWORD *)&v33 = v4;
    if ( v4 >> 12 < (*(unsigned int *)(v2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 32) << 32))
      || (v4 + 0xFFFF) >> 12 > (*(unsigned int *)(v2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 33) << 32)) )
    {
      return 1LL;
    }
    LOWORD(v34[0]) = 2;
    v34[1] = &v33;
    v5 = v34;
    v34[2] = 1LL;
    v34[3] = 0LL;
    v34[4] = 0LL;
    v36 = 1;
  }
  v32 = MiComputeZeroClusterMaximum(v5, &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6], v2);
  v9 = v4 >> 12;
  v37 = 0LL;
  v10 = 0LL;
  v38 = v4 >> 12;
  v11 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !v32 )
    return 1LL;
  while ( !(unsigned int)MiIsPteEvaluated(v11, *(unsigned int *)(v1 + 32)) )
  {
    ProtoPteAddress = MiGetProtoPteAddress(v2, v9, 4LL, &v30);
    v13 = ProtoPteAddress;
    if ( !ProtoPteAddress || !v30 || v10 && v30 != v10 )
      break;
    if ( ((ProtoPteAddress ^ *(_QWORD *)(v1 + 24)) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      break;
    if ( !v10 )
      v10 = v30;
    if ( v38 - (*(unsigned int *)(v2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 32) << 32)) > v7 )
      break;
    v14 = MI_READ_PTE_LOCK_FREE(ProtoPteAddress);
    v29 = v14;
    if ( (v14 & 1) != 0 || !v14 || (v14 & 0x400) != 0 || (v14 & 0x800) != 0 )
      break;
    PagingFileOffset = MiGetPagingFileOffset(&v29, v15, v16);
    v18 = v37;
    if ( !PagingFileOffset )
    {
      if ( !v3 )
        v18 = v13;
      ++v3;
      v37 = v18;
      v9 = v38 + 1;
      v11 += 8LL;
      ++v38;
      if ( v3 < v32 )
        continue;
    }
    goto LABEL_23;
  }
  v18 = v37;
LABEL_23:
  if ( v3 <= 1 || v36 == 1 && v11 <= ((v31 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    return 1LL;
  v19 = 0;
  v20 = 0;
  v21 = (unsigned __int64 *)(v11 - 8LL * v3);
  do
  {
    v22 = *(_DWORD *)(v1 + 32);
    if ( v22 == 256 )
      v23 = (v18 << 16) | 0x400;
    else
      v23 = 32 * (v22 & 0x1F | 0xFFFFFFFFF8000020uLL);
    v29 = MiSwizzleInvalidPte(v23);
    v24 = v29;
    if ( MI_READ_PTE_LOCK_FREE(v21) )
      goto LABEL_33;
    v25 = 0;
    v26 = v24;
    if ( (unsigned int)MiPteInShadowRange(v21) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v25 = 1;
        if ( HIBYTE(word_140C4E048) )
          goto LABEL_30;
        v28 = (v24 & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_30;
        v28 = (v24 & 1) == 0;
      }
      if ( !v28 )
        v26 = v24 | 0x8000000000000000uLL;
    }
LABEL_30:
    *v21 = v26;
    if ( v25 )
      MiWritePteShadow((__int64)v21, v26);
    v1 = a1;
    ++v19;
LABEL_33:
    ++v20;
    v18 = v37 + 8;
    ++v21;
    v37 += 8LL;
  }
  while ( v20 < (unsigned __int64)v3 );
  if ( v19 )
    MiUpdatePageTableUseCount(v31, v19);
  return v3;
}
