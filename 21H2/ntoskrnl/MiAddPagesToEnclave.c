/*
 * XREFs of MiAddPagesToEnclave @ 0x140549344
 * Callers:
 *     MiCommitEnclavePages @ 0x1405499C4 (MiCommitEnclavePages.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiReleasePteCopyList @ 0x140249314 (MiReleasePteCopyList.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     MiGetPteFromCopyList @ 0x1402E51D0 (MiGetPteFromCopyList.c)
 *     MiCreatePteCopyList @ 0x1402E5388 (MiCreatePteCopyList.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     MiPageTableLockIsContended @ 0x1403131B0 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x140316520 (MiWorkingSetIsContended.c)
 *     MiMakeSystemAddressValid @ 0x1403190E0 (MiMakeSystemAddressValid.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KeAddEnclavePage @ 0x140515198 (KeAddEnclavePage.c)
 *     MiGetPageForEnclave @ 0x14054AC04 (MiGetPageForEnclave.c)
 *     MiInitializeEnclavePfn @ 0x14054AC68 (MiInitializeEnclavePfn.c)
 *     MiReserveEnclavePages @ 0x14054B52C (MiReserveEnclavePages.c)
 *     MiReturnEnclavePage @ 0x14054B660 (MiReturnEnclavePage.c)
 *     MiWriteEnclavePte @ 0x14054B7DC (MiWriteEnclavePte.c)
 *     MiReturnReservedEnclavePages @ 0x1409B1C90 (MiReturnReservedEnclavePages.c)
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
  bool v19; // zf
  __int64 v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // rcx
  int v23; // r10d
  unsigned __int8 v24; // cl
  __int64 v25; // rdx
  unsigned __int8 v26; // al
  int v27; // ecx
  char v28; // al
  __int64 v29; // rax
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rax
  ULONG_PTR v32; // r14
  __int64 v33; // rdx
  __int64 v34; // r8
  _DWORD *v35; // r9
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rbx
  __int64 v38; // rax
  int v39; // [rsp+30h] [rbp-A8h]
  char v40; // [rsp+34h] [rbp-A4h]
  int v41; // [rsp+38h] [rbp-A0h] BYREF
  unsigned int v42; // [rsp+3Ch] [rbp-9Ch]
  __int64 v43; // [rsp+40h] [rbp-98h]
  unsigned __int64 PteFromCopyList; // [rsp+48h] [rbp-90h]
  __int64 v45; // [rsp+50h] [rbp-88h]
  __int64 v46; // [rsp+58h] [rbp-80h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-78h]
  __int64 v48; // [rsp+68h] [rbp-70h] BYREF
  __int128 v49; // [rsp+70h] [rbp-68h]
  __int64 v50; // [rsp+80h] [rbp-58h]
  __int64 v51; // [rsp+88h] [rbp-50h]
  unsigned __int8 v52; // [rsp+E0h] [rbp+8h]
  unsigned __int64 v53; // [rsp+E8h] [rbp+10h]

  v53 = a2;
  v49 = 0LL;
  v48 = 0LL;
  v5 = a3;
  v6 = *(_DWORD *)(a1 + 64);
  v41 = 0;
  if ( (v6 & 2) != 0 && (*(_DWORD *)(a1 + 72) & 1) == 0 )
    return 3221225496LL;
  v10 = 0LL;
  v11 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v12 = *(_QWORD *)(qword_140C4E688 + 8LL * *((unsigned __int16 *)v11 + 87));
  v13 = *(_QWORD *)(a1 + 104);
  v50 = v12;
  if ( v13 >= a2 || (v10 = a2 - v13, result = MiReserveEnclavePages(a1, v12, a2 - v13), (int)result >= 0) )
  {
    if ( (*(_DWORD *)(a1 + 64) & 2) != 0 )
    {
      v21 = 0LL;
      v46 = 0LL;
      v15 = 0LL;
      v20 = 0LL;
LABEL_21:
      v22 = 20LL;
      v45 = 0LL;
      if ( a2 <= 0x14 )
        v22 = a2;
      MiCreatePteCopyList(v22 + 1, v22 + 1, (__int64)&v48, a4);
      if ( !HIDWORD(v48) )
        goto LABEL_8;
      v23 = 4;
      v24 = (a5 >> 1) & 2 | 0x35;
      if ( (a5 & 2) == 0 )
        v24 = (a5 >> 1) & 2 | 0x31;
      v25 = v24;
      v26 = v24;
      v27 = *(_DWORD *)(a1 + 64) & 2;
      if ( !v27 )
        v23 = a5;
      v28 = v26 | 0x40;
      v42 = v23;
      if ( !v27 )
        v28 = v25;
      v40 = v28;
      v51 = (__int64)(*(_QWORD *)(a1 + 80) << 25) >> 16;
      v29 = v5 << 25;
      v30 = 0LL;
      v43 = v29 >> 16;
      v52 = MiLockWorkingSetShared((__int64)v11, v25, (a5 >> 1) & 2 | 0x31, (_DWORD *)a5);
      v31 = a3;
      v32 = a3;
      if ( a3 > a4 )
      {
LABEL_67:
        MiUnlockWorkingSetShared((__int64)v11, v52);
        v16 = 0;
        goto LABEL_68;
      }
      while ( 1 )
      {
        if ( (v32 & 0x78) == 0 && v32 != v31 )
        {
          if ( MiWorkingSetIsContended((__int64)v11) || KeShouldYieldProcessor() )
            goto LABEL_37;
          if ( !v30 )
            goto LABEL_43;
          if ( (unsigned int)MiPageTableLockIsContended((__int64)v11, v30) )
          {
LABEL_37:
            if ( v30 )
            {
              MiUnlockPageTableInternal((__int64)v11, v30);
              v30 = 0LL;
            }
            MiUnlockWorkingSetShared((__int64)v11, v52);
            MiLockWorkingSetShared((__int64)v11, v33, v34, v35);
          }
        }
        if ( v30 )
        {
          if ( (v32 & 0xFFF) != 0 )
            goto LABEL_44;
          MiUnlockPageTableInternal((__int64)v11, v30);
        }
LABEL_43:
        v30 = ((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiMakeSystemAddressValid(v32, 0LL, (*(_DWORD *)(a1 + 48) >> 12) & 0x3F, v52, 0);
LABEL_44:
        if ( (MI_READ_PTE_LOCK_FREE(v32) & 1) != 0 )
          goto LABEL_58;
        v36 = v10 - 1;
        if ( v10 != v53 )
          v36 = v10;
        --v53;
        v10 = v36;
        BugCheckParameter2 = MiGetPageForEnclave(a1, v50);
        PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList((unsigned int *)&v48, BugCheckParameter2, -1LL);
        v16 = KeAddEnclavePage(v51, v21, (__int64)((PteFromCopyList << 25) - v20) >> 16, v43, v40, &v41);
        v37 = ZeroPte;
        v39 = 0;
        if ( MiPteInShadowRange(PteFromCopyList) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v39 = 1;
            if ( !HIBYTE(word_140C4E048) )
              goto LABEL_52;
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
LABEL_52:
            if ( (ZeroPte & 1) != 0 )
              v37 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        v38 = PteFromCopyList;
        *(_QWORD *)PteFromCopyList = v37;
        if ( v39 )
          MiWritePteShadow(v38, v37);
        if ( v16 < 0 )
        {
          MiReturnEnclavePage(BugCheckParameter2);
          if ( v16 == -1073740657 )
            v16 = -1073741823;
          if ( v30 )
            MiUnlockPageTableInternal((__int64)v11, v30);
          MiUnlockWorkingSetShared((__int64)v11, v52);
LABEL_68:
          MiReleasePteCopyList((__int64)&v48);
          if ( v15 )
            MiReleasePtes((__int64)&qword_140C4EF80, (_QWORD *)v15, 1u);
          if ( v10 )
            MiReturnReservedEnclavePages(a1, v10);
          return (unsigned int)v16;
        }
        MiInitializeEnclavePfn(BugCheckParameter2, v32, v42);
        MiMakeValidPte(v32, BugCheckParameter2, v42 | 0x80000000);
        MiWriteEnclavePte(v32, 0);
        v20 = v45;
LABEL_58:
        v43 += 4096LL;
        v32 += 8LL;
        if ( v32 > a4 )
        {
          if ( v30 )
            MiUnlockPageTableInternal((__int64)v11, v30);
          goto LABEL_67;
        }
        v21 = v46;
        v31 = a3;
      }
    }
    v14 = MiReservePtes((__int64)&qword_140C4EF80, 1u, a3, a4);
    v15 = v14;
    if ( !v14 )
    {
LABEL_8:
      v16 = -1073741670;
      goto LABEL_68;
    }
    ValidPte = MiMakeValidPte(v14, qword_140C4EDC0, 536870913);
    v18 = 0;
    if ( MiPteInShadowRange(v15) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v18 = 1;
        if ( !HIBYTE(word_140C4E048) )
        {
          v19 = (ValidPte & 1) == 0;
          goto LABEL_15;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v19 = (ValidPte & 1) == 0;
LABEL_15:
        if ( !v19 )
          ValidPte |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v15 = ValidPte;
    if ( v18 )
      MiWritePteShadow(v15, ValidPte);
    v5 = a3;
    v20 = 0LL;
    v21 = (__int64)(v15 << 25) >> 16;
    v46 = v21;
    goto LABEL_21;
  }
  return result;
}
