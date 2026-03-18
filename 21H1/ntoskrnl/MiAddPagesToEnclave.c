/*
 * XREFs of MiAddPagesToEnclave @ 0x1405435E4
 * Callers:
 *     MiCommitEnclavePages @ 0x140543C64 (MiCommitEnclavePages.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiGetPteFromCopyList @ 0x140222160 (MiGetPteFromCopyList.c)
 *     MiCreatePteCopyList @ 0x1402244A8 (MiCreatePteCopyList.c)
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiMakeSystemAddressValid @ 0x1402AE710 (MiMakeSystemAddressValid.c)
 *     MiWorkingSetIsContended @ 0x1402B19F0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402B32C0 (MiPageTableLockIsContended.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402EE280 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiReleasePteCopyList @ 0x14031B3E8 (MiReleasePteCopyList.c)
 *     KeAddEnclavePage @ 0x14050F498 (KeAddEnclavePage.c)
 *     MiGetPageForEnclave @ 0x140544EA4 (MiGetPageForEnclave.c)
 *     MiInitializeEnclavePfn @ 0x140544F08 (MiInitializeEnclavePfn.c)
 *     MiReserveEnclavePages @ 0x1405457CC (MiReserveEnclavePages.c)
 *     MiReturnEnclavePage @ 0x140545900 (MiReturnEnclavePage.c)
 *     MiWriteEnclavePte @ 0x140545A7C (MiWriteEnclavePte.c)
 *     MiReturnReservedEnclavePages @ 0x1409AD090 (MiReturnReservedEnclavePages.c)
 */

__int64 __fastcall MiAddPagesToEnclave(__int64 a1, unsigned __int64 a2, ULONG_PTR a3, ULONG_PTR a4, unsigned int a5)
{
  ULONG_PTR v5; // rdi
  int v6; // eax
  __int64 result; // rax
  unsigned __int64 v10; // r15
  unsigned __int64 *v11; // rbp
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  ULONG_PTR v14; // rax
  __int64 v15; // r9
  unsigned __int64 v16; // r12
  int v17; // esi
  unsigned __int64 ValidPte; // rbx
  int v19; // edi
  bool v20; // zf
  __int64 v21; // rsi
  __int64 v22; // rbx
  __int64 v23; // rcx
  int v24; // r10d
  char v25; // cl
  char v26; // dl
  char v27; // al
  int v28; // ecx
  char v29; // al
  __int64 v30; // rax
  unsigned __int64 v31; // rdi
  __int64 v32; // r8
  ULONG_PTR v33; // rax
  ULONG_PTR v34; // r14
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r8
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
  v12 = *(_QWORD *)(qword_140C4E588 + 8LL * *((unsigned __int16 *)v11 + 87));
  v13 = *(_QWORD *)(a1 + 104);
  v52 = v12;
  if ( v13 >= a2 || (v10 = a2 - v13, result = MiReserveEnclavePages(a1, v12, a2 - v13), (int)result >= 0) )
  {
    if ( (*(_DWORD *)(a1 + 64) & 2) != 0 )
    {
      v22 = 0LL;
      v48 = 0LL;
      v16 = 0LL;
      v21 = 0LL;
LABEL_21:
      v23 = 20LL;
      v47 = 0LL;
      if ( a2 <= 0x14 )
        v23 = a2;
      MiCreatePteCopyList(v23 + 1, v23 + 1, (__int64)&v50);
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
      v54 = MiLockWorkingSetShared((__int64)v11);
      v33 = a3;
      v34 = a3;
      if ( a3 > a4 )
      {
LABEL_67:
        MiUnlockWorkingSetShared((__int64)v11, v54);
        v17 = 0;
        goto LABEL_68;
      }
      while ( 1 )
      {
        if ( (v34 & 0x78) == 0 && v34 != v33 )
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
              MiUnlockPageTableInternal((__int64)v11, v31, v32);
              v31 = 0LL;
            }
            MiUnlockWorkingSetShared((__int64)v11, v54);
            MiLockWorkingSetShared((__int64)v11);
          }
        }
        if ( v31 )
        {
          if ( (v34 & 0xFFF) != 0 )
            goto LABEL_44;
          MiUnlockPageTableInternal((__int64)v11, v31, v32);
        }
LABEL_43:
        v31 = ((v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiMakeSystemAddressValid(v34, 0LL, (*(_DWORD *)(a1 + 48) >> 12) & 0x3F, v54, 0);
LABEL_44:
        if ( (MI_READ_PTE_LOCK_FREE(v34) & 1) != 0 )
          goto LABEL_58;
        v35 = v10 - 1;
        if ( v10 != v55 )
          v35 = v10;
        --v55;
        v10 = v35;
        BugCheckParameter2 = MiGetPageForEnclave(a1, v52);
        PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList((unsigned int *)&v50, BugCheckParameter2, -1LL);
        v17 = KeAddEnclavePage(v53, v22, (__int64)((PteFromCopyList << 25) - v21) >> 16, v45, v42, &v43);
        v36 = ZeroPte;
        v41 = 0;
        if ( MiPteInShadowRange(PteFromCopyList) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v41 = 1;
            if ( !HIBYTE(word_140C4DF48) )
              goto LABEL_52;
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
LABEL_52:
            if ( (ZeroPte & 1) != 0 )
              v36 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        v37 = PteFromCopyList;
        *(_QWORD *)PteFromCopyList = v36;
        if ( v41 )
          MiWritePteShadow(v37, v36);
        if ( v17 < 0 )
        {
          MiReturnEnclavePage(BugCheckParameter2);
          if ( v17 == -1073740657 )
            v17 = -1073741823;
          if ( v31 )
            MiUnlockPageTableInternal((__int64)v11, v31, v40);
          MiUnlockWorkingSetShared((__int64)v11, v54);
LABEL_68:
          MiReleasePteCopyList((__int64)&v50);
          if ( v16 )
            MiReleasePtes((__int64)&qword_140C4EE80, (_QWORD *)v16, 1u);
          if ( v10 )
            MiReturnReservedEnclavePages(a1, v10);
          return (unsigned int)v17;
        }
        MiInitializeEnclavePfn(BugCheckParameter2, v34, v44);
        v38 = v44;
        LODWORD(v38) = v44 | 0x80000000;
        MiMakeValidPte(v34, BugCheckParameter2, v38, v39);
        MiWriteEnclavePte(v34, 0);
        v21 = v47;
LABEL_58:
        v45 += 4096LL;
        v34 += 8LL;
        if ( v34 > a4 )
        {
          if ( v31 )
            MiUnlockPageTableInternal((__int64)v11, v31, v32);
          goto LABEL_67;
        }
        v22 = v48;
        v33 = a3;
      }
    }
    v14 = MiReservePtes((__int64)&qword_140C4EE80, 1LL);
    v16 = v14;
    if ( !v14 )
    {
LABEL_8:
      v17 = -1073741670;
      goto LABEL_68;
    }
    ValidPte = MiMakeValidPte(v14, qword_140C4ECC0, 536870913LL, v15);
    v19 = 0;
    if ( MiPteInShadowRange(v16) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v19 = 1;
        if ( !HIBYTE(word_140C4DF48) )
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
    *(_QWORD *)v16 = ValidPte;
    if ( v19 )
      MiWritePteShadow(v16, ValidPte);
    v5 = a3;
    v21 = 0LL;
    v22 = (__int64)(v16 << 25) >> 16;
    v48 = v22;
    goto LABEL_21;
  }
  return result;
}
