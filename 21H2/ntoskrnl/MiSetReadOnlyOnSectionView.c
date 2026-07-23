/*
 * XREFs of MiSetReadOnlyOnSectionView @ 0x1402E53E0
 * Callers:
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140657018 (MmSecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiIsPrototypePteVadLookup @ 0x14020A670 (MiIsPrototypePteVadLookup.c)
 *     MiSetProtectionOnTransitionPte @ 0x140224A84 (MiSetProtectionOnTransitionPte.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiVadPureReserve @ 0x1402C0290 (MiVadPureReserve.c)
 *     MiWriteValidPteVolatile @ 0x1402E5BC0 (MiWriteValidPteVolatile.c)
 *     MiGetWsleProtection @ 0x1402E5C50 (MiGetWsleProtection.c)
 *     MiUpdatePfnProtection @ 0x140319020 (MiUpdatePfnProtection.c)
 *     MiMakeSystemAddressValid @ 0x1403190E0 (MiMakeSystemAddressValid.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x14033B890 (MiGetProtoPteAddress.c)
 *     MiRevertValidPte @ 0x14033F050 (MiRevertValidPte.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiSetReadOnlyOnSectionView(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // r13
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  _DWORD *v8; // r9
  __int64 v9; // r10
  unsigned int v11; // esi
  unsigned int updated; // edi
  unsigned int v13; // r12d
  unsigned __int64 v14; // rbx
  ULONG_PTR v15; // r14
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rsi
  int v18; // r8d
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  struct _LIST_ENTRY *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // r15
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rdi
  int v30; // r13d
  struct _LIST_ENTRY *v31; // rdx
  __int64 v32; // rax
  int WsleProtection; // eax
  unsigned __int64 v34; // rax
  int v35; // r8d
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rax
  int v38; // eax
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rbx
  unsigned __int8 v43; // [rsp+30h] [rbp-D0h]
  int v44; // [rsp+34h] [rbp-CCh]
  int v45; // [rsp+38h] [rbp-C8h]
  int v46; // [rsp+3Ch] [rbp-C4h]
  unsigned __int64 v47; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v48; // [rsp+48h] [rbp-B8h]
  __int64 v49; // [rsp+50h] [rbp-B0h]
  __int64 v50; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v51; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v52; // [rsp+68h] [rbp-98h]
  unsigned __int64 v53; // [rsp+70h] [rbp-90h]
  __int64 v54; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 *v55; // [rsp+80h] [rbp-80h]
  unsigned __int64 v56; // [rsp+88h] [rbp-78h]
  int v57; // [rsp+90h] [rbp-70h] BYREF
  __int16 v58; // [rsp+94h] [rbp-6Ch]
  __int16 v59; // [rsp+96h] [rbp-6Ah]
  __int64 v60; // [rsp+98h] [rbp-68h]
  unsigned __int64 v61; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v62; // [rsp+A8h] [rbp-58h]
  __int128 v63; // [rsp+B0h] [rbp-50h]
  __int128 v64; // [rsp+C0h] [rbp-40h]
  __int128 v65; // [rsp+D0h] [rbp-30h]
  __int128 v66; // [rsp+E0h] [rbp-20h]
  __int128 v67; // [rsp+F0h] [rbp-10h]
  __int128 v68; // [rsp+100h] [rbp+0h]
  __int128 v69; // [rsp+110h] [rbp+10h]
  __int128 v70; // [rsp+120h] [rbp+20h]
  __int128 v71; // [rsp+130h] [rbp+30h]
  __int64 v72; // [rsp+140h] [rbp+40h]

  v50 = a2;
  v56 = a3;
  v4 = a2;
  v59 = 0;
  v72 = 0LL;
  v54 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  if ( (unsigned int)MiVadPureReserve(a2) )
    return 3221225541LL;
  v11 = v6;
  updated = 1;
  v13 = 4;
  v45 = v6;
  v14 = v6;
  v58 = v6;
  v61 = v6;
  v62 = v6;
  v48 = v6;
  v46 = 4;
  v44 = 1;
  v60 = 20LL;
  v57 = 1;
  v53 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v15 = v53;
  v16 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v52 = v16;
  v49 = v9 + 1664;
  v43 = MiLockWorkingSetShared(v9 + 1664, 0xFFFFF68000000000uLL, 0x7FFFFFFFF8LL, v8);
  if ( v53 <= v16 )
  {
    do
    {
      if ( (v15 & 0xFFF) != 0 )
      {
        if ( v14 )
          goto LABEL_10;
      }
      else if ( v14 )
      {
        MiFlushTbList(&v57);
        MiUnlockPageTableInternal(v49, v14);
      }
      MiMakeSystemAddressValid(v15, 0);
      v48 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_10:
      v17 = *(_QWORD *)v15;
      v18 = MiPteInShadowRange(v15);
      if ( v18 && (unsigned int)MiPteHasShadow() && (v17 & 1) != 0 && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v20 = *((_QWORD *)&Flink->Flink + ((v15 >> 3) & 0x1FF));
          v21 = v17 | 0x20;
          if ( (v20 & 0x20) == 0 )
            v21 = v17;
          v17 = v21;
          if ( (v20 & 0x42) != 0 )
            v17 = v21 | 0x42;
        }
      }
      v47 = v17;
      if ( !v17 )
        goto LABEL_90;
      if ( (v17 & 1) != 0 )
      {
        if ( (unsigned int)MiPteInShadowRange(&v47)
          && (unsigned int)MiPteHasShadow()
          && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
        {
          v22 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v22 )
          {
            v23 = *((_QWORD *)&v22->Flink + (((unsigned __int64)&v47 >> 3) & 0x1FF));
            v24 = v17 | 0x20;
            if ( (v23 & 0x20) == 0 )
              v24 = v17;
            v17 = v24;
            if ( (v23 & 0x42) != 0 )
              v17 = v24 | 0x42;
          }
        }
        v25 = (v17 >> 12) & 0xFFFFFFFFFLL;
        v26 = 48 * v25 - 0x58000000000LL;
        if ( *(_WORD *)(v26 + 32) > 1u && (updated & 7) != 4 )
          goto LABEL_90;
        if ( (unsigned int)MI_PFN_IS_PROTO(48 * v25 - 0x58000000000LL) )
        {
          v27 = (__int64)(v15 << 25) >> 16;
          if ( (*(_QWORD *)(v26 + 8) | 0x8000000000000000uLL) != MiGetProtoPteAddress(v4, v27 >> 12, 0LL, &v54) )
            goto LABEL_90;
          v55 = (unsigned __int64 *)(((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          LODWORD(v51) = (v27 >> 9) & 0xFFFFFFF8;
          v28 = *v55;
          v29 = *v55;
          v30 = MiPteInShadowRange(v55);
          if ( v30 && (unsigned int)MiPteHasShadow() && (v29 & 1) != 0 && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
          {
            v31 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v31 )
            {
              v29 |= 0x20uLL;
              v32 = *((_QWORD *)&v31->Flink + ((v51 >> 3) & 0x1FF));
              if ( (v32 & 0x20) == 0 )
                v29 = v28;
              if ( (v32 & 0x42) != 0 )
                v29 |= 0x42uLL;
            }
          }
          WsleProtection = MiGetWsleProtection(
                             (__int64)(v15 << 25) >> 16,
                             HIBYTE(v29) & 0xFu | (unsigned __int8)(16 * ((v29 >> 60) & 7)));
          v13 = v46;
          if ( WsleProtection != v46
            && (WsleProtection || (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v26 + 16) >> 5) & 0x1F) != v46) )
          {
            v4 = v50;
            goto LABEL_90;
          }
          if ( v30 )
            MiPteHasShadow();
          updated = v44;
          MiWriteValidPteVolatile(v55, 0x80000000LL);
          v4 = v50;
        }
        else
        {
          if ( ((*(_DWORD *)(v26 + 16) >> 5) & 0x1F) != (unsigned __int64)v13 )
            goto LABEL_90;
          updated = MiUpdatePfnProtection(v4, 48 * v25 - 0x58000000000LL, updated);
          v44 = updated;
        }
        MiRevertValidPte(v4, v15, updated, v25, (__int64)&v57);
        v16 = v52;
        v15 += 8LL;
        goto LABEL_71;
      }
      if ( (v17 & 0x400) != 0 )
      {
        if ( (updated & 7) != 4 )
          goto LABEL_90;
        if ( !MiIsPrototypePteVadLookup(v17) )
        {
          v34 = MiSwizzleInvalidPte(32 * (updated & 0x1F | 0xFFFFFFFFF8000020uLL));
          v47 = v34;
          if ( v35 )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v37 = v36;
              if ( !HIBYTE(word_140C4E048) && (v36 & 1) != 0 )
                v37 = v36 | 0x8000000000000000uLL;
              *(_QWORD *)v15 = v37;
              MiWritePteShadow(v15, v37);
              goto LABEL_90;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
            {
              *(_QWORD *)v15 = v36;
              goto LABEL_90;
            }
            v34 = v36;
            if ( (v36 & 1) != 0 )
              v34 = v36 | 0x8000000000000000uLL;
          }
          *(_QWORD *)v15 = v34;
LABEL_90:
          v42 = v48;
          if ( v48 != ((v56 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
          {
            MiFlushTbList(&v57);
            if ( v42 )
            {
              MiUnlockPageTableInternal(v49, v42);
              v48 = 0LL;
            }
          }
          v16 = v15 - 8;
          v13 = 1;
          v15 = v53;
          updated = 4;
          v11 = -1073741755;
          v52 = v16;
          v46 = 1;
          v44 = 4;
          v45 = -1073741755;
          goto LABEL_72;
        }
      }
      else
      {
        if ( (v17 & 0x800) != 0 )
        {
          v38 = MiSetProtectionOnTransitionPte(v4, (_QWORD *)v15, updated, (updated & 7) == 4);
          if ( !v38 )
            goto LABEL_88;
          if ( v38 != 2 )
            goto LABEL_90;
          goto LABEL_71;
        }
        if ( ((v17 >> 5) & 0x1F) != v13 )
          goto LABEL_90;
      }
      v47 = v17 ^ ((unsigned __int16)v17 ^ (unsigned __int16)(32 * updated)) & 0x3E0;
      v39 = v47;
      if ( !v18 )
        goto LABEL_87;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v41 = v40;
        if ( !HIBYTE(word_140C4E048) && (v40 & 1) != 0 )
          v41 = v40 | 0x8000000000000000uLL;
        *(_QWORD *)v15 = v41;
        MiWritePteShadow(v15, v41);
        v15 += 8LL;
        goto LABEL_71;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v39 = v40;
        if ( (v40 & 1) != 0 )
          v39 = v40 | 0x8000000000000000uLL;
LABEL_87:
        *(_QWORD *)v15 = v39;
LABEL_88:
        v15 += 8LL;
        goto LABEL_71;
      }
      *(_QWORD *)v15 = v40;
      v15 += 8LL;
LABEL_71:
      v11 = v45;
LABEL_72:
      v14 = v48;
    }
    while ( v15 <= v16 );
  }
  MiFlushTbList(&v57);
  if ( v14 )
    MiUnlockPageTableInternal(v49, v14);
  MiUnlockWorkingSetShared(v49, v43);
  return v11;
}
