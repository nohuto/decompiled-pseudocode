/*
 * XREFs of MiTranslatePageForCopy @ 0x14033FBD4
 * Callers:
 *     MmCopyMemory @ 0x14033F6D0 (MmCopyMemory.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     MiObtainProtoReference @ 0x140229634 (MiObtainProtoReference.c)
 *     MiLockProtoPoolPage @ 0x140229D70 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiLockTransitionLeafPage @ 0x140253D18 (MiLockTransitionLeafPage.c)
 *     MiLockLowestValidPageTable @ 0x140253FC0 (MiLockLowestValidPageTable.c)
 *     MiInitializePageFaultPacket @ 0x14025ACC0 (MiInitializePageFaultPacket.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiSynchronizeSystemVa @ 0x1402BDCD0 (MiSynchronizeSystemVa.c)
 *     MiUnlockSystemVa @ 0x1402BE18C (MiUnlockSystemVa.c)
 *     MiGetSessionVm @ 0x1402BE22C (MiGetSessionVm.c)
 *     MiLockLeafPage @ 0x1402F6AF0 (MiLockLeafPage.c)
 *     MiWaitForCollidedFaultComplete @ 0x14031273C (MiWaitForCollidedFaultComplete.c)
 *     MiGetPagingFileOffset @ 0x140315B24 (MiGetPagingFileOffset.c)
 *     MiIsPrototypePteVadLookup @ 0x140315EC0 (MiIsPrototypePteVadLookup.c)
 *     MiCheckVirtualAddress @ 0x140315F00 (MiCheckVirtualAddress.c)
 *     MiVaIsUltra @ 0x14033FF30 (MiVaIsUltra.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
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
  int v14; // ecx
  __int64 SessionVm; // rax
  int v16; // r8d
  __int128 v17; // xmm0
  __int64 v18; // rbx
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rdi
  struct _LIST_ENTRY *v23; // rdx
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // rsi
  unsigned __int64 v27; // xmm1_8
  unsigned __int64 v29; // rdi
  BOOL v30; // eax
  __int64 v31; // r9
  __int64 v32; // r8
  __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  __int16 v35; // ax
  __int64 v36; // rax
  __int64 v37; // rsi
  unsigned __int64 *v38; // rbx
  char v39; // al
  unsigned __int64 valid; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rdx
  char v45; // al
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // rax
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rsi
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r14
  __int64 v54; // r15
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r15
  __int64 v58; // rcx
  char v59; // al
  int PagingFileOffset; // eax
  __int64 v61; // rax
  unsigned __int8 v62[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v63; // [rsp+38h] [rbp-C8h] BYREF
  int v64; // [rsp+40h] [rbp-C0h] BYREF
  int v65; // [rsp+44h] [rbp-BCh] BYREF
  int v66; // [rsp+48h] [rbp-B8h] BYREF
  int v67; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned __int64 *v68; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v69; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v70; // [rsp+60h] [rbp-A0h]
  unsigned __int64 *v71; // [rsp+68h] [rbp-98h]
  __int64 **v72; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v73[18]; // [rsp+80h] [rbp-80h] BYREF

  v5 = a3;
  v72 = 0LL;
  v69 = 0LL;
  v67 = 0;
  v68 = a3;
  v71 = a5;
  v70 = a4;
  memset(v73, 0, 0x88uLL);
  memset((void *)a2, 0, 0x80uLL);
  v9 = -1LL;
  *v5 = -1LL;
  *a4 = 0LL;
  *a5 = 0LL;
  MiInitializePageFaultPacket(0LL, a1, 0, 0LL, (__int64)v73);
  if ( (unsigned __int64)(((__int64)a1 >> 47) + 1) > 1
    || a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL
    || a1 >= 0xFFFFFA8000000000uLL && a1 < 0xFFFFFD8000000000uLL
    || a1 >= 0xFFFF800000000000uLL && (unsigned int)MiVaIsUltra(a1, v10, v11, v12) )
  {
    return 3221225711LL;
  }
  if ( a1 < qword_140C4F938 || a1 > qword_140C4E168 )
  {
    SystemRegionType = MiGetSystemRegionType(a1);
    switch ( SystemRegionType )
    {
      case 8:
        v14 = 0;
        break;
      case 1:
        SessionVm = MiGetSessionVm();
        if ( !SessionVm )
          return 3221225477LL;
        goto LABEL_18;
      case 6:
        v14 = 2;
        break;
      case 9:
        v14 = 3;
        break;
      default:
        v14 = 1;
        if ( SystemRegionType != 12 && SystemRegionType != 3 )
          v14 = 5;
        break;
    }
    SessionVm = (__int64)MiGetAnyMultiplexedVm(v14);
LABEL_18:
    *(_DWORD *)(a2 + 4) |= 4u;
    if ( !(unsigned int)MiSynchronizeSystemVa(SessionVm, a1, v16, 0, a2) )
      return 3221225632LL;
    v17 = *(_OWORD *)(a2 + 24);
    v18 = *(int *)(a2 + 16);
    v73[9] = *(_QWORD *)(a2 + 40);
    *(_OWORD *)&v73[7] = v17;
    if ( (_DWORD)v18 )
    {
      v63 = MI_READ_PTE_LOCK_FREE(v73[v18 + 3]);
      v29 = v63;
      v30 = MiPteInShadowRange((unsigned __int64)&v63);
      v31 = 511LL;
      if ( v30
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v29 & 1) != 0
        && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v63 >> 3) & 0x1FF)) & 0x20) != 0 )
            v29 |= 0x20uLL;
        }
      }
      v32 = 0xFFFFFFFFFLL;
      v33 = 1LL;
      v9 = (v29 >> 12) & 0xFFFFFFFFFLL;
      v34 = v73[0] >> 12;
      do
      {
        v35 = v34;
        v34 >>= 9;
        v36 = v33 * (v35 & 0x1FF);
        v33 <<= 9;
        v9 += v36;
        LODWORD(v18) = v18 - 1;
      }
      while ( (_DWORD)v18 );
      if ( v9 <= 0xFFFFFFFFFLL )
      {
        v37 = 48 * v9;
        if ( ((*(_QWORD *)(48 * v9 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
        {
          v65 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v37 - 0x57FFFFFFFE8LL), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v65, v33, v32, v31);
            while ( *(__int64 *)(v37 - 0x57FFFFFFFE8LL) < 0 );
          }
          goto LABEL_26;
        }
      }
      LODWORD(v18) = -1073741503;
      goto LABEL_27;
    }
    v19 = v73[3];
    goto LABEL_21;
  }
  v38 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v73[7] = (unsigned __int64)v38;
  v39 = MiLockWorkingSetShared((__int64)v38);
  v19 = v73[3];
  BYTE4(v73[8]) = v39;
  valid = MiLockLowestValidPageTable((__int64)v38, v73[3], &v69);
  v73[9] = valid;
  if ( valid != ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
  {
    LODWORD(v18) = MI_READ_PTE_LOCK_FREE(v69) != 0 ? -1073741608 : -1073741819;
    goto LABEL_27;
  }
LABEL_21:
  v62[0] = 17;
  LODWORD(v18) = 0;
  v20 = MI_READ_PTE_LOCK_FREE(v19);
  v63 = v20;
  v21 = v20;
  if ( (v20 & 1) != 0 )
  {
LABEL_22:
    v22 = v21;
    if ( MiPteInShadowRange((unsigned __int64)&v63)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v21 & 1) != 0
      && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
    {
      v23 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v23 )
      {
        v22 = v21 | 0x20;
        v24 = 511LL;
        v61 = *((_QWORD *)&v23->Flink + (((unsigned __int64)&v63 >> 3) & 0x1FF));
        if ( (v61 & 0x20) == 0 )
          v22 = v21;
        if ( (v61 & 0x42) != 0 )
          v22 |= 0x42uLL;
      }
    }
    v25 = 0xFFFFFFFFFLL;
    v9 = (v22 >> 12) & 0xFFFFFFFFFLL;
    v26 = 48 * v9;
    if ( ((*(_QWORD *)(48 * v9 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
    {
      v66 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 - 0x57FFFFFFFE8LL), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v66, (__int64)v23, v25, v24);
        while ( *(__int64 *)(v26 - 0x57FFFFFFFE8LL) < 0 );
      }
    }
    else
    {
      LODWORD(v18) = -1073741503;
    }
    goto LABEL_26;
  }
  v42 = v20;
  while ( 1 )
  {
    if ( (v42 & 0x400) != 0 )
    {
      if ( (v42 & 2) != 0 )
      {
        v48 = v42;
        if ( qword_140C4DD40 && (v42 & 0x10) == 0 )
          v48 = v42 & ~qword_140C4DD40;
        v49 = v42 & 0xFFFFFFFFFFFFFBFFuLL;
        if ( (v48 & 0xFFFFFFFFFFFF0000uLL) != 0 )
          v49 = v42;
        *v71 = v49 & 0xFFFFFFFFFFFFFFFDuLL;
        goto LABEL_80;
      }
      if ( qword_140C4DD40 && (v42 & 0x10) == 0 )
        v42 &= ~qword_140C4DD40;
      v50 = v42 >> 16;
      if ( !MiIsPrototypePteVadLookup(v20) || (v50 = MiCheckVirtualAddress(a1, &v67, &v72)) != 0 )
      {
        v53 = MiLockProtoPoolPage(v50, v62);
        if ( !v53 )
          goto LABEL_92;
        v54 = MiLockLeafPage((__int64 *)v50, 0, v51, v52);
        v55 = MI_READ_PTE_LOCK_FREE(v50);
        v63 = v55;
        if ( (v55 & 1) != 0 )
        {
          v57 = v54 + 0x58000000000LL;
LABEL_94:
          v9 = v57 / 48;
          *v70 = v53;
          goto LABEL_26;
        }
        if ( v55 )
        {
          if ( (v55 & 0x400) != 0 )
          {
            v58 = v53;
          }
          else
          {
            if ( (v55 & 0x800) == 0 )
            {
              PagingFileOffset = MiGetPagingFileOffset((unsigned __int64)&v63);
              LOBYTE(v56) = v62[0];
              v58 = v53;
              if ( !PagingFileOffset )
              {
                MiUnlockProtoPoolPage(v53, v56);
                goto LABEL_80;
              }
LABEL_99:
              MiUnlockProtoPoolPage(v58, v56);
              goto LABEL_92;
            }
            v59 = *(_BYTE *)(v54 + 34);
            if ( (v59 & 0x20) == 0 )
            {
              v57 = v54 + 0x58000000000LL;
              goto LABEL_94;
            }
            v58 = v53;
            if ( (v59 & 8) == 0 )
            {
              MiObtainProtoReference(v53, 1LL);
              v47 = v53;
              v44 = v54;
              goto LABEL_91;
            }
          }
          LOBYTE(v56) = v62[0];
          goto LABEL_99;
        }
        LOBYTE(v56) = v62[0];
        MiUnlockProtoPoolPage(v53, v56);
      }
LABEL_90:
      LODWORD(v18) = -1073741819;
      goto LABEL_26;
    }
    if ( (v42 & 0x3E0) == 0x300 || (v42 & 0x3E0) == 0 )
      goto LABEL_90;
    if ( (v42 & 0x800) == 0 )
    {
      if ( (unsigned int)MiGetPagingFileOffset((unsigned __int64)&v63) )
        goto LABEL_92;
LABEL_80:
      LODWORD(v18) = 273;
      goto LABEL_26;
    }
    v43 = MiLockTransitionLeafPage(v19, v62);
    v44 = v43;
    if ( v43 )
      break;
    v20 = MI_READ_PTE_LOCK_FREE(v19);
    v63 = v20;
    v42 = v20;
    v21 = v20;
    if ( (v20 & 1) != 0 )
      goto LABEL_22;
  }
  v45 = *(_BYTE *)(v43 + 34);
  if ( (v45 & 0x20) == 0 )
  {
    v46 = (unsigned __int128)((v44 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    v9 = ((unsigned __int64)v46 >> 63) + (v46 >> 3);
    goto LABEL_26;
  }
  if ( (v45 & 8) == 0 )
  {
    v47 = 0LL;
LABEL_91:
    v64 = 1;
    MiWaitForCollidedFaultComplete(v73, v44, v47, v62[0], &v64);
  }
LABEL_92:
  LODWORD(v18) = -1073741608;
LABEL_26:
  v5 = v68;
LABEL_27:
  v27 = v73[9];
  *(_OWORD *)(a2 + 24) = *(_OWORD *)&v73[7];
  *(_QWORD *)(a2 + 40) = v27;
  if ( (int)v18 < 0 )
    MiUnlockSystemVa(a2);
  else
    *v5 = v9;
  return (unsigned int)v18;
}
