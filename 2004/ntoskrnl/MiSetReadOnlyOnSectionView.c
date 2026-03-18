/*
 * XREFs of MiSetReadOnlyOnSectionView @ 0x140246200
 * Callers:
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14062ECA4 (MmSecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiWriteValidPteVolatile @ 0x140245E30 (MiWriteValidPteVolatile.c)
 *     MiSetProtectionOnTransitionPte @ 0x140253C28 (MiSetProtectionOnTransitionPte.c)
 *     MiUpdatePfnProtection @ 0x140255620 (MiUpdatePfnProtection.c)
 *     MiMakeSystemAddressValid @ 0x1402556E0 (MiMakeSystemAddressValid.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiGetProtoPteAddress @ 0x14029A830 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiVadPureReserve @ 0x1402ADBF0 (MiVadPureReserve.c)
 *     MiRevertValidPte @ 0x1402AF480 (MiRevertValidPte.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     MiGetWsleProtection @ 0x1402B6070 (MiGetWsleProtection.c)
 *     MiIsPrototypePteVadLookup @ 0x140315EC0 (MiIsPrototypePteVadLookup.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
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
  BOOL v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r9
  _BOOL8 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // r15
  unsigned __int64 v29; // r12
  __int64 ProtoPteAddress; // rax
  volatile signed __int64 v31; // rbx
  volatile unsigned __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  BOOL v37; // r13d
  struct _LIST_ENTRY *v38; // rdx
  __int64 v39; // rax
  int WsleProtection; // eax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  struct _LIST_ENTRY *v44; // rax
  char v45; // rdx^7
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned __int64 v53; // rax
  int v54; // eax
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rax
  __int64 v57; // rbx
  unsigned __int8 v58; // [rsp+30h] [rbp-D0h]
  int v59; // [rsp+34h] [rbp-CCh]
  int v60; // [rsp+38h] [rbp-C8h]
  int v61; // [rsp+3Ch] [rbp-C4h]
  unsigned __int64 v62; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v63; // [rsp+48h] [rbp-B8h]
  __int64 v64; // [rsp+50h] [rbp-B0h]
  __int64 v65; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v66; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v67; // [rsp+68h] [rbp-98h]
  unsigned __int64 v68; // [rsp+70h] [rbp-90h]
  __int64 v69; // [rsp+78h] [rbp-88h] BYREF
  volatile signed __int64 *v70; // [rsp+80h] [rbp-80h]
  unsigned __int64 v71; // [rsp+88h] [rbp-78h]
  int v72; // [rsp+90h] [rbp-70h] BYREF
  __int16 v73; // [rsp+94h] [rbp-6Ch]
  __int16 v74; // [rsp+96h] [rbp-6Ah]
  __int64 v75; // [rsp+98h] [rbp-68h]
  __int64 v76; // [rsp+A0h] [rbp-60h]
  __int64 v77; // [rsp+A8h] [rbp-58h]
  __int128 v78; // [rsp+B0h] [rbp-50h]
  __int128 v79; // [rsp+C0h] [rbp-40h]
  __int128 v80; // [rsp+D0h] [rbp-30h]
  __int128 v81; // [rsp+E0h] [rbp-20h]
  __int128 v82; // [rsp+F0h] [rbp-10h]
  __int128 v83; // [rsp+100h] [rbp+0h]
  __int128 v84; // [rsp+110h] [rbp+10h]
  __int128 v85; // [rsp+120h] [rbp+20h]
  __int128 v86; // [rsp+130h] [rbp+30h]
  __int64 v87; // [rsp+140h] [rbp+40h]

  v65 = a2;
  v71 = a3;
  v4 = a2;
  v74 = 0;
  v87 = 0LL;
  v69 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  if ( (unsigned int)MiVadPureReserve(a2) )
    return 3221225541LL;
  v10 = v6;
  updated = 1;
  v12 = 4;
  v60 = v6;
  v13 = v6;
  v73 = v6;
  v76 = v6;
  v77 = v6;
  v63 = v6;
  v61 = 4;
  v59 = 1;
  v75 = 20LL;
  v72 = 1;
  v68 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = v68;
  v15 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v67 = v15;
  v64 = v8 + 1664;
  v58 = MiLockWorkingSetShared(v8 + 1664);
  if ( v68 <= v15 )
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
        MiFlushTbList((__int64)&v72, (_KPROCESS *)Flink);
        MiUnlockPageTableInternal(v64, v13);
      }
      MiMakeSystemAddressValid(v14, 0);
      v63 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_10:
      v17 = *(_QWORD *)v14;
      v18 = MiPteInShadowRange(v14);
      v21 = v18;
      if ( v18
        && (unsigned int)MiPteHasShadow(v19, Flink, v18, v20)
        && (v17 & 1) != 0
        && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
      {
        Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v22 = *(_QWORD *)(Flink + 8 * ((v14 >> 3) & 0x1FF));
          Flink = v17 | 0x20;
          if ( (v22 & 0x20) == 0 )
            Flink = v17;
          v17 = Flink;
          if ( (v22 & 0x42) != 0 )
            v17 = Flink | 0x42;
        }
      }
      v62 = v17;
      if ( !v17 )
        goto LABEL_98;
      if ( (v17 & 1) != 0 )
      {
        if ( MiPteInShadowRange((unsigned __int64)&v62)
          && (unsigned int)MiPteHasShadow(v23, Flink, v24, v25)
          && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
        {
          Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v26 = *(_QWORD *)(Flink + 8 * (((unsigned __int64)&v62 >> 3) & 0x1FF));
            Flink = v17 | 0x20;
            if ( (v26 & 0x20) == 0 )
              Flink = v17;
            v17 = Flink;
            if ( (v26 & 0x42) != 0 )
              v17 = Flink | 0x42;
          }
        }
        v27 = (v17 >> 12) & 0xFFFFFFFFFLL;
        v28 = 48 * v27 - 0x58000000000LL;
        if ( *(_WORD *)(v28 + 32) > 1u && (updated & 7) != 4 )
          goto LABEL_98;
        if ( (unsigned int)MI_PFN_IS_PROTO(48 * v27 - 0x58000000000LL) )
        {
          v29 = (__int64)(v14 << 25) >> 16;
          ProtoPteAddress = MiGetProtoPteAddress(v4, v29 >> 12, 0LL, &v69);
          Flink = 0x8000000000000000uLL;
          if ( (*(_QWORD *)(v28 + 8) | 0x8000000000000000uLL) != ProtoPteAddress )
            goto LABEL_98;
          v70 = (volatile signed __int64 *)(((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          LODWORD(v66) = (v29 >> 9) & 0xFFFFFFF8;
          v31 = *v70;
          v32 = *v70;
          v37 = MiPteInShadowRange((unsigned __int64)v70);
          if ( v37
            && (unsigned int)MiPteHasShadow(v34, v33, v35, v36)
            && (v32 & 1) != 0
            && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
          {
            v38 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v38 )
            {
              v32 |= 0x20uLL;
              v39 = *((_QWORD *)&v38->Flink + ((v66 >> 3) & 0x1FF));
              if ( (v39 & 0x20) == 0 )
                v32 = v31;
              if ( (v39 & 0x42) != 0 )
                v32 |= 0x42uLL;
            }
          }
          WsleProtection = MiGetWsleProtection(
                             (__int64)(v14 << 25) >> 16,
                             HIBYTE(v32) & 0xFu | (unsigned __int8)(16 * ((v32 >> 60) & 7)));
          v12 = v61;
          if ( WsleProtection != v61
            && (WsleProtection || (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v28 + 16) >> 5) & 0x1F) != v61) )
          {
            v4 = v65;
            goto LABEL_98;
          }
          if ( v37
            && (unsigned int)MiPteHasShadow(v41, Flink, v42, v43)
            && (v31 & 1) != 0
            && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
          {
            v44 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v44 )
            {
              v45 = HIBYTE(v31);
              v46 = *((_QWORD *)&v44->Flink + ((v66 >> 3) & 0x1FF));
              if ( (v46 & 0x20) == 0 )
                v45 = HIBYTE(v31);
              HIBYTE(v31) = v45;
              if ( (v46 & 0x42) != 0 )
                HIBYTE(v31) = v45;
            }
          }
          updated = v59;
          MiWriteValidPteVolatile(v70, 0x80000000, HIBYTE(v31) & 0xF | (16 * (v59 & 7)));
          v4 = v65;
        }
        else
        {
          if ( ((*(_DWORD *)(v28 + 16) >> 5) & 0x1F) != (unsigned __int64)v12 )
            goto LABEL_98;
          updated = MiUpdatePfnProtection(v4, 48 * v27 - 0x58000000000LL, updated);
          v59 = updated;
        }
        MiRevertValidPte(v4, v14, updated, v27, (__int64)&v72);
        v15 = v67;
        v14 += 8LL;
        goto LABEL_79;
      }
      if ( (v17 & 0x400) != 0 )
      {
        if ( (updated & 7) != 4 )
          goto LABEL_98;
        if ( !(unsigned int)MiIsPrototypePteVadLookup(v17, Flink, v21, v20) )
        {
          v49 = MiSwizzleInvalidPte(32 * (updated & 0x1F | 0xFFFFFFFFF8000020uLL), v47, v21, v20);
          v62 = v49;
          Flink = v49;
          if ( (_DWORD)v51 )
          {
            if ( (unsigned int)MiPteHasShadow(v50, v49, v51, v52) )
            {
              v53 = Flink;
              if ( !HIBYTE(word_140C4DE08) && (Flink & 1) != 0 )
                v53 = Flink | 0x8000000000000000uLL;
              *(_QWORD *)v14 = v53;
              MiWritePteShadow(v14, v53);
              goto LABEL_98;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
            {
              *(_QWORD *)v14 = Flink;
              goto LABEL_98;
            }
            v49 = Flink;
            if ( (Flink & 1) != 0 )
              v49 = Flink | 0x8000000000000000uLL;
          }
          *(_QWORD *)v14 = v49;
LABEL_98:
          v57 = v63;
          if ( v63 != ((v71 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
          {
            MiFlushTbList((__int64)&v72, (_KPROCESS *)Flink);
            if ( v57 )
            {
              MiUnlockPageTableInternal(v64, v57);
              v63 = 0LL;
            }
          }
          v15 = v14 - 8;
          v12 = 1;
          v14 = v68;
          updated = 4;
          v10 = -1073741755;
          v67 = v15;
          v61 = 1;
          v59 = 4;
          v60 = -1073741755;
          goto LABEL_80;
        }
      }
      else
      {
        if ( (v17 & 0x800) != 0 )
        {
          v54 = MiSetProtectionOnTransitionPte(v4, v14, updated, (updated & 7) == 4);
          if ( !v54 )
            goto LABEL_96;
          if ( v54 != 2 )
            goto LABEL_98;
          goto LABEL_79;
        }
        v48 = (v17 >> 5) & 0x1F;
        if ( v48 != v12 )
          goto LABEL_98;
      }
      Flink = v17 ^ ((unsigned __int16)v17 ^ (unsigned __int16)(32 * updated)) & 0x3E0;
      v62 = Flink;
      v55 = Flink;
      if ( !v21 )
        goto LABEL_95;
      if ( (unsigned int)MiPteHasShadow(v48, Flink, v21, v20) )
      {
        v56 = Flink;
        if ( !HIBYTE(word_140C4DE08) && (Flink & 1) != 0 )
          v56 = Flink | 0x8000000000000000uLL;
        *(_QWORD *)v14 = v56;
        MiWritePteShadow(v14, v56);
        v14 += 8LL;
        goto LABEL_79;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v55 = Flink;
        if ( (Flink & 1) != 0 )
          v55 = Flink | 0x8000000000000000uLL;
LABEL_95:
        *(_QWORD *)v14 = v55;
LABEL_96:
        v14 += 8LL;
        goto LABEL_79;
      }
      *(_QWORD *)v14 = Flink;
      v14 += 8LL;
LABEL_79:
      v10 = v60;
LABEL_80:
      v13 = v63;
    }
    while ( v14 <= v15 );
  }
  MiFlushTbList((__int64)&v72, (_KPROCESS *)Flink);
  if ( v13 )
    MiUnlockPageTableInternal(v64, v13);
  MiUnlockWorkingSetShared(v64, v58);
  return v10;
}
