/*
 * XREFs of MiAddPagesToEnclave @ 0x1405A7D28
 * Callers:
 *     MiCommitEnclavePages @ 0x1405A8748 (MiCommitEnclavePages.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiCreatePteCopyList @ 0x14024B428 (MiCreatePteCopyList.c)
 *     MiReleasePteCopyList @ 0x140250BDC (MiReleasePteCopyList.c)
 *     MiPageTableLockIsContended @ 0x140274C80 (MiPageTableLockIsContended.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiGetPteFromCopyList @ 0x1402CBF80 (MiGetPteFromCopyList.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiMakeSystemAddressValid @ 0x14032CE60 (MiMakeSystemAddressValid.c)
 *     MiWorkingSetIsContended @ 0x1403531F0 (MiWorkingSetIsContended.c)
 *     KeAddEnclavePage @ 0x14056D1E8 (KeAddEnclavePage.c)
 *     MiGetPageForEnclave @ 0x1405A9530 (MiGetPageForEnclave.c)
 *     MiInitializeEnclavePfn @ 0x1405A95FC (MiInitializeEnclavePfn.c)
 *     MiReserveEnclavePages @ 0x1405A9E34 (MiReserveEnclavePages.c)
 *     MiReturnEnclavePage @ 0x1405A9F00 (MiReturnEnclavePage.c)
 *     MiWriteEnclavePte @ 0x1405AA07C (MiWriteEnclavePte.c)
 *     MiReturnReservedEnclavePages @ 0x140A6A948 (MiReturnReservedEnclavePages.c)
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
  unsigned __int64 v15; // r12
  int v16; // esi
  unsigned __int64 v17; // rbx
  int v18; // edi
  bool v19; // zf
  __int64 v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // rcx
  int v23; // r10d
  char v24; // cl
  char v25; // dl
  char v26; // al
  int v27; // ecx
  char v28; // al
  __int64 v29; // rax
  unsigned __int64 v30; // rdi
  __int64 v31; // r9
  ULONG_PTR v32; // rax
  ULONG_PTR v33; // r14
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rbx
  __int64 v36; // rax
  int ValidPte; // eax
  int v38; // [rsp+30h] [rbp-A8h]
  char v39; // [rsp+34h] [rbp-A4h]
  int v40; // [rsp+38h] [rbp-A0h] BYREF
  unsigned int v41; // [rsp+3Ch] [rbp-9Ch]
  __int64 v42; // [rsp+40h] [rbp-98h]
  unsigned __int64 PteFromCopyList; // [rsp+48h] [rbp-90h]
  __int64 v44; // [rsp+50h] [rbp-88h]
  __int64 v45; // [rsp+58h] [rbp-80h]
  __int64 PageForEnclave; // [rsp+60h] [rbp-78h]
  __int64 v47; // [rsp+68h] [rbp-70h] BYREF
  __int128 v48; // [rsp+70h] [rbp-68h]
  __int64 v49; // [rsp+80h] [rbp-58h]
  __int64 v50; // [rsp+88h] [rbp-50h]
  unsigned __int8 v51; // [rsp+E0h] [rbp+8h]
  unsigned __int64 v52; // [rsp+E8h] [rbp+10h]

  v52 = a2;
  v48 = 0LL;
  v47 = 0LL;
  v5 = a3;
  v6 = *(_DWORD *)(a1 + 64);
  v40 = 0;
  if ( (v6 & 2) != 0 && (*(_DWORD *)(a1 + 72) & 1) == 0 )
    return 3221225496LL;
  v10 = 0LL;
  v11 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v12 = *(_QWORD *)(qword_140C51F48 + 8LL * *((unsigned __int16 *)v11 + 87));
  v13 = *(_QWORD *)(a1 + 104);
  v49 = v12;
  if ( v13 >= a2 || (v10 = a2 - v13, result = MiReserveEnclavePages(a1, v12, a2 - v13), (int)result >= 0) )
  {
    if ( (*(_DWORD *)(a1 + 64) & 2) != 0 )
    {
      v21 = 0LL;
      v45 = 0LL;
      v15 = 0LL;
      v20 = 0LL;
LABEL_21:
      v22 = 20LL;
      v44 = 0LL;
      if ( a2 <= 0x14 )
        v22 = a2;
      MiCreatePteCopyList(v22 + 1, v22 + 1, (__int64)&v47);
      if ( !HIDWORD(v47) )
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
      v41 = v23;
      if ( (v27 & 2) == 0 )
        v28 = v25;
      v39 = v28;
      v50 = (__int64)(*(_QWORD *)(a1 + 80) << 25) >> 16;
      v29 = v5 << 25;
      v30 = 0LL;
      v42 = v29 >> 16;
      v51 = MiLockWorkingSetShared((__int64)v11);
      v32 = a3;
      v33 = a3;
      if ( a3 > a4 )
      {
LABEL_67:
        MiUnlockWorkingSetShared((__int64)v11, v51);
        v16 = 0;
        goto LABEL_68;
      }
      while ( (v33 & 0x78) == 0 && v33 != v32 )
      {
        if ( MiWorkingSetIsContended((__int64)v11) || KeShouldYieldProcessor() )
        {
LABEL_37:
          if ( v30 )
            MiUnlockPageTableInternal((__int64)v11, v30);
          MiUnlockWorkingSetShared((__int64)v11, v51);
          MiLockWorkingSetShared((__int64)v11);
          goto LABEL_43;
        }
        if ( v30 )
        {
          if ( (unsigned int)MiPageTableLockIsContended((__int64)v11, v30) )
            goto LABEL_37;
LABEL_41:
          if ( (v33 & 0xFFF) != 0 )
            goto LABEL_44;
          MiUnlockPageTableInternal((__int64)v11, v30);
        }
LABEL_43:
        v30 = ((v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        LOBYTE(v31) = v51;
        MiMakeSystemAddressValid(v33, 0LL, (*(_DWORD *)(a1 + 48) >> 12) & 0x7F, v31, 0);
LABEL_44:
        if ( (MI_READ_PTE_LOCK_FREE(v33) & 1) != 0 )
          goto LABEL_58;
        v34 = v10 - 1;
        if ( v10 != v52 )
          v34 = v10;
        --v52;
        v10 = v34;
        PageForEnclave = MiGetPageForEnclave(a1, v49);
        PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList((unsigned int *)&v47, PageForEnclave, -1LL);
        v16 = KeAddEnclavePage(v50, v21, (__int64)((PteFromCopyList << 25) - v20) >> 16, v42, v39, &v40);
        v35 = ZeroPte;
        v38 = 0;
        if ( MiPteInShadowRange(PteFromCopyList) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v38 = 1;
            if ( !HIBYTE(word_140C51864) )
              goto LABEL_52;
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
LABEL_52:
            if ( (ZeroPte & 1) != 0 )
              v35 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        v36 = PteFromCopyList;
        *(_QWORD *)PteFromCopyList = v35;
        if ( v38 )
          MiWritePteShadow(v36, v35);
        if ( v16 < 0 )
        {
          MiReturnEnclavePage(PageForEnclave);
          if ( v16 == -1073740657 )
            v16 = -1073741823;
          if ( v30 )
            MiUnlockPageTableInternal((__int64)v11, v30);
          MiUnlockWorkingSetShared((__int64)v11, v51);
LABEL_68:
          MiReleasePteCopyList((__int64)&v47);
          if ( v15 )
            MiReleasePtes((__int64)&qword_140C534C0, (_QWORD *)v15, 1u);
          if ( v10 )
            MiReturnReservedEnclavePages(a1, v10);
          return (unsigned int)v16;
        }
        MiInitializeEnclavePfn(PageForEnclave, v33, v41);
        ValidPte = MiMakeValidPte(v33, PageForEnclave, v41 | 0x80000000);
        MiWriteEnclavePte(v33, ValidPte, a1, 0, 0);
        v20 = v44;
LABEL_58:
        v42 += 4096LL;
        v33 += 8LL;
        if ( v33 > a4 )
        {
          if ( v30 )
            MiUnlockPageTableInternal((__int64)v11, v30);
          goto LABEL_67;
        }
        v21 = v45;
        v32 = a3;
      }
      if ( !v30 )
        goto LABEL_43;
      goto LABEL_41;
    }
    v14 = MiReservePtes((__int64)&qword_140C534C0, 1u);
    v15 = v14;
    if ( !v14 )
    {
LABEL_8:
      v16 = -1073741670;
      goto LABEL_68;
    }
    v17 = MiMakeValidPte(v14, qword_140C53290, 536870913);
    v18 = 0;
    if ( MiPteInShadowRange(v15) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v18 = 1;
        if ( !HIBYTE(word_140C51864) )
        {
          v19 = (v17 & 1) == 0;
          goto LABEL_15;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v19 = (v17 & 1) == 0;
LABEL_15:
        if ( !v19 )
          v17 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v15 = v17;
    if ( v18 )
      MiWritePteShadow(v15, v17);
    v5 = a3;
    v20 = 0LL;
    v21 = (__int64)(v15 << 25) >> 16;
    v45 = v21;
    goto LABEL_21;
  }
  return result;
}
