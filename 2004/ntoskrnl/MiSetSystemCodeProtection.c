/*
 * XREFs of MiSetSystemCodeProtection @ 0x1402627C8
 * Callers:
 *     MiSetImageProtection @ 0x1402DFB48 (MiSetImageProtection.c)
 *     MiProtectSystemImage @ 0x14078945C (MiProtectSystemImage.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140224D10 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiOffsetToProtos @ 0x14022EFF0 (MiOffsetToProtos.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiSectionControlArea @ 0x140248900 (MiSectionControlArea.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiLockTransitionLeafPage @ 0x140253D18 (MiLockTransitionLeafPage.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x140262E74 (MI_TIGHTER_PERMISSIONS.c)
 *     MiWriteValidPteNewProtection @ 0x140263340 (MiWriteValidPteNewProtection.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiLockPageTableInternal @ 0x1402A0AD0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiGetPagePrivilege @ 0x1402B42D0 (MiGetPagePrivilege.c)
 *     MiCaptureDirtyBitToPfn @ 0x1402B6870 (MiCaptureDirtyBitToPfn.c)
 *     MiGetSessionVm @ 0x1402BE22C (MiGetSessionVm.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     MiMakeDriverPagesPrivate @ 0x1402E0360 (MiMakeDriverPagesPrivate.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiMarkPfnVerified @ 0x14034461C (MiMarkPfnVerified.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall MiSetSystemCodeProtection(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned int v7; // esi
  unsigned __int64 v8; // r12
  unsigned int v9; // r15d
  int v10; // ebx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  char *SessionVm; // rax
  int v15; // edx
  unsigned __int64 v16; // r8
  char *v18; // rbx
  _KPROCESS *v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rdi
  int v26; // eax
  ULONG_PTR v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rbx
  unsigned __int64 ValidPte; // rbx
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rdi
  unsigned __int64 v36; // rcx
  __int64 v37; // rcx
  unsigned __int64 v38; // rdi
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rbx
  BOOL v41; // eax
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  int v45; // eax
  char v46; // di
  unsigned __int64 v47; // rbx
  BOOL v48; // eax
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  int v52; // eax
  char v53; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v54; // [rsp+28h] [rbp-D8h]
  char *v55; // [rsp+30h] [rbp-D0h]
  int v56; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v57; // [rsp+40h] [rbp-C0h] BYREF
  __int64 i; // [rsp+48h] [rbp-B8h]
  __int64 v59; // [rsp+50h] [rbp-B0h]
  int v60; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v61; // [rsp+60h] [rbp-A0h]
  _KPROCESS *v62; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v63; // [rsp+70h] [rbp-90h]
  __int64 v64; // [rsp+78h] [rbp-88h]
  unsigned __int64 v65; // [rsp+80h] [rbp-80h]
  unsigned __int64 v66; // [rsp+88h] [rbp-78h]
  _QWORD v67[24]; // [rsp+90h] [rbp-70h] BYREF

  v66 = a3;
  v61 = a1;
  v62 = 0LL;
  memset(v67, 0, 0xB8uLL);
  v7 = 1;
  if ( a4 == 24 || (a4 & 0x10) == 0 )
  {
    v56 = 0;
  }
  else
  {
    a4 &= ~0x10u;
    v56 = 1;
  }
  v8 = (__int64)(a2 << 25) >> 16;
  if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v8) )
  {
    v9 = a4;
    v10 = 2;
    if ( a4 == 256 )
    {
      v11 = 0LL;
      v65 = MiSectionControlArea(*(_QWORD *)(v61 + 112));
      v63 = 0LL;
    }
    else
    {
      v63 = a3;
      v65 = 0LL;
      v9 = a4 & 0xFFFFFFFE;
      v16 = a3;
      if ( (a4 & 5) != 5 )
        v9 = a4;
      v11 = 0LL;
      if ( (int)MiMakeDriverPagesPrivate(v61, a2, v16, (v9 >> 1) & 2) < 0 )
        return 0LL;
    }
    if ( (unsigned int)MiGetSystemRegionType((__int64)(a2 << 25) >> 16) == 1 )
      SessionVm = (char *)MiGetSessionVm(v12, 1LL, v13);
    else
      SessionVm = MiGetAnyMultiplexedVm(1);
    v55 = SessionVm;
    v67[2] = 0LL;
    if ( v15 != 1 )
      v10 = 0;
    LODWORD(v67[1]) = 20;
    WORD2(v67[0]) = 0;
    LODWORD(v67[0]) = v10;
    v18 = SessionVm;
    v67[3] = 0LL;
    v59 = 0LL;
    v53 = MiLockWorkingSetShared(SessionVm);
    if ( a2 <= v66 )
    {
      v19 = 0LL;
      v20 = 0LL;
      for ( i = 0LL; ; v20 = i )
      {
        if ( !v11 )
          goto LABEL_22;
        if ( (a2 & 0xFFF) == 0 )
          break;
LABEL_23:
        if ( a2 > v63 )
        {
          v21 = v8 - *(_QWORD *)(v61 + 48);
          if ( v20 )
          {
            v23 = *(_QWORD *)(v20 + 16);
            i = v23;
            v62 = v19;
          }
          else
          {
            MiFlushTbList((__int64)v67, v19);
            MiUnlockPageTableInternal(v55, v11);
            LOBYTE(v22) = v53;
            MiUnlockWorkingSetShared(v55, v22);
            i = MiOffsetToProtos(v65, v21, (unsigned __int64 *)&v62);
            MiLockWorkingSetShared(v55);
            MiLockPageTableInternal(v55, v11, 0LL);
            v19 = v62;
            v23 = i;
          }
          v9 = (*(unsigned __int16 *)(v23 + 32) >> 1) & 0x1F;
          v63 = a2
              + 8
              * (*(unsigned int *)(v23 + 44) - (unsigned __int64)(*(_DWORD *)(v23 + 52) & 0x3FFFFFFF) - (_QWORD)v19 - 1);
          if ( (v9 & 5) == 5 )
            v9 &= ~1u;
        }
        v24 = MI_READ_PTE_LOCK_FREE(a2);
        v57 = v24;
        if ( (v24 & 1) != 0 )
        {
          v54 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v57) >> 12) & 0xFFFFFFFFFLL;
          v25 = 48 * v54 - 0x58000000000LL;
          v26 = MI_PFN_IS_PROTO(v25);
          v19 = 0LL;
          if ( v26 )
            goto LABEL_90;
          if ( (MiGetPagePrivilege(v27) & 0x40) != 0 )
          {
            if ( (a4 & 6) != 0 )
              goto LABEL_33;
          }
          else if ( (MiFlags & 0x10000) != 0 && (a4 & 4) != 0 && ((*(_QWORD *)(v25 + 40) >> 60) & 7) == 3 )
          {
LABEL_33:
            v11 = v59;
            v7 = 0;
            goto LABEL_34;
          }
          v31 = 0LL;
          v60 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v60, v19);
            while ( *(__int64 *)(v25 + 24) < 0 );
          }
          *(_QWORD *)(v25 + 16) ^= (*(_DWORD *)(v25 + 16) ^ (32 * v9)) & 0x3E0;
          if ( v56 )
            MiMarkPfnVerified(v25, 4LL, v28, v29);
          v64 = v57 & 0x42;
          if ( (v57 & 0x42) != 0 )
            v31 = MiCaptureDirtyBitToPfn(v25);
          _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v31 )
            MiReleasePageFileInfo(
              *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v25 + 40) >> 39) & 0x3FFLL)),
              v31,
              1LL);
          ValidPte = MiMakeValidPte(a2, v54, v9, v29);
          if ( (v9 & 5) == 4 && v64 )
            ValidPte |= 0x42uLL;
          MiWriteValidPteNewProtection(a2, ValidPte);
          if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
          {
            v33 = MI_TIGHTER_PERMISSIONS(v57, ValidPte);
            v19 = 0LL;
            if ( !v33 )
              goto LABEL_90;
          }
          MiInsertTbFlushEntry(v67, v8, 1LL, 0LL);
          goto LABEL_89;
        }
        if ( (v24 & 0x400) != 0 )
          goto LABEL_89;
        v19 = 0LL;
        if ( (v24 & 0x800) != 0 )
        {
          v34 = MiLockTransitionLeafPage(a2, 0LL);
          v19 = 0LL;
          if ( !v34 )
            goto LABEL_91;
          v35 = MI_READ_PTE_LOCK_FREE(a2);
          v36 = v35;
          if ( qword_140C4DD40 )
          {
            if ( (v35 & 0x10) != 0 )
              v36 = v35 & 0xFFFFFFFFFFFFFFEFuLL;
            else
              v36 = v35 & ~qword_140C4DD40;
          }
          v64 = 48 * ((v36 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          v37 = 32LL * (v9 & 0x1F);
          v38 = v37 | v35 & 0xFFFFFFFFFFFFFC1FuLL;
          v39 = *(_QWORD *)(v64 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
          v57 = v38;
          v40 = v38;
          *(_QWORD *)(v64 + 16) = v37 | v39;
          v41 = MiPteInShadowRange(a2);
          v19 = 0LL;
          if ( v41 )
          {
            if ( (unsigned int)MiPteHasShadow(v42, 0LL, v43, v44) )
            {
              v45 = 1;
              if ( HIBYTE(word_140C4DE08) == (_BYTE)v19 && (v38 & 1) != 0 )
                v40 = v38 | 0x8000000000000000uLL;
              goto LABEL_73;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v38 & 1) != 0 )
            {
              v40 = v38 | 0x8000000000000000uLL;
            }
          }
          v45 = (int)v19;
LABEL_73:
          *(_QWORD *)a2 = v40;
          if ( v45 )
          {
            MiWritePteShadow(a2, v40);
            v19 = 0LL;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v64 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_90;
        }
        if ( v24 && a4 != 256 )
        {
          v46 = v24 ^ (v24 ^ (32 * v9)) & 0xE0;
          v57 = v24 ^ ((unsigned __int16)v24 ^ (unsigned __int16)(32 * v9)) & 0x3E0;
          v47 = v57;
          v48 = MiPteInShadowRange(a2);
          v19 = 0LL;
          if ( v48 )
          {
            if ( (unsigned int)MiPteHasShadow(v49, 0LL, v50, v51) )
            {
              v52 = 1;
              if ( HIBYTE(word_140C4DE08) == (_BYTE)v19 && (v46 & 1) != 0 )
                v47 |= 0x8000000000000000uLL;
LABEL_87:
              *(_QWORD *)a2 = v47;
              if ( v52 )
              {
                MiWritePteShadow(a2, v47);
LABEL_89:
                v19 = 0LL;
                goto LABEL_90;
              }
              goto LABEL_90;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v46 & 1) != 0 )
            {
              v47 |= 0x8000000000000000uLL;
            }
          }
          v52 = (int)v19;
          goto LABEL_87;
        }
LABEL_90:
        a2 += 8LL;
        v8 += 4096LL;
LABEL_91:
        v11 = v59;
        if ( a2 > v66 )
          goto LABEL_34;
        v18 = v55;
      }
      MiFlushTbList((__int64)v67, v19);
      MiUnlockPageTableInternal(v18, v11);
LABEL_22:
      v11 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v59 = v11;
      MiLockPageTableInternal(v18, v11, 0LL);
      v20 = i;
      v19 = 0LL;
      goto LABEL_23;
    }
LABEL_34:
    MiFlushTbList((__int64)v67, v19);
    if ( v11 )
      MiUnlockPageTableInternal(v55, v11);
    LOBYTE(v30) = v53;
    MiUnlockWorkingSetShared(v55, v30);
  }
  return v7;
}
