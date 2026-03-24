/*
 * XREFs of MiSetSystemCodeProtection @ 0x1402E6818
 * Callers:
 *     MiSetImageProtection @ 0x1402E67C8 (MiSetImageProtection.c)
 *     MiProtectSystemImage @ 0x1407A168C (MiProtectSystemImage.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAF0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiMarkPfnVerified @ 0x1402B8A04 (MiMarkPfnVerified.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x1402E6EC4 (MI_TIGHTER_PERMISSIONS.c)
 *     MiMakeDriverPagesPrivate @ 0x1402E6EF4 (MiMakeDriverPagesPrivate.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     MiWriteValidPteNewProtection @ 0x14030FA00 (MiWriteValidPteNewProtection.c)
 *     MiCaptureDirtyBitToPfn @ 0x14030FB10 (MiCaptureDirtyBitToPfn.c)
 *     MiGetSessionVm @ 0x14031219C (MiGetSessionVm.c)
 *     MiSectionControlArea @ 0x140315260 (MiSectionControlArea.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14031CBD0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiOffsetToProtos @ 0x140320B50 (MiOffsetToProtos.c)
 *     MiGetPagePrivilege @ 0x1403286F0 (MiGetPagePrivilege.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     MiLockTransitionLeafPage @ 0x140364704 (MiLockTransitionLeafPage.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x140414200 (memset.c)
 */

__int64 __fastcall MiSetSystemCodeProtection(__int64 a1, ULONG_PTR a2, ULONG_PTR a3, unsigned int a4)
{
  unsigned int v7; // esi
  __int64 v8; // r12
  unsigned int v9; // r15d
  int v10; // ebx
  unsigned __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 SessionVm; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  _DWORD *v17; // r9
  ULONG_PTR v18; // r8
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // r8
  _DWORD *v26; // r9
  __int64 v27; // r8
  __int64 v28; // rax
  ULONG_PTR v29; // rdi
  int v30; // eax
  ULONG_PTR v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // rbx
  __int64 ValidPte; // rbx
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rdi
  unsigned __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned __int64 v43; // rdi
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rbx
  int v46; // eax
  __int64 v47; // r8
  int v48; // eax
  char v49; // di
  __int64 v50; // rbx
  int v51; // eax
  __int64 v52; // r8
  int v53; // eax
  unsigned __int8 v54; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v55; // [rsp+28h] [rbp-D8h]
  __int64 v56; // [rsp+30h] [rbp-D0h]
  int v57; // [rsp+38h] [rbp-C8h]
  __int64 v58; // [rsp+40h] [rbp-C0h] BYREF
  __int64 i; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v60; // [rsp+50h] [rbp-B0h]
  int v61; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v62; // [rsp+60h] [rbp-A0h]
  __int64 v63; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR v64; // [rsp+70h] [rbp-90h]
  __int64 v65; // [rsp+78h] [rbp-88h]
  __int64 v66; // [rsp+80h] [rbp-80h]
  ULONG_PTR v67; // [rsp+88h] [rbp-78h]
  _QWORD v68[24]; // [rsp+90h] [rbp-70h] BYREF

  v67 = a3;
  v62 = a1;
  v63 = 0LL;
  memset(v68, 0, 0xB8uLL);
  v7 = 1;
  if ( a4 == 24 || (a4 & 0x10) == 0 )
  {
    v57 = 0;
  }
  else
  {
    a4 &= ~0x10u;
    v57 = 1;
  }
  v8 = (__int64)(a2 << 25) >> 16;
  if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v8) )
  {
    v9 = a4;
    v10 = 2;
    if ( a4 == 256 )
    {
      v11 = 0LL;
      v66 = MiSectionControlArea(*(_QWORD *)(v62 + 112));
      v64 = 0LL;
    }
    else
    {
      v64 = a3;
      v66 = 0LL;
      v9 = a4 & 0xFFFFFFFE;
      v18 = a3;
      if ( (a4 & 5) != 5 )
        v9 = a4;
      v11 = 0LL;
      if ( (int)MiMakeDriverPagesPrivate(v62, a2, v18, (v9 >> 1) & 2) < 0 )
        return 0LL;
    }
    if ( (unsigned int)MiGetSystemRegionType((__int64)(a2 << 25) >> 16) == 1 )
      SessionVm = MiGetSessionVm(v12, 1LL, v13);
    else
      SessionVm = MiGetAnyMultiplexedVm(1LL);
    v56 = SessionVm;
    v68[2] = 0LL;
    if ( (_DWORD)v15 != 1 )
      v10 = 0;
    LODWORD(v68[1]) = 20;
    WORD2(v68[0]) = 0;
    LODWORD(v68[0]) = v10;
    v20 = SessionVm;
    v68[3] = 0LL;
    v60 = 0LL;
    v54 = MiLockWorkingSetShared(SessionVm, v15, v16, v17);
    if ( a2 <= v67 )
    {
      v21 = 0LL;
      v22 = 0LL;
      for ( i = 0LL; ; v22 = i )
      {
        if ( !v11 )
          goto LABEL_22;
        if ( (a2 & 0xFFF) == 0 )
          break;
LABEL_23:
        if ( a2 > v64 )
        {
          v23 = v8 - *(_QWORD *)(v62 + 48);
          if ( v22 )
          {
            v27 = *(_QWORD *)(v22 + 16);
            i = v27;
            v63 = v21;
          }
          else
          {
            MiFlushTbList(v68);
            MiUnlockPageTableInternal(v56, v11);
            MiUnlockWorkingSetShared(v56, v54);
            i = MiOffsetToProtos(v66, v23, &v63);
            MiLockWorkingSetShared(v56, v24, v25, v26);
            MiLockPageTableInternal(v56, v11, 0LL);
            v21 = v63;
            v27 = i;
          }
          v9 = (*(unsigned __int16 *)(v27 + 32) >> 1) & 0x1F;
          v64 = a2
              + 8 * (*(unsigned int *)(v27 + 44) - (unsigned __int64)(*(_DWORD *)(v27 + 52) & 0x3FFFFFFF) - v21 - 1);
          if ( (v9 & 5) == 5 )
            v9 &= ~1u;
        }
        v28 = MI_READ_PTE_LOCK_FREE(a2);
        v58 = v28;
        if ( (v28 & 1) != 0 )
        {
          v55 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v58) >> 12) & 0xFFFFFFFFFLL;
          v29 = 48 * v55 - 0x58000000000LL;
          v30 = MI_PFN_IS_PROTO(v29);
          v21 = 0LL;
          if ( v30 )
            goto LABEL_90;
          if ( (MiGetPagePrivilege(v31) & 0x40) != 0 )
          {
            if ( (a4 & 6) != 0 )
              goto LABEL_33;
          }
          else if ( (MiFlags & 0x10000) != 0 && (a4 & 4) != 0 && ((*(_QWORD *)(v29 + 40) >> 60) & 7) == 3 )
          {
LABEL_33:
            v11 = v60;
            v7 = 0;
            goto LABEL_34;
          }
          v35 = 0LL;
          v61 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v61, v32, v33, v34);
            while ( *(__int64 *)(v29 + 24) < 0 );
          }
          *(_QWORD *)(v29 + 16) ^= (*(_DWORD *)(v29 + 16) ^ (32 * v9)) & 0x3E0;
          if ( v57 )
            MiMarkPfnVerified(v29, 4);
          v65 = v58 & 0x42;
          if ( (v58 & 0x42) != 0 )
            v35 = MiCaptureDirtyBitToPfn(v29);
          _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v35 )
            MiReleasePageFileInfo(*(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v29 + 40) >> 39) & 0x3FFLL)), v35, 1);
          ValidPte = MiMakeValidPte(a2, v55, v9);
          if ( (v9 & 5) == 4 && v65 )
            ValidPte |= 0x42uLL;
          MiWriteValidPteNewProtection(a2, ValidPte);
          if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
          {
            v37 = MI_TIGHTER_PERMISSIONS(v58, ValidPte);
            v21 = 0LL;
            if ( !v37 )
              goto LABEL_90;
          }
          MiInsertTbFlushEntry(v68, v8, 1LL, 0LL);
          goto LABEL_89;
        }
        if ( (v28 & 0x400) != 0 )
          goto LABEL_89;
        v21 = 0LL;
        if ( (v28 & 0x800) != 0 )
        {
          v38 = MiLockTransitionLeafPage(a2);
          v21 = 0LL;
          if ( !v38 )
            goto LABEL_91;
          v39 = MI_READ_PTE_LOCK_FREE(a2);
          v40 = v39;
          if ( qword_140C4DF40 )
          {
            if ( (v39 & 0x10) != 0 )
              v40 = v39 & 0xFFFFFFFFFFFFFFEFuLL;
            else
              v40 = v39 & ~qword_140C4DF40;
          }
          v41 = 48 * ((v40 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          v65 = v41;
          v42 = 32LL * (v9 & 0x1F);
          v43 = v42 | v39 & 0xFFFFFFFFFFFFFC1FuLL;
          v44 = *(_QWORD *)(v41 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
          v58 = v43;
          v45 = v43;
          *(_QWORD *)(v41 + 16) = v42 | v44;
          v46 = MiPteInShadowRange(a2, v41);
          v21 = 0LL;
          if ( v46 )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v48 = 1;
              if ( HIBYTE(word_140C4E008) == (_BYTE)v21 && (v43 & 1) != 0 )
                v45 = v43 | 0x8000000000000000uLL;
              goto LABEL_73;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v43 & 1) != 0 )
            {
              v45 = v43 | 0x8000000000000000uLL;
            }
          }
          v48 = v21;
LABEL_73:
          *(_QWORD *)a2 = v45;
          if ( v48 )
          {
            MiWritePteShadow(a2, v45, v47);
            v21 = 0LL;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v65 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_90;
        }
        if ( v28 && a4 != 256 )
        {
          v49 = v28 ^ (v28 ^ (32 * v9)) & 0xE0;
          v58 = v28 ^ ((unsigned __int16)v28 ^ (unsigned __int16)(32 * v9)) & 0x3E0;
          v50 = v58;
          v51 = MiPteInShadowRange(a2, 0LL);
          v21 = 0LL;
          if ( v51 )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v53 = 1;
              if ( HIBYTE(word_140C4E008) == (_BYTE)v21 && (v49 & 1) != 0 )
                v50 |= 0x8000000000000000uLL;
LABEL_87:
              *(_QWORD *)a2 = v50;
              if ( v53 )
              {
                MiWritePteShadow(a2, v50, v52);
LABEL_89:
                v21 = 0LL;
                goto LABEL_90;
              }
              goto LABEL_90;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v49 & 1) != 0 )
            {
              v50 |= 0x8000000000000000uLL;
            }
          }
          v53 = v21;
          goto LABEL_87;
        }
LABEL_90:
        a2 += 8LL;
        v8 += 4096LL;
LABEL_91:
        v11 = v60;
        if ( a2 > v67 )
          goto LABEL_34;
        v20 = v56;
      }
      MiFlushTbList(v68);
      MiUnlockPageTableInternal(v20, v11);
LABEL_22:
      v11 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v60 = v11;
      MiLockPageTableInternal(v20, v11, 0LL);
      v22 = i;
      v21 = 0LL;
      goto LABEL_23;
    }
LABEL_34:
    MiFlushTbList(v68);
    if ( v11 )
      MiUnlockPageTableInternal(v56, v11);
    MiUnlockWorkingSetShared(v56, v54);
  }
  return v7;
}
