/*
 * XREFs of MiSetSystemCodeProtection @ 0x140252230
 * Callers:
 *     MiSetImageProtection @ 0x140253184 (MiSetImageProtection.c)
 *     MiProtectSystemImage @ 0x14079716C (MiProtectSystemImage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     MiSectionControlArea @ 0x14022C010 (MiSectionControlArea.c)
 *     MiLockTransitionLeafPage @ 0x14023681C (MiLockTransitionLeafPage.c)
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x1402528DC (MI_TIGHTER_PERMISSIONS.c)
 *     MiMakeDriverPagesPrivate @ 0x14025290C (MiMakeDriverPagesPrivate.c)
 *     MiLockPageTableInternal @ 0x14026FE10 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140295510 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetSessionVm @ 0x14029977C (MiGetSessionVm.c)
 *     MiWriteValidPteNewProtection @ 0x14029F0A0 (MiWriteValidPteNewProtection.c)
 *     MiCaptureDirtyBitToPfn @ 0x14029F1B0 (MiCaptureDirtyBitToPfn.c)
 *     MiOffsetToProtos @ 0x1402A42A0 (MiOffsetToProtos.c)
 *     MiGetPagePrivilege @ 0x1402ABE40 (MiGetPagePrivilege.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiMarkPfnVerified @ 0x1403156F4 (MiMarkPfnVerified.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x140411300 (memset.c)
 */

__int64 __fastcall MiSetSystemCodeProtection(__int64 a1, ULONG_PTR a2, ULONG_PTR a3, unsigned int a4)
{
  unsigned int v7; // esi
  __int64 v8; // r12
  unsigned int v9; // r15d
  int v10; // ebx
  __int64 v11; // rdi
  __int64 v12; // rcx
  char *SessionVm; // rax
  int v14; // edx
  ULONG_PTR v15; // r8
  char *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rdi
  int v25; // eax
  ULONG_PTR v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rbx
  __int64 ValidPte; // rbx
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rdi
  unsigned __int64 v33; // rcx
  __int64 v34; // rcx
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rbx
  BOOL v38; // eax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // eax
  char v43; // di
  unsigned __int64 v44; // rbx
  BOOL v45; // eax
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  int v49; // eax
  char v50; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v51; // [rsp+28h] [rbp-D8h]
  char *v52; // [rsp+30h] [rbp-D0h]
  int v53; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v54; // [rsp+40h] [rbp-C0h] BYREF
  __int64 i; // [rsp+48h] [rbp-B8h]
  __int64 v56; // [rsp+50h] [rbp-B0h]
  int v57; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v58; // [rsp+60h] [rbp-A0h]
  __int64 v59; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR v60; // [rsp+70h] [rbp-90h]
  __int64 v61; // [rsp+78h] [rbp-88h]
  unsigned __int64 v62; // [rsp+80h] [rbp-80h]
  ULONG_PTR v63; // [rsp+88h] [rbp-78h]
  _QWORD v64[24]; // [rsp+90h] [rbp-70h] BYREF

  v63 = a3;
  v58 = a1;
  v59 = 0LL;
  memset(v64, 0, 0xB8uLL);
  v7 = 1;
  if ( a4 == 24 || (a4 & 0x10) == 0 )
  {
    v53 = 0;
  }
  else
  {
    a4 &= ~0x10u;
    v53 = 1;
  }
  v8 = (__int64)(a2 << 25) >> 16;
  if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v8) )
  {
    v9 = a4;
    v10 = 2;
    if ( a4 == 256 )
    {
      v11 = 0LL;
      v62 = MiSectionControlArea(*(_QWORD *)(v58 + 112));
      v60 = 0LL;
    }
    else
    {
      v60 = a3;
      v62 = 0LL;
      v9 = a4 & 0xFFFFFFFE;
      v15 = a3;
      if ( (a4 & 5) != 5 )
        v9 = a4;
      v11 = 0LL;
      if ( (int)MiMakeDriverPagesPrivate(v58, a2, v15, (v9 >> 1) & 2) < 0 )
        return 0LL;
    }
    if ( (unsigned int)MiGetSystemRegionType((__int64)(a2 << 25) >> 16) == 1 )
      SessionVm = (char *)MiGetSessionVm(v12, 1LL);
    else
      SessionVm = MiGetAnyMultiplexedVm(1);
    v52 = SessionVm;
    v64[2] = 0LL;
    if ( v14 != 1 )
      v10 = 0;
    LODWORD(v64[1]) = 20;
    WORD2(v64[0]) = 0;
    LODWORD(v64[0]) = v10;
    v17 = SessionVm;
    v64[3] = 0LL;
    v56 = 0LL;
    v50 = MiLockWorkingSetShared(SessionVm);
    if ( a2 <= v63 )
    {
      v18 = 0LL;
      v19 = 0LL;
      for ( i = 0LL; ; v19 = i )
      {
        if ( !v11 )
          goto LABEL_22;
        if ( (a2 & 0xFFF) == 0 )
          break;
LABEL_23:
        if ( a2 > v60 )
        {
          v20 = v8 - *(_QWORD *)(v58 + 48);
          if ( v19 )
          {
            v22 = *(_QWORD *)(v19 + 16);
            i = v22;
            v59 = v18;
          }
          else
          {
            MiFlushTbList(v64, v18);
            MiUnlockPageTableInternal(v52);
            LOBYTE(v21) = v50;
            MiUnlockWorkingSetShared(v52, v21);
            i = MiOffsetToProtos(v62, v20, &v59);
            MiLockWorkingSetShared(v52);
            MiLockPageTableInternal(v52, v11, 0LL);
            v18 = v59;
            v22 = i;
          }
          v9 = (*(unsigned __int16 *)(v22 + 32) >> 1) & 0x1F;
          v60 = a2
              + 8 * (*(unsigned int *)(v22 + 44) - (unsigned __int64)(*(_DWORD *)(v22 + 52) & 0x3FFFFFFF) - v18 - 1);
          if ( (v9 & 5) == 5 )
            v9 &= ~1u;
        }
        v23 = MI_READ_PTE_LOCK_FREE(a2);
        v54 = v23;
        if ( (v23 & 1) != 0 )
        {
          v51 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v54) >> 12) & 0xFFFFFFFFFLL;
          v24 = 48 * v51 - 0x58000000000LL;
          v25 = MI_PFN_IS_PROTO(v24);
          v18 = 0LL;
          if ( v25 )
            goto LABEL_90;
          if ( (MiGetPagePrivilege(v26) & 0x40) != 0 )
          {
            if ( (a4 & 6) != 0 )
              goto LABEL_33;
          }
          else if ( (MiFlags & 0x10000) != 0 && (a4 & 4) != 0 && ((*(_QWORD *)(v24 + 40) >> 60) & 7) == 3 )
          {
LABEL_33:
            v11 = v56;
            v7 = 0;
            goto LABEL_34;
          }
          v28 = 0LL;
          v57 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v57);
            while ( *(__int64 *)(v24 + 24) < 0 );
          }
          *(_QWORD *)(v24 + 16) ^= (*(_DWORD *)(v24 + 16) ^ (32 * v9)) & 0x3E0;
          if ( v53 )
            MiMarkPfnVerified(v24, 4LL);
          v61 = v54 & 0x42;
          if ( (v54 & 0x42) != 0 )
            v28 = MiCaptureDirtyBitToPfn(v24);
          _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v28 )
            MiReleasePageFileInfo(
              *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v24 + 40) >> 39) & 0x3FFLL)),
              v28,
              1LL);
          ValidPte = MiMakeValidPte(a2, v51, v9);
          if ( (v9 & 5) == 4 && v61 )
            ValidPte |= 0x42uLL;
          MiWriteValidPteNewProtection(a2, ValidPte);
          if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
          {
            v30 = MI_TIGHTER_PERMISSIONS(v54);
            v18 = 0LL;
            if ( !v30 )
              goto LABEL_90;
          }
          MiInsertTbFlushEntry(v64, v8, 1LL, 0LL);
          goto LABEL_89;
        }
        if ( (v23 & 0x400) != 0 )
          goto LABEL_89;
        v18 = 0LL;
        if ( (v23 & 0x800) != 0 )
        {
          v31 = MiLockTransitionLeafPage(a2, 0LL);
          v18 = 0LL;
          if ( !v31 )
            goto LABEL_91;
          v32 = MI_READ_PTE_LOCK_FREE(a2);
          v33 = v32;
          if ( qword_140C4DDC0 )
          {
            if ( (v32 & 0x10) != 0 )
              v33 = v32 & 0xFFFFFFFFFFFFFFEFuLL;
            else
              v33 = v32 & ~qword_140C4DDC0;
          }
          v61 = 48 * ((v33 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          v34 = 32LL * (v9 & 0x1F);
          v35 = v34 | v32 & 0xFFFFFFFFFFFFFC1FuLL;
          v36 = *(_QWORD *)(v61 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
          v54 = v35;
          v37 = v35;
          *(_QWORD *)(v61 + 16) = v34 | v36;
          v38 = MiPteInShadowRange(a2);
          v18 = 0LL;
          if ( v38 )
          {
            if ( (unsigned int)MiPteHasShadow(v39, 0LL, v40, v41) )
            {
              v42 = 1;
              if ( HIBYTE(word_140C4DE88) == (_BYTE)v18 && (v35 & 1) != 0 )
                v37 = v35 | 0x8000000000000000uLL;
              goto LABEL_73;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v35 & 1) != 0 )
            {
              v37 = v35 | 0x8000000000000000uLL;
            }
          }
          v42 = v18;
LABEL_73:
          *(_QWORD *)a2 = v37;
          if ( v42 )
          {
            MiWritePteShadow(a2, v37);
            v18 = 0LL;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v61 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_90;
        }
        if ( v23 && a4 != 256 )
        {
          v43 = v23 ^ (v23 ^ (32 * v9)) & 0xE0;
          v54 = v23 ^ ((unsigned __int16)v23 ^ (unsigned __int16)(32 * v9)) & 0x3E0;
          v44 = v54;
          v45 = MiPteInShadowRange(a2);
          v18 = 0LL;
          if ( v45 )
          {
            if ( (unsigned int)MiPteHasShadow(v46, 0LL, v47, v48) )
            {
              v49 = 1;
              if ( HIBYTE(word_140C4DE88) == (_BYTE)v18 && (v43 & 1) != 0 )
                v44 |= 0x8000000000000000uLL;
LABEL_87:
              *(_QWORD *)a2 = v44;
              if ( v49 )
              {
                MiWritePteShadow(a2, v44);
LABEL_89:
                v18 = 0LL;
                goto LABEL_90;
              }
              goto LABEL_90;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v43 & 1) != 0 )
            {
              v44 |= 0x8000000000000000uLL;
            }
          }
          v49 = v18;
          goto LABEL_87;
        }
LABEL_90:
        a2 += 8LL;
        v8 += 4096LL;
LABEL_91:
        v11 = v56;
        if ( a2 > v63 )
          goto LABEL_34;
        v17 = v52;
      }
      MiFlushTbList(v64, v18);
      MiUnlockPageTableInternal(v17);
LABEL_22:
      v11 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v56 = v11;
      MiLockPageTableInternal(v17, v11, 0LL);
      v19 = i;
      v18 = 0LL;
      goto LABEL_23;
    }
LABEL_34:
    MiFlushTbList(v64, v18);
    if ( v11 )
      MiUnlockPageTableInternal(v52);
    LOBYTE(v27) = v50;
    MiUnlockWorkingSetShared(v52, v27);
  }
  return v7;
}
