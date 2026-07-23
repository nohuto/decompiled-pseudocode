/*
 * XREFs of MiTranslatePageForCopy @ 0x140232F94
 * Callers:
 *     MmCopyMemory @ 0x140232A90 (MmCopyMemory.c)
 * Callees:
 *     MiWaitForCollidedFaultComplete @ 0x140209390 (MiWaitForCollidedFaultComplete.c)
 *     MiIsPrototypePteVadLookup @ 0x14020A670 (MiIsPrototypePteVadLookup.c)
 *     MiCheckVirtualAddress @ 0x14020A6B0 (MiCheckVirtualAddress.c)
 *     MiLockTransitionLeafPage @ 0x140224B74 (MiLockTransitionLeafPage.c)
 *     MiLockLeafPage @ 0x140257C70 (MiLockLeafPage.c)
 *     MiGetPagingFileOffset @ 0x14025F240 (MiGetPagingFileOffset.c)
 *     MiVaIsUltra @ 0x140263450 (MiVaIsUltra.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiInitializePageFaultPacket @ 0x1403079C8 (MiInitializePageFaultPacket.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiLockLowestValidPageTable @ 0x140310310 (MiLockLowestValidPageTable.c)
 *     MiSynchronizeSystemVa @ 0x14031C990 (MiSynchronizeSystemVa.c)
 *     MiUnlockSystemVa @ 0x14031CE4C (MiUnlockSystemVa.c)
 *     MiGetSessionVm @ 0x14031CEEC (MiGetSessionVm.c)
 *     MiObtainProtoReference @ 0x140324D5C (MiObtainProtoReference.c)
 *     MiLockProtoPoolPage @ 0x140324E50 (MiLockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MiTranslatePageForCopy(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 *a4,
        unsigned __int64 *a5)
{
  unsigned __int64 *v5; // r14
  unsigned __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int SystemRegionType; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 SessionVm; // rax
  int v18; // r8d
  __int128 v19; // xmm0
  __int64 v20; // rbx
  ULONG_PTR v21; // r12
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // xmm1_8
  unsigned __int64 v30; // rdi
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  __int16 v33; // ax
  __int64 v34; // rax
  __int64 v35; // rsi
  unsigned __int64 *v36; // rbx
  char v37; // al
  __int64 valid; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rdx
  char v43; // al
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rax
  unsigned __int64 v47; // rcx
  __int64 v48; // rsi
  __int64 v49; // r14
  __int64 v50; // r15
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r15
  __int64 v55; // rcx
  char v56; // al
  int PagingFileOffset; // eax
  struct _LIST_ENTRY *v58; // rdx
  __int64 v59; // rax
  unsigned __int8 v60[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v61; // [rsp+38h] [rbp-C8h] BYREF
  int v62; // [rsp+40h] [rbp-C0h] BYREF
  int v63; // [rsp+44h] [rbp-BCh] BYREF
  int v64; // [rsp+48h] [rbp-B8h] BYREF
  int v65; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned __int64 *v66; // [rsp+50h] [rbp-B0h]
  __int64 v67; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v68; // [rsp+60h] [rbp-A0h]
  unsigned __int64 *v69; // [rsp+68h] [rbp-98h]
  __int64 v70; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v71[18]; // [rsp+80h] [rbp-80h] BYREF

  v5 = a3;
  v70 = 0LL;
  v67 = 0LL;
  v65 = 0;
  v66 = a3;
  v69 = a5;
  v68 = a4;
  memset(v71, 0, 0x88uLL);
  memset((void *)a2, 0, 0x80uLL);
  v9 = -1LL;
  *v5 = -1LL;
  *a4 = 0LL;
  *a5 = 0LL;
  MiInitializePageFaultPacket(0, a1, 0, 0, (__int64)v71);
  if ( (unsigned __int64)(((__int64)a1 >> 47) + 1) > 1
    || a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL
    || a1 >= 0xFFFFFA8000000000uLL && a1 < 0xFFFFFD8000000000uLL
    || a1 >= 0xFFFF800000000000uLL && (unsigned int)MiVaIsUltra(a1, v10, v11, v12) )
  {
    return 3221225711LL;
  }
  if ( a1 < qword_140C4FB78 || a1 > qword_140C4E3A8 )
  {
    SystemRegionType = MiGetSystemRegionType(a1);
    switch ( SystemRegionType )
    {
      case 8:
        v16 = 0LL;
        break;
      case 1:
        SessionVm = MiGetSessionVm(v15, v14, 1LL);
        if ( !SessionVm )
          return 3221225477LL;
        goto LABEL_18;
      case 6:
        v16 = 2LL;
        break;
      case 9:
        v16 = 3LL;
        break;
      default:
        v16 = 1LL;
        if ( SystemRegionType != 12 && SystemRegionType != 3 )
          v16 = 5LL;
        break;
    }
    LODWORD(SessionVm) = MiGetAnyMultiplexedVm(v16);
LABEL_18:
    *(_DWORD *)(a2 + 4) |= 4u;
    if ( !(unsigned int)MiSynchronizeSystemVa(SessionVm, a1, v18, 0, a2) )
      return 3221225632LL;
    v19 = *(_OWORD *)(a2 + 24);
    v20 = *(int *)(a2 + 16);
    v71[9] = *(_QWORD *)(a2 + 40);
    *(_OWORD *)&v71[7] = v19;
    if ( (_DWORD)v20 )
    {
      v61 = MI_READ_PTE_LOCK_FREE(v71[v20 + 3]);
      v30 = v61;
      if ( (unsigned int)MiPteInShadowRange(&v61)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v30 & 1) != 0
        && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v61 >> 3) & 0x1FF)) & 0x20) != 0 )
            v30 |= 0x20uLL;
        }
      }
      v31 = 1LL;
      v9 = (v30 >> 12) & 0xFFFFFFFFFLL;
      v32 = v71[0] >> 12;
      do
      {
        v33 = v32;
        v32 >>= 9;
        v34 = v31 * (v33 & 0x1FF);
        v31 <<= 9;
        v9 += v34;
        LODWORD(v20) = v20 - 1;
      }
      while ( (_DWORD)v20 );
      if ( v9 <= 0xFFFFFFFFFLL )
      {
        v35 = 48 * v9;
        if ( ((*(_QWORD *)(48 * v9 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
        {
          v63 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 - 0x57FFFFFFFE8LL), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v63);
            while ( *(__int64 *)(v35 - 0x57FFFFFFFE8LL) < 0 );
          }
          goto LABEL_26;
        }
      }
      LODWORD(v20) = -1073741503;
      goto LABEL_27;
    }
    v21 = v71[3];
    goto LABEL_21;
  }
  v36 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v71[7] = v36;
  v37 = MiLockWorkingSetShared(v36);
  v21 = v71[3];
  BYTE4(v71[8]) = v37;
  valid = MiLockLowestValidPageTable(v36, v71[3], &v67);
  v71[9] = valid;
  if ( valid != ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
  {
    LODWORD(v20) = MI_READ_PTE_LOCK_FREE(v67) != 0 ? -1073741608 : -1073741819;
    goto LABEL_27;
  }
LABEL_21:
  v60[0] = 17;
  LODWORD(v20) = 0;
  v22 = MI_READ_PTE_LOCK_FREE(v21);
  v61 = v22;
  v25 = v22;
  if ( (v22 & 1) != 0 )
  {
LABEL_22:
    v26 = v25;
    if ( (unsigned int)MiPteInShadowRange(&v61)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v25 & 1) != 0
      && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
    {
      v58 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v58 )
      {
        v26 = v25 | 0x20;
        v59 = *((_QWORD *)&v58->Flink + (((unsigned __int64)&v61 >> 3) & 0x1FF));
        if ( (v59 & 0x20) == 0 )
          v26 = v25;
        if ( (v59 & 0x42) != 0 )
          v26 |= 0x42uLL;
      }
    }
    v9 = (v26 >> 12) & 0xFFFFFFFFFLL;
    v27 = 48 * v9;
    if ( ((*(_QWORD *)(48 * v9 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
    {
      v64 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 - 0x57FFFFFFFE8LL), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v64);
        while ( *(__int64 *)(v27 - 0x57FFFFFFFE8LL) < 0 );
      }
    }
    else
    {
      LODWORD(v20) = -1073741503;
    }
    goto LABEL_26;
  }
  v40 = v22;
  while ( 1 )
  {
    if ( (v40 & 0x400) != 0 )
    {
      if ( (v40 & 2) != 0 )
      {
        v46 = v40;
        if ( qword_140C4DF80 && (v40 & 0x10) == 0 )
          v46 = v40 & ~qword_140C4DF80;
        v47 = v40 & 0xFFFFFFFFFFFFFBFFuLL;
        if ( (v46 & 0xFFFFFFFFFFFF0000uLL) != 0 )
          v47 = v40;
        *v69 = v47 & 0xFFFFFFFFFFFFFFFDuLL;
        goto LABEL_80;
      }
      if ( qword_140C4DF80 && (v40 & 0x10) == 0 )
        v40 &= ~qword_140C4DF80;
      v48 = v40 >> 16;
      if ( !MiIsPrototypePteVadLookup(v22) || (v48 = MiCheckVirtualAddress(a1, &v65, &v70)) != 0 )
      {
        v49 = MiLockProtoPoolPage(v48, v60);
        if ( !v49 )
          goto LABEL_92;
        v50 = MiLockLeafPage(v48, 0LL);
        v51 = MI_READ_PTE_LOCK_FREE(v48);
        v61 = v51;
        if ( (v51 & 1) != 0 )
        {
          v54 = v50 + 0x58000000000LL;
LABEL_94:
          v9 = v54 / 48;
          *v68 = v49;
          goto LABEL_26;
        }
        if ( v51 )
        {
          if ( (v51 & 0x400) != 0 )
          {
            v55 = v49;
          }
          else
          {
            if ( (v51 & 0x800) == 0 )
            {
              PagingFileOffset = MiGetPagingFileOffset(&v61, v52, v53);
              LOBYTE(v52) = v60[0];
              v55 = v49;
              if ( !PagingFileOffset )
              {
                MiUnlockProtoPoolPage(v49, v52);
                goto LABEL_80;
              }
LABEL_99:
              MiUnlockProtoPoolPage(v55, v52);
              goto LABEL_92;
            }
            v56 = *(_BYTE *)(v50 + 34);
            if ( (v56 & 0x20) == 0 )
            {
              v54 = v50 + 0x58000000000LL;
              goto LABEL_94;
            }
            v55 = v49;
            if ( (v56 & 8) == 0 )
            {
              MiObtainProtoReference(v49, 1LL);
              v45 = v49;
              v42 = v50;
              goto LABEL_91;
            }
          }
          LOBYTE(v52) = v60[0];
          goto LABEL_99;
        }
        LOBYTE(v52) = v60[0];
        MiUnlockProtoPoolPage(v49, v52);
      }
LABEL_90:
      LODWORD(v20) = -1073741819;
      goto LABEL_26;
    }
    if ( (v40 & 0x3E0) == 0x300 || (v40 & 0x3E0) == 0 )
      goto LABEL_90;
    if ( (v40 & 0x800) == 0 )
    {
      if ( (unsigned int)MiGetPagingFileOffset(&v61, v23, v24) )
        goto LABEL_92;
LABEL_80:
      LODWORD(v20) = 273;
      goto LABEL_26;
    }
    v41 = MiLockTransitionLeafPage(v21, v60);
    v42 = v41;
    if ( v41 )
      break;
    v22 = MI_READ_PTE_LOCK_FREE(v21);
    v61 = v22;
    v40 = v22;
    v25 = v22;
    if ( (v22 & 1) != 0 )
      goto LABEL_22;
  }
  v43 = *(_BYTE *)(v41 + 34);
  if ( (v43 & 0x20) == 0 )
  {
    v44 = (unsigned __int128)((v42 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    v9 = ((unsigned __int64)v44 >> 63) + (v44 >> 3);
    goto LABEL_26;
  }
  if ( (v43 & 8) == 0 )
  {
    v45 = 0LL;
LABEL_91:
    v62 = 1;
    MiWaitForCollidedFaultComplete(v71, v42, v45, v60[0], &v62);
  }
LABEL_92:
  LODWORD(v20) = -1073741608;
LABEL_26:
  v5 = v66;
LABEL_27:
  v28 = v71[9];
  *(_OWORD *)(a2 + 24) = *(_OWORD *)&v71[7];
  *(_QWORD *)(a2 + 40) = v28;
  if ( (int)v20 < 0 )
    MiUnlockSystemVa(a2);
  else
    *v5 = v9;
  return (unsigned int)v20;
}
