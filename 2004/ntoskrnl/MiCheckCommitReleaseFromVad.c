/*
 * XREFs of MiCheckCommitReleaseFromVad @ 0x140525C3C
 * Callers:
 *     MiReleaseOutSwappedProcessCommit @ 0x140527238 (MiReleaseOutSwappedProcessCommit.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockTransitionLeafPage @ 0x140253D18 (MiLockTransitionLeafPage.c)
 *     MiGetNextPageTable @ 0x140256100 (MiGetNextPageTable.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiIsPteInStore @ 0x140314E74 (MiIsPteInStore.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140315C30 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPrototypePteVadLookup @ 0x140315EC0 (MiIsPrototypePteVadLookup.c)
 *     MiLocateCloneAddress @ 0x14033A8E4 (MiLocateCloneAddress.c)
 *     MiRotatedToFrameBuffer @ 0x14033CD08 (MiRotatedToFrameBuffer.c)
 *     MiComputeCommitChargeForZeroPteRange @ 0x140526054 (MiComputeCommitChargeForZeroPteRange.c)
 *     MiComputeImageVadCommitCharge @ 0x140526108 (MiComputeImageVadCommitCharge.c)
 */

__int64 __fastcall MiCheckCommitReleaseFromVad(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, _QWORD *a6)
{
  unsigned __int64 v6; // r10
  __int64 v7; // rbp
  __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r15
  char v13; // r12
  __int64 NextPageTable; // rax
  unsigned __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // rbp
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rdx
  unsigned __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rax
  bool v28; // zf
  unsigned __int64 v29; // rdx
  int v31; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v32; // [rsp+38h] [rbp-60h] BYREF
  __int64 v33; // [rsp+40h] [rbp-58h] BYREF
  __int64 v34; // [rsp+48h] [rbp-50h]
  unsigned __int64 v35; // [rsp+50h] [rbp-48h]
  char i; // [rsp+B8h] [rbp+20h]

  v6 = (unsigned __int64)*(unsigned __int8 *)(a4 + 32) << 32;
  v7 = a3;
  v31 = 0;
  v33 = 0LL;
  v10 = 0LL;
  v11 = 8 * ((*(unsigned int *)(a4 + 24) | v6) & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v12 = 8 * ((*(unsigned int *)(a4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32)) & 0xFFFFFFFFFLL)
      - 0x98000000000LL;
  v35 = v12;
  v13 = MiLockWorkingSetShared(a3);
  for ( i = v13; v11 <= v12; v13 = i )
  {
    NextPageTable = MiGetNextPageTable(v11, v12, 0LL, v13, 0, &v31);
    v15 = NextPageTable;
    if ( NextPageTable != v11 )
    {
      v16 = NextPageTable ? (__int64)(NextPageTable - v11) >> 3 : ((__int64)(v12 - v11) >> 3) + 1;
      v10 += MiComputeCommitChargeForZeroPteRange(a4, v11, v16);
      if ( !v15 )
        break;
    }
    v11 = v15;
    v17 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v18 = v12;
    v34 = v17;
    if ( (v15 & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v12 )
      v18 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( v15 <= v18 )
    {
      while ( 1 )
      {
        v19 = MI_READ_PTE_LOCK_FREE(v11);
        v32 = v19;
        if ( !v19 )
          break;
        if ( (v19 & 1) != 0 )
        {
          if ( (v19 & 0x200) == 0 || (*(_DWORD *)(a4 + 48) & 0x70) == 0x40 && MiRotatedToFrameBuffer(v11) )
            goto LABEL_48;
          v21 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v32) >> 12) & 0xFFFFFFFFFLL)
              - 0x58000000000LL;
          if ( (*(_QWORD *)(v21 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(v21 + 8) > 0 )
            goto LABEL_48;
          if ( *(_QWORD *)(a2 + 1264) && MiLocateCloneAddress(a2, *(_QWORD *)(v21 + 8) | 0x8000000000000000uLL) )
            goto LABEL_48;
LABEL_47:
          ++v10;
          goto LABEL_48;
        }
        if ( (v19 & 0x400) != 0 )
        {
          if ( MiIsPrototypePteVadLookup(v19) )
          {
            v25 = v10 + 1;
            if ( ((v23 >> 5) & 5) != 5 )
              v25 = v10;
            v10 = v25;
            goto LABEL_48;
          }
          if ( MI_PROTO_FORMAT_COMBINED(v23, v22, v23, v24) )
            goto LABEL_48;
          if ( *(_QWORD *)(a2 + 1264) )
          {
            if ( qword_140C4DD40 && (v26 & 0x10) == 0 )
              v26 &= ~qword_140C4DD40;
            if ( MiLocateCloneAddress(a2, v26 >> 16) )
              goto LABEL_48;
          }
          v20 = MiComputeImageVadCommitCharge(a4, (unsigned __int64)((__int64)(v11 << 25) >> 16) >> 12, 1LL, &v33);
          goto LABEL_33;
        }
        if ( (v19 & 0x800) != 0 )
        {
          v27 = MiLockTransitionLeafPage(v11, 0LL);
          if ( v27 )
          {
            if ( (*(_BYTE *)(v27 + 34) & 0x10) == 0 && (*(_DWORD *)(v27 + 16) & 4) == 0 && !*(_WORD *)(v27 + 32) )
              ++*a6;
            _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          else
          {
            v11 -= 8LL;
          }
          goto LABEL_48;
        }
        if ( (v19 & 4) != 0 )
        {
          if ( !a5 )
            goto LABEL_48;
          v28 = (unsigned int)MiIsPteInStore(a1, v19) == 0;
        }
        else
        {
          v28 = ((v19 >> 5) & 0x1F) == 16;
        }
        if ( !v28 )
          goto LABEL_47;
LABEL_48:
        v11 += 8LL;
        if ( v11 > v18 )
        {
          v17 = v34;
          v12 = v35;
          goto LABEL_50;
        }
      }
      v20 = MiComputeCommitChargeForZeroPteRange(a4, v11, 1LL);
LABEL_33:
      v10 += v20;
      goto LABEL_48;
    }
LABEL_50:
    v29 = v17;
    v7 = a3;
    MiUnlockPageTableInternal(a3, v29);
  }
  MiUnlockWorkingSetShared(v7, v13);
  return v10;
}
