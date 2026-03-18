/*
 * XREFs of MiTranslatePageForCopy @ 0x14026C808
 * Callers:
 *     MmCopyMemory @ 0x14026BBB0 (MmCopyMemory.c)
 * Callees:
 *     MiInitializePageFaultPacket @ 0x14026C744 (MiInitializePageFaultPacket.c)
 *     MiVaIsUltra @ 0x14026C7D0 (MiVaIsUltra.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiLockLeafPage @ 0x1402738F0 (MiLockLeafPage.c)
 *     MiLockProtoPoolPage @ 0x140273AF0 (MiLockProtoPoolPage.c)
 *     MiObtainProtoReference @ 0x14027449C (MiObtainProtoReference.c)
 *     MiSynchronizeSystemVa @ 0x140279DB0 (MiSynchronizeSystemVa.c)
 *     MiUnlockSystemVa @ 0x14027A168 (MiUnlockSystemVa.c)
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MiGetSessionVm @ 0x14027B520 (MiGetSessionVm.c)
 *     MiLockLowestValidPageTable @ 0x14027D6E0 (MiLockLowestValidPageTable.c)
 *     MiWaitForCollidedFaultComplete @ 0x14027FEF8 (MiWaitForCollidedFaultComplete.c)
 *     MiIsPrototypePteVadLookup @ 0x1402806A0 (MiIsPrototypePteVadLookup.c)
 *     MiUnlockVadTree @ 0x1402806E0 (MiUnlockVadTree.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiGetPagingFileOffset @ 0x1402E76C0 (MiGetPagingFileOffset.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiLockTransitionLeafPageEx @ 0x140315D60 (MiLockTransitionLeafPageEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockProtoPoolPage @ 0x140334790 (MiUnlockProtoPoolPage.c)
 *     MiCheckVirtualAddress @ 0x1403536F0 (MiCheckVirtualAddress.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiTranslatePageForCopy(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 *a4,
        unsigned __int64 *a5)
{
  unsigned __int64 *v6; // r15
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
  ULONG_PTR v21; // r15
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // xmm1_8
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  __int16 v28; // ax
  __int64 v29; // rax
  __int64 v30; // rsi
  unsigned __int64 *v31; // rbx
  char v32; // al
  __int64 valid; // rax
  __int64 v34; // rsi
  __int64 v35; // rax
  int v36; // r9d
  __int64 v37; // rdx
  char v38; // al
  int v39; // r8d
  __int64 v40; // rax
  unsigned __int64 v41; // rcx
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // r14
  __int64 v45; // r15
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rdi
  __int64 v49; // rcx
  char v50; // al
  int PagingFileOffset; // eax
  char v52[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v53; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v54; // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v55; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 *v56; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v57; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v58; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v59[18]; // [rsp+60h] [rbp-A0h] BYREF

  v6 = a3;
  v56 = a3;
  v55 = a4;
  v57 = 0LL;
  memset(v59, 0, 0x88uLL);
  memset((void *)a2, 0, 0x80uLL);
  v9 = -1LL;
  *v6 = -1LL;
  *a4 = 0LL;
  *a5 = 0LL;
  MiInitializePageFaultPacket(0LL, a1, 0, 0LL, (__int64)v59);
  if ( (__int64)a1 >> 47 != -1 && (__int64)a1 >> 47 != 0
    || a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL
    || a1 >= 0xFFFFDE0000000000uLL && a1 < 48 * qword_140C50840 - 0x21FFFFFFFFD0LL
    || a1 >= 0xFFFF800000000000uLL && MiVaIsUltra(a1) )
  {
    return 3221225711LL;
  }
  if ( a1 < qword_140C540C0 || a1 > qword_140C51BF0 )
  {
    SystemRegionType = MiGetSystemRegionType(a1, v10, v11, v12);
    switch ( SystemRegionType )
    {
      case 8:
        v16 = 0LL;
        break;
      case 1:
        SessionVm = MiGetSessionVm(v15, v14, 1LL);
        if ( !SessionVm )
          return 3221225477LL;
        goto LABEL_13;
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
LABEL_13:
    *(_DWORD *)(a2 + 4) |= 4u;
    if ( !(unsigned int)MiSynchronizeSystemVa(SessionVm, a1, v18, 0, a2) )
      return 3221225632LL;
    v19 = *(_OWORD *)(a2 + 24);
    v20 = *(int *)(a2 + 16);
    v59[9] = *(_QWORD *)(a2 + 40);
    *(_OWORD *)&v59[7] = v19;
    if ( (_DWORD)v20 )
    {
      v54 = MI_READ_PTE_LOCK_FREE(v59[v20 + 3]);
      v9 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v54) >> 12) & 0xFFFFFFFFFFLL;
      v26 = 1LL;
      v27 = v59[0] >> 12;
      do
      {
        v28 = v27;
        v27 >>= 9;
        v29 = v26 * (v28 & 0x1FF);
        v26 <<= 9;
        v9 += v29;
        LODWORD(v20) = v20 - 1;
      }
      while ( (_DWORD)v20 );
      if ( v9 <= qword_140C50840 && (v30 = 48 * v9, ((*(_QWORD *)(48 * v9 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0) )
      {
        LODWORD(v56) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 - 0x21FFFFFFFFE8LL), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v56);
          while ( *(__int64 *)(v30 - 0x21FFFFFFFFE8LL) < 0 );
        }
      }
      else
      {
        LODWORD(v20) = -1073741503;
      }
      goto LABEL_22;
    }
    v21 = v59[3];
    goto LABEL_16;
  }
  v31 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v59[7] = v31;
  v32 = MiLockWorkingSetShared(v31);
  v21 = v59[3];
  BYTE4(v59[8]) = v32;
  valid = MiLockLowestValidPageTable(v31, v59[3], &v57);
  v59[9] = valid;
  if ( valid != ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
  {
    LODWORD(v20) = MI_READ_PTE_LOCK_FREE(v57) != 0 ? -1073741608 : -1073741819;
    goto LABEL_21;
  }
LABEL_16:
  v52[0] = 17;
  LODWORD(v20) = 0;
  v22 = MI_READ_PTE_LOCK_FREE(v21);
  v54 = v22;
  if ( (v22 & 1) != 0 )
  {
LABEL_17:
    v9 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v54) >> 12) & 0xFFFFFFFFFFLL;
    if ( v9 <= qword_140C50840 && (v23 = 48 * v9, ((*(_QWORD *)(48 * v9 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0) )
    {
      LODWORD(v55) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 - 0x21FFFFFFFFE8LL), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v55);
        while ( *(__int64 *)(v23 - 0x21FFFFFFFFE8LL) < 0 );
      }
    }
    else
    {
      LODWORD(v20) = -1073741503;
    }
    goto LABEL_21;
  }
  v34 = v22;
  while ( 1 )
  {
    if ( (v34 & 0x400) != 0 )
    {
      if ( (v34 & 2) != 0 )
      {
        v40 = v34;
        if ( qword_140C50780 && (v34 & 0x10) == 0 )
          v40 = v34 & ~qword_140C50780;
        v41 = v34 & 0xFFFFFFFFFFFFFBFFuLL;
        if ( (v40 & 0xFFFFFFFFFFFF0000uLL) != 0 )
          v41 = v34;
        *a5 = v41 & 0xFFFFFFFFFFFFFFFDuLL;
        goto LABEL_71;
      }
      if ( qword_140C50780 && (v34 & 0x10) == 0 )
        v34 &= ~qword_140C50780;
      v42 = v34 >> 16;
      if ( !(unsigned int)MiIsPrototypePteVadLookup(v22) )
        goto LABEL_79;
      v58 = 0LL;
      v53 = 0;
      v42 = MiCheckVirtualAddress(a1, &v53, &v58);
      if ( v58 )
      {
        LOBYTE(v43) = 17;
        MiUnlockVadTree(1LL, v43);
      }
      if ( v42 )
      {
LABEL_79:
        v44 = MiLockProtoPoolPage(v42, v52);
        if ( !v44 )
          goto LABEL_85;
        v45 = MiLockLeafPage(v42, 0LL);
        v46 = MI_READ_PTE_LOCK_FREE(v42);
        v54 = v46;
        if ( (v46 & 1) != 0 )
        {
          v48 = v45 + 0x220000000000LL;
LABEL_87:
          v9 = 0xAAAAAAAAAAAAAAABuLL * (v48 >> 4);
          *v55 = v44;
          goto LABEL_21;
        }
        if ( v46 )
        {
          if ( (v46 & 0x400) != 0 )
          {
            v49 = v44;
          }
          else
          {
            if ( (v46 & 0x800) == 0 )
            {
              PagingFileOffset = MiGetPagingFileOffset(&v54);
              LOBYTE(v47) = v52[0];
              v49 = v44;
              if ( !PagingFileOffset )
              {
                MiUnlockProtoPoolPage(v44, v47);
                goto LABEL_71;
              }
LABEL_92:
              MiUnlockProtoPoolPage(v49, v47);
              goto LABEL_85;
            }
            v50 = *(_BYTE *)(v45 + 34);
            if ( (v50 & 0x20) == 0 )
            {
              v48 = v45 + 0x220000000000LL;
              goto LABEL_87;
            }
            v49 = v44;
            if ( (v50 & 8) == 0 )
            {
              MiObtainProtoReference(v44, 1LL);
              v39 = v44;
              LODWORD(v37) = v45;
              goto LABEL_84;
            }
          }
          LOBYTE(v47) = v52[0];
          goto LABEL_92;
        }
        LOBYTE(v47) = v52[0];
        MiUnlockProtoPoolPage(v44, v47);
      }
LABEL_83:
      LODWORD(v20) = -1073741819;
      goto LABEL_21;
    }
    if ( (v34 & 0x3E0) == 0x300 || (v34 & 0x3E0) == 0 )
      goto LABEL_83;
    if ( (v34 & 0x800) == 0 )
    {
      if ( (unsigned int)MiGetPagingFileOffset(&v54) )
        goto LABEL_85;
LABEL_71:
      LODWORD(v20) = 273;
      goto LABEL_21;
    }
    v35 = MiLockTransitionLeafPageEx(v21);
    v37 = v35;
    if ( v35 )
      break;
    v22 = MI_READ_PTE_LOCK_FREE(v21);
    v54 = v22;
    v34 = v22;
    if ( (v22 & 1) != 0 )
      goto LABEL_17;
  }
  v38 = *(_BYTE *)(v35 + 34);
  if ( (v38 & 0x20) == 0 )
  {
    v9 = 0xAAAAAAAAAAAAAAABuLL * ((v37 + 0x220000000000LL) >> 4);
    goto LABEL_21;
  }
  if ( (v38 & 8) == 0 )
  {
    v39 = 0;
LABEL_84:
    LOBYTE(v36) = v52[0];
    v53 = 1;
    MiWaitForCollidedFaultComplete((unsigned int)v59, v37, v39, v36, (__int64)&v53);
  }
LABEL_85:
  LODWORD(v20) = -1073741608;
LABEL_21:
  v6 = v56;
LABEL_22:
  v24 = v59[9];
  *(_OWORD *)(a2 + 24) = *(_OWORD *)&v59[7];
  *(_QWORD *)(a2 + 40) = v24;
  if ( (int)v20 < 0 )
    MiUnlockSystemVa(a2);
  else
    *v6 = v9;
  return (unsigned int)v20;
}
