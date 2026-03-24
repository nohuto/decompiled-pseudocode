/*
 * XREFs of MiAddPagesToEnclave @ 0x140549104
 * Callers:
 *     MiCommitEnclavePages @ 0x140549784 (MiCommitEnclavePages.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiReservePtes @ 0x1402265B0 (MiReservePtes.c)
 *     MiGetPteFromCopyList @ 0x140240980 (MiGetPteFromCopyList.c)
 *     MiCreatePteCopyList @ 0x140240B38 (MiCreatePteCopyList.c)
 *     MiReleasePtes @ 0x140245800 (MiReleasePtes.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140293FD0 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiReleasePteCopyList @ 0x1402CAA24 (MiReleasePteCopyList.c)
 *     MiPageTableLockIsContended @ 0x140308460 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x14030B7D0 (MiWorkingSetIsContended.c)
 *     MiMakeSystemAddressValid @ 0x14030E390 (MiMakeSystemAddressValid.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     KeAddEnclavePage @ 0x140514F58 (KeAddEnclavePage.c)
 *     MiGetPageForEnclave @ 0x14054A9C4 (MiGetPageForEnclave.c)
 *     MiInitializeEnclavePfn @ 0x14054AA28 (MiInitializeEnclavePfn.c)
 *     MiReserveEnclavePages @ 0x14054B2EC (MiReserveEnclavePages.c)
 *     MiReturnEnclavePage @ 0x14054B420 (MiReturnEnclavePage.c)
 *     MiWriteEnclavePte @ 0x14054B59C (MiWriteEnclavePte.c)
 *     MiReturnReservedEnclavePages @ 0x1409B0D60 (MiReturnReservedEnclavePages.c)
 */

__int64 __fastcall MiAddPagesToEnclave(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned __int64 v5; // rdi
  int v6; // eax
  __int64 result; // rax
  unsigned __int64 v10; // r15
  unsigned __int64 *v11; // rbp
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  ULONG_PTR v14; // rax
  unsigned __int64 v15; // r12
  int v16; // esi
  unsigned __int64 ValidPte; // rbx
  int v18; // edi
  __int64 v19; // r8
  bool v20; // zf
  __int64 v21; // rsi
  __int64 v22; // rbx
  __int64 v23; // rcx
  int v24; // r10d
  unsigned __int8 v25; // cl
  __int64 v26; // rdx
  unsigned __int8 v27; // al
  int v28; // ecx
  char v29; // al
  __int64 v30; // rax
  unsigned __int64 v31; // rdi
  unsigned __int64 v32; // rax
  ULONG_PTR v33; // r14
  __int64 v34; // rdx
  __int64 v35; // r8
  _DWORD *v36; // r9
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rbx
  __int64 v39; // r8
  __int64 v40; // rax
  int v41; // [rsp+30h] [rbp-A8h]
  char v42; // [rsp+34h] [rbp-A4h]
  int v43; // [rsp+38h] [rbp-A0h] BYREF
  unsigned int v44; // [rsp+3Ch] [rbp-9Ch]
  __int64 v45; // [rsp+40h] [rbp-98h]
  unsigned __int64 PteFromCopyList; // [rsp+48h] [rbp-90h]
  __int64 v47; // [rsp+50h] [rbp-88h]
  __int64 v48; // [rsp+58h] [rbp-80h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-78h]
  __int64 v50; // [rsp+68h] [rbp-70h] BYREF
  __int128 v51; // [rsp+70h] [rbp-68h]
  __int64 v52; // [rsp+80h] [rbp-58h]
  __int64 v53; // [rsp+88h] [rbp-50h]
  unsigned __int8 v54; // [rsp+E0h] [rbp+8h]
  unsigned __int64 v55; // [rsp+E8h] [rbp+10h]

  v55 = a2;
  v51 = 0LL;
  v50 = 0LL;
  v5 = a3;
  v6 = *(_DWORD *)(a1 + 64);
  v43 = 0;
  if ( (v6 & 2) != 0 && (*(_DWORD *)(a1 + 72) & 1) == 0 )
    return 3221225496LL;
  v10 = 0LL;
  v11 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v12 = *(_QWORD *)(qword_140C4E648 + 8LL * *((unsigned __int16 *)v11 + 87));
  v13 = *(_QWORD *)(a1 + 104);
  v52 = v12;
  if ( v13 >= a2 || (v10 = a2 - v13, result = MiReserveEnclavePages(a1, v12, a2 - v13), (int)result >= 0) )
  {
    if ( (*(_DWORD *)(a1 + 64) & 2) != 0 )
    {
      v22 = 0LL;
      v48 = 0LL;
      v15 = 0LL;
      v21 = 0LL;
LABEL_21:
      v23 = 20LL;
      v47 = 0LL;
      if ( a2 <= 0x14 )
        v23 = a2;
      MiCreatePteCopyList(v23 + 1, v23 + 1, (__int64)&v50, a4);
      if ( !HIDWORD(v50) )
        goto LABEL_8;
      v24 = 4;
      v25 = (a5 >> 1) & 2 | 0x35;
      if ( (a5 & 2) == 0 )
        v25 = (a5 >> 1) & 2 | 0x31;
      v26 = v25;
      v27 = v25;
      v28 = *(_DWORD *)(a1 + 64) & 2;
      if ( !v28 )
        v24 = a5;
      v29 = v27 | 0x40;
      v44 = v24;
      if ( !v28 )
        v29 = v26;
      v42 = v29;
      v53 = (__int64)(*(_QWORD *)(a1 + 80) << 25) >> 16;
      v30 = v5 << 25;
      v31 = 0LL;
      v45 = v30 >> 16;
      v54 = MiLockWorkingSetShared((__int64)v11, v26, (a5 >> 1) & 2 | 0x31, (_DWORD *)a5);
      v32 = a3;
      v33 = a3;
      if ( a3 > a4 )
      {
LABEL_67:
        MiUnlockWorkingSetShared((__int64)v11, v54);
        v16 = 0;
        goto LABEL_68;
      }
      while ( 1 )
      {
        if ( (v33 & 0x78) == 0 && v33 != v32 )
        {
          if ( MiWorkingSetIsContended((__int64)v11) || KeShouldYieldProcessor() )
            goto LABEL_37;
          if ( !v31 )
            goto LABEL_43;
          if ( (unsigned int)MiPageTableLockIsContended((__int64)v11, v31) )
          {
LABEL_37:
            if ( v31 )
            {
              MiUnlockPageTableInternal((__int64)v11, v31);
              v31 = 0LL;
            }
            MiUnlockWorkingSetShared((__int64)v11, v54);
            MiLockWorkingSetShared((__int64)v11, v34, v35, v36);
          }
        }
        if ( v31 )
        {
          if ( (v33 & 0xFFF) != 0 )
            goto LABEL_44;
          MiUnlockPageTableInternal((__int64)v11, v31);
        }
LABEL_43:
        v31 = ((v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiMakeSystemAddressValid(v33, 0LL, (*(_DWORD *)(a1 + 48) >> 12) & 0x3F, v54, 0);
LABEL_44:
        if ( (MI_READ_PTE_LOCK_FREE(v33) & 1) != 0 )
          goto LABEL_58;
        v37 = v10 - 1;
        if ( v10 != v55 )
          v37 = v10;
        --v55;
        v10 = v37;
        BugCheckParameter2 = MiGetPageForEnclave(a1, v52);
        PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList((unsigned int *)&v50, BugCheckParameter2, -1LL);
        v16 = KeAddEnclavePage(v53, v22, (__int64)((PteFromCopyList << 25) - v21) >> 16, v45, v42, &v43);
        v38 = ZeroPte;
        v41 = 0;
        if ( MiPteInShadowRange(PteFromCopyList) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v41 = 1;
            if ( !HIBYTE(word_140C4E008) )
              goto LABEL_52;
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
LABEL_52:
            if ( (ZeroPte & 1) != 0 )
              v38 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        v40 = PteFromCopyList;
        *(_QWORD *)PteFromCopyList = v38;
        if ( v41 )
          MiWritePteShadow(v40, v38, v39);
        if ( v16 < 0 )
        {
          MiReturnEnclavePage(BugCheckParameter2);
          if ( v16 == -1073740657 )
            v16 = -1073741823;
          if ( v31 )
            MiUnlockPageTableInternal((__int64)v11, v31);
          MiUnlockWorkingSetShared((__int64)v11, v54);
LABEL_68:
          MiReleasePteCopyList((__int64)&v50);
          if ( v15 )
            MiReleasePtes((__int64)&qword_140C4EF40, (_QWORD *)v15, 1u);
          if ( v10 )
            MiReturnReservedEnclavePages(a1, v10);
          return (unsigned int)v16;
        }
        MiInitializeEnclavePfn(BugCheckParameter2, v33, v44);
        MiMakeValidPte(v33, BugCheckParameter2, v44 | 0x80000000);
        MiWriteEnclavePte(v33, 0);
        v21 = v47;
LABEL_58:
        v45 += 4096LL;
        v33 += 8LL;
        if ( v33 > a4 )
        {
          if ( v31 )
            MiUnlockPageTableInternal((__int64)v11, v31);
          goto LABEL_67;
        }
        v22 = v48;
        v32 = a3;
      }
    }
    v14 = MiReservePtes((__int64)&qword_140C4EF40, 1u, a3, a4);
    v15 = v14;
    if ( !v14 )
    {
LABEL_8:
      v16 = -1073741670;
      goto LABEL_68;
    }
    ValidPte = MiMakeValidPte(v14, qword_140C4ED80, 536870913);
    v18 = 0;
    if ( MiPteInShadowRange(v15) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v18 = 1;
        if ( !HIBYTE(word_140C4E008) )
        {
          v20 = (ValidPte & 1) == 0;
          goto LABEL_15;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v20 = (ValidPte & 1) == 0;
LABEL_15:
        if ( !v20 )
          ValidPte |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v15 = ValidPte;
    if ( v18 )
      MiWritePteShadow(v15, ValidPte, v19);
    v5 = a3;
    v21 = 0LL;
    v22 = (__int64)(v15 << 25) >> 16;
    v48 = v22;
    goto LABEL_21;
  }
  return result;
}
