/*
 * XREFs of MiSetSystemCodeProtection @ 0x1402BB7F8
 * Callers:
 *     MiSetImageProtection @ 0x140324C48 (MiSetImageProtection.c)
 *     MiProtectSystemImage @ 0x140783ACC (MiProtectSystemImage.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiGetPagePrivilege @ 0x140221650 (MiGetPagePrivilege.c)
 *     MiCaptureDirtyBitToPfn @ 0x140223BF0 (MiCaptureDirtyBitToPfn.c)
 *     MiGetSessionVm @ 0x14022B5AC (MiGetSessionVm.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14027DD60 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiOffsetToProtos @ 0x140288040 (MiOffsetToProtos.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiSectionControlArea @ 0x1402A1930 (MiSectionControlArea.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiLockTransitionLeafPage @ 0x1402ACD48 (MiLockTransitionLeafPage.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x1402BBEA4 (MI_TIGHTER_PERMISSIONS.c)
 *     MiWriteValidPteNewProtection @ 0x1402BC370 (MiWriteValidPteNewProtection.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiMarkPfnVerified @ 0x140306818 (MiMarkPfnVerified.c)
 *     MiMakeDriverPagesPrivate @ 0x140325460 (MiMakeDriverPagesPrivate.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall MiSetSystemCodeProtection(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned int v7; // esi
  unsigned __int64 v8; // r12
  unsigned int v9; // r15d
  int v10; // ebx
  unsigned __int64 v11; // rdi
  __int64 SessionVm; // rax
  int v13; // edx
  unsigned __int64 v14; // r8
  __int64 v16; // rbx
  _KPROCESS *v17; // rdx
  __int64 v18; // r8
  unsigned __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // eax
  ULONG_PTR v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rbx
  unsigned __int64 ValidPte; // rbx
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rdi
  unsigned __int64 v34; // rcx
  __int64 v35; // rcx
  unsigned __int64 v36; // rdi
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rbx
  BOOL v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  char v42; // di
  unsigned __int64 v43; // rbx
  BOOL v44; // eax
  __int64 v45; // rcx
  int v46; // eax
  unsigned __int8 v47; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v48; // [rsp+28h] [rbp-D8h]
  __int64 v49; // [rsp+30h] [rbp-D0h]
  int v50; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v51; // [rsp+40h] [rbp-C0h] BYREF
  __int64 i; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v53; // [rsp+50h] [rbp-B0h]
  int v54; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v55; // [rsp+60h] [rbp-A0h]
  _KPROCESS *v56; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v57; // [rsp+70h] [rbp-90h]
  __int64 v58; // [rsp+78h] [rbp-88h]
  unsigned __int64 v59; // [rsp+80h] [rbp-80h]
  unsigned __int64 v60; // [rsp+88h] [rbp-78h]
  _QWORD v61[24]; // [rsp+90h] [rbp-70h] BYREF

  v60 = a3;
  v55 = a1;
  v56 = 0LL;
  memset(v61, 0, 0xB8uLL);
  v7 = 1;
  if ( a4 == 24 || (a4 & 0x10) == 0 )
  {
    v50 = 0;
  }
  else
  {
    a4 &= ~0x10u;
    v50 = 1;
  }
  v8 = (__int64)(a2 << 25) >> 16;
  if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v8) )
  {
    v9 = a4;
    v10 = 2;
    if ( a4 == 256 )
    {
      v11 = 0LL;
      v59 = MiSectionControlArea(*(_QWORD *)(v55 + 112));
      v57 = 0LL;
    }
    else
    {
      v57 = a3;
      v59 = 0LL;
      v9 = a4 & 0xFFFFFFFE;
      v14 = a3;
      if ( (a4 & 5) != 5 )
        v9 = a4;
      v11 = 0LL;
      if ( (int)MiMakeDriverPagesPrivate(v55, a2, v14, (v9 >> 1) & 2) < 0 )
        return 0LL;
    }
    if ( (unsigned int)MiGetSystemRegionType((__int64)(a2 << 25) >> 16) == 1 )
      SessionVm = MiGetSessionVm();
    else
      SessionVm = (__int64)MiGetAnyMultiplexedVm(1);
    v49 = SessionVm;
    v61[2] = 0LL;
    if ( v13 != 1 )
      v10 = 0;
    LODWORD(v61[1]) = 20;
    WORD2(v61[0]) = 0;
    LODWORD(v61[0]) = v10;
    v16 = SessionVm;
    v61[3] = 0LL;
    v53 = 0LL;
    v47 = MiLockWorkingSetShared(SessionVm);
    if ( a2 <= v60 )
    {
      v17 = 0LL;
      v18 = 0LL;
      for ( i = 0LL; ; v18 = i )
      {
        if ( !v11 )
          goto LABEL_22;
        if ( (a2 & 0xFFF) == 0 )
          break;
LABEL_23:
        if ( a2 > v57 )
        {
          v19 = v8 - *(_QWORD *)(v55 + 48);
          if ( v18 )
          {
            v20 = *(_QWORD *)(v18 + 16);
            i = v20;
            v56 = v17;
          }
          else
          {
            MiFlushTbList((__int64)v61, v17);
            MiUnlockPageTableInternal(v49, v11);
            MiUnlockWorkingSetShared(v49, v47);
            i = MiOffsetToProtos(v59, v19, (unsigned __int64 *)&v56);
            MiLockWorkingSetShared(v49);
            MiLockPageTableInternal(v49, v11, 0LL);
            v17 = v56;
            v20 = i;
          }
          v9 = (*(unsigned __int16 *)(v20 + 32) >> 1) & 0x1F;
          v57 = a2
              + 8
              * (*(unsigned int *)(v20 + 44) - (unsigned __int64)(*(_DWORD *)(v20 + 52) & 0x3FFFFFFF) - (_QWORD)v17 - 1);
          if ( (v9 & 5) == 5 )
            v9 &= ~1u;
        }
        v21 = MI_READ_PTE_LOCK_FREE(a2);
        v51 = v21;
        if ( (v21 & 1) != 0 )
        {
          v48 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v51) >> 12) & 0xFFFFFFFFFLL;
          v22 = 48 * v48 - 0x58000000000LL;
          v25 = MI_PFN_IS_PROTO(v22, v23, v24);
          v17 = 0LL;
          if ( v25 )
            goto LABEL_90;
          if ( (MiGetPagePrivilege(v26, 0, 0LL) & 0x40) != 0 )
          {
            if ( (a4 & 6) != 0 )
              goto LABEL_33;
          }
          else if ( (MiFlags & 0x10000) != 0 && (a4 & 4) != 0 && ((*(_QWORD *)(v22 + 40) >> 60) & 7) == 3 )
          {
LABEL_33:
            v11 = v53;
            v7 = 0;
            goto LABEL_34;
          }
          v29 = 0LL;
          v54 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v54, (__int64)v17, v27, v28);
            while ( *(__int64 *)(v22 + 24) < 0 );
          }
          *(_QWORD *)(v22 + 16) ^= (*(_DWORD *)(v22 + 16) ^ (32 * v9)) & 0x3E0;
          if ( v50 )
            MiMarkPfnVerified(v22, 4LL);
          v58 = v51 & 0x42;
          if ( (v51 & 0x42) != 0 )
            v29 = MiCaptureDirtyBitToPfn(v22);
          _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v29 )
            MiReleasePageFileInfo(
              *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v22 + 40) >> 39) & 0x3FFLL)),
              v29,
              1LL);
          ValidPte = MiMakeValidPte(a2, v48, v9, v28);
          if ( (v9 & 5) == 4 && v58 )
            ValidPte |= 0x42uLL;
          MiWriteValidPteNewProtection(a2, ValidPte);
          if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
          {
            v31 = MI_TIGHTER_PERMISSIONS(v51, ValidPte);
            v17 = 0LL;
            if ( !v31 )
              goto LABEL_90;
          }
          MiInsertTbFlushEntry((__int64)v61, v8, 1LL, 0);
          goto LABEL_89;
        }
        if ( (v21 & 0x400) != 0 )
          goto LABEL_89;
        v17 = 0LL;
        if ( (v21 & 0x800) != 0 )
        {
          v32 = MiLockTransitionLeafPage(a2, 0LL);
          v17 = 0LL;
          if ( !v32 )
            goto LABEL_91;
          v33 = MI_READ_PTE_LOCK_FREE(a2);
          v34 = v33;
          if ( qword_140C4DE80 )
          {
            if ( (v33 & 0x10) != 0 )
              v34 = v33 & 0xFFFFFFFFFFFFFFEFuLL;
            else
              v34 = v33 & ~qword_140C4DE80;
          }
          v58 = 48 * ((v34 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          v35 = 32LL * (v9 & 0x1F);
          v36 = v35 | v33 & 0xFFFFFFFFFFFFFC1FuLL;
          v37 = *(_QWORD *)(v58 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
          v51 = v36;
          v38 = v36;
          *(_QWORD *)(v58 + 16) = v35 | v37;
          v39 = MiPteInShadowRange(a2);
          v17 = 0LL;
          if ( v39 )
          {
            if ( (unsigned int)MiPteHasShadow(v40, 0LL) )
            {
              v41 = 1;
              if ( HIBYTE(word_140C4DF48) == (_BYTE)v17 && (v36 & 1) != 0 )
                v38 = v36 | 0x8000000000000000uLL;
              goto LABEL_73;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v36 & 1) != 0 )
            {
              v38 = v36 | 0x8000000000000000uLL;
            }
          }
          v41 = (int)v17;
LABEL_73:
          *(_QWORD *)a2 = v38;
          if ( v41 )
          {
            MiWritePteShadow(a2, v38);
            v17 = 0LL;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v58 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_90;
        }
        if ( v21 && a4 != 256 )
        {
          v42 = v21 ^ (v21 ^ (32 * v9)) & 0xE0;
          v51 = v21 ^ ((unsigned __int16)v21 ^ (unsigned __int16)(32 * v9)) & 0x3E0;
          v43 = v51;
          v44 = MiPteInShadowRange(a2);
          v17 = 0LL;
          if ( v44 )
          {
            if ( (unsigned int)MiPteHasShadow(v45, 0LL) )
            {
              v46 = 1;
              if ( HIBYTE(word_140C4DF48) == (_BYTE)v17 && (v42 & 1) != 0 )
                v43 |= 0x8000000000000000uLL;
LABEL_87:
              *(_QWORD *)a2 = v43;
              if ( v46 )
              {
                MiWritePteShadow(a2, v43);
LABEL_89:
                v17 = 0LL;
                goto LABEL_90;
              }
              goto LABEL_90;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v42 & 1) != 0 )
            {
              v43 |= 0x8000000000000000uLL;
            }
          }
          v46 = (int)v17;
          goto LABEL_87;
        }
LABEL_90:
        a2 += 8LL;
        v8 += 4096LL;
LABEL_91:
        v11 = v53;
        if ( a2 > v60 )
          goto LABEL_34;
        v16 = v49;
      }
      MiFlushTbList((__int64)v61, v17);
      MiUnlockPageTableInternal(v16, v11);
LABEL_22:
      v11 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v53 = v11;
      MiLockPageTableInternal(v16, v11, 0LL);
      v18 = i;
      v17 = 0LL;
      goto LABEL_23;
    }
LABEL_34:
    MiFlushTbList((__int64)v61, v17);
    if ( v11 )
      MiUnlockPageTableInternal(v49, v11);
    MiUnlockWorkingSetShared(v49, v47);
  }
  return v7;
}
