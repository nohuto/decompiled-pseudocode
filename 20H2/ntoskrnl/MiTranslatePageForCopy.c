/*
 * XREFs of MiTranslatePageForCopy @ 0x140251058
 * Callers:
 *     MmCopyMemory @ 0x1402513F0 (MmCopyMemory.c)
 * Callees:
 *     MiWaitForCollidedFaultComplete @ 0x140201D9C (MiWaitForCollidedFaultComplete.c)
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     MiLockLowestValidPageTable @ 0x140236270 (MiLockLowestValidPageTable.c)
 *     MiLockTransitionLeafPage @ 0x14023681C (MiLockTransitionLeafPage.c)
 *     MiIsPrototypePteVadLookup @ 0x140236D50 (MiIsPrototypePteVadLookup.c)
 *     MiCheckVirtualAddress @ 0x1402382DC (MiCheckVirtualAddress.c)
 *     MiGetPagingFileOffset @ 0x1402397FC (MiGetPagingFileOffset.c)
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     MiVaIsUltra @ 0x1402513B4 (MiVaIsUltra.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiSynchronizeSystemVa @ 0x140299220 (MiSynchronizeSystemVa.c)
 *     MiUnlockSystemVa @ 0x1402996DC (MiUnlockSystemVa.c)
 *     MiGetSessionVm @ 0x14029977C (MiGetSessionVm.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockProtoPoolPage @ 0x1402C8010 (MiUnlockProtoPoolPage.c)
 *     MiObtainProtoReference @ 0x1402CA8B8 (MiObtainProtoReference.c)
 *     MiLockProtoPoolPage @ 0x1402CA9B0 (MiLockProtoPoolPage.c)
 *     MiInitializePageFaultPacket @ 0x1402CFE30 (MiInitializePageFaultPacket.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiLockLeafPage @ 0x14034A220 (MiLockLeafPage.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
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
  int v16; // ecx
  __int64 SessionVm; // rax
  int v18; // r8d
  __int128 v19; // xmm0
  __int64 v20; // rbx
  ULONG_PTR v21; // r12
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // xmm1_8
  unsigned __int64 v28; // rdi
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  __int16 v31; // ax
  __int64 v32; // rax
  __int64 v33; // rsi
  unsigned __int64 *v34; // rbx
  char v35; // al
  unsigned __int64 valid; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rdx
  char v41; // al
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rax
  unsigned __int64 v45; // rcx
  __int64 v46; // rsi
  __int64 v47; // r14
  __int64 v48; // r15
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // r15
  __int64 v52; // rcx
  char v53; // al
  int PagingFileOffset; // eax
  struct _LIST_ENTRY *v55; // rdx
  __int64 v56; // rax
  unsigned __int8 v57[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v58; // [rsp+38h] [rbp-C8h] BYREF
  int v59; // [rsp+40h] [rbp-C0h] BYREF
  int v60; // [rsp+44h] [rbp-BCh] BYREF
  int v61; // [rsp+48h] [rbp-B8h] BYREF
  int v62; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned __int64 *v63; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v64; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v65; // [rsp+60h] [rbp-A0h]
  unsigned __int64 *v66; // [rsp+68h] [rbp-98h]
  __int64 **v67; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v68[18]; // [rsp+80h] [rbp-80h] BYREF

  v5 = a3;
  v67 = 0LL;
  v64 = 0LL;
  v62 = 0;
  v63 = a3;
  v66 = a5;
  v65 = a4;
  memset(v68, 0, 0x88uLL);
  memset((void *)a2, 0, 0x80uLL);
  v9 = -1LL;
  *v5 = -1LL;
  *a4 = 0LL;
  *a5 = 0LL;
  MiInitializePageFaultPacket(0, a1, 0, 0, (__int64)v68);
  if ( (unsigned __int64)(((__int64)a1 >> 47) + 1) > 1
    || a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL
    || a1 >= 0xFFFFFA8000000000uLL && a1 < 0xFFFFFD8000000000uLL
    || a1 >= 0xFFFF800000000000uLL && (unsigned int)MiVaIsUltra(a1, v10, v11, v12) )
  {
    return 3221225711LL;
  }
  if ( a1 < qword_140C4F9B8 || a1 > qword_140C4E1E8 )
  {
    SystemRegionType = MiGetSystemRegionType(a1);
    switch ( SystemRegionType )
    {
      case 8:
        v16 = 0;
        break;
      case 1:
        SessionVm = MiGetSessionVm(v15, v14);
        if ( !SessionVm )
          return 3221225477LL;
        goto LABEL_18;
      case 6:
        v16 = 2;
        break;
      case 9:
        v16 = 3;
        break;
      default:
        v16 = 1;
        if ( SystemRegionType != 12 && SystemRegionType != 3 )
          v16 = 5;
        break;
    }
    LODWORD(SessionVm) = (unsigned int)MiGetAnyMultiplexedVm(v16);
LABEL_18:
    *(_DWORD *)(a2 + 4) |= 4u;
    if ( !(unsigned int)MiSynchronizeSystemVa(SessionVm, a1, v18, 0, a2) )
      return 3221225632LL;
    v19 = *(_OWORD *)(a2 + 24);
    v20 = *(int *)(a2 + 16);
    v68[9] = *(_QWORD *)(a2 + 40);
    *(_OWORD *)&v68[7] = v19;
    if ( (_DWORD)v20 )
    {
      v58 = MI_READ_PTE_LOCK_FREE(v68[v20 + 3]);
      v28 = v58;
      if ( MiPteInShadowRange((unsigned __int64)&v58)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v28 & 1) != 0
        && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v58 >> 3) & 0x1FF)) & 0x20) != 0 )
            v28 |= 0x20uLL;
        }
      }
      v29 = 1LL;
      v9 = (v28 >> 12) & 0xFFFFFFFFFLL;
      v30 = v68[0] >> 12;
      do
      {
        v31 = v30;
        v30 >>= 9;
        v32 = v29 * (v31 & 0x1FF);
        v29 <<= 9;
        v9 += v32;
        LODWORD(v20) = v20 - 1;
      }
      while ( (_DWORD)v20 );
      if ( v9 <= 0xFFFFFFFFFLL )
      {
        v33 = 48 * v9;
        if ( ((*(_QWORD *)(48 * v9 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
        {
          v60 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 - 0x57FFFFFFFE8LL), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v60);
            while ( *(__int64 *)(v33 - 0x57FFFFFFFE8LL) < 0 );
          }
          goto LABEL_26;
        }
      }
      LODWORD(v20) = -1073741503;
      goto LABEL_27;
    }
    v21 = v68[3];
    goto LABEL_21;
  }
  v34 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v68[7] = v34;
  v35 = MiLockWorkingSetShared(v34);
  v21 = v68[3];
  BYTE4(v68[8]) = v35;
  valid = MiLockLowestValidPageTable((__int64)v34, v68[3], &v64);
  v68[9] = valid;
  if ( valid != ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
  {
    LODWORD(v20) = MI_READ_PTE_LOCK_FREE(v64) != 0 ? -1073741608 : -1073741819;
    goto LABEL_27;
  }
LABEL_21:
  v57[0] = 17;
  LODWORD(v20) = 0;
  v22 = MI_READ_PTE_LOCK_FREE(v21);
  v58 = v22;
  v23 = v22;
  if ( (v22 & 1) != 0 )
  {
LABEL_22:
    v24 = v23;
    if ( MiPteInShadowRange((unsigned __int64)&v58)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v23 & 1) != 0
      && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
    {
      v55 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v55 )
      {
        v24 = v23 | 0x20;
        v56 = *((_QWORD *)&v55->Flink + (((unsigned __int64)&v58 >> 3) & 0x1FF));
        if ( (v56 & 0x20) == 0 )
          v24 = v23;
        if ( (v56 & 0x42) != 0 )
          v24 |= 0x42uLL;
      }
    }
    v9 = (v24 >> 12) & 0xFFFFFFFFFLL;
    v25 = 48 * v9;
    if ( ((*(_QWORD *)(48 * v9 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
    {
      v61 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 - 0x57FFFFFFFE8LL), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v61);
        while ( *(__int64 *)(v25 - 0x57FFFFFFFE8LL) < 0 );
      }
    }
    else
    {
      LODWORD(v20) = -1073741503;
    }
    goto LABEL_26;
  }
  v38 = v22;
  while ( 1 )
  {
    if ( (v38 & 0x400) != 0 )
    {
      if ( (v38 & 2) != 0 )
      {
        v44 = v38;
        if ( qword_140C4DDC0 && (v38 & 0x10) == 0 )
          v44 = v38 & ~qword_140C4DDC0;
        v45 = v38 & 0xFFFFFFFFFFFFFBFFuLL;
        if ( (v44 & 0xFFFFFFFFFFFF0000uLL) != 0 )
          v45 = v38;
        *v66 = v45 & 0xFFFFFFFFFFFFFFFDuLL;
        goto LABEL_80;
      }
      if ( qword_140C4DDC0 && (v38 & 0x10) == 0 )
        v38 &= ~qword_140C4DDC0;
      v46 = v38 >> 16;
      if ( !MiIsPrototypePteVadLookup(v22) || (v46 = MiCheckVirtualAddress(a1, &v62, &v67)) != 0 )
      {
        v47 = MiLockProtoPoolPage(v46, v57);
        if ( !v47 )
          goto LABEL_92;
        v48 = MiLockLeafPage(v46, 0LL);
        v49 = MI_READ_PTE_LOCK_FREE(v46);
        v58 = v49;
        if ( (v49 & 1) != 0 )
        {
          v51 = v48 + 0x58000000000LL;
LABEL_94:
          v9 = v51 / 48;
          *v65 = v47;
          goto LABEL_26;
        }
        if ( v49 )
        {
          if ( (v49 & 0x400) != 0 )
          {
            v52 = v47;
          }
          else
          {
            if ( (v49 & 0x800) == 0 )
            {
              PagingFileOffset = MiGetPagingFileOffset((__int64)&v58);
              LOBYTE(v50) = v57[0];
              v52 = v47;
              if ( !PagingFileOffset )
              {
                MiUnlockProtoPoolPage(v47, v50);
                goto LABEL_80;
              }
LABEL_99:
              MiUnlockProtoPoolPage(v52, v50);
              goto LABEL_92;
            }
            v53 = *(_BYTE *)(v48 + 34);
            if ( (v53 & 0x20) == 0 )
            {
              v51 = v48 + 0x58000000000LL;
              goto LABEL_94;
            }
            v52 = v47;
            if ( (v53 & 8) == 0 )
            {
              MiObtainProtoReference(v47, 1LL);
              v43 = v47;
              v40 = v48;
              goto LABEL_91;
            }
          }
          LOBYTE(v50) = v57[0];
          goto LABEL_99;
        }
        LOBYTE(v50) = v57[0];
        MiUnlockProtoPoolPage(v47, v50);
      }
LABEL_90:
      LODWORD(v20) = -1073741819;
      goto LABEL_26;
    }
    if ( (v38 & 0x3E0) == 0x300 || (v38 & 0x3E0) == 0 )
      goto LABEL_90;
    if ( (v38 & 0x800) == 0 )
    {
      if ( (unsigned int)MiGetPagingFileOffset((__int64)&v58) )
        goto LABEL_92;
LABEL_80:
      LODWORD(v20) = 273;
      goto LABEL_26;
    }
    v39 = MiLockTransitionLeafPage(v21, v57);
    v40 = v39;
    if ( v39 )
      break;
    v22 = MI_READ_PTE_LOCK_FREE(v21);
    v58 = v22;
    v38 = v22;
    v23 = v22;
    if ( (v22 & 1) != 0 )
      goto LABEL_22;
  }
  v41 = *(_BYTE *)(v39 + 34);
  if ( (v41 & 0x20) == 0 )
  {
    v42 = (unsigned __int128)((v40 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    v9 = ((unsigned __int64)v42 >> 63) + (v42 >> 3);
    goto LABEL_26;
  }
  if ( (v41 & 8) == 0 )
  {
    v43 = 0LL;
LABEL_91:
    v59 = 1;
    MiWaitForCollidedFaultComplete(v68, v40, v43, v57[0], &v59);
  }
LABEL_92:
  LODWORD(v20) = -1073741608;
LABEL_26:
  v5 = v63;
LABEL_27:
  v26 = v68[9];
  *(_OWORD *)(a2 + 24) = *(_OWORD *)&v68[7];
  *(_QWORD *)(a2 + 40) = v26;
  if ( (int)v20 < 0 )
    MiUnlockSystemVa(a2);
  else
    *v5 = v9;
  return (unsigned int)v20;
}
