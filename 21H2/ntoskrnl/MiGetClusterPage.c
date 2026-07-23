/*
 * XREFs of MiGetClusterPage @ 0x140555BB0
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x1402B4A20 (MiResolvePrivateZeroFault.c)
 *     MiCreateSharedZeroPages @ 0x1402E5FC0 (MiCreateSharedZeroPages.c)
 * Callees:
 *     MiIsPteEvaluated @ 0x14025F1EC (MiIsPteEvaluated.c)
 *     MiComputeZeroClusterMaximum @ 0x14026243C (MiComputeZeroClusterMaximum.c)
 *     MiGetPageChain @ 0x1402B7610 (MiGetPageChain.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402E08FC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiInitializePageColorBase @ 0x1402E3AD0 (MiInitializePageColorBase.c)
 *     MiProtectionToCacheAttribute @ 0x1402E6690 (MiProtectionToCacheAttribute.c)
 *     MiGetLargePage @ 0x14030E784 (MiGetLargePage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x14033B890 (MiGetProtoPteAddress.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403F5C28 (MiConvertEntireLargePageToSmall.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MiGetClusterPage(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _BYTE *a6)
{
  unsigned __int64 v8; // rcx
  unsigned __int64 *v9; // r10
  unsigned __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // r10
  unsigned __int64 v13; // r11
  unsigned int v14; // edi
  __int64 v15; // rcx
  unsigned __int64 v16; // r14
  __int64 v17; // r15
  __int64 ProtoPteAddress; // r10
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rdi
  __int64 v26; // rdx
  bool v27; // zf
  unsigned __int64 v28; // rdx
  __int64 v29; // r14
  __int64 v30; // r8
  __int64 v31; // r13
  int v32; // eax
  unsigned int v33; // r9d
  __int64 LargePage; // r15
  __int64 result; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // r15
  unsigned int v39; // eax
  bool v40; // zf
  __int64 v42; // [rsp+48h] [rbp-B8h]
  __int64 v43; // [rsp+50h] [rbp-B0h]
  _QWORD v44[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+68h] [rbp-98h] BYREF
  __int64 v46; // [rsp+70h] [rbp-90h] BYREF
  _BYTE *v47; // [rsp+78h] [rbp-88h]
  __int128 v48; // [rsp+80h] [rbp-80h] BYREF
  __int64 v49; // [rsp+90h] [rbp-70h]
  unsigned __int64 v50; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v51[28]; // [rsp+A0h] [rbp-60h] BYREF

  v49 = a3;
  v47 = a6;
  v48 = 0LL;
  memset(v51, 0, 0x60uLL);
  *a6 = 0;
  v8 = (unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32;
  v45 = 0LL;
  v9 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v10 = *(unsigned int *)(a1 + 24) | v8;
  v42 = (__int64)v9;
  v44[0] = a2 & 0xFFFFFFFFFFFF0000uLL;
  v44[1] = 0x10000LL;
  if ( (a2 & 0xFFFFFFFFFFFF0000uLL) >> 12 < v10
    || ((a2 & 0xFFFFFFFFFFFF0000uLL) + 0xFFFF) >> 12 > (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) )
  {
    return 0LL;
  }
  v11 = (*(_DWORD *)(a1 + 48) >> 12) & 0x3F;
  MiInitializePageColorBase((__int64)v9, v11, (__int64)&v48);
  v14 = HIDWORD(v48) >> byte_140C4DECC;
  v27 = (*(_DWORD *)(a1 + 48) & 0x100000) == 0;
  LOWORD(v51[0]) = 2;
  v51[1] = v44;
  v51[2] = 1LL;
  v51[3] = v13;
  v51[4] = v13;
  if ( v27 )
  {
    ProtoPteAddress = MiGetProtoPteAddress(a1, a2 >> 12, 0, &v45);
    v19 = *(_QWORD *)(v45 + 8);
    v20 = ((a2 & 0xFFFFFFFFFFFFF000uLL) - v44[0]) >> 12;
    v21 = v19 + 8 * (*(unsigned int *)(v45 + 44) - (unsigned __int64)(*(_DWORD *)(v45 + 52) & 0x3FFFFFFF));
    if ( (ProtoPteAddress & 0xFFFFFFFFFFFFF000uLL) > v19 )
      v19 = ProtoPteAddress & 0xFFFFFFFFFFFFF000uLL;
    v22 = (ProtoPteAddress & 0xFFFFFFFFFFFFF000uLL) + 4096;
    v16 = ProtoPteAddress - 8 * v20;
    if ( v16 < v19 )
      return 0LL;
    if ( v21 <= v22 )
      v22 = v21;
    if ( ProtoPteAddress + 8 * (16 - v20) > v22 )
      return 0LL;
    v17 = ((v44[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v15 = *(_WORD *)(*(_QWORD *)v45 + 60LL) & 0x3FF;
    v13 = 0LL;
  }
  else
  {
    v15 = *(unsigned __int16 *)(v12 + 174);
    v16 = ((v44[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v17 = (unsigned int)v13;
  }
  v23 = v14;
  v24 = v13;
  v43 = *(_QWORD *)(qword_140C4E688 + 8 * v15);
  *(_BYTE *)(4544 * v23 + *(_QWORD *)(v43 + 16) + 3251) = 1;
  do
  {
    v51[v24 + 12] = MI_READ_PTE_LOCK_FREE(v16 + 8 * v24);
    ++v24;
  }
  while ( v24 < 0x10 );
  v25 = 0LL;
  do
  {
    v26 = v51[v25 + 12];
    v46 = v26;
    if ( a5 )
    {
      if ( IS_PTE_NOT_DEMAND_ZERO(v26) )
        break;
      v27 = ((v28 >> 5) & 0x1F) == a5;
    }
    else
    {
      v27 = v26 == 0;
    }
    if ( !v27 || v17 && MiIsPteEvaluated(v17, a5) )
      break;
    if ( ++v25 == v49 )
      break;
  }
  while ( v25 < 0x10 );
  v29 = -1LL;
  if ( v25 == 16 )
  {
    v30 = a1;
    v31 = v42;
    if ( MiComputeZeroClusterMaximum((__int64)v51, v42, v30) != 16 )
      return 0LL;
    _InterlockedExchangeAdd((volatile signed __int32 *)v48, 1u);
    v32 = MiProtectionToCacheAttribute(a4);
    LargePage = MiGetLargePage(v43, 2u, v32, v33, 4, 0LL);
    if ( LargePage )
    {
      MiConvertEntireLargePageToSmall(LargePage, 2, 2LL, 1LL, 0LL, 0LL);
      return LargePage;
    }
  }
  else
  {
    v25 = 0LL;
    while ( 1 )
    {
      v46 = v51[v25 + 12];
      if ( (v46 & 1) != 0 )
        break;
      if ( ++v25 >= 0x10 )
        goto LABEL_33;
    }
    v36 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v46);
    v29 = (v36 >> 12) & 0xFFFFFFFFFLL;
    if ( (unsigned __int16)v36 >> 12 != v25 )
      return 0LL;
LABEL_33:
    v31 = v42;
  }
  v37 = (a2 >> 9) & 0x7FFFFFFFF8LL;
  v50 = 1LL;
  v38 = ((v37 - ((v44[0] >> 9) & 0x7FFFFFFFF8LL)) >> 3) & 0xF;
  v39 = MiProtectionToCacheAttribute(a4);
  result = MiGetPageChain(v43, v31, v11, v39, 258, v38, &v50);
  if ( !result )
    return 0LL;
  if ( v25 == 16 )
    v40 = (((result + 0x58000000000LL) / 48) & 0xF) == v38;
  else
    v40 = v29 + ((v37 - ((v44[0] >> 9) & 0x7FFFFFFFF8LL)) >> 3) - v25 == (result + 0x58000000000LL) / 48;
  if ( !v40 )
    *v47 = 1;
  return result;
}
