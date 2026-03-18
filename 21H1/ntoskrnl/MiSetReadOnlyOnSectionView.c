/*
 * XREFs of MiSetReadOnlyOnSectionView @ 0x14029F230
 * Callers:
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14061606C (MmSecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x140207D20 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiVadPureReserve @ 0x14021AF70 (MiVadPureReserve.c)
 *     MiRevertValidPte @ 0x14021C800 (MiRevertValidPte.c)
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     MiGetWsleProtection @ 0x1402233F0 (MiGetWsleProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiWriteValidPteVolatile @ 0x14029EE60 (MiWriteValidPteVolatile.c)
 *     MiSetProtectionOnTransitionPte @ 0x1402ACC58 (MiSetProtectionOnTransitionPte.c)
 *     MiUpdatePfnProtection @ 0x1402AE650 (MiUpdatePfnProtection.c)
 *     MiMakeSystemAddressValid @ 0x1402AE710 (MiMakeSystemAddressValid.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiIsPrototypePteVadLookup @ 0x140345200 (MiIsPrototypePteVadLookup.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiSetReadOnlyOnSectionView(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // r13
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  __int64 v8; // r10
  unsigned int v10; // esi
  unsigned int updated; // edi
  unsigned int v12; // r12d
  __int64 v13; // rbx
  ULONG_PTR v14; // r14
  unsigned __int64 v15; // r15
  unsigned __int64 Flink; // rdx
  unsigned __int64 v17; // rsi
  __int64 v18; // rcx
  BOOL v19; // r8d
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  unsigned __int64 v24; // rsi
  __int64 v25; // r15
  unsigned __int64 v26; // r12
  __int64 ProtoPteAddress; // rax
  volatile signed __int64 v28; // rbx
  volatile unsigned __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  BOOL v32; // r13d
  struct _LIST_ENTRY *v33; // rdx
  __int64 v34; // rax
  int WsleProtection; // eax
  __int64 v36; // rcx
  struct _LIST_ENTRY *v37; // rax
  char v38; // rdx^7
  __int64 v39; // rax
  __int64 v40; // rcx
  unsigned __int64 v41; // rax
  __int64 v42; // rcx
  int v43; // r8d
  unsigned __int64 v44; // rax
  int v45; // eax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rax
  __int64 v48; // rbx
  unsigned __int8 v49; // [rsp+30h] [rbp-D0h]
  int v50; // [rsp+34h] [rbp-CCh]
  int v51; // [rsp+38h] [rbp-C8h]
  int v52; // [rsp+3Ch] [rbp-C4h]
  unsigned __int64 v53; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v54; // [rsp+48h] [rbp-B8h]
  __int64 v55; // [rsp+50h] [rbp-B0h]
  __int64 v56; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v57; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v58; // [rsp+68h] [rbp-98h]
  unsigned __int64 v59; // [rsp+70h] [rbp-90h]
  __int64 v60; // [rsp+78h] [rbp-88h] BYREF
  volatile signed __int64 *v61; // [rsp+80h] [rbp-80h]
  unsigned __int64 v62; // [rsp+88h] [rbp-78h]
  int v63; // [rsp+90h] [rbp-70h] BYREF
  __int16 v64; // [rsp+94h] [rbp-6Ch]
  __int16 v65; // [rsp+96h] [rbp-6Ah]
  __int64 v66; // [rsp+98h] [rbp-68h]
  __int64 v67; // [rsp+A0h] [rbp-60h]
  __int64 v68; // [rsp+A8h] [rbp-58h]
  __int128 v69; // [rsp+B0h] [rbp-50h]
  __int128 v70; // [rsp+C0h] [rbp-40h]
  __int128 v71; // [rsp+D0h] [rbp-30h]
  __int128 v72; // [rsp+E0h] [rbp-20h]
  __int128 v73; // [rsp+F0h] [rbp-10h]
  __int128 v74; // [rsp+100h] [rbp+0h]
  __int128 v75; // [rsp+110h] [rbp+10h]
  __int128 v76; // [rsp+120h] [rbp+20h]
  __int128 v77; // [rsp+130h] [rbp+30h]
  __int64 v78; // [rsp+140h] [rbp+40h]

  v56 = a2;
  v62 = a3;
  v4 = a2;
  v65 = 0;
  v78 = 0LL;
  v60 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  if ( (unsigned int)MiVadPureReserve(a2) )
    return 3221225541LL;
  v10 = v6;
  updated = 1;
  v12 = 4;
  v51 = v6;
  v13 = v6;
  v64 = v6;
  v67 = v6;
  v68 = v6;
  v54 = v6;
  v52 = 4;
  v50 = 1;
  v66 = 20LL;
  v63 = 1;
  v59 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = v59;
  v15 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v58 = v15;
  v55 = v8 + 1664;
  v49 = MiLockWorkingSetShared(v8 + 1664);
  if ( v59 <= v15 )
  {
    do
    {
      if ( (v14 & 0xFFF) != 0 )
      {
        if ( v13 )
          goto LABEL_10;
      }
      else if ( v13 )
      {
        MiFlushTbList((__int64)&v63, (_KPROCESS *)Flink);
        MiUnlockPageTableInternal(v55, v13);
      }
      MiMakeSystemAddressValid(v14, 0);
      v54 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_10:
      v17 = *(_QWORD *)v14;
      v19 = MiPteInShadowRange(v14);
      if ( v19 && (unsigned int)MiPteHasShadow(v18, Flink) && (v17 & 1) != 0 && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
      {
        Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v20 = *(_QWORD *)(Flink + 8 * ((v14 >> 3) & 0x1FF));
          Flink = v17 | 0x20;
          if ( (v20 & 0x20) == 0 )
            Flink = v17;
          v17 = Flink;
          if ( (v20 & 0x42) != 0 )
            v17 = Flink | 0x42;
        }
      }
      v53 = v17;
      if ( !v17 )
        goto LABEL_98;
      if ( (v17 & 1) != 0 )
      {
        if ( MiPteInShadowRange((unsigned __int64)&v53)
          && (unsigned int)MiPteHasShadow(v21, Flink)
          && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
        {
          Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v23 = *(_QWORD *)(Flink + 8 * (((unsigned __int64)&v53 >> 3) & 0x1FF));
            Flink = v17 | 0x20;
            if ( (v23 & 0x20) == 0 )
              Flink = v17;
            v17 = Flink;
            if ( (v23 & 0x42) != 0 )
              v17 = Flink | 0x42;
          }
        }
        v24 = (v17 >> 12) & 0xFFFFFFFFFLL;
        v25 = 48 * v24 - 0x58000000000LL;
        if ( *(_WORD *)(v25 + 32) > 1u && (updated & 7) != 4 )
          goto LABEL_98;
        if ( (unsigned int)MI_PFN_IS_PROTO(48 * v24 - 0x58000000000LL, Flink, v22) )
        {
          v26 = (__int64)(v14 << 25) >> 16;
          ProtoPteAddress = MiGetProtoPteAddress(v4, v26 >> 12, 0, &v60);
          Flink = 0x8000000000000000uLL;
          if ( (*(_QWORD *)(v25 + 8) | 0x8000000000000000uLL) != ProtoPteAddress )
            goto LABEL_98;
          v61 = (volatile signed __int64 *)(((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          LODWORD(v57) = (v26 >> 9) & 0xFFFFFFF8;
          v28 = *v61;
          v29 = *v61;
          v32 = MiPteInShadowRange((unsigned __int64)v61);
          if ( v32
            && (unsigned int)MiPteHasShadow(v31, v30)
            && (v29 & 1) != 0
            && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
          {
            v33 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v33 )
            {
              v29 |= 0x20uLL;
              v34 = *((_QWORD *)&v33->Flink + ((v57 >> 3) & 0x1FF));
              if ( (v34 & 0x20) == 0 )
                v29 = v28;
              if ( (v34 & 0x42) != 0 )
                v29 |= 0x42uLL;
            }
          }
          WsleProtection = MiGetWsleProtection((__int64)(v14 << 25) >> 16, HIBYTE(v29) & 0xF | (16 * ((v29 >> 60) & 7)));
          v12 = v52;
          if ( WsleProtection != v52
            && (WsleProtection || (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v25 + 16) >> 5) & 0x1F) != v52) )
          {
            v4 = v56;
            goto LABEL_98;
          }
          if ( v32
            && (unsigned int)MiPteHasShadow(v36, Flink)
            && (v28 & 1) != 0
            && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
          {
            v37 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v37 )
            {
              v38 = HIBYTE(v28);
              v39 = *((_QWORD *)&v37->Flink + ((v57 >> 3) & 0x1FF));
              if ( (v39 & 0x20) == 0 )
                v38 = HIBYTE(v28);
              HIBYTE(v28) = v38;
              if ( (v39 & 0x42) != 0 )
                HIBYTE(v28) = v38;
            }
          }
          updated = v50;
          MiWriteValidPteVolatile(v61, 0x80000000, HIBYTE(v28) & 0xF | (16 * (v50 & 7)));
          v4 = v56;
        }
        else
        {
          if ( ((*(_DWORD *)(v25 + 16) >> 5) & 0x1F) != (unsigned __int64)v12 )
            goto LABEL_98;
          updated = MiUpdatePfnProtection(v4, 48 * v24 - 0x58000000000LL, updated);
          v50 = updated;
        }
        MiRevertValidPte(v4, v14, updated, v24, (__int64)&v63);
        v15 = v58;
        v14 += 8LL;
        goto LABEL_79;
      }
      if ( (v17 & 0x400) != 0 )
      {
        if ( (updated & 7) != 4 )
          goto LABEL_98;
        if ( !(unsigned int)MiIsPrototypePteVadLookup(v17) )
        {
          v41 = MiSwizzleInvalidPte(32 * (updated & 0x1F | 0xFFFFFFFFF8000020uLL));
          v53 = v41;
          Flink = v41;
          if ( v43 )
          {
            if ( (unsigned int)MiPteHasShadow(v42, v41) )
            {
              v44 = Flink;
              if ( !HIBYTE(word_140C4DF48) && (Flink & 1) != 0 )
                v44 = Flink | 0x8000000000000000uLL;
              *(_QWORD *)v14 = v44;
              MiWritePteShadow(v14, v44);
              goto LABEL_98;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
            {
              *(_QWORD *)v14 = Flink;
              goto LABEL_98;
            }
            v41 = Flink;
            if ( (Flink & 1) != 0 )
              v41 = Flink | 0x8000000000000000uLL;
          }
          *(_QWORD *)v14 = v41;
LABEL_98:
          v48 = v54;
          if ( v54 != ((v62 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
          {
            MiFlushTbList((__int64)&v63, (_KPROCESS *)Flink);
            if ( v48 )
            {
              MiUnlockPageTableInternal(v55, v48);
              v54 = 0LL;
            }
          }
          v15 = v14 - 8;
          v12 = 1;
          v14 = v59;
          updated = 4;
          v10 = -1073741755;
          v58 = v15;
          v52 = 1;
          v50 = 4;
          v51 = -1073741755;
          goto LABEL_80;
        }
      }
      else
      {
        if ( (v17 & 0x800) != 0 )
        {
          v45 = MiSetProtectionOnTransitionPte(v4, v14, updated, (updated & 7) == 4);
          if ( !v45 )
            goto LABEL_96;
          if ( v45 != 2 )
            goto LABEL_98;
          goto LABEL_79;
        }
        v40 = (v17 >> 5) & 0x1F;
        if ( v40 != v12 )
          goto LABEL_98;
      }
      Flink = v17 ^ ((unsigned __int16)v17 ^ (unsigned __int16)(32 * updated)) & 0x3E0;
      v53 = Flink;
      v46 = Flink;
      if ( !v19 )
        goto LABEL_95;
      if ( (unsigned int)MiPteHasShadow(v40, Flink) )
      {
        v47 = Flink;
        if ( !HIBYTE(word_140C4DF48) && (Flink & 1) != 0 )
          v47 = Flink | 0x8000000000000000uLL;
        *(_QWORD *)v14 = v47;
        MiWritePteShadow(v14, v47);
        v14 += 8LL;
        goto LABEL_79;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v46 = Flink;
        if ( (Flink & 1) != 0 )
          v46 = Flink | 0x8000000000000000uLL;
LABEL_95:
        *(_QWORD *)v14 = v46;
LABEL_96:
        v14 += 8LL;
        goto LABEL_79;
      }
      *(_QWORD *)v14 = Flink;
      v14 += 8LL;
LABEL_79:
      v10 = v51;
LABEL_80:
      v13 = v54;
    }
    while ( v14 <= v15 );
  }
  MiFlushTbList((__int64)&v63, (_KPROCESS *)Flink);
  if ( v13 )
    MiUnlockPageTableInternal(v55, v13);
  MiUnlockWorkingSetShared(v55, v49);
  return v10;
}
