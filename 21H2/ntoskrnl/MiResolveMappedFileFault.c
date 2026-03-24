/*
 * XREFs of MiResolveMappedFileFault @ 0x140319480
 * Callers:
 *     MiResolveProtoPteFault @ 0x1402153D0 (MiResolveProtoPteFault.c)
 *     MiIssueFlowThroughFault @ 0x14028C09C (MiIssueFlowThroughFault.c)
 * Callees:
 *     MiGetPage @ 0x140213610 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x14021BA90 (MiObtainFaultCharges.c)
 *     MiUnlockProtoPoolPage @ 0x1402397F0 (MiUnlockProtoPoolPage.c)
 *     MiBuildMdlForMappedFileFault @ 0x14023DDD0 (MiBuildMdlForMappedFileFault.c)
 *     MiComputeFaultNode @ 0x14023F100 (MiComputeFaultNode.c)
 *     MiInitializePageColorBase @ 0x14023F280 (MiInitializePageColorBase.c)
 *     MiLocateAddress @ 0x14025B810 (MiLocateAddress.c)
 *     MiGetAvailablePagesBelowPriority @ 0x14027191C (MiGetAvailablePagesBelowPriority.c)
 *     MiComputeFaultCluster @ 0x14028DF24 (MiComputeFaultCluster.c)
 *     MiSetInPagePrefetchPriority @ 0x14028E1B4 (MiSetInPagePrefetchPriority.c)
 *     MiReturnFaultCharges @ 0x14028E1E4 (MiReturnFaultCharges.c)
 *     KeInvalidAccessAllowed @ 0x1402A2C40 (KeInvalidAccessAllowed.c)
 *     MiGetSlabPage @ 0x1402E803C (MiGetSlabPage.c)
 *     MiFreeInPageSupportBlock @ 0x1402FC8DC (MiFreeInPageSupportBlock.c)
 *     MiGetSubsectionDriverProtos @ 0x1402FCDE0 (MiGetSubsectionDriverProtos.c)
 *     MiCopyDataPageToImagePage @ 0x1403043E8 (MiCopyDataPageToImagePage.c)
 *     MiUseSlabAllocator @ 0x140318198 (MiUseSlabAllocator.c)
 *     MiControlAreaUsingCopyExtents @ 0x1403181FC (MiControlAreaUsingCopyExtents.c)
 *     MiAllocateInPageSupport @ 0x140319BA0 (MiAllocateInPageSupport.c)
 *     MiPickClusterForMappedFileFault @ 0x140319C70 (MiPickClusterForMappedFileFault.c)
 *     MiFinishMdlForMappedFileFault @ 0x14031A46C (MiFinishMdlForMappedFileFault.c)
 *     MiGetSessionIdForVa @ 0x14031E4B0 (MiGetSessionIdForVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiControlAreaUsingExtents @ 0x140332C50 (MiControlAreaUsingExtents.c)
 *     MiSanitizePfnProtection @ 0x140334290 (MiSanitizePfnProtection.c)
 *     MiGetSharedProtos @ 0x1403A6208 (MiGetSharedProtos.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053FD78 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x140540134 (MiCopyImageExtentContents.c)
 */

__int64 MiResolveMappedFileFault(__int64 a1, __int64 *a2, ...)
{
  __int64 v2; // r14
  __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // r15
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // r8
  bool v12; // zf
  unsigned __int64 v13; // rdx
  unsigned int v14; // r13d
  __int64 v15; // rcx
  int v16; // esi
  ULONG_PTR *v17; // r14
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned __int64 v20; // rdi
  _QWORD *v21; // r10
  __int64 v22; // r14
  __int64 v23; // r12
  unsigned __int64 v24; // rax
  __int64 v25; // r10
  int v26; // esi
  __int64 v27; // r13
  ULONG_PTR *v28; // r15
  signed __int32 v29; // ecx
  unsigned int v30; // r11d
  __int64 *v31; // r9
  __int64 SlabPage; // rax
  __int64 v33; // r9
  __int64 *v34; // r12
  __int64 v35; // rsi
  __int64 result; // rax
  int v37; // r9d
  _BYTE *v38; // rbx
  unsigned int v39; // r12d
  unsigned int v40; // edi
  int v41; // eax
  int v42; // ebx
  __int64 **v43; // rax
  unsigned __int64 v44; // r10
  __int64 v45; // r14
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rcx
  __int64 SharedProtos; // rax
  __int64 **Address; // rax
  char v50; // cl
  __int64 v51; // rax
  __int64 v52; // r15
  int v53; // eax
  unsigned int v54; // esi
  unsigned int v55; // eax
  __int64 *v56; // rax
  unsigned int v57; // [rsp+20h] [rbp-A9h]
  __int64 v58; // [rsp+28h] [rbp-A1h]
  int v59; // [rsp+50h] [rbp-79h] BYREF
  int v60; // [rsp+54h] [rbp-75h]
  unsigned int v61; // [rsp+58h] [rbp-71h]
  _BYTE *v62; // [rsp+60h] [rbp-69h]
  unsigned int SessionIdForVa; // [rsp+68h] [rbp-61h]
  ULONG_PTR *v64; // [rsp+70h] [rbp-59h]
  unsigned __int64 v65; // [rsp+78h] [rbp-51h]
  __int64 **v66; // [rsp+80h] [rbp-49h] BYREF
  __int64 v67; // [rsp+88h] [rbp-41h]
  __int64 v68; // [rsp+90h] [rbp-39h]
  unsigned int v69; // [rsp+98h] [rbp-31h]
  __int64 v70; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v71; // [rsp+A8h] [rbp-21h]
  __int64 v72; // [rsp+B0h] [rbp-19h]
  __int64 v73; // [rsp+B8h] [rbp-11h]
  unsigned __int64 v74; // [rsp+C0h] [rbp-9h] BYREF
  unsigned __int64 v75; // [rsp+C8h] [rbp-1h] BYREF
  __int128 v76; // [rsp+D0h] [rbp+7h] BYREF
  __int64 v79; // [rsp+140h] [rbp+77h] BYREF
  va_list va; // [rsp+140h] [rbp+77h]
  __int64 *v81; // [rsp+148h] [rbp+7Fh]
  va_list va1; // [rsp+150h] [rbp+87h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v79 = va_arg(va1, _QWORD);
  v81 = va_arg(va1, __int64 *);
  v2 = *(_QWORD *)(a1 + 16);
  v65 = *(_QWORD *)a1;
  v73 = *(_QWORD *)(a1 + 56);
  v75 = 0LL;
  v74 = 0LL;
  v59 = 0;
  v76 = 0LL;
  v68 = v2;
  v5 = MI_READ_PTE_LOCK_FREE(a2);
  v70 = v5;
  v62 = 0LL;
  v61 = 2;
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 4) != 0 )
  {
    MiUnlockProtoPoolPage(v79, 0x11u);
    return 3221225633LL;
  }
  v6 = v2 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v2 & 1) != 0 )
  {
    if ( *(_BYTE *)v6 == 5 )
    {
      if ( (*(_DWORD *)(v6 + 56) & 4) != 0 )
      {
        MiUnlockProtoPoolPage(v79, 0x11u);
        return 3221225495LL;
      }
      v62 = 0LL;
    }
    else if ( (v2 & 1) != 0 )
    {
      if ( *(_BYTE *)v6 == 1 )
      {
        v12 = (*(_DWORD *)(v6 + 80) & 0x100) == 0;
        v62 = (_BYTE *)(v2 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( !v12 )
        {
          MiUnlockProtoPoolPage(v79, 0x11u);
          return 0LL;
        }
        v61 = 0;
      }
      else if ( (v2 & 1) != 0 && *(_BYTE *)v6 == 2 )
      {
        v62 = (_BYTE *)(v2 & 0xFFFFFFFFFFFFFFFEuLL);
      }
    }
  }
  if ( (v5 & 0x400) != 0 )
  {
    if ( qword_140C4DF40 && (v5 & 0x10) == 0 )
      v5 &= ~qword_140C4DF40;
    v72 = 0LL;
  }
  else
  {
    if ( qword_140C4DF40 && (v5 & 0x10) == 0 )
      v5 &= ~qword_140C4DF40;
    v72 = 48 * (((unsigned __int64)v5 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v5 = *(_QWORD *)(v72 + 16);
    if ( qword_140C4DF40 && (v5 & 0x10) == 0 )
      v5 &= ~qword_140C4DF40;
  }
  v7 = v5 >> 16;
  v8 = *(_QWORD *)v7;
  v9 = *(_DWORD *)(*(_QWORD *)v7 + 56LL);
  if ( (v9 & 0x10) != 0 )
  {
    MiUnlockProtoPoolPage(v79, 0x11u);
    return 3221225478LL;
  }
  v10 = *(_QWORD *)(v7 + 8);
  v11 = 0LL;
  v12 = (*(_BYTE *)(v7 + 34) & 2) == 0;
  SessionIdForVa = -1;
  v71 = 0LL;
  v67 = v10;
  if ( !v12 && (v9 & 0x4000000) != 0 )
  {
    SessionIdForVa = MiGetSessionIdForVa(v65);
    if ( v65 >= 0xFFFF800000000000uLL )
    {
      if ( (v2 & 1) != 0 )
      {
        v50 = *(_BYTE *)v6;
        if ( *(_BYTE *)v6 == 1 || v50 == 3 || v50 == 6 )
        {
LABEL_106:
          v51 = *(_QWORD *)(a1 + 16);
          if ( (v51 & 1) == 0 || *(_BYTE *)(v51 & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
            goto LABEL_110;
        }
      }
      else if ( KeInvalidAccessAllowed(v2, 0) == 1 )
      {
        goto LABEL_106;
      }
    }
    SharedProtos = MiGetSharedProtos(v8, SessionIdForVa, v7);
    v11 = SharedProtos;
    v71 = SharedProtos;
LABEL_109:
    v67 = *(_QWORD *)(SharedProtos + 72);
    goto LABEL_12;
  }
  v13 = 0xFFFF800000000000uLL;
  if ( v65 >= 0xFFFF800000000000uLL && (v9 & 0x20) != 0 )
  {
    SharedProtos = MiGetSubsectionDriverProtos((_QWORD *)v7);
    if ( SharedProtos )
      goto LABEL_109;
  }
LABEL_12:
  if ( (unsigned __int64)a2 >= v67
                             - 8LL * (*(_DWORD *)(v7 + 52) & 0x3FFFFFFF)
                             + 8 * (unsigned __int64)*(unsigned int *)(v7 + 44) )
  {
LABEL_110:
    MiUnlockProtoPoolPage(v79, 0x11u);
    return 3221225477LL;
  }
  v14 = 0;
  v15 = *(_WORD *)(v8 + 60) & 0x3FF;
  v16 = 0;
  v60 = 0;
  v17 = *(ULONG_PTR **)(qword_140C4E648 + 8 * v15);
  v64 = v17;
  v20 = v70;
  if ( (unsigned int)MiControlAreaUsingExtents(v8, v13, v11) )
  {
    if ( v19 )
    {
      v14 = 2;
    }
    else
    {
      v14 = 3;
      v59 = 1;
    }
    v60 = v14;
    v61 = 0;
    if ( v14 > 2 )
      goto LABEL_21;
  }
  else if ( MiControlAreaUsingCopyExtents(v18) )
  {
    v14 = 1;
    v60 = 1;
  }
  v66 = 0LL;
  v16 = MiComputeFaultNode((unsigned __int64 *)a1, v8, (__int64 *)&v66);
  v59 = 0;
  if ( v14 - 1 <= 1 )
  {
    v59 = 1;
  }
  else
  {
    v21 = v62;
    if ( v62 )
    {
      Address = v66;
      if ( !v66 )
      {
        Address = MiLocateAddress(v65);
        v66 = Address;
      }
      v59 = MiComputeFaultCluster((__int64)v17, v21, (__int64)Address, 0);
    }
    else if ( (v20 & 0x400) != 0 && (*(_DWORD *)(v8 + 56) & 0x20) == 0 && (*(_BYTE *)(v73 + 184) & 7) == 0 )
    {
      v43 = v66;
      v44 = v65;
      if ( !v66 )
      {
        v43 = MiLocateAddress(v65);
        v66 = v43;
      }
      v45 = (__int64)v43[15];
      if ( v45 >= 0 )
      {
        v46 = (unsigned __int64)v43[15] & 0xFFF;
        if ( v46 >= 0x11 && (v44 & 0xFFFFFFFFFFFFF000uLL) == (((unsigned __int64)v45 >> 12) - 1 + v46) << 12 )
        {
          v47 = (unsigned __int64)(a2 + 1);
          if ( (((_DWORD)a2 + 8) & 0xFFF) != 0
            && v47 < -8LL * (*(_DWORD *)(v7 + 52) & 0x3FFFFFFF) + v67 + 8 * (unsigned __int64)*(unsigned int *)(v7 + 44)
            && MI_READ_PTE_LOCK_FREE(v47) == v20 )
          {
            v59 = (v45 & 0xFFF) - 1;
          }
        }
      }
    }
  }
LABEL_21:
  v22 = MiAllocateInPageSupport(a2, v61, &v59, (__int64 *)va);
  if ( !v22 )
  {
    result = 3221225626LL;
    goto LABEL_129;
  }
  if ( MI_READ_PTE_LOCK_FREE(a2) == v20 )
  {
    v23 = (v20 >> 10) & 1;
    if ( ((v20 >> 10) & 1) != 0
      || (*(_BYTE *)(v72 + 34) & 0x20) != 0 && (*(_DWORD *)(*(_QWORD *)v72 + 160LL) & 0x20) == 0 )
    {
      if ( v14 == 3 )
      {
        v52 = v79;
        v34 = a2;
        goto LABEL_127;
      }
      if ( v62 && *v62 == 1 )
        MiSetInPagePrefetchPriority((__int64)v62, v22);
      if ( v23 )
        v24 = MI_READ_PTE_LOCK_FREE(&v70);
      else
        v24 = v20;
      v61 = (*(unsigned __int16 *)(v7 + 32) >> 1) & 0x1F;
      v69 = MiSanitizePfnProtection(0LL, v61, (v24 >> 5) & 0x1F);
      MiInitializePageColorBase(v73, v16, (__int64)&v76);
      v26 = v60;
      v27 = -1LL;
      if ( (unsigned int)(v60 - 1) <= 1 )
        goto LABEL_33;
      if ( (*(_DWORD *)(v8 + 56) & 0x40020) == 0x20 && v23 && !dword_140C4ECC0 )
      {
        if ( !v25 )
        {
LABEL_33:
          v28 = v64;
          goto LABEL_34;
        }
        v28 = v64;
        if ( *(_BYTE *)v25 != 1 || MiGetAvailablePagesBelowPriority(v64, ((*(_DWORD *)(v25 + 80) >> 3) & 7u) + 1) )
        {
LABEL_34:
          if ( (unsigned int)MiObtainFaultCharges(v28, 1u, 1) )
          {
            v29 = _InterlockedExchangeAdd((volatile signed __int32 *)v76, 1u);
            v20 = v70;
            v30 = HIDWORD(v76) | v29 & DWORD2(v76);
            if ( v23 && (unsigned int)MiUseSlabAllocator((__int64)v28, (_BYTE *)v7, v70, 0LL) )
              SlabPage = MiGetSlabPage((__int64)v28, v61, 0, v31, (unsigned int)v31);
            else
              SlabPage = MiGetPage((__int64)v28, v30, 0LL);
            v27 = SlabPage;
            if ( SlabPage != -1 )
            {
              v33 = v68;
              if ( v26 == 1 )
              {
                MiCopyImageExtentContents(v22, v7, (_DWORD)a2, v68, SlabPage, v79, v71);
                *v81 = v22;
                return 3221435187LL;
              }
              v34 = a2;
              if ( v26 != 2 )
              {
                v35 = v79;
                v58 = v79;
                *(_QWORD *)(v22 + 224) = v65;
                if ( (unsigned int)MiCopyDataPageToImagePage(v22, (volatile LONG **)v7, a2, v33, SlabPage, v58) != 1 )
                  goto LABEL_42;
LABEL_51:
                *v81 = v22;
                return 3221435187LL;
              }
              v52 = v79;
              v53 = MiCopyFileOnlyGlobalSubsectionPage(v22, v7, (_DWORD)a2, v68, SlabPage, v79, v71);
              v54 = v53;
              if ( v53 >= 0 )
                goto LABEL_51;
              if ( v53 == -1073741739 )
              {
                v54 = 0;
LABEL_125:
                MiUnlockProtoPoolPage(v52, 0x11u);
                MiFreeInPageSupportBlock((PSLIST_ENTRY)v22);
                return v54;
              }
              if ( v53 != -1073740748 )
              {
                if ( v53 == -1073532109 )
                {
                  v54 = -1073741802;
                  *(_DWORD *)(a1 + 80) |= 0x100u;
                }
                goto LABEL_125;
              }
LABEL_127:
              MiUnlockProtoPoolPage(v52, 0x11u);
              v55 = *(_DWORD *)(v22 + 192) & 0xFFFBFFFF;
              *(_DWORD *)(v22 + 312) = 0;
              *(_QWORD *)(v22 + 208) = v7;
              *(_DWORD *)(v22 + 192) = v55 | 1;
              v56 = v81;
              *(_DWORD *)(v22 + 184) = 0;
              *(_QWORD *)(v22 + 168) = v20;
              *(_QWORD *)(v22 + 232) = v34;
              *v56 = v22;
              result = 3221435187LL;
              *(_QWORD *)(v22 + 160) = 0LL;
              *(_QWORD *)(v22 + 256) = 0LL;
              *(_DWORD *)(v22 + 80) = 0;
              return result;
            }
            MiReturnFaultCharges((__int64)v28, 1uLL, 1);
          }
          v34 = a2;
          v35 = v79;
LABEL_42:
          if ( (unsigned int)(v60 - 1) <= 1 )
            goto LABEL_43;
          goto LABEL_46;
        }
      }
      else
      {
        v28 = v64;
      }
      v35 = v79;
      v34 = a2;
LABEL_46:
      v37 = v67;
      *(_DWORD *)(v22 + 184) = v59;
      *(_QWORD *)(v22 + 208) = v7;
      v38 = v62;
      *(_QWORD *)(v22 + 232) = v34;
      v39 = SessionIdForVa;
      v57 = SessionIdForVa;
      *(_QWORD *)(v22 + 160) = v35;
      *(_QWORD *)(v22 + 168) = v20;
      v40 = MiPickClusterForMappedFileFault((_DWORD)v28, v22, (_DWORD)v38, v37, v57, v27, (__int64)&v75, (__int64)&v74);
      v41 = MiBuildMdlForMappedFileFault(v22, v75, v74, (__int64)v28, v40, v27, v69, (__int64)v38, a1, (__int64)&v76);
      v42 = v41;
      if ( v41 != v40 )
        MiReturnFaultCharges((__int64)v28, v40 - v41, 1);
      if ( v42 )
      {
        MiFinishMdlForMappedFileFault(v22, v68, v42, v72, v39);
        *v81 = v22;
        return 3221435187LL;
      }
LABEL_43:
      MiUnlockProtoPoolPage(v35, 0x11u);
      MiFreeInPageSupportBlock((PSLIST_ENTRY)v22);
      return 3221225495LL;
    }
  }
  MiUnlockProtoPoolPage(v79, 0x11u);
  MiFreeInPageSupportBlock((PSLIST_ENTRY)v22);
  result = 3221226548LL;
LABEL_129:
  if ( v62 )
    v62[1] = ((_DWORD)result == -1073741670) + 1;
  return result;
}
