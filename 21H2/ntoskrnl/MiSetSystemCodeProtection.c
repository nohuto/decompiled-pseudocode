/*
 * XREFs of MiSetSystemCodeProtection @ 0x140297B68
 * Callers:
 *     MiSetImageProtection @ 0x140297B18 (MiSetImageProtection.c)
 *     MiProtectSystemImage @ 0x1407A188C (MiProtectSystemImage.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiLockTransitionLeafPage @ 0x140224B74 (MiLockTransitionLeafPage.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiMarkPfnVerified @ 0x140236C14 (MiMarkPfnVerified.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x140298214 (MI_TIGHTER_PERMISSIONS.c)
 *     MiMakeDriverPagesPrivate @ 0x140298244 (MiMakeDriverPagesPrivate.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiWriteValidPteNewProtection @ 0x14031A750 (MiWriteValidPteNewProtection.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031A860 (MiCaptureDirtyBitToPfn.c)
 *     MiGetSessionVm @ 0x14031CEEC (MiGetSessionVm.c)
 *     MiSectionControlArea @ 0x14031FFB0 (MiSectionControlArea.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140327920 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiOffsetToProtos @ 0x14032B8A0 (MiOffsetToProtos.c)
 *     MiGetPagePrivilege @ 0x140333440 (MiGetPagePrivilege.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x140414300 (memset.c)
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
  int v15; // edx
  ULONG_PTR v16; // r8
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rax
  ULONG_PTR v25; // rdi
  int v26; // eax
  ULONG_PTR v27; // rcx
  __int64 v28; // rdx
  unsigned __int64 v29; // rbx
  __int64 ValidPte; // rbx
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rdi
  unsigned __int64 v34; // rcx
  __int64 v35; // rcx
  unsigned __int64 v36; // rdi
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rbx
  int v39; // eax
  int v40; // eax
  char v41; // di
  __int64 v42; // rbx
  int v43; // eax
  int v44; // eax
  char v45; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v46; // [rsp+28h] [rbp-D8h]
  __int64 v47; // [rsp+30h] [rbp-D0h]
  int v48; // [rsp+38h] [rbp-C8h]
  __int64 v49; // [rsp+40h] [rbp-C0h] BYREF
  __int64 i; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v51; // [rsp+50h] [rbp-B0h]
  int v52; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v53; // [rsp+60h] [rbp-A0h]
  __int64 v54; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR v55; // [rsp+70h] [rbp-90h]
  __int64 v56; // [rsp+78h] [rbp-88h]
  __int64 v57; // [rsp+80h] [rbp-80h]
  ULONG_PTR v58; // [rsp+88h] [rbp-78h]
  _QWORD v59[24]; // [rsp+90h] [rbp-70h] BYREF

  v58 = a3;
  v53 = a1;
  v54 = 0LL;
  memset(v59, 0, 0xB8uLL);
  v7 = 1;
  if ( a4 == 24 || (a4 & 0x10) == 0 )
  {
    v48 = 0;
  }
  else
  {
    a4 &= ~0x10u;
    v48 = 1;
  }
  v8 = (__int64)(a2 << 25) >> 16;
  if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v8) )
  {
    v9 = a4;
    v10 = 2;
    if ( a4 == 256 )
    {
      v11 = 0LL;
      v57 = MiSectionControlArea(*(_QWORD *)(v53 + 112));
      v55 = 0LL;
    }
    else
    {
      v55 = a3;
      v57 = 0LL;
      v9 = a4 & 0xFFFFFFFE;
      v16 = a3;
      if ( (a4 & 5) != 5 )
        v9 = a4;
      v11 = 0LL;
      if ( (int)MiMakeDriverPagesPrivate(v53, a2, v16, (v9 >> 1) & 2) < 0 )
        return 0LL;
    }
    if ( (unsigned int)MiGetSystemRegionType((__int64)(a2 << 25) >> 16) == 1 )
      SessionVm = MiGetSessionVm(v12, 1LL, v13);
    else
      SessionVm = MiGetAnyMultiplexedVm(1LL);
    v47 = SessionVm;
    v59[2] = 0LL;
    if ( v15 != 1 )
      v10 = 0;
    LODWORD(v59[1]) = 20;
    WORD2(v59[0]) = 0;
    LODWORD(v59[0]) = v10;
    v18 = SessionVm;
    v59[3] = 0LL;
    v51 = 0LL;
    v45 = MiLockWorkingSetShared(SessionVm);
    if ( a2 <= v58 )
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
        if ( a2 > v55 )
        {
          v21 = v8 - *(_QWORD *)(v53 + 48);
          if ( v20 )
          {
            v23 = *(_QWORD *)(v20 + 16);
            i = v23;
            v54 = v19;
          }
          else
          {
            MiFlushTbList(v59);
            MiUnlockPageTableInternal(v47, v11);
            LOBYTE(v22) = v45;
            MiUnlockWorkingSetShared(v47, v22);
            i = MiOffsetToProtos(v57, v21, &v54);
            MiLockWorkingSetShared(v47);
            MiLockPageTableInternal(v47, v11, 0LL);
            v19 = v54;
            v23 = i;
          }
          v9 = (*(unsigned __int16 *)(v23 + 32) >> 1) & 0x1F;
          v55 = a2
              + 8 * (*(unsigned int *)(v23 + 44) - (unsigned __int64)(*(_DWORD *)(v23 + 52) & 0x3FFFFFFF) - v19 - 1);
          if ( (v9 & 5) == 5 )
            v9 &= ~1u;
        }
        v24 = MI_READ_PTE_LOCK_FREE(a2);
        v49 = v24;
        if ( (v24 & 1) != 0 )
        {
          v46 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v49) >> 12) & 0xFFFFFFFFFLL;
          v25 = 48 * v46 - 0x58000000000LL;
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
            v11 = v51;
            v7 = 0;
            goto LABEL_34;
          }
          v29 = 0LL;
          v52 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v52);
            while ( *(__int64 *)(v25 + 24) < 0 );
          }
          *(_QWORD *)(v25 + 16) ^= (*(_DWORD *)(v25 + 16) ^ (32 * v9)) & 0x3E0;
          if ( v48 )
            MiMarkPfnVerified(v25, 4);
          v56 = v49 & 0x42;
          if ( (v49 & 0x42) != 0 )
            v29 = MiCaptureDirtyBitToPfn(v25);
          _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v29 )
            MiReleasePageFileInfo(*(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v25 + 40) >> 39) & 0x3FFLL)), v29, 1);
          ValidPte = MiMakeValidPte(a2, v46, v9);
          if ( (v9 & 5) == 4 && v56 )
            ValidPte |= 0x42uLL;
          MiWriteValidPteNewProtection(a2, ValidPte);
          if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
          {
            v31 = MI_TIGHTER_PERMISSIONS(v49, ValidPte);
            v19 = 0LL;
            if ( !v31 )
              goto LABEL_90;
          }
          MiInsertTbFlushEntry(v59, v8, 1LL, 0LL);
          goto LABEL_89;
        }
        if ( (v24 & 0x400) != 0 )
          goto LABEL_89;
        v19 = 0LL;
        if ( (v24 & 0x800) != 0 )
        {
          v32 = MiLockTransitionLeafPage(a2, 0LL);
          v19 = 0LL;
          if ( !v32 )
            goto LABEL_91;
          v33 = MI_READ_PTE_LOCK_FREE(a2);
          v34 = v33;
          if ( qword_140C4DF80 )
          {
            if ( (v33 & 0x10) != 0 )
              v34 = v33 & 0xFFFFFFFFFFFFFFEFuLL;
            else
              v34 = v33 & ~qword_140C4DF80;
          }
          v56 = 48 * ((v34 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          v35 = 32LL * (v9 & 0x1F);
          v36 = v35 | v33 & 0xFFFFFFFFFFFFFC1FuLL;
          v37 = *(_QWORD *)(v56 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
          v49 = v36;
          v38 = v36;
          *(_QWORD *)(v56 + 16) = v35 | v37;
          v39 = MiPteInShadowRange(a2);
          v19 = 0LL;
          if ( v39 )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v40 = 1;
              if ( HIBYTE(word_140C4E048) == (_BYTE)v19 && (v36 & 1) != 0 )
                v38 = v36 | 0x8000000000000000uLL;
              goto LABEL_73;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v36 & 1) != 0 )
            {
              v38 = v36 | 0x8000000000000000uLL;
            }
          }
          v40 = v19;
LABEL_73:
          *(_QWORD *)a2 = v38;
          if ( v40 )
          {
            MiWritePteShadow(a2, v38);
            v19 = 0LL;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v56 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_90;
        }
        if ( v24 && a4 != 256 )
        {
          v41 = v24 ^ (v24 ^ (32 * v9)) & 0xE0;
          v49 = v24 ^ ((unsigned __int16)v24 ^ (unsigned __int16)(32 * v9)) & 0x3E0;
          v42 = v49;
          v43 = MiPteInShadowRange(a2);
          v19 = 0LL;
          if ( v43 )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v44 = 1;
              if ( HIBYTE(word_140C4E048) == (_BYTE)v19 && (v41 & 1) != 0 )
                v42 |= 0x8000000000000000uLL;
LABEL_87:
              *(_QWORD *)a2 = v42;
              if ( v44 )
              {
                MiWritePteShadow(a2, v42);
LABEL_89:
                v19 = 0LL;
                goto LABEL_90;
              }
              goto LABEL_90;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v41 & 1) != 0 )
            {
              v42 |= 0x8000000000000000uLL;
            }
          }
          v44 = v19;
          goto LABEL_87;
        }
LABEL_90:
        a2 += 8LL;
        v8 += 4096LL;
LABEL_91:
        v11 = v51;
        if ( a2 > v58 )
          goto LABEL_34;
        v18 = v47;
      }
      MiFlushTbList(v59);
      MiUnlockPageTableInternal(v18, v11);
LABEL_22:
      v11 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v51 = v11;
      MiLockPageTableInternal(v18, v11, 0LL);
      v20 = i;
      v19 = 0LL;
      goto LABEL_23;
    }
LABEL_34:
    MiFlushTbList(v59);
    if ( v11 )
      MiUnlockPageTableInternal(v47, v11);
    LOBYTE(v28) = v45;
    MiUnlockWorkingSetShared(v47, v28);
  }
  return v7;
}
