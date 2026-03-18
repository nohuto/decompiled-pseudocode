/*
 * XREFs of MiCheckCommitReleaseFromVad @ 0x14057FA8C
 * Callers:
 *     MiReleaseOutSwappedProcessCommit @ 0x140581158 (MiReleaseOutSwappedProcessCommit.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiIsPteInStore @ 0x140232E74 (MiIsPteInStore.c)
 *     MiLocateCloneAddress @ 0x140234F14 (MiLocateCloneAddress.c)
 *     MiRotatedToFrameBuffer @ 0x1402433D0 (MiRotatedToFrameBuffer.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1402802DC (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPrototypePteVadLookup @ 0x1402806A0 (MiIsPrototypePteVadLookup.c)
 *     MiGetNextPageTable @ 0x14028F080 (MiGetNextPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiLockTransitionLeafPageEx @ 0x140315D60 (MiLockTransitionLeafPageEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiComputeCommitChargeForZeroPteRange @ 0x14057FEA4 (MiComputeCommitChargeForZeroPteRange.c)
 *     MiComputeImageVadCommitCharge @ 0x14057FF58 (MiComputeImageVadCommitCharge.c)
 */

__int64 __fastcall MiCheckCommitReleaseFromVad(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, _QWORD *a6)
{
  unsigned __int64 v6; // r10
  __int64 v8; // rbp
  __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r12
  char v13; // r15
  __int64 NextPageTable; // rax
  unsigned __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // rbp
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rax
  bool v26; // zf
  unsigned __int64 v27; // rdx
  int v29; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-60h] BYREF
  __int64 v31; // [rsp+40h] [rbp-58h] BYREF
  __int64 v32; // [rsp+48h] [rbp-50h]
  unsigned __int64 v33; // [rsp+50h] [rbp-48h]
  char i; // [rsp+B8h] [rbp+20h]

  v6 = (unsigned __int64)*(unsigned __int8 *)(a4 + 32) << 32;
  v29 = 0;
  v31 = 0LL;
  v8 = a3;
  v10 = 0LL;
  v11 = 8 * ((*(unsigned int *)(a4 + 24) | v6) & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v12 = 8 * ((*(unsigned int *)(a4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32)) & 0xFFFFFFFFFLL)
      - 0x98000000000LL;
  v33 = v12;
  v13 = MiLockWorkingSetShared(a3);
  for ( i = v13; v11 <= v12; v13 = i )
  {
    NextPageTable = MiGetNextPageTable(v11, v12, 0LL, v13, 0, &v29);
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
    v32 = v17;
    if ( (v15 & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v12 )
      v18 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( v15 <= v18 )
    {
      while ( 1 )
      {
        v19 = MI_READ_PTE_LOCK_FREE(v11);
        v30 = v19;
        if ( !v19 )
          break;
        if ( (v19 & 1) != 0 )
        {
          if ( (v19 & 0x200) == 0 || (*(_DWORD *)(a4 + 48) & 0x70) == 0x40 && MiRotatedToFrameBuffer(v11) )
            goto LABEL_49;
          v21 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v30) >> 12) & 0xFFFFFFFFFFLL)
              - 0x220000000000LL;
          if ( !_bittest64((const signed __int64 *)(v21 + 40), 0x28u) && *(__int64 *)(v21 + 8) > 0 )
            goto LABEL_49;
          if ( *(_QWORD *)(a2 + 1264) && MiLocateCloneAddress(a2, *(_QWORD *)(v21 + 8) | 0x8000000000000000uLL) )
            goto LABEL_49;
LABEL_48:
          ++v10;
          goto LABEL_49;
        }
        if ( (v19 & 0x400) != 0 )
        {
          if ( MiIsPrototypePteVadLookup(v19) )
          {
            v23 = v10 + 1;
            if ( ((v22 >> 5) & 5) != 5 )
              v23 = v10;
            v10 = v23;
            goto LABEL_49;
          }
          if ( MI_PROTO_FORMAT_COMBINED(v22) )
            goto LABEL_49;
          if ( *(_QWORD *)(a2 + 1264) )
          {
            if ( qword_140C50780 )
            {
              if ( (v24 & 0x10) != 0 )
                v24 &= ~0x10uLL;
              else
                v24 &= ~qword_140C50780;
            }
            if ( MiLocateCloneAddress(a2, v24 >> 16) )
              goto LABEL_49;
          }
          v20 = MiComputeImageVadCommitCharge(a4, (unsigned __int64)((__int64)(v11 << 25) >> 16) >> 12, 1LL, &v31);
          goto LABEL_34;
        }
        if ( (v19 & 0x800) != 0 )
        {
          v25 = MiLockTransitionLeafPageEx(v11, 0LL, 0);
          if ( v25 )
          {
            if ( (*(_BYTE *)(v25 + 34) & 0x10) == 0 && (*(_DWORD *)(v25 + 16) & 4) == 0 && !*(_WORD *)(v25 + 32) )
              ++*a6;
            _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          else
          {
            v11 -= 8LL;
          }
          goto LABEL_49;
        }
        if ( (v19 & 4) != 0 )
        {
          if ( !a5 )
            goto LABEL_49;
          v26 = (unsigned int)MiIsPteInStore(a1, v19) == 0;
        }
        else
        {
          v26 = ((v19 >> 5) & 0x1F) == 16;
        }
        if ( !v26 )
          goto LABEL_48;
LABEL_49:
        v11 += 8LL;
        if ( v11 > v18 )
        {
          v17 = v32;
          v12 = v33;
          goto LABEL_51;
        }
      }
      v20 = MiComputeCommitChargeForZeroPteRange(a4, v11, 1LL);
LABEL_34:
      v10 += v20;
      goto LABEL_49;
    }
LABEL_51:
    v27 = v17;
    v8 = a3;
    MiUnlockPageTableInternal(a3, v27);
  }
  MiUnlockWorkingSetShared(v8, v13);
  return v10;
}
