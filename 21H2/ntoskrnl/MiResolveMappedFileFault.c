/*
 * XREFs of MiResolveMappedFileFault @ 0x1403241D0
 * Callers:
 *     MiIssueFlowThroughFault @ 0x14020923C (MiIssueFlowThroughFault.c)
 *     MiResolveProtoPteFault @ 0x1402B9CD0 (MiResolveProtoPteFault.c)
 * Callees:
 *     MiComputeFaultCluster @ 0x14020B0C4 (MiComputeFaultCluster.c)
 *     MiSetInPagePrefetchPriority @ 0x14020B354 (MiSetInPagePrefetchPriority.c)
 *     MiReturnFaultCharges @ 0x14020B384 (MiReturnFaultCharges.c)
 *     KeInvalidAccessAllowed @ 0x140220080 (KeInvalidAccessAllowed.c)
 *     MiGetAvailablePagesBelowPriority @ 0x14025F8BC (MiGetAvailablePagesBelowPriority.c)
 *     MiLocateAddress @ 0x14027CD80 (MiLocateAddress.c)
 *     MiGetSlabPage @ 0x14029938C (MiGetSlabPage.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x1402C0390 (MiObtainFaultCharges.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiBuildMdlForMappedFileFault @ 0x1402E2620 (MiBuildMdlForMappedFileFault.c)
 *     MiComputeFaultNode @ 0x1402E3950 (MiComputeFaultNode.c)
 *     MiInitializePageColorBase @ 0x1402E3AD0 (MiInitializePageColorBase.c)
 *     MiFreeInPageSupportBlock @ 0x14030762C (MiFreeInPageSupportBlock.c)
 *     MiGetSubsectionDriverProtos @ 0x140307B30 (MiGetSubsectionDriverProtos.c)
 *     MiCopyDataPageToImagePage @ 0x14030F138 (MiCopyDataPageToImagePage.c)
 *     MiUseSlabAllocator @ 0x140322EE8 (MiUseSlabAllocator.c)
 *     MiControlAreaUsingCopyExtents @ 0x140322F4C (MiControlAreaUsingCopyExtents.c)
 *     MiAllocateInPageSupport @ 0x1403248F0 (MiAllocateInPageSupport.c)
 *     MiPickClusterForMappedFileFault @ 0x1403249C0 (MiPickClusterForMappedFileFault.c)
 *     MiFinishMdlForMappedFileFault @ 0x1403251BC (MiFinishMdlForMappedFileFault.c)
 *     MiGetSessionIdForVa @ 0x140329200 (MiGetSessionIdForVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiControlAreaUsingExtents @ 0x14033D9A0 (MiControlAreaUsingExtents.c)
 *     MiSanitizePfnProtection @ 0x14033EFE0 (MiSanitizePfnProtection.c)
 *     MiGetSharedProtos @ 0x1403A6358 (MiGetSharedProtos.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053FFB8 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x140540374 (MiCopyImageExtentContents.c)
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
  bool v11; // zf
  unsigned int v12; // r13d
  __int64 v13; // rcx
  int v14; // esi
  ULONG_PTR *v15; // r14
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // rdi
  _QWORD *v19; // r10
  __int64 v20; // r14
  __int64 v21; // r12
  unsigned __int64 v22; // rax
  __int64 v23; // r10
  int v24; // esi
  __int64 v25; // r13
  ULONG_PTR *v26; // r15
  signed __int32 v27; // ecx
  unsigned int v28; // r11d
  __int64 *v29; // r9
  __int64 SlabPage; // rax
  __int64 v31; // r9
  __int64 *v32; // r12
  __int64 v33; // rsi
  __int64 result; // rax
  int v35; // r9d
  _QWORD *v36; // rbx
  unsigned int v37; // r12d
  unsigned int v38; // edi
  int v39; // eax
  int v40; // ebx
  __int64 **v41; // rax
  unsigned __int64 v42; // r10
  __int64 v43; // r14
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rcx
  __int64 SharedProtos; // rax
  __int64 **Address; // rax
  char v48; // cl
  __int64 v49; // rax
  __int64 v50; // r15
  int v51; // eax
  unsigned int v52; // esi
  unsigned int v53; // eax
  __int64 *v54; // rax
  unsigned int v55; // [rsp+20h] [rbp-A9h]
  __int64 v56; // [rsp+28h] [rbp-A1h]
  int v57; // [rsp+50h] [rbp-79h] BYREF
  int v58; // [rsp+54h] [rbp-75h]
  unsigned int v59; // [rsp+58h] [rbp-71h]
  _BYTE *v60; // [rsp+60h] [rbp-69h]
  unsigned int SessionIdForVa; // [rsp+68h] [rbp-61h]
  ULONG_PTR *v62; // [rsp+70h] [rbp-59h]
  unsigned __int64 v63; // [rsp+78h] [rbp-51h]
  __int64 **v64; // [rsp+80h] [rbp-49h] BYREF
  __int64 v65; // [rsp+88h] [rbp-41h]
  __int64 v66; // [rsp+90h] [rbp-39h]
  unsigned int v67; // [rsp+98h] [rbp-31h]
  __int64 v68; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v69; // [rsp+A8h] [rbp-21h]
  __int64 v70; // [rsp+B0h] [rbp-19h]
  __int64 v71; // [rsp+B8h] [rbp-11h]
  unsigned __int64 v72; // [rsp+C0h] [rbp-9h] BYREF
  unsigned __int64 v73; // [rsp+C8h] [rbp-1h] BYREF
  __int128 v74; // [rsp+D0h] [rbp+7h] BYREF
  __int64 v77; // [rsp+140h] [rbp+77h] BYREF
  va_list va; // [rsp+140h] [rbp+77h]
  __int64 *v79; // [rsp+148h] [rbp+7Fh]
  va_list va1; // [rsp+150h] [rbp+87h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v77 = va_arg(va1, _QWORD);
  v79 = va_arg(va1, __int64 *);
  v2 = *(_QWORD *)(a1 + 16);
  v63 = *(_QWORD *)a1;
  v71 = *(_QWORD *)(a1 + 56);
  v73 = 0LL;
  v72 = 0LL;
  v57 = 0;
  v74 = 0LL;
  v66 = v2;
  v5 = MI_READ_PTE_LOCK_FREE(a2);
  v68 = v5;
  v60 = 0LL;
  v59 = 2;
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 4) != 0 )
  {
    MiUnlockProtoPoolPage(v77, 0x11u);
    return 3221225633LL;
  }
  v6 = v2 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v2 & 1) != 0 )
  {
    if ( *(_BYTE *)v6 == 5 )
    {
      if ( (*(_DWORD *)(v6 + 56) & 4) != 0 )
      {
        MiUnlockProtoPoolPage(v77, 0x11u);
        return 3221225495LL;
      }
      v60 = 0LL;
    }
    else if ( (v2 & 1) != 0 )
    {
      if ( *(_BYTE *)v6 == 1 )
      {
        v11 = (*(_DWORD *)(v6 + 80) & 0x100) == 0;
        v60 = (_BYTE *)(v2 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( !v11 )
        {
          MiUnlockProtoPoolPage(v77, 0x11u);
          return 0LL;
        }
        v59 = 0;
      }
      else if ( (v2 & 1) != 0 && *(_BYTE *)v6 == 2 )
      {
        v60 = (_BYTE *)(v2 & 0xFFFFFFFFFFFFFFFEuLL);
      }
    }
  }
  if ( (v5 & 0x400) != 0 )
  {
    if ( qword_140C4DF80 && (v5 & 0x10) == 0 )
      v5 &= ~qword_140C4DF80;
    v70 = 0LL;
  }
  else
  {
    if ( qword_140C4DF80 && (v5 & 0x10) == 0 )
      v5 &= ~qword_140C4DF80;
    v70 = 48 * (((unsigned __int64)v5 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v5 = *(_QWORD *)(v70 + 16);
    if ( qword_140C4DF80 && (v5 & 0x10) == 0 )
      v5 &= ~qword_140C4DF80;
  }
  v7 = v5 >> 16;
  v8 = *(_QWORD *)v7;
  v9 = *(_DWORD *)(*(_QWORD *)v7 + 56LL);
  if ( (v9 & 0x10) != 0 )
  {
    MiUnlockProtoPoolPage(v77, 0x11u);
    return 3221225478LL;
  }
  v10 = *(_QWORD *)(v7 + 8);
  v11 = (*(_BYTE *)(v7 + 34) & 2) == 0;
  SessionIdForVa = -1;
  v69 = 0LL;
  v65 = v10;
  if ( !v11 && (v9 & 0x4000000) != 0 )
  {
    SessionIdForVa = MiGetSessionIdForVa(v63);
    if ( v63 >= 0xFFFF800000000000uLL )
    {
      if ( (v2 & 1) != 0 )
      {
        v48 = *(_BYTE *)v6;
        if ( *(_BYTE *)v6 == 1 || v48 == 3 || v48 == 6 )
        {
LABEL_106:
          v49 = *(_QWORD *)(a1 + 16);
          if ( (v49 & 1) == 0 || *(_BYTE *)(v49 & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
            goto LABEL_110;
        }
      }
      else if ( KeInvalidAccessAllowed(v2, 0) == 1 )
      {
        goto LABEL_106;
      }
    }
    SharedProtos = MiGetSharedProtos(v8, SessionIdForVa, v7);
    v69 = SharedProtos;
LABEL_109:
    v65 = *(_QWORD *)(SharedProtos + 72);
    goto LABEL_12;
  }
  if ( v63 >= 0xFFFF800000000000uLL && (v9 & 0x20) != 0 )
  {
    SharedProtos = MiGetSubsectionDriverProtos((_QWORD *)v7);
    if ( SharedProtos )
      goto LABEL_109;
  }
LABEL_12:
  if ( (unsigned __int64)a2 >= v65
                             - 8LL * (*(_DWORD *)(v7 + 52) & 0x3FFFFFFF)
                             + 8 * (unsigned __int64)*(unsigned int *)(v7 + 44) )
  {
LABEL_110:
    MiUnlockProtoPoolPage(v77, 0x11u);
    return 3221225477LL;
  }
  v12 = 0;
  v13 = *(_WORD *)(v8 + 60) & 0x3FF;
  v14 = 0;
  v58 = 0;
  v15 = *(ULONG_PTR **)(qword_140C4E688 + 8 * v13);
  v62 = v15;
  v18 = v68;
  if ( (unsigned int)MiControlAreaUsingExtents(v8) )
  {
    if ( v17 )
    {
      v12 = 2;
    }
    else
    {
      v12 = 3;
      v57 = 1;
    }
    v58 = v12;
    v59 = 0;
    if ( v12 > 2 )
      goto LABEL_21;
  }
  else if ( MiControlAreaUsingCopyExtents(v16) )
  {
    v12 = 1;
    v58 = 1;
  }
  v64 = 0LL;
  v14 = MiComputeFaultNode((unsigned __int64 *)a1, v8, &v64);
  v57 = 0;
  if ( v12 - 1 <= 1 )
  {
    v57 = 1;
  }
  else
  {
    v19 = v60;
    if ( v60 )
    {
      Address = v64;
      if ( !v64 )
      {
        Address = MiLocateAddress(v63);
        v64 = Address;
      }
      v57 = MiComputeFaultCluster((__int64)v15, v19, (__int64)Address, 0);
    }
    else if ( (v18 & 0x400) != 0 && (*(_DWORD *)(v8 + 56) & 0x20) == 0 && (*(_BYTE *)(v71 + 184) & 7) == 0 )
    {
      v41 = v64;
      v42 = v63;
      if ( !v64 )
      {
        v41 = MiLocateAddress(v63);
        v64 = v41;
      }
      v43 = (__int64)v41[15];
      if ( v43 >= 0 )
      {
        v44 = (unsigned __int64)v41[15] & 0xFFF;
        if ( v44 >= 0x11 && (v42 & 0xFFFFFFFFFFFFF000uLL) == (((unsigned __int64)v43 >> 12) - 1 + v44) << 12 )
        {
          v45 = (unsigned __int64)(a2 + 1);
          if ( (((_DWORD)a2 + 8) & 0xFFF) != 0
            && v45 < -8LL * (*(_DWORD *)(v7 + 52) & 0x3FFFFFFF) + v65 + 8 * (unsigned __int64)*(unsigned int *)(v7 + 44)
            && MI_READ_PTE_LOCK_FREE(v45) == v18 )
          {
            v57 = (v43 & 0xFFF) - 1;
          }
        }
      }
    }
  }
LABEL_21:
  v20 = MiAllocateInPageSupport(a2, v59, &v57, (__int64 *)va);
  if ( !v20 )
  {
    result = 3221225626LL;
    goto LABEL_129;
  }
  if ( MI_READ_PTE_LOCK_FREE(a2) == v18 )
  {
    v21 = (v18 >> 10) & 1;
    if ( ((v18 >> 10) & 1) != 0
      || (*(_BYTE *)(v70 + 34) & 0x20) != 0 && (*(_DWORD *)(*(_QWORD *)v70 + 160LL) & 0x20) == 0 )
    {
      if ( v12 == 3 )
      {
        v50 = v77;
        v32 = a2;
        goto LABEL_127;
      }
      if ( v60 && *v60 == 1 )
        MiSetInPagePrefetchPriority((__int64)v60, v20);
      if ( v21 )
        v22 = MI_READ_PTE_LOCK_FREE(&v68);
      else
        v22 = v18;
      v59 = (*(unsigned __int16 *)(v7 + 32) >> 1) & 0x1F;
      v67 = MiSanitizePfnProtection(0LL, v59, (v22 >> 5) & 0x1F);
      MiInitializePageColorBase(v71, v14, (__int64)&v74);
      v24 = v58;
      v25 = -1LL;
      if ( (unsigned int)(v58 - 1) <= 1 )
        goto LABEL_33;
      if ( (*(_DWORD *)(v8 + 56) & 0x40020) == 0x20 && v21 && !dword_140C4ED00 )
      {
        if ( !v23 )
        {
LABEL_33:
          v26 = v62;
          goto LABEL_34;
        }
        v26 = v62;
        if ( *(_BYTE *)v23 != 1 || MiGetAvailablePagesBelowPriority(v62, ((*(_DWORD *)(v23 + 80) >> 3) & 7u) + 1) )
        {
LABEL_34:
          if ( (unsigned int)MiObtainFaultCharges(v26, 1u, 1) )
          {
            v27 = _InterlockedExchangeAdd((volatile signed __int32 *)v74, 1u);
            v18 = v68;
            v28 = HIDWORD(v74) | v27 & DWORD2(v74);
            if ( v21 && (unsigned int)MiUseSlabAllocator((__int64)v26, (_BYTE *)v7, v68, 0LL) )
              SlabPage = MiGetSlabPage((__int64)v26, v59, 0, v29, (unsigned int)v29);
            else
              SlabPage = MiGetPage((__int64)v26, v28, 0LL);
            v25 = SlabPage;
            if ( SlabPage != -1 )
            {
              v31 = v66;
              if ( v24 == 1 )
              {
                MiCopyImageExtentContents(v20, v7, (_DWORD)a2, v66, SlabPage, v77, v69);
                *v79 = v20;
                return 3221435187LL;
              }
              v32 = a2;
              if ( v24 != 2 )
              {
                v33 = v77;
                v56 = v77;
                *(_QWORD *)(v20 + 224) = v63;
                if ( (unsigned int)MiCopyDataPageToImagePage(v20, (volatile LONG **)v7, a2, v31, SlabPage, v56) != 1 )
                  goto LABEL_42;
LABEL_51:
                *v79 = v20;
                return 3221435187LL;
              }
              v50 = v77;
              v51 = MiCopyFileOnlyGlobalSubsectionPage(v20, v7, (_DWORD)a2, v66, SlabPage, v77, v69);
              v52 = v51;
              if ( v51 >= 0 )
                goto LABEL_51;
              if ( v51 == -1073741739 )
              {
                v52 = 0;
LABEL_125:
                MiUnlockProtoPoolPage(v50, 0x11u);
                MiFreeInPageSupportBlock((PSLIST_ENTRY)v20);
                return v52;
              }
              if ( v51 != -1073740748 )
              {
                if ( v51 == -1073532109 )
                {
                  v52 = -1073741802;
                  *(_DWORD *)(a1 + 80) |= 0x100u;
                }
                goto LABEL_125;
              }
LABEL_127:
              MiUnlockProtoPoolPage(v50, 0x11u);
              v53 = *(_DWORD *)(v20 + 192) & 0xFFFBFFFF;
              *(_DWORD *)(v20 + 312) = 0;
              *(_QWORD *)(v20 + 208) = v7;
              *(_DWORD *)(v20 + 192) = v53 | 1;
              v54 = v79;
              *(_DWORD *)(v20 + 184) = 0;
              *(_QWORD *)(v20 + 168) = v18;
              *(_QWORD *)(v20 + 232) = v32;
              *v54 = v20;
              result = 3221435187LL;
              *(_QWORD *)(v20 + 160) = 0LL;
              *(_QWORD *)(v20 + 256) = 0LL;
              *(_DWORD *)(v20 + 80) = 0;
              return result;
            }
            MiReturnFaultCharges((__int64)v26, 1uLL, 1LL);
          }
          v32 = a2;
          v33 = v77;
LABEL_42:
          if ( (unsigned int)(v58 - 1) <= 1 )
            goto LABEL_43;
          goto LABEL_46;
        }
      }
      else
      {
        v26 = v62;
      }
      v33 = v77;
      v32 = a2;
LABEL_46:
      v35 = v65;
      *(_DWORD *)(v20 + 184) = v57;
      *(_QWORD *)(v20 + 208) = v7;
      v36 = v60;
      *(_QWORD *)(v20 + 232) = v32;
      v37 = SessionIdForVa;
      v55 = SessionIdForVa;
      *(_QWORD *)(v20 + 160) = v33;
      *(_QWORD *)(v20 + 168) = v18;
      v38 = MiPickClusterForMappedFileFault((_DWORD)v26, v20, (_DWORD)v36, v35, v55, v25, (__int64)&v73, (__int64)&v72);
      v39 = MiBuildMdlForMappedFileFault(v20, v73, v72, v26, v38, v25, v67, v36, (_QWORD *)a1, (__int64)&v74);
      v40 = v39;
      if ( v39 != v38 )
        MiReturnFaultCharges((__int64)v26, v38 - v39, 1LL);
      if ( v40 )
      {
        MiFinishMdlForMappedFileFault(v20, v66, v40, v70, v37);
        *v79 = v20;
        return 3221435187LL;
      }
LABEL_43:
      MiUnlockProtoPoolPage(v33, 0x11u);
      MiFreeInPageSupportBlock((PSLIST_ENTRY)v20);
      return 3221225495LL;
    }
  }
  MiUnlockProtoPoolPage(v77, 0x11u);
  MiFreeInPageSupportBlock((PSLIST_ENTRY)v20);
  result = 3221226548LL;
LABEL_129:
  if ( v60 )
    v60[1] = ((_DWORD)result == -1073741670) + 1;
  return result;
}
