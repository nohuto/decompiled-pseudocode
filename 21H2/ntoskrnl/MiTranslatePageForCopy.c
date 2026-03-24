/*
 * XREFs of MiTranslatePageForCopy @ 0x1402B4DE4
 * Callers:
 *     MmCopyMemory @ 0x1402B48E0 (MmCopyMemory.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiUnlockProtoPoolPage @ 0x1402397F0 (MiUnlockProtoPoolPage.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiLockLeafPage @ 0x140269CD0 (MiLockLeafPage.c)
 *     MiGetPagingFileOffset @ 0x1402712A0 (MiGetPagingFileOffset.c)
 *     MiVaIsUltra @ 0x1402754B0 (MiVaIsUltra.c)
 *     MiWaitForCollidedFaultComplete @ 0x14028C1F0 (MiWaitForCollidedFaultComplete.c)
 *     MiIsPrototypePteVadLookup @ 0x14028D4D0 (MiIsPrototypePteVadLookup.c)
 *     MiCheckVirtualAddress @ 0x14028D510 (MiCheckVirtualAddress.c)
 *     MiInitializePageFaultPacket @ 0x1402FCC78 (MiInitializePageFaultPacket.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     MiLockLowestValidPageTable @ 0x1403055C0 (MiLockLowestValidPageTable.c)
 *     MiSynchronizeSystemVa @ 0x140311C40 (MiSynchronizeSystemVa.c)
 *     MiUnlockSystemVa @ 0x1403120FC (MiUnlockSystemVa.c)
 *     MiGetSessionVm @ 0x14031219C (MiGetSessionVm.c)
 *     MiObtainProtoReference @ 0x14031A00C (MiObtainProtoReference.c)
 *     MiLockProtoPoolPage @ 0x14031A100 (MiLockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     MiLockTransitionLeafPage @ 0x140364704 (MiLockTransitionLeafPage.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
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
  _DWORD *v12; // r9
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
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // rdi
  struct _LIST_ENTRY *v26; // rdx
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // rsi
  __int64 v30; // xmm1_8
  unsigned __int64 v32; // rdi
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // r9
  __int64 v36; // r8
  __int64 v37; // rdx
  unsigned __int64 v38; // rcx
  __int16 v39; // ax
  __int64 v40; // rax
  __int64 v41; // rsi
  unsigned __int64 *v42; // rbx
  char v43; // al
  __int64 valid; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rdx
  char v49; // al
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // rax
  unsigned __int64 v53; // rcx
  __int64 v54; // rsi
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // r14
  __int64 v58; // r15
  __int64 v59; // rax
  __int64 v60; // r15
  __int64 v61; // rcx
  unsigned __int8 v62; // dl
  char v63; // al
  int PagingFileOffset; // eax
  __int64 v65; // rax
  unsigned __int8 v66[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v67; // [rsp+38h] [rbp-C8h] BYREF
  int v68; // [rsp+40h] [rbp-C0h] BYREF
  int v69; // [rsp+44h] [rbp-BCh] BYREF
  int v70; // [rsp+48h] [rbp-B8h] BYREF
  int v71; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned __int64 *v72; // [rsp+50h] [rbp-B0h]
  __int64 v73; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v74; // [rsp+60h] [rbp-A0h]
  unsigned __int64 *v75; // [rsp+68h] [rbp-98h]
  __int64 **v76; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v77[18]; // [rsp+80h] [rbp-80h] BYREF

  v5 = a3;
  v76 = 0LL;
  v73 = 0LL;
  v71 = 0;
  v72 = a3;
  v75 = a5;
  v74 = a4;
  memset(v77, 0, 0x88uLL);
  memset((void *)a2, 0, 0x80uLL);
  v9 = -1LL;
  *v5 = -1LL;
  *a4 = 0LL;
  *a5 = 0LL;
  MiInitializePageFaultPacket(0, a1, 0, 0, (__int64)v77);
  if ( (unsigned __int64)(((__int64)a1 >> 47) + 1) > 1
    || a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL
    || a1 >= 0xFFFFFA8000000000uLL && a1 < 0xFFFFFD8000000000uLL
    || a1 >= 0xFFFF800000000000uLL && MiVaIsUltra(a1) )
  {
    return 3221225711LL;
  }
  if ( a1 < qword_140C4FB38 || a1 > qword_140C4E368 )
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
    v77[9] = *(_QWORD *)(a2 + 40);
    *(_OWORD *)&v77[7] = v19;
    if ( (_DWORD)v20 )
    {
      v67 = MI_READ_PTE_LOCK_FREE(v77[v20 + 3]);
      v32 = v67;
      v34 = MiPteInShadowRange(&v67, v33);
      v35 = 511LL;
      if ( v34
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v32 & 1) != 0
        && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v67 >> 3) & 0x1FF)) & 0x20) != 0 )
            v32 |= 0x20uLL;
        }
      }
      v36 = 0xFFFFFFFFFLL;
      v37 = 1LL;
      v9 = (v32 >> 12) & 0xFFFFFFFFFLL;
      v38 = v77[0] >> 12;
      do
      {
        v39 = v38;
        v38 >>= 9;
        v40 = v37 * (v39 & 0x1FF);
        v37 <<= 9;
        v9 += v40;
        LODWORD(v20) = v20 - 1;
      }
      while ( (_DWORD)v20 );
      if ( v9 <= 0xFFFFFFFFFLL )
      {
        v41 = 48 * v9;
        if ( ((*(_QWORD *)(48 * v9 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
        {
          v69 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v41 - 0x57FFFFFFFE8LL), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v69, v37, v36, v35);
            while ( *(__int64 *)(v41 - 0x57FFFFFFFE8LL) < 0 );
          }
          goto LABEL_26;
        }
      }
      LODWORD(v20) = -1073741503;
      goto LABEL_27;
    }
    v21 = v77[3];
    goto LABEL_21;
  }
  v42 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v77[7] = v42;
  v43 = MiLockWorkingSetShared((__int64)v42, v10, v11, v12);
  v21 = v77[3];
  BYTE4(v77[8]) = v43;
  valid = MiLockLowestValidPageTable(v42, v77[3], &v73);
  v77[9] = valid;
  if ( valid != ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
  {
    LODWORD(v20) = MI_READ_PTE_LOCK_FREE(v73) != 0 ? -1073741608 : -1073741819;
    goto LABEL_27;
  }
LABEL_21:
  v66[0] = 17;
  LODWORD(v20) = 0;
  v22 = MI_READ_PTE_LOCK_FREE(v21);
  v67 = v22;
  v24 = v22;
  if ( (v22 & 1) != 0 )
  {
LABEL_22:
    v25 = v24;
    if ( (unsigned int)MiPteInShadowRange(&v67, v23)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v24 & 1) != 0
      && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
    {
      v26 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v26 )
      {
        v25 = v24 | 0x20;
        v27 = 511LL;
        v65 = *((_QWORD *)&v26->Flink + (((unsigned __int64)&v67 >> 3) & 0x1FF));
        if ( (v65 & 0x20) == 0 )
          v25 = v24;
        if ( (v65 & 0x42) != 0 )
          v25 |= 0x42uLL;
      }
    }
    v28 = 0xFFFFFFFFFLL;
    v9 = (v25 >> 12) & 0xFFFFFFFFFLL;
    v29 = 48 * v9;
    if ( ((*(_QWORD *)(48 * v9 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
    {
      v70 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 - 0x57FFFFFFFE8LL), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v70, (__int64)v26, v28, v27);
        while ( *(__int64 *)(v29 - 0x57FFFFFFFE8LL) < 0 );
      }
    }
    else
    {
      LODWORD(v20) = -1073741503;
    }
    goto LABEL_26;
  }
  v46 = v22;
  while ( 1 )
  {
    if ( (v46 & 0x400) != 0 )
    {
      if ( (v46 & 2) != 0 )
      {
        v52 = v46;
        if ( qword_140C4DF40 && (v46 & 0x10) == 0 )
          v52 = v46 & ~qword_140C4DF40;
        v53 = v46 & 0xFFFFFFFFFFFFFBFFuLL;
        if ( (v52 & 0xFFFFFFFFFFFF0000uLL) != 0 )
          v53 = v46;
        *v75 = v53 & 0xFFFFFFFFFFFFFFFDuLL;
        goto LABEL_80;
      }
      if ( qword_140C4DF40 && (v46 & 0x10) == 0 )
        v46 &= ~qword_140C4DF40;
      v54 = v46 >> 16;
      if ( !MiIsPrototypePteVadLookup(v22) || (v54 = MiCheckVirtualAddress(a1, &v71, &v76)) != 0 )
      {
        v57 = MiLockProtoPoolPage(v54, v66);
        if ( !v57 )
          goto LABEL_92;
        v58 = MiLockLeafPage((__int64 *)v54, 0, v55, v56);
        v59 = MI_READ_PTE_LOCK_FREE(v54);
        v67 = v59;
        if ( (v59 & 1) != 0 )
        {
          v60 = v58 + 0x58000000000LL;
LABEL_94:
          v9 = v60 / 48;
          *v74 = v57;
          goto LABEL_26;
        }
        if ( v59 )
        {
          if ( (v59 & 0x400) != 0 )
          {
            v61 = v57;
          }
          else
          {
            if ( (v59 & 0x800) == 0 )
            {
              PagingFileOffset = MiGetPagingFileOffset((__int64)&v67);
              v62 = v66[0];
              v61 = v57;
              if ( !PagingFileOffset )
              {
                MiUnlockProtoPoolPage(v57, v66[0]);
                goto LABEL_80;
              }
LABEL_99:
              MiUnlockProtoPoolPage(v61, v62);
              goto LABEL_92;
            }
            v63 = *(_BYTE *)(v58 + 34);
            if ( (v63 & 0x20) == 0 )
            {
              v60 = v58 + 0x58000000000LL;
              goto LABEL_94;
            }
            v61 = v57;
            if ( (v63 & 8) == 0 )
            {
              MiObtainProtoReference(v57, 1LL);
              v51 = v57;
              v48 = v58;
              goto LABEL_91;
            }
          }
          v62 = v66[0];
          goto LABEL_99;
        }
        MiUnlockProtoPoolPage(v57, v66[0]);
      }
LABEL_90:
      LODWORD(v20) = -1073741819;
      goto LABEL_26;
    }
    if ( (v46 & 0x3E0) == 0x300 || (v46 & 0x3E0) == 0 )
      goto LABEL_90;
    if ( (v46 & 0x800) == 0 )
    {
      if ( (unsigned int)MiGetPagingFileOffset((__int64)&v67) )
        goto LABEL_92;
LABEL_80:
      LODWORD(v20) = 273;
      goto LABEL_26;
    }
    v47 = MiLockTransitionLeafPage(v21);
    v48 = v47;
    if ( v47 )
      break;
    v22 = MI_READ_PTE_LOCK_FREE(v21);
    v67 = v22;
    v46 = v22;
    v24 = v22;
    if ( (v22 & 1) != 0 )
      goto LABEL_22;
  }
  v49 = *(_BYTE *)(v47 + 34);
  if ( (v49 & 0x20) == 0 )
  {
    v50 = (unsigned __int128)((v48 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    v9 = ((unsigned __int64)v50 >> 63) + (v50 >> 3);
    goto LABEL_26;
  }
  if ( (v49 & 8) == 0 )
  {
    v51 = 0LL;
LABEL_91:
    v68 = 1;
    MiWaitForCollidedFaultComplete(v77, v48, v51, v66[0], &v68);
  }
LABEL_92:
  LODWORD(v20) = -1073741608;
LABEL_26:
  v5 = v72;
LABEL_27:
  v30 = v77[9];
  *(_OWORD *)(a2 + 24) = *(_OWORD *)&v77[7];
  *(_QWORD *)(a2 + 40) = v30;
  if ( (int)v20 < 0 )
    MiUnlockSystemVa(a2);
  else
    *v5 = v9;
  return (unsigned int)v20;
}
