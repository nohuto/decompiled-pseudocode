/*
 * XREFs of MiTranslatePageForCopy @ 0x140302DD4
 * Callers:
 *     MmCopyMemory @ 0x1403028D0 (MmCopyMemory.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiSynchronizeSystemVa @ 0x14022B050 (MiSynchronizeSystemVa.c)
 *     MiUnlockSystemVa @ 0x14022B50C (MiUnlockSystemVa.c)
 *     MiGetSessionVm @ 0x14022B5AC (MiGetSessionVm.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     MiObtainProtoReference @ 0x140282684 (MiObtainProtoReference.c)
 *     MiLockProtoPoolPage @ 0x140282DC0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiLockTransitionLeafPage @ 0x1402ACD48 (MiLockTransitionLeafPage.c)
 *     MiLockLowestValidPageTable @ 0x1402ACFF0 (MiLockLowestValidPageTable.c)
 *     MiInitializePageFaultPacket @ 0x1402B3CF0 (MiInitializePageFaultPacket.c)
 *     MiVaIsUltra @ 0x140303130 (MiVaIsUltra.c)
 *     MiWaitForCollidedFaultComplete @ 0x140341A74 (MiWaitForCollidedFaultComplete.c)
 *     MiGetPagingFileOffset @ 0x140344E64 (MiGetPagingFileOffset.c)
 *     MiIsPrototypePteVadLookup @ 0x140345200 (MiIsPrototypePteVadLookup.c)
 *     MiCheckVirtualAddress @ 0x140345240 (MiCheckVirtualAddress.c)
 *     MiLockLeafPage @ 0x140352AD0 (MiLockLeafPage.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
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
  __int64 v20; // rax
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rdi
  struct _LIST_ENTRY *v23; // rdx
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // rsi
  __int64 v27; // xmm1_8
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
  int v44; // r9d
  __int64 v45; // rdx
  char v46; // al
  __int64 v47; // rdx
  int v48; // r8d
  __int64 v49; // rax
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rsi
  __int64 v52; // r14
  __int64 v53; // r15
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // r15
  __int64 v59; // rcx
  char v60; // al
  int PagingFileOffset; // eax
  __int64 v62; // rax
  char v63[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v64; // [rsp+38h] [rbp-C8h] BYREF
  int v65; // [rsp+40h] [rbp-C0h] BYREF
  int v66; // [rsp+44h] [rbp-BCh] BYREF
  int v67; // [rsp+48h] [rbp-B8h] BYREF
  int v68; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned __int64 *v69; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v70; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v71; // [rsp+60h] [rbp-A0h]
  unsigned __int64 *v72; // [rsp+68h] [rbp-98h]
  __int64 v73; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v74[18]; // [rsp+80h] [rbp-80h] BYREF

  v5 = a3;
  v73 = 0LL;
  v70 = 0LL;
  v68 = 0;
  v69 = a3;
  v72 = a5;
  v71 = a4;
  memset(v74, 0, 0x88uLL);
  memset((void *)a2, 0, 0x80uLL);
  v9 = -1LL;
  *v5 = -1LL;
  *a4 = 0LL;
  *a5 = 0LL;
  MiInitializePageFaultPacket(0LL, a1, 0, 0LL, (__int64)v74);
  if ( (unsigned __int64)(((__int64)a1 >> 47) + 1) > 1
    || a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL
    || a1 >= 0xFFFFFA8000000000uLL && a1 < 0xFFFFFD8000000000uLL
    || a1 >= 0xFFFF800000000000uLL && (unsigned int)MiVaIsUltra(a1, v10, v11, v12) )
  {
    return 3221225711LL;
  }
  if ( a1 < qword_140C4FA78 || a1 > qword_140C4E2A8 )
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
    v74[9] = *(_QWORD *)(a2 + 40);
    *(_OWORD *)&v74[7] = v17;
    if ( (_DWORD)v18 )
    {
      v64 = MI_READ_PTE_LOCK_FREE(v74[v18 + 3]);
      v29 = v64;
      v30 = MiPteInShadowRange((unsigned __int64)&v64);
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
          if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v64 >> 3) & 0x1FF)) & 0x20) != 0 )
            v29 |= 0x20uLL;
        }
      }
      v32 = 0xFFFFFFFFFLL;
      v33 = 1LL;
      v9 = (v29 >> 12) & 0xFFFFFFFFFLL;
      v34 = v74[0] >> 12;
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
          v66 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v37 - 0x57FFFFFFFE8LL), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v66, v33, v32, v31);
            while ( *(__int64 *)(v37 - 0x57FFFFFFFE8LL) < 0 );
          }
          goto LABEL_26;
        }
      }
      LODWORD(v18) = -1073741503;
      goto LABEL_27;
    }
    v19 = v74[3];
    goto LABEL_21;
  }
  v38 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v74[7] = v38;
  v39 = MiLockWorkingSetShared((__int64)v38);
  v19 = v74[3];
  BYTE4(v74[8]) = v39;
  valid = MiLockLowestValidPageTable((__int64)v38, v74[3], &v70);
  v74[9] = valid;
  if ( valid != ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
  {
    LODWORD(v18) = MI_READ_PTE_LOCK_FREE(v70) != 0 ? -1073741608 : -1073741819;
    goto LABEL_27;
  }
LABEL_21:
  v63[0] = 17;
  LODWORD(v18) = 0;
  v20 = MI_READ_PTE_LOCK_FREE(v19);
  v64 = v20;
  v21 = v20;
  if ( (v20 & 1) != 0 )
  {
LABEL_22:
    v22 = v21;
    if ( MiPteInShadowRange((unsigned __int64)&v64)
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
        v62 = *((_QWORD *)&v23->Flink + (((unsigned __int64)&v64 >> 3) & 0x1FF));
        if ( (v62 & 0x20) == 0 )
          v22 = v21;
        if ( (v62 & 0x42) != 0 )
          v22 |= 0x42uLL;
      }
    }
    v25 = 0xFFFFFFFFFLL;
    v9 = (v22 >> 12) & 0xFFFFFFFFFLL;
    v26 = 48 * v9;
    if ( ((*(_QWORD *)(48 * v9 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
    {
      v67 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 - 0x57FFFFFFFE8LL), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v67, (__int64)v23, v25, v24);
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
        v49 = v42;
        if ( qword_140C4DE80 && (v42 & 0x10) == 0 )
          v49 = v42 & ~qword_140C4DE80;
        v50 = v42 & 0xFFFFFFFFFFFFFBFFuLL;
        if ( (v49 & 0xFFFFFFFFFFFF0000uLL) != 0 )
          v50 = v42;
        *v72 = v50 & 0xFFFFFFFFFFFFFFFDuLL;
        goto LABEL_80;
      }
      if ( qword_140C4DE80 && (v42 & 0x10) == 0 )
        v42 &= ~qword_140C4DE80;
      v51 = v42 >> 16;
      if ( !(unsigned int)MiIsPrototypePteVadLookup(v20) || (v51 = MiCheckVirtualAddress(a1, &v68, &v73)) != 0 )
      {
        v52 = MiLockProtoPoolPage(v51, (__int64)v63);
        if ( !v52 )
          goto LABEL_92;
        v53 = MiLockLeafPage(v51, 0LL);
        v54 = MI_READ_PTE_LOCK_FREE(v51);
        v64 = v54;
        if ( (v54 & 1) != 0 )
        {
          v58 = v53 + 0x58000000000LL;
LABEL_94:
          v9 = v58 / 48;
          *v71 = v52;
          goto LABEL_26;
        }
        if ( v54 )
        {
          if ( (v54 & 0x400) != 0 )
          {
            v59 = v52;
          }
          else
          {
            if ( (v54 & 0x800) == 0 )
            {
              PagingFileOffset = MiGetPagingFileOffset(&v64);
              LOBYTE(v55) = v63[0];
              v59 = v52;
              if ( !PagingFileOffset )
              {
                MiUnlockProtoPoolPage(v52, v55, v56, v57);
                goto LABEL_80;
              }
LABEL_99:
              MiUnlockProtoPoolPage(v59, v55, v56, v57);
              goto LABEL_92;
            }
            v60 = *(_BYTE *)(v53 + 34);
            if ( (v60 & 0x20) == 0 )
            {
              v58 = v53 + 0x58000000000LL;
              goto LABEL_94;
            }
            v59 = v52;
            if ( (v60 & 8) == 0 )
            {
              MiObtainProtoReference(v52, 1LL, v56, v57);
              v48 = v52;
              LODWORD(v45) = v53;
              goto LABEL_91;
            }
          }
          LOBYTE(v55) = v63[0];
          goto LABEL_99;
        }
        LOBYTE(v55) = v63[0];
        MiUnlockProtoPoolPage(v52, v55, v56, v57);
      }
LABEL_90:
      LODWORD(v18) = -1073741819;
      goto LABEL_26;
    }
    if ( (v42 & 0x3E0) == 0x300 || (v42 & 0x3E0) == 0 )
      goto LABEL_90;
    if ( (v42 & 0x800) == 0 )
    {
      if ( (unsigned int)MiGetPagingFileOffset(&v64) )
        goto LABEL_92;
LABEL_80:
      LODWORD(v18) = 273;
      goto LABEL_26;
    }
    v43 = MiLockTransitionLeafPage(v19, v63);
    v45 = v43;
    if ( v43 )
      break;
    v20 = MI_READ_PTE_LOCK_FREE(v19);
    v64 = v20;
    v42 = v20;
    v21 = v20;
    if ( (v20 & 1) != 0 )
      goto LABEL_22;
  }
  v46 = *(_BYTE *)(v43 + 34);
  if ( (v46 & 0x20) == 0 )
  {
    v47 = (unsigned __int128)((v45 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    v9 = ((unsigned __int64)v47 >> 63) + (v47 >> 3);
    goto LABEL_26;
  }
  if ( (v46 & 8) == 0 )
  {
    v48 = 0;
LABEL_91:
    LOBYTE(v44) = v63[0];
    v65 = 1;
    MiWaitForCollidedFaultComplete((unsigned int)v74, v45, v48, v44, (__int64)&v65);
  }
LABEL_92:
  LODWORD(v18) = -1073741608;
LABEL_26:
  v5 = v69;
LABEL_27:
  v27 = v74[9];
  *(_OWORD *)(a2 + 24) = *(_OWORD *)&v74[7];
  *(_QWORD *)(a2 + 40) = v27;
  if ( (int)v18 < 0 )
    MiUnlockSystemVa(a2);
  else
    *v5 = v9;
  return (unsigned int)v18;
}
