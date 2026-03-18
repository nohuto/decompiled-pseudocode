/*
 * XREFs of MiResolveMappedFileFault @ 0x1402B7380
 * Callers:
 *     MiResolveProtoPteFault @ 0x140214D60 (MiResolveProtoPteFault.c)
 *     MiIssueFlowThroughFault @ 0x140341920 (MiIssueFlowThroughFault.c)
 * Callees:
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x14021B070 (MiObtainFaultCharges.c)
 *     MiSanitizePfnProtection @ 0x14021C790 (MiSanitizePfnProtection.c)
 *     MiBuildMdlForMappedFileFault @ 0x1402272A0 (MiBuildMdlForMappedFileFault.c)
 *     MiUseSlabAllocator @ 0x14027AFD8 (MiUseSlabAllocator.c)
 *     MiControlAreaUsingCopyExtents @ 0x14027B03C (MiControlAreaUsingCopyExtents.c)
 *     MiControlAreaUsingExtents @ 0x14027D210 (MiControlAreaUsingExtents.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1402803A4 (MiGetAvailablePagesBelowPriority.c)
 *     MiFreeInPageSupportBlock @ 0x140282584 (MiFreeInPageSupportBlock.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLocateAddress @ 0x1402A4B60 (MiLocateAddress.c)
 *     MiGetSessionIdForVa @ 0x1402B6250 (MiGetSessionIdForVa.c)
 *     MiInitializePageColorBase @ 0x1402B7AA0 (MiInitializePageColorBase.c)
 *     MiAllocateInPageSupport @ 0x1402B7B20 (MiAllocateInPageSupport.c)
 *     MiComputeFaultNode @ 0x1402B7BF0 (MiComputeFaultNode.c)
 *     MiPickClusterForMappedFileFault @ 0x1402B7D6C (MiPickClusterForMappedFileFault.c)
 *     MiFinishMdlForMappedFileFault @ 0x1402B807C (MiFinishMdlForMappedFileFault.c)
 *     MiCopyDataPageToImagePage @ 0x1402B988C (MiCopyDataPageToImagePage.c)
 *     MiGetSubsectionDriverProtos @ 0x1402BCD40 (MiGetSubsectionDriverProtos.c)
 *     KeInvalidAccessAllowed @ 0x1402F6560 (KeInvalidAccessAllowed.c)
 *     MiGetSlabPage @ 0x140326128 (MiGetSlabPage.c)
 *     MiReturnFaultCharges @ 0x140340698 (MiReturnFaultCharges.c)
 *     MiSetInPagePrefetchPriority @ 0x14034074C (MiSetInPagePrefetchPriority.c)
 *     MiComputeFaultCluster @ 0x1403409B8 (MiComputeFaultCluster.c)
 *     MiGetSharedProtos @ 0x1403A2DE8 (MiGetSharedProtos.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053A258 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x14053A614 (MiCopyImageExtentContents.c)
 */

__int64 MiResolveMappedFileFault(__int64 a1, unsigned __int64 a2, ...)
{
  __int64 v2; // r14
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // r15
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // r8
  bool v15; // zf
  __int64 v16; // rdx
  unsigned int v17; // r13d
  __int64 v18; // rcx
  unsigned int v19; // esi
  ULONG_PTR *v20; // r14
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned __int64 v23; // rdi
  _BYTE *v24; // r10
  __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r12
  unsigned __int64 v30; // rax
  __int64 v31; // r10
  int v32; // esi
  __int64 v33; // r13
  ULONG_PTR *v34; // r15
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  signed __int32 v38; // ecx
  unsigned int v39; // r11d
  int v40; // r9d
  __int64 SlabPage; // rax
  int v42; // r9d
  unsigned __int64 v43; // r12
  __int64 v44; // rsi
  __int64 result; // rax
  int v46; // r9d
  __int64 v47; // rbx
  unsigned int v48; // r12d
  unsigned int v49; // edi
  int v50; // eax
  int v51; // ebx
  __int64 **v52; // rax
  unsigned __int64 v53; // r10
  __int64 v54; // r14
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // rcx
  __int64 SharedProtos; // rax
  __int64 **Address; // rax
  unsigned int SessionIdForVa; // eax
  char v60; // cl
  __int64 v61; // rax
  __int64 v62; // r15
  int v63; // eax
  unsigned int v64; // esi
  unsigned int v65; // eax
  __int64 *v66; // rax
  unsigned int v67; // [rsp+20h] [rbp-A9h]
  __int64 v68; // [rsp+28h] [rbp-A1h]
  int v69; // [rsp+50h] [rbp-79h] BYREF
  int v70; // [rsp+54h] [rbp-75h]
  unsigned int v71; // [rsp+58h] [rbp-71h]
  _BYTE *v72; // [rsp+60h] [rbp-69h]
  unsigned int v73; // [rsp+68h] [rbp-61h]
  ULONG_PTR *v74; // [rsp+70h] [rbp-59h]
  unsigned __int64 v75; // [rsp+78h] [rbp-51h]
  __int64 **v76; // [rsp+80h] [rbp-49h] BYREF
  __int64 v77; // [rsp+88h] [rbp-41h]
  __int64 v78; // [rsp+90h] [rbp-39h]
  unsigned int v79; // [rsp+98h] [rbp-31h]
  __int64 v80; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v81; // [rsp+A8h] [rbp-21h]
  __int64 v82; // [rsp+B0h] [rbp-19h]
  __int64 v83; // [rsp+B8h] [rbp-11h]
  unsigned __int64 v84; // [rsp+C0h] [rbp-9h] BYREF
  __int64 *v85; // [rsp+C8h] [rbp-1h] BYREF
  __int128 v86; // [rsp+D0h] [rbp+7h] BYREF
  __int64 v89; // [rsp+140h] [rbp+77h] BYREF
  va_list va; // [rsp+140h] [rbp+77h]
  __int64 *v91; // [rsp+148h] [rbp+7Fh]
  va_list va1; // [rsp+150h] [rbp+87h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v89 = va_arg(va1, _QWORD);
  v91 = va_arg(va1, __int64 *);
  v2 = *(_QWORD *)(a1 + 16);
  v75 = *(_QWORD *)a1;
  v83 = *(_QWORD *)(a1 + 56);
  v85 = 0LL;
  v84 = 0LL;
  v69 = 0;
  v86 = 0LL;
  v78 = v2;
  v6 = MI_READ_PTE_LOCK_FREE(a2);
  v80 = v6;
  v72 = 0LL;
  v71 = 2;
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 4) != 0 )
  {
    LOBYTE(v5) = 17;
    MiUnlockProtoPoolPage(v89, v5, v7, v8);
    return 3221225633LL;
  }
  v9 = v2 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v2 & 1) != 0 )
  {
    if ( *(_BYTE *)v9 == 5 )
    {
      if ( (*(_DWORD *)(v9 + 56) & 4) != 0 )
      {
        LOBYTE(v5) = 17;
        MiUnlockProtoPoolPage(v89, v5, v7, v8);
        return 3221225495LL;
      }
      v72 = 0LL;
    }
    else if ( (v2 & 1) != 0 )
    {
      if ( *(_BYTE *)v9 == 1 )
      {
        v15 = (*(_DWORD *)(v9 + 80) & 0x100) == 0;
        v72 = (_BYTE *)(v2 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( !v15 )
        {
          LOBYTE(v5) = 17;
          MiUnlockProtoPoolPage(v89, v5, v7, v8);
          return 0LL;
        }
        v71 = 0;
      }
      else if ( (v2 & 1) != 0 && *(_BYTE *)v9 == 2 )
      {
        v72 = (_BYTE *)(v2 & 0xFFFFFFFFFFFFFFFEuLL);
      }
    }
  }
  if ( (v6 & 0x400) != 0 )
  {
    if ( qword_140C4DE80 && (v6 & 0x10) == 0 )
      v6 &= ~qword_140C4DE80;
    v82 = 0LL;
  }
  else
  {
    if ( qword_140C4DE80 && (v6 & 0x10) == 0 )
      v6 &= ~qword_140C4DE80;
    v5 = 0xFFFFFA8000000000uLL;
    v82 = 48 * (((unsigned __int64)v6 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v6 = *(_QWORD *)(v82 + 16);
    if ( qword_140C4DE80 && (v6 & 0x10) == 0 )
      v6 &= ~qword_140C4DE80;
  }
  v10 = v6 >> 16;
  v11 = *(_QWORD *)v10;
  v12 = *(_DWORD *)(*(_QWORD *)v10 + 56LL);
  if ( (v12 & 0x10) != 0 )
  {
    LOBYTE(v5) = 17;
    MiUnlockProtoPoolPage(v89, v5, v7, v8);
    return 3221225478LL;
  }
  v13 = *(_QWORD *)(v10 + 8);
  v14 = 0LL;
  v15 = (*(_BYTE *)(v10 + 34) & 2) == 0;
  v73 = -1;
  v81 = 0LL;
  v77 = v13;
  if ( !v15 && (v12 & 0x4000000) != 0 )
  {
    SessionIdForVa = MiGetSessionIdForVa(v75);
    v16 = 0xFFFF800000000000uLL;
    v73 = SessionIdForVa;
    if ( v75 >= 0xFFFF800000000000uLL )
    {
      if ( (v2 & 1) != 0 )
      {
        v60 = *(_BYTE *)v9;
        if ( *(_BYTE *)v9 == 1 || v60 == 3 || v60 == 6 )
        {
LABEL_106:
          v61 = *(_QWORD *)(a1 + 16);
          if ( (v61 & 1) == 0 || *(_BYTE *)(v61 & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
            goto LABEL_110;
        }
      }
      else if ( (unsigned __int8)KeInvalidAccessAllowed(v2, 0LL) == 1 )
      {
        goto LABEL_106;
      }
    }
    SharedProtos = MiGetSharedProtos(v11, v73, v10);
    v14 = SharedProtos;
    v81 = SharedProtos;
LABEL_109:
    v77 = *(_QWORD *)(SharedProtos + 72);
    goto LABEL_12;
  }
  v16 = 0xFFFF800000000000uLL;
  if ( v75 >= 0xFFFF800000000000uLL && (v12 & 0x20) != 0 )
  {
    SharedProtos = MiGetSubsectionDriverProtos(v10, 0xFFFF800000000000uLL, 0LL, v8);
    if ( SharedProtos )
      goto LABEL_109;
  }
LABEL_12:
  if ( a2 >= v77 - 8LL * (*(_DWORD *)(v10 + 52) & 0x3FFFFFFF) + 8 * (unsigned __int64)*(unsigned int *)(v10 + 44) )
  {
LABEL_110:
    LOBYTE(v16) = 17;
    MiUnlockProtoPoolPage(v89, v16, v14, v8);
    return 3221225477LL;
  }
  v17 = 0;
  v18 = *(_WORD *)(v11 + 60) & 0x3FF;
  v19 = 0;
  v70 = 0;
  v20 = *(ULONG_PTR **)(qword_140C4E588 + 8 * v18);
  v74 = v20;
  v23 = v80;
  if ( MiControlAreaUsingExtents(v11) )
  {
    if ( v22 )
    {
      v17 = 2;
    }
    else
    {
      v17 = 3;
      v69 = 1;
    }
    v70 = v17;
    v71 = 0;
    if ( v17 > 2 )
      goto LABEL_21;
  }
  else if ( MiControlAreaUsingCopyExtents(v21) )
  {
    v17 = 1;
    v70 = 1;
  }
  v76 = 0LL;
  v19 = MiComputeFaultNode(a1, v11, &v76);
  v69 = 0;
  if ( v17 - 1 <= 1 )
  {
    v69 = 1;
  }
  else
  {
    v24 = v72;
    if ( v72 )
    {
      Address = v76;
      if ( !v76 )
      {
        Address = MiLocateAddress(v75);
        v76 = Address;
      }
      v69 = MiComputeFaultCluster(v20, v24, Address, 0LL);
    }
    else if ( (v23 & 0x400) != 0 && (*(_DWORD *)(v11 + 56) & 0x20) == 0 && (*(_BYTE *)(v83 + 184) & 7) == 0 )
    {
      v52 = v76;
      v53 = v75;
      if ( !v76 )
      {
        v52 = MiLocateAddress(v75);
        v76 = v52;
      }
      v54 = (__int64)v52[15];
      if ( v54 >= 0 )
      {
        v55 = (unsigned __int64)v52[15] & 0xFFF;
        if ( v55 >= 0x11 && (v53 & 0xFFFFFFFFFFFFF000uLL) == (((unsigned __int64)v54 >> 12) - 1 + v55) << 12 )
        {
          v56 = a2 + 8;
          if ( (((_DWORD)a2 + 8) & 0xFFF) != 0
            && v56 < -8LL * (*(_DWORD *)(v10 + 52) & 0x3FFFFFFF)
                   + v77
                   + 8 * (unsigned __int64)*(unsigned int *)(v10 + 44)
            && MI_READ_PTE_LOCK_FREE(v56) == v23 )
          {
            v69 = (v54 & 0xFFF) - 1;
          }
        }
      }
    }
  }
LABEL_21:
  v25 = MiAllocateInPageSupport(a2, v71, &v69, (__int64 *)va);
  if ( !v25 )
  {
    result = 3221225626LL;
    goto LABEL_129;
  }
  if ( MI_READ_PTE_LOCK_FREE(a2) == v23 )
  {
    v29 = (v23 >> 10) & 1;
    if ( ((v23 >> 10) & 1) != 0
      || (*(_BYTE *)(v82 + 34) & 0x20) != 0 && (*(_DWORD *)(*(_QWORD *)v82 + 160LL) & 0x20) == 0 )
    {
      if ( v17 == 3 )
      {
        v62 = v89;
        v43 = a2;
        goto LABEL_127;
      }
      if ( v72 && *v72 == 1 )
        MiSetInPagePrefetchPriority(v72, v25);
      if ( v29 )
        v30 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v80);
      else
        v30 = v23;
      v71 = (*(unsigned __int16 *)(v10 + 32) >> 1) & 0x1F;
      v79 = MiSanitizePfnProtection(0LL, v71, (v30 >> 5) & 0x1F);
      MiInitializePageColorBase(v83, v19, &v86);
      v32 = v70;
      v33 = -1LL;
      if ( (unsigned int)(v70 - 1) <= 1 )
        goto LABEL_33;
      if ( (*(_DWORD *)(v11 + 56) & 0x40020) == 0x20 && v29 && !dword_140C4EC00 )
      {
        if ( !v31 )
        {
LABEL_33:
          v34 = v74;
          goto LABEL_34;
        }
        v34 = v74;
        if ( *(_BYTE *)v31 != 1 || MiGetAvailablePagesBelowPriority(v74, ((*(_DWORD *)(v31 + 80) >> 3) & 7u) + 1) )
        {
LABEL_34:
          if ( (unsigned int)MiObtainFaultCharges(v34, 1u, 1) )
          {
            v38 = _InterlockedExchangeAdd((volatile signed __int32 *)v86, 1u);
            v23 = v80;
            v39 = HIDWORD(v86) | v38 & DWORD2(v86);
            if ( v29 && (unsigned int)MiUseSlabAllocator((__int64)v34, (_BYTE *)v10, v80, 0LL) )
              SlabPage = MiGetSlabPage((_DWORD)v34, v71, 0, v40, v40);
            else
              SlabPage = MiGetPage((__int64)v34, v39, 0LL);
            v33 = SlabPage;
            if ( SlabPage != -1 )
            {
              v42 = v78;
              if ( v32 == 1 )
              {
                MiCopyImageExtentContents(v25, v10, a2, v78, SlabPage, v89, v81);
                *v91 = v25;
                return 3221435187LL;
              }
              v43 = a2;
              if ( v32 != 2 )
              {
                v44 = v89;
                v68 = v89;
                *(_QWORD *)(v25 + 224) = v75;
                if ( (unsigned int)MiCopyDataPageToImagePage(v25, v10, a2, v42, SlabPage, v68) != 1 )
                  goto LABEL_42;
LABEL_51:
                *v91 = v25;
                return 3221435187LL;
              }
              v62 = v89;
              v63 = MiCopyFileOnlyGlobalSubsectionPage(v25, v10, a2, v78, SlabPage, v89, v81);
              v64 = v63;
              if ( v63 >= 0 )
                goto LABEL_51;
              if ( v63 == -1073741739 )
              {
                v64 = 0;
LABEL_125:
                LOBYTE(v26) = 17;
                MiUnlockProtoPoolPage(v62, v26, v27, v28);
                MiFreeInPageSupportBlock((PSLIST_ENTRY)v25);
                return v64;
              }
              if ( v63 != -1073740748 )
              {
                if ( v63 == -1073532109 )
                {
                  v64 = -1073741802;
                  *(_DWORD *)(a1 + 80) |= 0x100u;
                }
                goto LABEL_125;
              }
LABEL_127:
              LOBYTE(v26) = 17;
              MiUnlockProtoPoolPage(v62, v26, v27, v28);
              v65 = *(_DWORD *)(v25 + 192) & 0xFFFBFFFF;
              *(_DWORD *)(v25 + 312) = 0;
              *(_QWORD *)(v25 + 208) = v10;
              *(_DWORD *)(v25 + 192) = v65 | 1;
              v66 = v91;
              *(_DWORD *)(v25 + 184) = 0;
              *(_QWORD *)(v25 + 168) = v23;
              *(_QWORD *)(v25 + 232) = v43;
              *v66 = v25;
              result = 3221435187LL;
              *(_QWORD *)(v25 + 160) = 0LL;
              *(_QWORD *)(v25 + 256) = 0LL;
              *(_DWORD *)(v25 + 80) = 0;
              return result;
            }
            MiReturnFaultCharges(v34, 1LL, 1LL);
          }
          v43 = a2;
          v44 = v89;
LABEL_42:
          if ( (unsigned int)(v70 - 1) <= 1 )
            goto LABEL_43;
          goto LABEL_46;
        }
      }
      else
      {
        v34 = v74;
      }
      v44 = v89;
      v43 = a2;
LABEL_46:
      v46 = v77;
      *(_DWORD *)(v25 + 184) = v69;
      *(_QWORD *)(v25 + 208) = v10;
      v47 = (__int64)v72;
      *(_QWORD *)(v25 + 232) = v43;
      v48 = v73;
      v67 = v73;
      *(_QWORD *)(v25 + 160) = v44;
      *(_QWORD *)(v25 + 168) = v23;
      v49 = MiPickClusterForMappedFileFault((_DWORD)v34, v25, v47, v46, v67, v33, (__int64)&v85, (__int64)&v84);
      v50 = MiBuildMdlForMappedFileFault(v25, v85, v84, (int)v34, v49, v33, v79, v47, a1, (__int64 *)&v86);
      v51 = v50;
      if ( v50 != v49 )
        MiReturnFaultCharges(v34, v49 - v50, 1LL);
      if ( v51 )
      {
        MiFinishMdlForMappedFileFault(v25, v78, v51, v82, v48);
        *v91 = v25;
        return 3221435187LL;
      }
LABEL_43:
      LOBYTE(v35) = 17;
      MiUnlockProtoPoolPage(v44, v35, v36, v37);
      MiFreeInPageSupportBlock((PSLIST_ENTRY)v25);
      return 3221225495LL;
    }
  }
  LOBYTE(v26) = 17;
  MiUnlockProtoPoolPage(v89, v26, v27, v28);
  MiFreeInPageSupportBlock((PSLIST_ENTRY)v25);
  result = 3221226548LL;
LABEL_129:
  if ( v72 )
    v72[1] = ((_DWORD)result == -1073741670) + 1;
  return result;
}
