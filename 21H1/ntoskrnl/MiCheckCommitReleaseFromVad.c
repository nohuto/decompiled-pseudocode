/*
 * XREFs of MiCheckCommitReleaseFromVad @ 0x1405255EC
 * Callers:
 *     MiReleaseOutSwappedProcessCommit @ 0x140526BE8 (MiReleaseOutSwappedProcessCommit.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockTransitionLeafPage @ 0x1402ACD48 (MiLockTransitionLeafPage.c)
 *     MiGetNextPageTable @ 0x1402AF130 (MiGetNextPageTable.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiLocateCloneAddress @ 0x1402FD5A4 (MiLocateCloneAddress.c)
 *     MiRotatedToFrameBuffer @ 0x140300408 (MiRotatedToFrameBuffer.c)
 *     MiIsPteInStore @ 0x1403441B4 (MiIsPteInStore.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140344F70 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPrototypePteVadLookup @ 0x140345200 (MiIsPrototypePteVadLookup.c)
 *     MiComputeCommitChargeForZeroPteRange @ 0x140525A04 (MiComputeCommitChargeForZeroPteRange.c)
 *     MiComputeImageVadCommitCharge @ 0x140525AB8 (MiComputeImageVadCommitCharge.c)
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
  __int64 v15; // r8
  unsigned __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // rbp
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r8
  __int64 v24; // rax
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
  v7 = a3;
  v29 = 0;
  v31 = 0LL;
  v10 = 0LL;
  v11 = 8 * ((*(unsigned int *)(a4 + 24) | v6) & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v12 = 8 * ((*(unsigned int *)(a4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32)) & 0xFFFFFFFFFLL)
      - 0x98000000000LL;
  v33 = v12;
  v13 = MiLockWorkingSetShared(a3);
  for ( i = v13; v11 <= v12; v13 = i )
  {
    NextPageTable = MiGetNextPageTable(v11, v12, 0LL, v13, 0, &v29);
    v16 = NextPageTable;
    if ( NextPageTable != v11 )
    {
      v17 = NextPageTable ? (__int64)(NextPageTable - v11) >> 3 : ((__int64)(v12 - v11) >> 3) + 1;
      v10 += MiComputeCommitChargeForZeroPteRange(a4, v11, v17);
      if ( !v16 )
        break;
    }
    v11 = v16;
    v18 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v19 = v12;
    v32 = v18;
    if ( (v16 & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v12 )
      v19 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( v16 <= v19 )
    {
      while ( 1 )
      {
        v20 = MI_READ_PTE_LOCK_FREE(v11);
        v30 = v20;
        v15 = v20;
        if ( !v20 )
          break;
        if ( (v20 & 1) != 0 )
        {
          if ( (v20 & 0x200) == 0 || (*(_DWORD *)(a4 + 48) & 0x70) == 0x40 && MiRotatedToFrameBuffer(v11) )
            goto LABEL_48;
          v22 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v30) >> 12) & 0xFFFFFFFFFLL)
              - 0x58000000000LL;
          if ( (*(_QWORD *)(v22 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(v22 + 8) > 0 )
            goto LABEL_48;
          if ( *(_QWORD *)(a2 + 1264) && MiLocateCloneAddress(a2, *(_QWORD *)(v22 + 8) | 0x8000000000000000uLL) )
            goto LABEL_48;
LABEL_47:
          ++v10;
          goto LABEL_48;
        }
        if ( (v20 & 0x400) != 0 )
        {
          if ( MiIsPrototypePteVadLookup(v20) )
          {
            v24 = v10 + 1;
            v15 = (v23 >> 5) & 5;
            if ( (_BYTE)v15 != 5 )
              v24 = v10;
            v10 = v24;
            goto LABEL_48;
          }
          if ( MI_PROTO_FORMAT_COMBINED(v23) )
            goto LABEL_48;
          if ( *(_QWORD *)(a2 + 1264) )
          {
            if ( qword_140C4DE80 && (v15 & 0x10) == 0 )
              v15 &= ~qword_140C4DE80;
            if ( MiLocateCloneAddress(a2, v15 >> 16) )
              goto LABEL_48;
          }
          v21 = MiComputeImageVadCommitCharge(a4, (unsigned __int64)((__int64)(v11 << 25) >> 16) >> 12, 1LL, &v31);
          goto LABEL_33;
        }
        if ( (v20 & 0x800) != 0 )
        {
          v25 = MiLockTransitionLeafPage(v11, 0LL);
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
          goto LABEL_48;
        }
        if ( (v20 & 4) != 0 )
        {
          if ( !a5 )
            goto LABEL_48;
          v26 = (unsigned int)MiIsPteInStore(a1, v20) == 0;
        }
        else
        {
          v15 = v20 >> 5;
          LOBYTE(v15) = (v20 >> 5) & 0x1F;
          v26 = (_BYTE)v15 == 16;
        }
        if ( !v26 )
          goto LABEL_47;
LABEL_48:
        v11 += 8LL;
        if ( v11 > v19 )
        {
          v18 = v32;
          v12 = v33;
          goto LABEL_50;
        }
      }
      v21 = MiComputeCommitChargeForZeroPteRange(a4, v11, 1LL);
LABEL_33:
      v10 += v21;
      goto LABEL_48;
    }
LABEL_50:
    v27 = v18;
    v7 = a3;
    MiUnlockPageTableInternal(a3, v27, v15);
  }
  MiUnlockWorkingSetShared(v7, v13);
  return v10;
}
